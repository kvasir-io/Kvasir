#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GMAC_ncr{
        using Addr = Register::Address<0xf0028000,0xfff82000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INCSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WESTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> THALT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXZQPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SRTSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ENPBPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXPBPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FNP; 
    }
    namespace GMAC_ncfgr{
        using Addr = Register::Address<0xf0028004,0x88000200>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DNVLAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JFRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NBC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MTIHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UNIHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MAXFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> RXBUFO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LFERD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RFCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DCPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RXCOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EFRHD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> IRXFCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> IPGSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RXBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IRXER; 
    }
    namespace GMAC_nsr{
        using Addr = Register::Address<0xf0028008,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MDIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDLE; 
    }
    namespace GMAC_ur{
        using Addr = Register::Address<0xf002800c,0xffffff3e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RGMII; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HDFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPDG; 
    }
    namespace GMAC_dcfgr{
        using Addr = Register::Address<0xf0028010,0xfe00f020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> FBLDO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ESMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ESPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> RXBMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXPBMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXCOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DDRP; 
    }
    namespace GMAC_tsr{
        using Addr = Register::Address<0xf0028014,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXGO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HRESP; 
    }
    namespace GMAC_rbqb{
        using Addr = Register::Address<0xf0028018,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> ADDR; 
    }
    namespace GMAC_tbqb{
        using Addr = Register::Address<0xf002801c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> ADDR; 
    }
    namespace GMAC_rsr{
        using Addr = Register::Address<0xf0028020,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BNA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HNO; 
    }
    namespace GMAC_isr{
        using Addr = Register::Address<0xf0028024,0xe8030300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PFNZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PTZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PFTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DRQFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DRQFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PDRQFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PDRSFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PDRQFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PDRSFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> WOL; 
    }
    namespace GMAC_ier{
        using Addr = Register::Address<0xf0028028,0xe8030300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PFNZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PTZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PFTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DRQFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DRQFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PDRQFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PDRSFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PDRQFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PDRSFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> WOL; 
    }
    namespace GMAC_idr{
        using Addr = Register::Address<0xf002802c,0xe8030300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PFNZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PTZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PFTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DRQFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DRQFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PDRQFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PDRSFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PDRQFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PDRSFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> WOL; 
    }
    namespace GMAC_imr{
        using Addr = Register::Address<0xf0028030,0xfc030300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PFNZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PTZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PFTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DRQFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DRQFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PDRQFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PDRSFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PDRQFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PDRSFT; 
    }
    namespace GMAC_man{
        using Addr = Register::Address<0xf0028034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> WTN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18)> REGA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,23)> PHYA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> OP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CLTTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> WZO; 
    }
    namespace GMAC_rpq{
        using Addr = Register::Address<0xf0028038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RPQ; 
    }
    namespace GMAC_tpq{
        using Addr = Register::Address<0xf002803c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TPQ; 
    }
    namespace GMAC_tpsf{
        using Addr = Register::Address<0xf0028040,0x7ffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TPB1ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ENTXP; 
    }
    namespace GMAC_rpsf{
        using Addr = Register::Address<0xf0028044,0x7ffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> RPB1ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ENRXP; 
    }
    namespace GMAC_hrb{
        using Addr = Register::Address<0xf0028080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace GMAC_hrt{
        using Addr = Register::Address<0xf0028084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace GMAC_sab1{
        using Addr = Register::Address<0xf0028088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace GMAC_sat1{
        using Addr = Register::Address<0xf002808c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace GMAC_sab2{
        using Addr = Register::Address<0xf0028090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace GMAC_sat2{
        using Addr = Register::Address<0xf0028094,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace GMAC_sab3{
        using Addr = Register::Address<0xf0028098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace GMAC_sat3{
        using Addr = Register::Address<0xf002809c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace GMAC_sab4{
        using Addr = Register::Address<0xf00280a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace GMAC_sat4{
        using Addr = Register::Address<0xf00280a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace GMAC_tidm0{
        using Addr = Register::Address<0xf00280a8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TID; 
    }
    namespace GMAC_tidm1{
        using Addr = Register::Address<0xf00280ac,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TID; 
    }
    namespace GMAC_tidm2{
        using Addr = Register::Address<0xf00280b0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TID; 
    }
    namespace GMAC_tidm3{
        using Addr = Register::Address<0xf00280b4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TID; 
    }
    namespace GMAC_wol{
        using Addr = Register::Address<0xf00280b8,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ARP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MTI; 
    }
    namespace GMAC_ipgs{
        using Addr = Register::Address<0xf00280bc,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FL; 
    }
    namespace GMAC_svlan{
        using Addr = Register::Address<0xf00280c0,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VLAN_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ESVLAN; 
    }
    namespace GMAC_tpfcp{
        using Addr = Register::Address<0xf00280c4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PQ; 
    }
    namespace GMAC_samb1{
        using Addr = Register::Address<0xf00280c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace GMAC_samt1{
        using Addr = Register::Address<0xf00280cc,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace GMAC_otlo{
        using Addr = Register::Address<0xf0028100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXO; 
    }
    namespace GMAC_othi{
        using Addr = Register::Address<0xf0028104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXO; 
    }
    namespace GMAC_ft{
        using Addr = Register::Address<0xf0028108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FTX; 
    }
    namespace GMAC_bcft{
        using Addr = Register::Address<0xf002810c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BFTX; 
    }
    namespace GMAC_mft{
        using Addr = Register::Address<0xf0028110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MFTX; 
    }
    namespace GMAC_pft{
        using Addr = Register::Address<0xf0028114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PFTX; 
    }
    namespace GMAC_bft64{
        using Addr = Register::Address<0xf0028118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFTX; 
    }
    namespace GMAC_tbft127{
        using Addr = Register::Address<0xf002811c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFTX; 
    }
    namespace GMAC_tbft255{
        using Addr = Register::Address<0xf0028120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFTX; 
    }
    namespace GMAC_tbft511{
        using Addr = Register::Address<0xf0028124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFTX; 
    }
    namespace GMAC_tbft1023{
        using Addr = Register::Address<0xf0028128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFTX; 
    }
    namespace GMAC_tbft1518{
        using Addr = Register::Address<0xf002812c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFTX; 
    }
    namespace GMAC_gtbft1518{
        using Addr = Register::Address<0xf0028130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFTX; 
    }
    namespace GMAC_tur{
        using Addr = Register::Address<0xf0028134,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TXUNR; 
    }
    namespace GMAC_scf{
        using Addr = Register::Address<0xf0028138,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> SCOL; 
    }
    namespace GMAC_mcf{
        using Addr = Register::Address<0xf002813c,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> MCOL; 
    }
    namespace GMAC_ec{
        using Addr = Register::Address<0xf0028140,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> XCOL; 
    }
    namespace GMAC_lc{
        using Addr = Register::Address<0xf0028144,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> LCOL; 
    }
    namespace GMAC_dtf{
        using Addr = Register::Address<0xf0028148,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> DEFT; 
    }
    namespace GMAC_cse{
        using Addr = Register::Address<0xf002814c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CSR; 
    }
    namespace GMAC_orlo{
        using Addr = Register::Address<0xf0028150,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXO; 
    }
    namespace GMAC_orhi{
        using Addr = Register::Address<0xf0028154,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXO; 
    }
    namespace GMAC_fr{
        using Addr = Register::Address<0xf0028158,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FRX; 
    }
    namespace GMAC_bcfr{
        using Addr = Register::Address<0xf002815c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BFRX; 
    }
    namespace GMAC_mfr{
        using Addr = Register::Address<0xf0028160,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MFRX; 
    }
    namespace GMAC_pfr{
        using Addr = Register::Address<0xf0028164,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PFRX; 
    }
    namespace GMAC_bfr64{
        using Addr = Register::Address<0xf0028168,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFRX; 
    }
    namespace GMAC_tbfr127{
        using Addr = Register::Address<0xf002816c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFRX; 
    }
    namespace GMAC_tbfr255{
        using Addr = Register::Address<0xf0028170,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFRX; 
    }
    namespace GMAC_tbfr511{
        using Addr = Register::Address<0xf0028174,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFRX; 
    }
    namespace GMAC_tbfr1023{
        using Addr = Register::Address<0xf0028178,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFRX; 
    }
    namespace GMAC_tbfr1518{
        using Addr = Register::Address<0xf002817c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFRX; 
    }
    namespace GMAC_tmxbfr{
        using Addr = Register::Address<0xf0028180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NFRX; 
    }
    namespace GMAC_ufr{
        using Addr = Register::Address<0xf0028184,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> UFRX; 
    }
    namespace GMAC_ofr{
        using Addr = Register::Address<0xf0028188,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> OFRX; 
    }
    namespace GMAC_jr{
        using Addr = Register::Address<0xf002818c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> JRX; 
    }
    namespace GMAC_fcse{
        using Addr = Register::Address<0xf0028190,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> FCKR; 
    }
    namespace GMAC_lffe{
        using Addr = Register::Address<0xf0028194,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> LFER; 
    }
    namespace GMAC_rse{
        using Addr = Register::Address<0xf0028198,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> RXSE; 
    }
    namespace GMAC_ae{
        using Addr = Register::Address<0xf002819c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> AER; 
    }
    namespace GMAC_rre{
        using Addr = Register::Address<0xf00281a0,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> RXRER; 
    }
    namespace GMAC_roe{
        using Addr = Register::Address<0xf00281a4,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> RXOVR; 
    }
    namespace GMAC_ihce{
        using Addr = Register::Address<0xf00281a8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> HCKER; 
    }
    namespace GMAC_tce{
        using Addr = Register::Address<0xf00281ac,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TCKER; 
    }
    namespace GMAC_uce{
        using Addr = Register::Address<0xf00281b0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> UCKER; 
    }
    namespace GMAC_tsss{
        using Addr = Register::Address<0xf00281c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VTS; 
    }
    namespace GMAC_tssn{
        using Addr = Register::Address<0xf00281cc,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> VTN; 
    }
    namespace GMAC_ts{
        using Addr = Register::Address<0xf00281d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TCS; 
    }
    namespace GMAC_tn{
        using Addr = Register::Address<0xf00281d4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> TNS; 
    }
    namespace GMAC_ta{
        using Addr = Register::Address<0xf00281d8,0x40000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> ITDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADJ; 
    }
    namespace GMAC_ti{
        using Addr = Register::Address<0xf00281dc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ACNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> NIT; 
    }
    namespace GMAC_efts{
        using Addr = Register::Address<0xf00281e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RUD; 
    }
    namespace GMAC_eftn{
        using Addr = Register::Address<0xf00281e4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> RUD; 
    }
    namespace GMAC_efrs{
        using Addr = Register::Address<0xf00281e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RUD; 
    }
    namespace GMAC_efrn{
        using Addr = Register::Address<0xf00281ec,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> RUD; 
    }
    namespace GMAC_pefts{
        using Addr = Register::Address<0xf00281f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RUD; 
    }
    namespace GMAC_peftn{
        using Addr = Register::Address<0xf00281f4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> RUD; 
    }
    namespace GMAC_pefrs{
        using Addr = Register::Address<0xf00281f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RUD; 
    }
    namespace GMAC_pefrn{
        using Addr = Register::Address<0xf00281fc,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> RUD; 
    }
    namespace GMAC_isrpq0{
        using Addr = Register::Address<0xf0028400,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_isrpq1{
        using Addr = Register::Address<0xf0028404,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_isrpq2{
        using Addr = Register::Address<0xf0028408,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_isrpq3{
        using Addr = Register::Address<0xf002840c,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_isrpq4{
        using Addr = Register::Address<0xf0028410,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_isrpq5{
        using Addr = Register::Address<0xf0028414,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_isrpq6{
        using Addr = Register::Address<0xf0028418,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_tbqbapq0{
        using Addr = Register::Address<0xf0028440,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> TXBQBA; 
    }
    namespace GMAC_tbqbapq1{
        using Addr = Register::Address<0xf0028444,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> TXBQBA; 
    }
    namespace GMAC_tbqbapq2{
        using Addr = Register::Address<0xf0028448,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> TXBQBA; 
    }
    namespace GMAC_tbqbapq3{
        using Addr = Register::Address<0xf002844c,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> TXBQBA; 
    }
    namespace GMAC_tbqbapq4{
        using Addr = Register::Address<0xf0028450,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> TXBQBA; 
    }
    namespace GMAC_tbqbapq5{
        using Addr = Register::Address<0xf0028454,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> TXBQBA; 
    }
    namespace GMAC_tbqbapq6{
        using Addr = Register::Address<0xf0028458,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> TXBQBA; 
    }
    namespace GMAC_rbqbapq0{
        using Addr = Register::Address<0xf0028480,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> RXBQBA; 
    }
    namespace GMAC_rbqbapq1{
        using Addr = Register::Address<0xf0028484,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> RXBQBA; 
    }
    namespace GMAC_rbqbapq2{
        using Addr = Register::Address<0xf0028488,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> RXBQBA; 
    }
    namespace GMAC_rbqbapq3{
        using Addr = Register::Address<0xf002848c,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> RXBQBA; 
    }
    namespace GMAC_rbqbapq4{
        using Addr = Register::Address<0xf0028490,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> RXBQBA; 
    }
    namespace GMAC_rbqbapq5{
        using Addr = Register::Address<0xf0028494,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> RXBQBA; 
    }
    namespace GMAC_rbqbapq6{
        using Addr = Register::Address<0xf0028498,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> RXBQBA; 
    }
    namespace GMAC_rbsrpq0{
        using Addr = Register::Address<0xf00284a0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RBS; 
    }
    namespace GMAC_rbsrpq1{
        using Addr = Register::Address<0xf00284a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RBS; 
    }
    namespace GMAC_rbsrpq2{
        using Addr = Register::Address<0xf00284a8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RBS; 
    }
    namespace GMAC_rbsrpq3{
        using Addr = Register::Address<0xf00284ac,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RBS; 
    }
    namespace GMAC_rbsrpq4{
        using Addr = Register::Address<0xf00284b0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RBS; 
    }
    namespace GMAC_rbsrpq5{
        using Addr = Register::Address<0xf00284b4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RBS; 
    }
    namespace GMAC_rbsrpq6{
        using Addr = Register::Address<0xf00284b8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RBS; 
    }
    namespace GMAC_st1rpq0{
        using Addr = Register::Address<0xf0028500,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq1{
        using Addr = Register::Address<0xf0028504,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq2{
        using Addr = Register::Address<0xf0028508,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq3{
        using Addr = Register::Address<0xf002850c,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq4{
        using Addr = Register::Address<0xf0028510,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq5{
        using Addr = Register::Address<0xf0028514,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq6{
        using Addr = Register::Address<0xf0028518,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq7{
        using Addr = Register::Address<0xf002851c,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq8{
        using Addr = Register::Address<0xf0028520,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq9{
        using Addr = Register::Address<0xf0028524,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq10{
        using Addr = Register::Address<0xf0028528,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq11{
        using Addr = Register::Address<0xf002852c,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq12{
        using Addr = Register::Address<0xf0028530,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq13{
        using Addr = Register::Address<0xf0028534,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq14{
        using Addr = Register::Address<0xf0028538,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st1rpq15{
        using Addr = Register::Address<0xf002853c,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> DSTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> UDPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DSTCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UDPE; 
    }
    namespace GMAC_st2rpq0{
        using Addr = Register::Address<0xf0028540,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq1{
        using Addr = Register::Address<0xf0028544,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq2{
        using Addr = Register::Address<0xf0028548,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq3{
        using Addr = Register::Address<0xf002854c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq4{
        using Addr = Register::Address<0xf0028550,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq5{
        using Addr = Register::Address<0xf0028554,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq6{
        using Addr = Register::Address<0xf0028558,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq7{
        using Addr = Register::Address<0xf002855c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq8{
        using Addr = Register::Address<0xf0028560,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq9{
        using Addr = Register::Address<0xf0028564,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq10{
        using Addr = Register::Address<0xf0028568,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq11{
        using Addr = Register::Address<0xf002856c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq12{
        using Addr = Register::Address<0xf0028570,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq13{
        using Addr = Register::Address<0xf0028574,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq14{
        using Addr = Register::Address<0xf0028578,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_st2rpq15{
        using Addr = Register::Address<0xf002857c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VLANP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VLANE; 
    }
    namespace GMAC_ierpq0{
        using Addr = Register::Address<0xf0028600,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_ierpq1{
        using Addr = Register::Address<0xf0028604,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_ierpq2{
        using Addr = Register::Address<0xf0028608,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_ierpq3{
        using Addr = Register::Address<0xf002860c,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_ierpq4{
        using Addr = Register::Address<0xf0028610,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_ierpq5{
        using Addr = Register::Address<0xf0028614,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_ierpq6{
        using Addr = Register::Address<0xf0028618,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_idrpq0{
        using Addr = Register::Address<0xf0028620,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_idrpq1{
        using Addr = Register::Address<0xf0028624,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_idrpq2{
        using Addr = Register::Address<0xf0028628,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_idrpq3{
        using Addr = Register::Address<0xf002862c,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_idrpq4{
        using Addr = Register::Address<0xf0028630,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_idrpq5{
        using Addr = Register::Address<0xf0028634,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_idrpq6{
        using Addr = Register::Address<0xf0028638,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_imrpq0{
        using Addr = Register::Address<0xf0028640,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AHB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_imrpq1{
        using Addr = Register::Address<0xf0028644,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AHB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_imrpq2{
        using Addr = Register::Address<0xf0028648,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AHB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_imrpq3{
        using Addr = Register::Address<0xf002864c,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AHB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_imrpq4{
        using Addr = Register::Address<0xf0028650,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AHB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_imrpq5{
        using Addr = Register::Address<0xf0028654,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AHB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
    namespace GMAC_imrpq6{
        using Addr = Register::Address<0xf0028658,0xfffff319>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AHB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
    }
}
