#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40003800,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BIDIMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BIDIOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCNEXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXONLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LSBFIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> BR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPHA; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40003804,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SSOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NSSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXNEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FRXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LDMA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LDMA_TX; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40003808,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHSIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIFRFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> FRLVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> FTLVL; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x4000380c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DR; 
    }
    namespace Nonecrcpr{
        using Addr = Register::Address<0x40003810,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CRCPOLY; 
    }
    namespace Nonerxcrcr{
        using Addr = Register::Address<0x40003814,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RxCRC; 
    }
    namespace Nonetxcrcr{
        using Addr = Register::Address<0x40003818,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TxCRC; 
    }
    namespace Nonei2scfgr{
        using Addr = Register::Address<0x4000381c,0xfffff040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> I2SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> I2SE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> I2SCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PCMSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> I2SSTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CKPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> DATLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHLEN; 
    }
    namespace Nonei2spr{
        using Addr = Register::Address<0x40003820,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MCKOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ODD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> I2SDIV; 
    }
}
