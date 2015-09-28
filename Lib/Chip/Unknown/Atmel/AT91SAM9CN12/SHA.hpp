#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SHA_cr{
        using Addr = Register::Address<0xf0014000,0xfffffeee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWRST; 
    }
    namespace SHA_mr{
        using Addr = Register::Address<0xf0014004,0xfffef8ec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PROCDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> ALGO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DUALBUFF; 
    }
    namespace SHA_ier{
        using Addr = Register::Address<0xf0014010,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace SHA_idr{
        using Addr = Register::Address<0xf0014014,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace SHA_imr{
        using Addr = Register::Address<0xf0014018,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace SHA_isr{
        using Addr = Register::Address<0xf001401c,0xffff8efe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> URAT; 
    }
    namespace SHA_idatar0{
        using Addr = Register::Address<0xf0014040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar1{
        using Addr = Register::Address<0xf0014044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar2{
        using Addr = Register::Address<0xf0014048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar3{
        using Addr = Register::Address<0xf001404c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar4{
        using Addr = Register::Address<0xf0014050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar5{
        using Addr = Register::Address<0xf0014054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar6{
        using Addr = Register::Address<0xf0014058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar7{
        using Addr = Register::Address<0xf001405c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar8{
        using Addr = Register::Address<0xf0014060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar9{
        using Addr = Register::Address<0xf0014064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar10{
        using Addr = Register::Address<0xf0014068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar11{
        using Addr = Register::Address<0xf001406c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar12{
        using Addr = Register::Address<0xf0014070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar13{
        using Addr = Register::Address<0xf0014074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar14{
        using Addr = Register::Address<0xf0014078,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_idatar15{
        using Addr = Register::Address<0xf001407c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace SHA_odatar0{
        using Addr = Register::Address<0xf0014080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace SHA_odatar1{
        using Addr = Register::Address<0xf0014084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace SHA_odatar2{
        using Addr = Register::Address<0xf0014088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace SHA_odatar3{
        using Addr = Register::Address<0xf001408c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace SHA_odatar4{
        using Addr = Register::Address<0xf0014090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace SHA_odatar5{
        using Addr = Register::Address<0xf0014094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace SHA_odatar6{
        using Addr = Register::Address<0xf0014098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace SHA_odatar7{
        using Addr = Register::Address<0xf001409c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
}
