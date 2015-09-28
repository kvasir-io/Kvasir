#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SDRAMC_mr{
        using Addr = Register::Address<0xffffea00,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
    }
    namespace SDRAMC_tr{
        using Addr = Register::Address<0xffffea04,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace SDRAMC_cr{
        using Addr = Register::Address<0xffffea08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> NR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> CAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> TRCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> TXSR; 
    }
    namespace SDRAMC_lpr{
        using Addr = Register::Address<0xffffea10,0xffffc08c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LPCB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PASR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TCSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> DS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TIMEOUT; 
    }
    namespace SDRAMC_ier{
        using Addr = Register::Address<0xffffea14,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RES; 
    }
    namespace SDRAMC_idr{
        using Addr = Register::Address<0xffffea18,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RES; 
    }
    namespace SDRAMC_imr{
        using Addr = Register::Address<0xffffea1c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RES; 
    }
    namespace SDRAMC_isr{
        using Addr = Register::Address<0xffffea20,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RES; 
    }
    namespace SDRAMC_mdr{
        using Addr = Register::Address<0xffffea24,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MD; 
    }
}
