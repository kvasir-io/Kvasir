#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DDRSDRC0_mr{
        using Addr = Register::Address<0xffffe600,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
    }
    namespace DDRSDRC0_rtr{
        using Addr = Register::Address<0xffffe604,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace DDRSDRC0_cr{
        using Addr = Register::Address<0xffffe608,0xfffa8c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> NR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DIS_DLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EBISHARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ACTBST; 
    }
    namespace DDRSDRC0_tpr0{
        using Addr = Register::Address<0xffffe60c,0x00000000>;
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
    namespace DDRSDRC0_tpr1{
        using Addr = Register::Address<0xffffe610,0xf00000e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> TRFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXSNR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TXSRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TXP; 
    }
    namespace DDRSDRC0_tpr2{
        using Addr = Register::Address<0xffffe614,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TXARD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TXARDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TRPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TRTP; 
    }
    namespace DDRSDRC0_lpr{
        using Addr = Register::Address<0xffffe61c,0xffcec088>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LPCB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLK_FR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PASR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> DS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> APDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> UPD_MR; 
    }
    namespace DDRSDRC0_md{
        using Addr = Register::Address<0xffffe620,0xffffffe8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBW; 
    }
    namespace DDRSDRC0_dll{
        using Addr = Register::Address<0xffffe624,0xffff00f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MDINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MDDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MDOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MDVAL; 
    }
    namespace DDRSDRC0_hs{
        using Addr = Register::Address<0xffffe62c,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DIS_ANTICIP_READ; 
    }
    namespace DDRSDRC0_delay0{
        using Addr = Register::Address<0xffffe640,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DELAY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DELAY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DELAY3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> DELAY4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DELAY5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> DELAY6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DELAY7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> DELAY8; 
    }
    namespace DDRSDRC0_delay1{
        using Addr = Register::Address<0xffffe644,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DELAY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DELAY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DELAY3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> DELAY4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DELAY5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> DELAY6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DELAY7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> DELAY8; 
    }
    namespace DDRSDRC0_delay2{
        using Addr = Register::Address<0xffffe648,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DELAY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DELAY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DELAY3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> DELAY4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DELAY5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> DELAY6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DELAY7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> DELAY8; 
    }
    namespace DDRSDRC0_delay3{
        using Addr = Register::Address<0xffffe64c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DELAY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DELAY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DELAY3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> DELAY4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DELAY5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> DELAY6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DELAY7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> DELAY8; 
    }
    namespace DDRSDRC0_wpmr{
        using Addr = Register::Address<0xffffe6e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace DDRSDRC0_wpsr{
        using Addr = Register::Address<0xffffe6e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
