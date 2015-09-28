#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneir{
        using Addr = Register::Address<0x40018000,0xfffff8c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PWMMR0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWMMR1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWMMR2INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMMR3INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PWMCAP0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PWMCAP1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PWMMR4INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PWMMR5INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PWMMR6INT; 
    }
    namespace Nonetcr{
        using Addr = Register::Address<0x40018004,0xffffffe4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MDIS; 
    }
    namespace Nonetc{
        using Addr = Register::Address<0x40018008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TC; 
    }
    namespace Nonepr{
        using Addr = Register::Address<0x4001800c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PM; 
    }
    namespace Nonepc{
        using Addr = Register::Address<0x40018010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PC; 
    }
    namespace Nonemcr{
        using Addr = Register::Address<0x40018014,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PWMMR0I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWMMR0R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWMMR0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMMR1I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PWMMR1R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PWMMR1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PWMMR2I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PWMMR2R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PWMMR2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PWMMR3I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PWMMR3R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PWMMR3S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PWMMR4I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PWMMR4R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWMMR4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PWMMR5I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PWMMR5R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PWMMR5S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PWMMR6I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PWMMR6R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PWMMR6S; 
    }
    namespace Nonemr0{
        using Addr = Register::Address<0x40018018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MATCH; 
    }
    namespace Nonemr1{
        using Addr = Register::Address<0x4001801c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MATCH; 
    }
    namespace Nonemr2{
        using Addr = Register::Address<0x40018020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MATCH; 
    }
    namespace Nonemr3{
        using Addr = Register::Address<0x40018024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MATCH; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x40018028,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAP0_R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAP0_F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAP0_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAP1_R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAP1_F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAP1_I; 
    }
    namespace Nonecr0{
        using Addr = Register::Address<0x4001802c,0xffff8183>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWMSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMSEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PWMSEL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PWMSEL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PWMSEL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PWMENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PWMENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PWMENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PWMENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PWMENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWMENA6; 
    }
    namespace Nonecr1{
        using Addr = Register::Address<0x40018030,0xffff8183>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWMSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMSEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PWMSEL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PWMSEL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PWMSEL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PWMENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PWMENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PWMENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PWMENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PWMENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWMENA6; 
    }
    namespace Nonemr4{
        using Addr = Register::Address<0x40018040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MATCH; 
    }
    namespace Nonemr5{
        using Addr = Register::Address<0x40018044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MATCH; 
    }
    namespace Nonemr6{
        using Addr = Register::Address<0x40018048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MATCH; 
    }
    namespace Nonepcr{
        using Addr = Register::Address<0x4001804c,0xffff8183>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWMSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMSEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PWMSEL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PWMSEL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PWMSEL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PWMENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PWMENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PWMENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PWMENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PWMENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWMENA6; 
    }
    namespace Noneler{
        using Addr = Register::Address<0x40018050,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MAT0LATCHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MAT1LATCHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MAT2LATCHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MAT3LATCHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MAT4LATCHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAT5LATCHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MAT6LATCHEN; 
    }
    namespace Nonectcr{
        using Addr = Register::Address<0x40018070,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CIS; 
    }
}
