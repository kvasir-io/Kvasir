#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonei2c0_cr{
        using Addr = Register::Address<0x40048000,0xffffe870>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> I2CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DMANACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENTOUT; 
    }
    namespace Nonei2c0_ier{
        using Addr = Register::Address<0x40048004,0xfff8f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STAIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADRSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GCSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ARBLOSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXNACKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BUSERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TOUTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RXDNEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXDEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RXBFIE; 
    }
    namespace Nonei2c0_addr{
        using Addr = Register::Address<0x40048008,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> ADDR; 
    }
    namespace Nonei2c0_sr{
        using Addr = Register::Address<0x4004800c,0xffc0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ARBLOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXNACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TOUTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RXDNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RXBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BUSBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MASTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TXNRX; 
    }
    namespace Nonei2c0_shpgr{
        using Addr = Register::Address<0x40048010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SHPG; 
    }
    namespace Nonei2c0_slpgr{
        using Addr = Register::Address<0x40048014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SLPG; 
    }
    namespace Nonei2c0_dr{
        using Addr = Register::Address<0x40048018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace Nonei2c0_tar{
        using Addr = Register::Address<0x4004801c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RWD; 
    }
    namespace Nonei2c0_addmr{
        using Addr = Register::Address<0x40048020,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> ADDMR; 
    }
    namespace Nonei2c0_addsr{
        using Addr = Register::Address<0x40048024,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> ADDSR; 
    }
    namespace Nonei2c0_tout{
        using Addr = Register::Address<0x40048028,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> PSC; 
    }
}
