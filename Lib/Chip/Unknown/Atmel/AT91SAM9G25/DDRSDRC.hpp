#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DDRSDRC_mr{
        using Addr = Register::Address<0xffffe800,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
    }
    namespace DDRSDRC_rtr{
        using Addr = Register::Address<0xffffe804,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace DDRSDRC_cr{
        using Addr = Register::Address<0xffffe808,0xffaa8c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> NR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DIS_DLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EBISHARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ACTBST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> NB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DECOD; 
    }
    namespace DDRSDRC_tpr0{
        using Addr = Register::Address<0xffffe80c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TRCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> TRRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> TWTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> REDUCE_WRRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> TMRD; 
    }
    namespace DDRSDRC_tpr1{
        using Addr = Register::Address<0xffffe810,0xf00000e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> TRFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXSNR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TXSRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TXP; 
    }
    namespace DDRSDRC_tpr2{
        using Addr = Register::Address<0xffffe814,0xfff08000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TXARD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TXARDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TRPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TRTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TFAW; 
    }
    namespace DDRSDRC_lpr{
        using Addr = Register::Address<0xffffe81c,0xffcec888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LPCB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLK_FR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PASR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> APDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> UPD_MR; 
    }
    namespace DDRSDRC_md{
        using Addr = Register::Address<0xffffe820,0xffffffe8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBW; 
    }
    namespace DDRSDRC_dll{
        using Addr = Register::Address<0xffffe824,0xffff00f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MDINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MDDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MDOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MDVAL; 
    }
    namespace DDRSDRC_hs{
        using Addr = Register::Address<0xffffe82c,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DIS_ANTICIP_READ; 
    }
    namespace DDRSDRC_wpmr{
        using Addr = Register::Address<0xffffe8e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace DDRSDRC_wpsr{
        using Addr = Register::Address<0xffffe8e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
