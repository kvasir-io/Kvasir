#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemctrl{
        using Addr = Register::Address<0xd0000000,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYNCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MEN; 
    }
    namespace Nonepcc0{
        using Addr = Register::Address<0xd0000004,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> RDDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,17)> WRDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SAFESYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,9)> CDRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SENDIAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SS2CD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPHA; 
    }
    namespace Nonepcc1{
        using Addr = Register::Address<0xd0000008,0xffffffff>;
    }
    namespace Nonepcc2{
        using Addr = Register::Address<0xd000000c,0xffffffff>;
    }
    namespace Nonepcc3{
        using Addr = Register::Address<0xd0000010,0xffffffff>;
    }
    namespace Nonetxf{
        using Addr = Register::Address<0xd0000014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSSRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TFMTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TFLETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TFUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TFOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TFFS; 
    }
    namespace Nonetxe{
        using Addr = Register::Address<0xd0000018,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSSRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TFMTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TFLETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TFUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TFOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TFEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TFFE; 
    }
    namespace Nonetxc{
        using Addr = Register::Address<0xd000001c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TFMTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TFLETC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TFUC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TFOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TFFC; 
    }
    namespace Nonerxf{
        using Addr = Register::Address<0xd0000020,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RSSRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RFMTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RFLETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RFUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RFOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RFFS; 
    }
    namespace Nonerxe{
        using Addr = Register::Address<0xd0000024,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RSSRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RFMTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RFLETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RFUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RFOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RFEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RFFE; 
    }
    namespace Nonerxc{
        using Addr = Register::Address<0xd0000028,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RSSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RFMTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RFLETC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RFUC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RFOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RFFC; 
    }
    namespace Nonefaultf{
        using Addr = Register::Address<0xd000002c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DRCBSFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DWCBSFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UMAFS; 
    }
    namespace Nonefaultc{
        using Addr = Register::Address<0xd0000030,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DRCBSFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DWCBSFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PVFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UMAFC; 
    }
    namespace Nonedmcfg{
        using Addr = Register::Address<0xd0000034,0xfffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSDC; 
    }
    namespace Nonedmdmaen{
        using Addr = Register::Address<0xd0000035,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXDMAEN; 
    }
    namespace Nonedmstart{
        using Addr = Register::Address<0xd0000038,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
    }
    namespace Nonedmstop{
        using Addr = Register::Address<0xd0000039,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STOP; 
    }
    namespace Nonedmpsel{
        using Addr = Register::Address<0xd000003a,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PSEL; 
    }
    namespace Nonedmtrp{
        using Addr = Register::Address<0xd000003b,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TRP; 
    }
    namespace Nonedmbcc{
        using Addr = Register::Address<0xd000003c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BCC; 
    }
    namespace Nonedmbcs{
        using Addr = Register::Address<0xd000003e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BCS; 
    }
    namespace Nonedmstatus{
        using Addr = Register::Address<0xd0000040,0xffe0e0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> TXFLEVEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> RXFLEVEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXACTIVE; 
    }
    namespace Nonefifocfg{
        using Addr = Register::Address<0xd000004c,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXFLSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RXFLSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> FWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TXFTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RXFTH; 
    }
    namespace Nonetxfifo0{
        using Addr = Register::Address<0xd0000050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXDATA; 
    }
    namespace Nonetxfifo1{
        using Addr = Register::Address<0xd0000054,0xffffffff>;
    }
    namespace Nonetxfifo2{
        using Addr = Register::Address<0xd0000058,0xffffffff>;
    }
    namespace Nonetxfifo3{
        using Addr = Register::Address<0xd000005c,0xffffffff>;
    }
    namespace Nonetxfifo4{
        using Addr = Register::Address<0xd0000060,0xffffffff>;
    }
    namespace Nonetxfifo5{
        using Addr = Register::Address<0xd0000064,0xffffffff>;
    }
    namespace Nonetxfifo6{
        using Addr = Register::Address<0xd0000068,0xffffffff>;
    }
    namespace Nonetxfifo7{
        using Addr = Register::Address<0xd000006c,0xffffffff>;
    }
    namespace Nonetxfifo8{
        using Addr = Register::Address<0xd0000070,0xffffffff>;
    }
    namespace Nonetxfifo9{
        using Addr = Register::Address<0xd0000074,0xffffffff>;
    }
    namespace Nonetxfifo10{
        using Addr = Register::Address<0xd0000078,0xffffffff>;
    }
    namespace Nonetxfifo11{
        using Addr = Register::Address<0xd000007c,0xffffffff>;
    }
    namespace Nonetxfifo12{
        using Addr = Register::Address<0xd0000080,0xffffffff>;
    }
    namespace Nonetxfifo13{
        using Addr = Register::Address<0xd0000084,0xffffffff>;
    }
    namespace Nonetxfifo14{
        using Addr = Register::Address<0xd0000088,0xffffffff>;
    }
    namespace Nonetxfifo15{
        using Addr = Register::Address<0xd000008c,0xffffffff>;
    }
    namespace Nonerxfifo0{
        using Addr = Register::Address<0xd0000090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXDATA; 
    }
    namespace Nonerxfifo1{
        using Addr = Register::Address<0xd0000094,0xffffffff>;
    }
    namespace Nonerxfifo2{
        using Addr = Register::Address<0xd0000098,0xffffffff>;
    }
    namespace Nonerxfifo3{
        using Addr = Register::Address<0xd000009c,0xffffffff>;
    }
    namespace Nonerxfifo4{
        using Addr = Register::Address<0xd00000a0,0xffffffff>;
    }
    namespace Nonerxfifo5{
        using Addr = Register::Address<0xd00000a4,0xffffffff>;
    }
    namespace Nonerxfifo6{
        using Addr = Register::Address<0xd00000a8,0xffffffff>;
    }
    namespace Nonerxfifo7{
        using Addr = Register::Address<0xd00000ac,0xffffffff>;
    }
    namespace Nonerxfifo8{
        using Addr = Register::Address<0xd00000b0,0xffffffff>;
    }
    namespace Nonerxfifo9{
        using Addr = Register::Address<0xd00000b4,0xffffffff>;
    }
    namespace Nonerxfifo10{
        using Addr = Register::Address<0xd00000b8,0xffffffff>;
    }
    namespace Nonerxfifo11{
        using Addr = Register::Address<0xd00000bc,0xffffffff>;
    }
    namespace Nonerxfifo12{
        using Addr = Register::Address<0xd00000c0,0xffffffff>;
    }
    namespace Nonerxfifo13{
        using Addr = Register::Address<0xd00000c4,0xffffffff>;
    }
    namespace Nonerxfifo14{
        using Addr = Register::Address<0xd00000c8,0xffffffff>;
    }
    namespace Nonerxfifo15{
        using Addr = Register::Address<0xd00000cc,0xffffffff>;
    }
    namespace Nonecscfg{
        using Addr = Register::Address<0xd00000d0,0xfff0f0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SSEL3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SSEL2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SSEL1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SSEL0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> MBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SRAM; 
    }
    namespace Nonecsitime{
        using Addr = Register::Address<0xd00000d4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ITIME; 
    }
    namespace Nonecsaext{
        using Addr = Register::Address<0xd00000d8,0x00001fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,13)> AEXT; 
    }
    namespace Nonerdcsdc0{
        using Addr = Register::Address<0xd00000dc,0xffff00f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> RDCSDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DEC; 
    }
    namespace Nonerdcsdc1{
        using Addr = Register::Address<0xd00000de,0xffffffff>;
    }
    namespace Nonerdcsdc2{
        using Addr = Register::Address<0xd00000e0,0xffffffff>;
    }
    namespace Nonerdcsdc3{
        using Addr = Register::Address<0xd00000e2,0xffffffff>;
    }
    namespace Nonerdcsdc4{
        using Addr = Register::Address<0xd00000e4,0xffffffff>;
    }
    namespace Nonerdcsdc5{
        using Addr = Register::Address<0xd00000e6,0xffffffff>;
    }
    namespace Nonerdcsdc6{
        using Addr = Register::Address<0xd00000e8,0xffffffff>;
    }
    namespace Nonerdcsdc7{
        using Addr = Register::Address<0xd00000ea,0xffffffff>;
    }
    namespace Nonewrcsdc0{
        using Addr = Register::Address<0xd00000ec,0xffff00f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WRCSDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DEC; 
    }
    namespace Nonewrcsdc1{
        using Addr = Register::Address<0xd00000ee,0xffffffff>;
    }
    namespace Nonewrcsdc2{
        using Addr = Register::Address<0xd00000f0,0xffffffff>;
    }
    namespace Nonewrcsdc3{
        using Addr = Register::Address<0xd00000f2,0xffffffff>;
    }
    namespace Nonewrcsdc4{
        using Addr = Register::Address<0xd00000f4,0xffffffff>;
    }
    namespace Nonewrcsdc5{
        using Addr = Register::Address<0xd00000f6,0xffffffff>;
    }
    namespace Nonewrcsdc6{
        using Addr = Register::Address<0xd00000f8,0xffffffff>;
    }
    namespace Nonewrcsdc7{
        using Addr = Register::Address<0xd00000fa,0xffffffff>;
    }
    namespace Nonemid{
        using Addr = Register::Address<0xd00000fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MID; 
    }
    namespace Noneqdclkr{
        using Addr = Register::Address<0xd0000400,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> QHDIV; 
    }
    namespace Nonedbcnt{
        using Addr = Register::Address<0xd0000404,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXDBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXDBEN; 
    }
}
