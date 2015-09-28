#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonebcr1{
        using Addr = Register::Address<0x40015824,0xff04c010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> MCJDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> NODIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SAIBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OutDri; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MONO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SYNCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CKSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LSBFIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> DS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PRTCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
    }
    namespace Nonebcr2{
        using Addr = Register::Address<0x40015828,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> COMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,7)> MUTECN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MUTEVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FFLUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FTH; 
    }
    namespace Nonebfrcr{
        using Addr = Register::Address<0x4001582c,0xfff88000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FSOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FSDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> FSALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FRL; 
    }
    namespace Nonebslotr{
        using Addr = Register::Address<0x40015830,0x0000f020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> SLOTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> NBSLOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SLOTSZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> FBOFF; 
    }
    namespace Nonebim{
        using Addr = Register::Address<0x40015834,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LFSDETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AFSDETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CNRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FREQIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WCKCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUTEDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVRUDRIE; 
    }
    namespace Nonebsr{
        using Addr = Register::Address<0x40015838,0xfff8ff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> FLVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LFSDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AFSDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CNRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WCKCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUTEDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVRUDR; 
    }
    namespace Nonebclrfr{
        using Addr = Register::Address<0x4001583c,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LFSDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAFSDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CNRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WCKCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUTEDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVRUDR; 
    }
    namespace Nonebdr{
        using Addr = Register::Address<0x40015840,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Noneacr1{
        using Addr = Register::Address<0x40015804,0xff04c010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> MCJDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> NODIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SAIAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OutDri; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MONO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SYNCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CKSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LSBFIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> DS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PRTCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
    }
    namespace Noneacr2{
        using Addr = Register::Address<0x40015808,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> COMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,7)> MUTECN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MUTEVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FFLUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FTH; 
    }
    namespace Noneafrcr{
        using Addr = Register::Address<0x4001580c,0xfff88000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FSOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FSDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> FSALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FRL; 
    }
    namespace Noneaslotr{
        using Addr = Register::Address<0x40015810,0x0000f020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> SLOTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> NBSLOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SLOTSZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> FBOFF; 
    }
    namespace Noneaim{
        using Addr = Register::Address<0x40015814,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LFSDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AFSDETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CNRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FREQIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WCKCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUTEDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVRUDRIE; 
    }
    namespace Noneasr{
        using Addr = Register::Address<0x40015818,0xfff8ff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> FLVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LFSDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AFSDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CNRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WCKCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUTEDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVRUDR; 
    }
    namespace Noneaclrfr{
        using Addr = Register::Address<0x4001581c,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LFSDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAFSDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CNRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WCKCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUTEDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVRUDR; 
    }
    namespace Noneadr{
        using Addr = Register::Address<0x40015820,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
}
