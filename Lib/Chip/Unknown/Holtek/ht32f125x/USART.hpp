#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneusart_rbr{
        using Addr = Register::Address<0x40000000,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RD; 
    }
    namespace Noneusart_tbr{
        using Addr = Register::Address<0x40000000,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TD; 
    }
    namespace Noneusart_ier{
        using Addr = Register::Address<0x40000004,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RFTLI_RTOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TFTLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RLSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MODSIE; 
    }
    namespace Noneusart_iir{
        using Addr = Register::Address<0x40000008,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> IID; 
    }
    namespace Noneusart_fcr{
        using Addr = Register::Address<0x4000000c,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TFTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> RFTL; 
    }
    namespace Noneusart_lcr{
        using Addr = Register::Address<0x40000010,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BCB; 
    }
    namespace Noneusart_modcr{
        using Addr = Register::Address<0x40000014,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTS; 
    }
    namespace Noneusart_lsr{
        using Addr = Register::Address<0x40000018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RFDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BII; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXFEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERRRX; 
    }
    namespace Noneusart_modsr{
        using Addr = Register::Address<0x4000001c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DCTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DDSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DDCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DCDS; 
    }
    namespace Noneusart_tpr{
        using Addr = Register::Address<0x40000020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> RTOIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RTOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TG; 
    }
    namespace Noneusart_mdr{
        using Addr = Register::Address<0x40000024,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRSM; 
    }
    namespace Noneusart_irdacr{
        using Addr = Register::Address<0x40000028,0xffff00f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IrDAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IrDALP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IrDAPSC; 
    }
    namespace Noneusart_rs485cr{
        using Addr = Register::Address<0x4000002c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXENP; 
    }
    namespace Noneusart_syncr{
        using Addr = Register::Address<0x40000030,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPO; 
    }
    namespace Noneusart_degtstr{
        using Addr = Register::Address<0x40000034,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LBM; 
    }
    namespace Noneusart_dlr{
        using Addr = Register::Address<0x40000038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BRD; 
    }
}
