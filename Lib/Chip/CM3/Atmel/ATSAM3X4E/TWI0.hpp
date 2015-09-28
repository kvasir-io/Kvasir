#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TWI0_cr{
        using Addr = Register::Address<0x4008c000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SVDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> QUICK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWRST; 
    }
    namespace TWI0_mmr{
        using Addr = Register::Address<0x4008c004,0xff80ecff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> IADRSZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MREAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> DADR; 
    }
    namespace TWI0_smr{
        using Addr = Register::Address<0x4008c008,0xff80ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> SADR; 
    }
    namespace TWI0_iadr{
        using Addr = Register::Address<0x4008c00c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> IADR; 
    }
    namespace TWI0_cwgr{
        using Addr = Register::Address<0x4008c010,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CHDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CKDIV; 
    }
    namespace TWI0_sr{
        using Addr = Register::Address<0x4008c020,0xffff0080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SVREAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SVACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ARBLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SCLWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EOSACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXBUFE; 
    }
    namespace TWI0_ier{
        using Addr = Register::Address<0x4008c024,0xffff0088>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SVACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ARBLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SCL_WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EOSACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXBUFE; 
    }
    namespace TWI0_idr{
        using Addr = Register::Address<0x4008c028,0xffff0088>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SVACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ARBLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SCL_WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EOSACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXBUFE; 
    }
    namespace TWI0_imr{
        using Addr = Register::Address<0x4008c02c,0xffff0088>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SVACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ARBLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SCL_WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EOSACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXBUFE; 
    }
    namespace TWI0_rhr{
        using Addr = Register::Address<0x4008c030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXDATA; 
    }
    namespace TWI0_thr{
        using Addr = Register::Address<0x4008c034,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXDATA; 
    }
    namespace TWI0_rpr{
        using Addr = Register::Address<0x4008c100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace TWI0_rcr{
        using Addr = Register::Address<0x4008c104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace TWI0_tpr{
        using Addr = Register::Address<0x4008c108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace TWI0_tcr{
        using Addr = Register::Address<0x4008c10c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace TWI0_rnpr{
        using Addr = Register::Address<0x4008c110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace TWI0_rncr{
        using Addr = Register::Address<0x4008c114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace TWI0_tnpr{
        using Addr = Register::Address<0x4008c118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace TWI0_tncr{
        using Addr = Register::Address<0x4008c11c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace TWI0_ptcr{
        using Addr = Register::Address<0x4008c120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace TWI0_ptsr{
        using Addr = Register::Address<0x4008c124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
