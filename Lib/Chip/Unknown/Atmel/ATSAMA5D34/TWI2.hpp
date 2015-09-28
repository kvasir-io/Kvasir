#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TWI2_cr{
        using Addr = Register::Address<0xf801c000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SVDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> QUICK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWRST; 
    }
    namespace TWI2_mmr{
        using Addr = Register::Address<0xf801c004,0xff80ecff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> IADRSZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MREAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> DADR; 
    }
    namespace TWI2_smr{
        using Addr = Register::Address<0xf801c008,0xff80ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> SADR; 
    }
    namespace TWI2_iadr{
        using Addr = Register::Address<0xf801c00c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> IADR; 
    }
    namespace TWI2_cwgr{
        using Addr = Register::Address<0xf801c010,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CHDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CKDIV; 
    }
    namespace TWI2_sr{
        using Addr = Register::Address<0xf801c020,0xfffff080>;
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
    }
    namespace TWI2_ier{
        using Addr = Register::Address<0xf801c024,0xfffff088>;
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
    }
    namespace TWI2_idr{
        using Addr = Register::Address<0xf801c028,0xfffff088>;
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
    }
    namespace TWI2_imr{
        using Addr = Register::Address<0xf801c02c,0xfffff088>;
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
    }
    namespace TWI2_rhr{
        using Addr = Register::Address<0xf801c030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXDATA; 
    }
    namespace TWI2_thr{
        using Addr = Register::Address<0xf801c034,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXDATA; 
    }
    namespace TWI2_wprot_mode{
        using Addr = Register::Address<0xf801c0e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> SECURITY_CODE; 
    }
    namespace TWI2_wprot_status{
        using Addr = Register::Address<0xf801c0e8,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPROTERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPROTADDR; 
    }
}
