#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AES_cr{
        using Addr = Register::Address<0xfffc0000,0xfffefefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LOADSEED; 
    }
    namespace AES_mr{
        using Addr = Register::Address<0xfffc0004,0xe008000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CIPHER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PROCDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> KEYSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OPMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CFBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CMTYP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CMTYP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CMTYP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CMTYP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CMTYP5; 
    }
    namespace AES_ier{
        using Addr = Register::Address<0xfffc0010,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace AES_idr{
        using Addr = Register::Address<0xfffc0014,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace AES_imr{
        using Addr = Register::Address<0xfffc0018,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace AES_isr{
        using Addr = Register::Address<0xfffc001c,0xffff0efe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> URAT; 
    }
    namespace AES_keywr0{
        using Addr = Register::Address<0xfffc0020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr1{
        using Addr = Register::Address<0xfffc0024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr2{
        using Addr = Register::Address<0xfffc0028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr3{
        using Addr = Register::Address<0xfffc002c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr4{
        using Addr = Register::Address<0xfffc0030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr5{
        using Addr = Register::Address<0xfffc0034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr6{
        using Addr = Register::Address<0xfffc0038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_keywr7{
        using Addr = Register::Address<0xfffc003c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEYW; 
    }
    namespace AES_idatar0{
        using Addr = Register::Address<0xfffc0040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace AES_idatar1{
        using Addr = Register::Address<0xfffc0044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace AES_idatar2{
        using Addr = Register::Address<0xfffc0048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace AES_idatar3{
        using Addr = Register::Address<0xfffc004c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATA; 
    }
    namespace AES_odatar0{
        using Addr = Register::Address<0xfffc0050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace AES_odatar1{
        using Addr = Register::Address<0xfffc0054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace AES_odatar2{
        using Addr = Register::Address<0xfffc0058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace AES_odatar3{
        using Addr = Register::Address<0xfffc005c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATA; 
    }
    namespace AES_ivr0{
        using Addr = Register::Address<0xfffc0060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IV; 
    }
    namespace AES_ivr1{
        using Addr = Register::Address<0xfffc0064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IV; 
    }
    namespace AES_ivr2{
        using Addr = Register::Address<0xfffc0068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IV; 
    }
    namespace AES_ivr3{
        using Addr = Register::Address<0xfffc006c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IV; 
    }
}
