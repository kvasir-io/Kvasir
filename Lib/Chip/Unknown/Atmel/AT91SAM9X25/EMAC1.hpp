#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace EMAC1_ncr{
        using Addr = Register::Address<0xf8030000,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LLB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLRSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INCSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WESTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> THALT; 
    }
    namespace EMAC1_ncfgr{
        using Addr = Register::Address<0xf8030004,0xfff00204>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JFRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NBC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UNI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> RBOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RLCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DRFCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EFRHD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IRXFCS; 
    }
    namespace EMAC1_nsr{
        using Addr = Register::Address<0xf8030008,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MDIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDLE; 
    }
    namespace EMAC1_tsr{
        using Addr = Register::Address<0xf8030014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TGO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UND; 
    }
    namespace EMAC1_rbqp{
        using Addr = Register::Address<0xf8030018,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> ADDR; 
    }
    namespace EMAC1_tbqp{
        using Addr = Register::Address<0xf803001c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> ADDR; 
    }
    namespace EMAC1_rsr{
        using Addr = Register::Address<0xf8030020,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BNA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OVR; 
    }
    namespace EMAC1_isr{
        using Addr = Register::Address<0xf8030024,0xffffc300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TUND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PFRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PTZ; 
    }
    namespace EMAC1_ier{
        using Addr = Register::Address<0xf8030028,0xffffc300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TUND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PTZ; 
    }
    namespace EMAC1_idr{
        using Addr = Register::Address<0xf803002c,0xffffc300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TUND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PTZ; 
    }
    namespace EMAC1_imr{
        using Addr = Register::Address<0xf8030030,0xffffc300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TUND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PTZ; 
    }
    namespace EMAC1_man{
        using Addr = Register::Address<0xf8030034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18)> REGA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,23)> PHYA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> RW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> SOF; 
    }
    namespace EMAC1_ptr{
        using Addr = Register::Address<0xf8030038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PTIME; 
    }
    namespace EMAC1_pfr{
        using Addr = Register::Address<0xf803003c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FROK; 
    }
    namespace EMAC1_fto{
        using Addr = Register::Address<0xf8030040,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> FTOK; 
    }
    namespace EMAC1_scf{
        using Addr = Register::Address<0xf8030044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SCF; 
    }
    namespace EMAC1_mcf{
        using Addr = Register::Address<0xf8030048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MCF; 
    }
    namespace EMAC1_fro{
        using Addr = Register::Address<0xf803004c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> FROK; 
    }
    namespace EMAC1_fcse{
        using Addr = Register::Address<0xf8030050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FCSE; 
    }
    namespace EMAC1_ale{
        using Addr = Register::Address<0xf8030054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ALE; 
    }
    namespace EMAC1_dtf{
        using Addr = Register::Address<0xf8030058,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTF; 
    }
    namespace EMAC1_lcol{
        using Addr = Register::Address<0xf803005c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCOL; 
    }
    namespace EMAC1_ecol{
        using Addr = Register::Address<0xf8030060,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EXCOL; 
    }
    namespace EMAC1_tund{
        using Addr = Register::Address<0xf8030064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TUND; 
    }
    namespace EMAC1_cse{
        using Addr = Register::Address<0xf8030068,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CSE; 
    }
    namespace EMAC1_rre{
        using Addr = Register::Address<0xf803006c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RRE; 
    }
    namespace EMAC1_rov{
        using Addr = Register::Address<0xf8030070,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ROVR; 
    }
    namespace EMAC1_rse{
        using Addr = Register::Address<0xf8030074,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RSE; 
    }
    namespace EMAC1_ele{
        using Addr = Register::Address<0xf8030078,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EXL; 
    }
    namespace EMAC1_rja{
        using Addr = Register::Address<0xf803007c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RJB; 
    }
    namespace EMAC1_usf{
        using Addr = Register::Address<0xf8030080,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> USF; 
    }
    namespace EMAC1_ste{
        using Addr = Register::Address<0xf8030084,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SQER; 
    }
    namespace EMAC1_rle{
        using Addr = Register::Address<0xf8030088,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RLFM; 
    }
    namespace EMAC1_hrb{
        using Addr = Register::Address<0xf8030090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace EMAC1_hrt{
        using Addr = Register::Address<0xf8030094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace EMAC1_sa1b{
        using Addr = Register::Address<0xf8030098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace EMAC1_sa1t{
        using Addr = Register::Address<0xf803009c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace EMAC1_sa2b{
        using Addr = Register::Address<0xf80300a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace EMAC1_sa2t{
        using Addr = Register::Address<0xf80300a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace EMAC1_sa3b{
        using Addr = Register::Address<0xf80300a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace EMAC1_sa3t{
        using Addr = Register::Address<0xf80300ac,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace EMAC1_sa4b{
        using Addr = Register::Address<0xf80300b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace EMAC1_sa4t{
        using Addr = Register::Address<0xf80300b4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace EMAC1_tid{
        using Addr = Register::Address<0xf80300b8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TID; 
    }
    namespace EMAC1_usrio{
        using Addr = Register::Address<0xf80300c0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RMII; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLKEN; 
    }
}
