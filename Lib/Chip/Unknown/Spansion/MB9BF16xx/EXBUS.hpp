#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemode0{
        using Addr = Register::Address<0x4003f000,0xffffc400>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MOEXEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MPXCSOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MPXDOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ALEINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MPXMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHRTDOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PAGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WEOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RBMON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WDTH; 
    }
    namespace Nonemode1{
        using Addr = Register::Address<0x4003f004,0xffffffff>;
    }
    namespace Nonemode2{
        using Addr = Register::Address<0x4003f008,0xffffffff>;
    }
    namespace Nonemode3{
        using Addr = Register::Address<0x4003f00c,0xffffffff>;
    }
    namespace Nonemode4{
        using Addr = Register::Address<0x4003f010,0xffffffff>;
    }
    namespace Nonemode5{
        using Addr = Register::Address<0x4003f014,0xffffffff>;
    }
    namespace Nonemode6{
        using Addr = Register::Address<0x4003f018,0xffffffff>;
    }
    namespace Nonemode7{
        using Addr = Register::Address<0x4003f01c,0xffffffff>;
    }
    namespace Nonetim0{
        using Addr = Register::Address<0x4003f020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> WIDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> WWEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> WADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> WACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> RIDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FRADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RACC; 
    }
    namespace Nonetim1{
        using Addr = Register::Address<0x4003f024,0xffffffff>;
    }
    namespace Nonetim2{
        using Addr = Register::Address<0x4003f028,0xffffffff>;
    }
    namespace Nonetim3{
        using Addr = Register::Address<0x4003f02c,0xffffffff>;
    }
    namespace Nonetim4{
        using Addr = Register::Address<0x4003f030,0xffffffff>;
    }
    namespace Nonetim5{
        using Addr = Register::Address<0x4003f034,0xffffffff>;
    }
    namespace Nonetim6{
        using Addr = Register::Address<0x4003f038,0xffffffff>;
    }
    namespace Nonetim7{
        using Addr = Register::Address<0x4003f03c,0xffffffff>;
    }
    namespace Nonearea0{
        using Addr = Register::Address<0x4003f040,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Nonearea1{
        using Addr = Register::Address<0x4003f044,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Nonearea2{
        using Addr = Register::Address<0x4003f048,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Nonearea3{
        using Addr = Register::Address<0x4003f04c,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Nonearea4{
        using Addr = Register::Address<0x4003f050,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Nonearea5{
        using Addr = Register::Address<0x4003f054,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Nonearea6{
        using Addr = Register::Address<0x4003f058,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Nonearea7{
        using Addr = Register::Address<0x4003f05c,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Noneatim0{
        using Addr = Register::Address<0x4003f060,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ALEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ALES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ALC; 
    }
    namespace Noneatim1{
        using Addr = Register::Address<0x4003f064,0xffffffff>;
    }
    namespace Noneatim2{
        using Addr = Register::Address<0x4003f068,0xffffffff>;
    }
    namespace Noneatim3{
        using Addr = Register::Address<0x4003f06c,0xffffffff>;
    }
    namespace Noneatim4{
        using Addr = Register::Address<0x4003f070,0xffffffff>;
    }
    namespace Noneatim5{
        using Addr = Register::Address<0x4003f074,0xffffffff>;
    }
    namespace Noneatim6{
        using Addr = Register::Address<0x4003f078,0xffffffff>;
    }
    namespace Noneatim7{
        using Addr = Register::Address<0x4003f07c,0xffffffff>;
    }
    namespace Nonesmode{
        using Addr = Register::Address<0x4003f100,0xfffe00c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MSDCLKOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> BASEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> RASEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> CASEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ROFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PDON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SDON; 
    }
    namespace Nonereftim{
        using Addr = Register::Address<0x4003f104,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> NREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> REFC; 
    }
    namespace Nonepwrdwn{
        using Addr = Register::Address<0x4003f108,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PDC; 
    }
    namespace Nonesdtim{
        using Addr = Register::Address<0x4003f10c,0xfc00000c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TDPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> TREFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TRCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CL; 
    }
    namespace Nonesdcmd{
        using Addr = Register::Address<0x4003f110,0x7fe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SDCKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SDCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SDCAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SDWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SDAD; 
    }
    namespace Nonememcerr{
        using Addr = Register::Address<0x4003f200,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SDION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SFION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SFER; 
    }
    namespace Nonedclkr{
        using Addr = Register::Address<0x4003f300,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MCLKON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MDIV; 
    }
    namespace Noneest{
        using Addr = Register::Address<0x4003f304,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WERR; 
    }
    namespace Nonewead{
        using Addr = Register::Address<0x4003f308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace Noneesclr{
        using Addr = Register::Address<0x4003f30c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WERRCLR; 
    }
    namespace Noneamode{
        using Addr = Register::Address<0x4003f310,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAEN; 
    }
}
