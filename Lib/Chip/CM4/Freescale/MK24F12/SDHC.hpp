#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SDHC_dsaddr{
        using Addr = Register::Address<0x400b1000,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSADDR; 
    }
    namespace SDHC_blkattr{
        using Addr = Register::Address<0x400b1004,0x0000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> BLKSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace SDHC_cmdarg{
        using Addr = Register::Address<0x400b1008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CMDARG; 
    }
    namespace SDHC_xfertyp{
        using Addr = Register::Address<0x400b100c,0xc004ffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AC12EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSBSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> RSPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CCCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CICEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> CMDTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> CMDINX; 
    }
    namespace SDHC_cmdrsp0{
        using Addr = Register::Address<0x400b1010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CMDRSP0; 
    }
    namespace SDHC_cmdrsp1{
        using Addr = Register::Address<0x400b1014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CMDRSP1; 
    }
    namespace SDHC_cmdrsp2{
        using Addr = Register::Address<0x400b1018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CMDRSP2; 
    }
    namespace SDHC_cmdrsp3{
        using Addr = Register::Address<0x400b101c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CMDRSP3; 
    }
    namespace SDHC_datport{
        using Addr = Register::Address<0x400b1020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATCONT; 
    }
    namespace SDHC_prsstat{
        using Addr = Register::Address<0x400b1024,0x007ef000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CIHB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CDIHB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DLA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SDSTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IPGOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HCKOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PEROFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SDOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CINS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CLSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLSL; 
    }
    namespace SDHC_proctl{
        using Addr = Register::Address<0x400b1028,0xf8f0fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LCTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> DTW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> D3CD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CDTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CDSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SABGREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RWCTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IABG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> WECINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WECINS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> WECRM; 
    }
    namespace SDHC_sysctl{
        using Addr = Register::Address<0x400b102c,0xf0f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IPGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HCKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PEREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SDCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SDCLKFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DTOCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RSTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RSTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> INITA; 
    }
    namespace SDHC_irqstat{
        using Addr = Register::Address<0x400b1030,0xee80fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CINS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CEBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DEBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> AC12E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMAE; 
    }
    namespace SDHC_irqstaten{
        using Addr = Register::Address<0x400b1034,0xee80fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BGESEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DINTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BWRSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BRRSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CINSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CRMSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CINTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CTOESEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CCESEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CEBESEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CIESEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DTOESEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCESEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DEBESEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> AC12ESEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMAESEN; 
    }
    namespace SDHC_irqsigen{
        using Addr = Register::Address<0x400b1038,0xee80fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BGEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DINTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BWRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BRRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CINSIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CRMIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CINTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CTOEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CCEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CEBEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CIEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DTOEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DEBEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> AC12EIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMAEIEN; 
    }
    namespace SDHC_ac12err{
        using Addr = Register::Address<0x400b103c,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AC12NE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AC12TOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AC12EBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AC12CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AC12IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CNIBAC12E; 
    }
    namespace SDHC_htcapblt{
        using Addr = Register::Address<0x400b1040,0xfe08ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> MBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ADMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> HSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> VS33; 
    }
    namespace SDHC_wml{
        using Addr = Register::Address<0x400b1044,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDWML; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WRWML; 
    }
    namespace SDHC_fevt{
        using Addr = Register::Address<0x400b1050,0x6e80ff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AC12NE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AC12TOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AC12CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AC12EBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AC12IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CNIBAC12E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CEBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DEBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> AC12E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CINT; 
    }
    namespace SDHC_admaes{
        using Addr = Register::Address<0x400b1054,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADMAES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADMALME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADMADCE; 
    }
    namespace SDHC_adsaddr{
        using Addr = Register::Address<0x400b1058,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> ADSADDR; 
    }
    namespace SDHC_vendor{
        using Addr = Register::Address<0x400b10c0,0xff00fffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXBLKNU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> INTSTVAL; 
    }
    namespace SDHC_mmcboot{
        using Addr = Register::Address<0x400b10c4,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DTOCVACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BOOTACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BOOTMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BOOTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AUTOSABGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BOOTBLKCNT; 
    }
    namespace SDHC_hostver{
        using Addr = Register::Address<0x400b10fc,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SVN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> VVN; 
    }
}
