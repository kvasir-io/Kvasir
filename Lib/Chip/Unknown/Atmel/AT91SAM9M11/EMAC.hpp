#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace EMAC_ncr{
        using Addr = Register::Address<0xfffbc000,0xfffff800>;
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
    namespace EMAC_ncfg{
        using Addr = Register::Address<0xfffbc004,0xfff00204>;
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
    namespace EMAC_nsr{
        using Addr = Register::Address<0xfffbc008,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MDIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDLE; 
    }
    namespace EMAC_tsr{
        using Addr = Register::Address<0xfffbc014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TGO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UND; 
    }
    namespace EMAC_rbqp{
        using Addr = Register::Address<0xfffbc018,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> ADDR; 
    }
    namespace EMAC_tbqp{
        using Addr = Register::Address<0xfffbc01c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> ADDR; 
    }
    namespace EMAC_rsr{
        using Addr = Register::Address<0xfffbc020,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BNA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OVR; 
    }
    namespace EMAC_isr{
        using Addr = Register::Address<0xfffbc024,0xffffc300>;
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
    namespace EMAC_ier{
        using Addr = Register::Address<0xfffbc028,0xffffc300>;
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
    namespace EMAC_idr{
        using Addr = Register::Address<0xfffbc02c,0xffffc300>;
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
    namespace EMAC_imr{
        using Addr = Register::Address<0xfffbc030,0xffffc300>;
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
    namespace EMAC_man{
        using Addr = Register::Address<0xfffbc034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18)> REGA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,23)> PHYA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> RW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> SOF; 
    }
    namespace EMAC_ptr{
        using Addr = Register::Address<0xfffbc038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PTIME; 
    }
    namespace EMAC_pfr{
        using Addr = Register::Address<0xfffbc03c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FROK; 
    }
    namespace EMAC_fto{
        using Addr = Register::Address<0xfffbc040,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> FTOK; 
    }
    namespace EMAC_scf{
        using Addr = Register::Address<0xfffbc044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SCF; 
    }
    namespace EMAC_mcf{
        using Addr = Register::Address<0xfffbc048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MCF; 
    }
    namespace EMAC_fro{
        using Addr = Register::Address<0xfffbc04c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> FROK; 
    }
    namespace EMAC_fcse{
        using Addr = Register::Address<0xfffbc050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FCSE; 
    }
    namespace EMAC_ale{
        using Addr = Register::Address<0xfffbc054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ALE; 
    }
    namespace EMAC_dtf{
        using Addr = Register::Address<0xfffbc058,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DTF; 
    }
    namespace EMAC_lcol{
        using Addr = Register::Address<0xfffbc05c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCOL; 
    }
    namespace EMAC_ecol{
        using Addr = Register::Address<0xfffbc060,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EXCOL; 
    }
    namespace EMAC_tund{
        using Addr = Register::Address<0xfffbc064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TUND; 
    }
    namespace EMAC_cse{
        using Addr = Register::Address<0xfffbc068,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CSE; 
    }
    namespace EMAC_rre{
        using Addr = Register::Address<0xfffbc06c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RRE; 
    }
    namespace EMAC_rov{
        using Addr = Register::Address<0xfffbc070,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ROVR; 
    }
    namespace EMAC_rse{
        using Addr = Register::Address<0xfffbc074,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RSE; 
    }
    namespace EMAC_ele{
        using Addr = Register::Address<0xfffbc078,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EXL; 
    }
    namespace EMAC_rja{
        using Addr = Register::Address<0xfffbc07c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RJB; 
    }
    namespace EMAC_usf{
        using Addr = Register::Address<0xfffbc080,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> USF; 
    }
    namespace EMAC_ste{
        using Addr = Register::Address<0xfffbc084,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SQER; 
    }
    namespace EMAC_rle{
        using Addr = Register::Address<0xfffbc088,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RLFM; 
    }
    namespace EMAC_hrb{
        using Addr = Register::Address<0xfffbc090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace EMAC_hrt{
        using Addr = Register::Address<0xfffbc094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace EMAC_sa1b{
        using Addr = Register::Address<0xfffbc098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace EMAC_sa1t{
        using Addr = Register::Address<0xfffbc09c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace EMAC_sa2b{
        using Addr = Register::Address<0xfffbc0a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace EMAC_sa2t{
        using Addr = Register::Address<0xfffbc0a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace EMAC_sa3b{
        using Addr = Register::Address<0xfffbc0a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace EMAC_sa3t{
        using Addr = Register::Address<0xfffbc0ac,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace EMAC_sa4b{
        using Addr = Register::Address<0xfffbc0b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace EMAC_sa4t{
        using Addr = Register::Address<0xfffbc0b4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDR; 
    }
    namespace EMAC_tid{
        using Addr = Register::Address<0xfffbc0b8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TID; 
    }
    namespace EMAC_usrio{
        using Addr = Register::Address<0xfffbc0c0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RMII; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLKEN; 
    }
}
