#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneusart1_rbr{
        using Addr = Register::Address<0x40040000,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RD; 
    }
    namespace Noneusart1_tbr{
        using Addr = Register::Address<0x40040000,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TD; 
    }
    namespace Noneusart1_ier{
        using Addr = Register::Address<0x40040004,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RFTLI_RTOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TFTLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RLSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MODSIE; 
    }
    namespace Noneusart1_iir{
        using Addr = Register::Address<0x40040008,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> IID; 
    }
    namespace Noneusart1_fcr{
        using Addr = Register::Address<0x4004000c,0xfffffc08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TFTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> RFTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> URRXEN; 
    }
    namespace Noneusart1_lcr{
        using Addr = Register::Address<0x40040010,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BCB; 
    }
    namespace Noneusart1_modcr{
        using Addr = Register::Address<0x40040014,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HFCEN; 
    }
    namespace Noneusart1_lsr{
        using Addr = Register::Address<0x40040018,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RFDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BII; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXFEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERRRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSADDEF; 
    }
    namespace Noneusart1_modsr{
        using Addr = Register::Address<0x4004001c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DCTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DDSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DDCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DCDS; 
    }
    namespace Noneusart1_tpr{
        using Addr = Register::Address<0x40040020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> RTOIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RTOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TG; 
    }
    namespace Noneusart1_mdr{
        using Addr = Register::Address<0x40040024,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXDMAEN; 
    }
    namespace Noneusart1_irdacr{
        using Addr = Register::Address<0x40040028,0xffff00c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IrDAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IrDALP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IrDAPSC; 
    }
    namespace Noneusart1_rs485cr{
        using Addr = Register::Address<0x4004002c,0xffff00f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXENP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RSNMM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSAAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ADDMATCH; 
    }
    namespace Noneusart1_syncr{
        using Addr = Register::Address<0x40040030,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPO; 
    }
    namespace Noneusart1_fsr{
        using Addr = Register::Address<0x40040034,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> TXFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> RXFS; 
    }
    namespace Noneusart1_dlr{
        using Addr = Register::Address<0x40040038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BRD; 
    }
    namespace Noneusart1_degtstr{
        using Addr = Register::Address<0x40040040,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LBM; 
    }
}
