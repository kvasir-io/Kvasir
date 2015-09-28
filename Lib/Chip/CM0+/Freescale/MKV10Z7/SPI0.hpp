#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SPI0_mcr{
        using Addr = Register::Address<0x4002c000,0x02e000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HALT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SMPL_PT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLR_RXF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLR_TXF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DIS_RXF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIS_TXF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DOZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> PCSIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ROOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MTFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FRZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DCONF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CONT_SCKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MSTR; 
    }
    namespace SPI0_tcr{
        using Addr = Register::Address<0x4002c008,0x0000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> SPI_TCNT; 
    }
    namespace SPI0_ctar0{
        using Addr = Register::Address<0x4002c00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ASC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CSSCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PASC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PCSSCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LSBFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,27)> FMSZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBR; 
    }
    namespace SPI0_ctar1{
        using Addr = Register::Address<0x4002c010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ASC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CSSCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PASC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PCSSCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LSBFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,27)> FMSZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBR; 
    }
    namespace SPI0_ctar_slave{
        using Addr = Register::Address<0x4002c00c,0x81ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,27)> FMSZ; 
    }
    namespace SPI0_sr{
        using Addr = Register::Address<0x4002c02c,0x25f50000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> POPNXTPTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RXCTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TXNXTPTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TXCTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RFDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RFOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TFFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TFUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EOQF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TXRXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TCF; 
    }
    namespace SPI0_rser{
        using Addr = Register::Address<0x4002c030,0x64f4ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RFDF_DIRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RFDF_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RFOF_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TFFF_DIRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TFFF_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TFUF_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EOQF_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TCF_RE; 
    }
    namespace SPI0_pushr{
        using Addr = Register::Address<0x4002c034,0x03e00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> PCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EOQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> CTAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CONT; 
    }
    namespace SPI0_pushr_slave{
        using Addr = Register::Address<0x4002c034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXDATA; 
    }
    namespace SPI0_popr{
        using Addr = Register::Address<0x4002c038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXDATA; 
    }
    namespace SPI0_txfr0{
        using Addr = Register::Address<0x4002c03c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TXCMD_TXDATA; 
    }
    namespace SPI0_txfr1{
        using Addr = Register::Address<0x4002c040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TXCMD_TXDATA; 
    }
    namespace SPI0_txfr2{
        using Addr = Register::Address<0x4002c044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TXCMD_TXDATA; 
    }
    namespace SPI0_txfr3{
        using Addr = Register::Address<0x4002c048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TXCMD_TXDATA; 
    }
    namespace SPI0_rxfr0{
        using Addr = Register::Address<0x4002c07c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXDATA; 
    }
    namespace SPI0_rxfr1{
        using Addr = Register::Address<0x4002c080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXDATA; 
    }
    namespace SPI0_rxfr2{
        using Addr = Register::Address<0x4002c084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXDATA; 
    }
    namespace SPI0_rxfr3{
        using Addr = Register::Address<0x4002c088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXDATA; 
    }
    namespace SPI0_srex{
        using Addr = Register::Address<0x4002c13c,0xffffb600>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CMDNXTPTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,4)> CMDCTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXCTR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXCTR4; 
    }
}
