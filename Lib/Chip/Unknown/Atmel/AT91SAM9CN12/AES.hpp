#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AES_cr{
        using Addr = Register::Address<0xf000c000,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWRST; 
    }
    namespace AES_mr{
        using Addr = Register::Address<0xf000c004,0xff080006>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CIPHER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DUALBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PROCDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> KEYSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OPMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CFBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CKEY; 
    }
    namespace AES_ier{
        using Addr = Register::Address<0xf000c010,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace AES_idr{
        using Addr = Register::Address<0xf000c014,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace AES_imr{
        using Addr = Register::Address<0xf000c018,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace AES_isr{
        using Addr = Register::Address<0xf000c01c,0xffff0efe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> URAT; 
    }
    namespace AES_keywr0{
        using Addr = Register::Address<0xf000c020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr1{
        using Addr = Register::Address<0xf000c024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr2{
        using Addr = Register::Address<0xf000c028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr3{
        using Addr = Register::Address<0xf000c02c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr4{
        using Addr = Register::Address<0xf000c030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr5{
        using Addr = Register::Address<0xf000c034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr6{
        using Addr = Register::Address<0xf000c038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr7{
        using Addr = Register::Address<0xf000c03c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_idatar0{
        using Addr = Register::Address<0xf000c040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace AES_idatar1{
        using Addr = Register::Address<0xf000c044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace AES_idatar2{
        using Addr = Register::Address<0xf000c048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace AES_idatar3{
        using Addr = Register::Address<0xf000c04c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace AES_odatar0{
        using Addr = Register::Address<0xf000c050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace AES_odatar1{
        using Addr = Register::Address<0xf000c054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace AES_odatar2{
        using Addr = Register::Address<0xf000c058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace AES_odatar3{
        using Addr = Register::Address<0xf000c05c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace AES_ivr0{
        using Addr = Register::Address<0xf000c060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IV; 
    }
    namespace AES_ivr1{
        using Addr = Register::Address<0xf000c064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IV; 
    }
    namespace AES_ivr2{
        using Addr = Register::Address<0xf000c068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IV; 
    }
    namespace AES_ivr3{
        using Addr = Register::Address<0xf000c06c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IV; 
    }
}
