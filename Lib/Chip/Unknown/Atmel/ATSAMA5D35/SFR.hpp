#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SFR_ohciicr{
        using Addr = Register::Address<0xf0038010,0xff7fffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RES0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RES1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RES2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ARIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> APPSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> UDPPUDIS; 
    }
    namespace SFR_ohciisr{
        using Addr = Register::Address<0xf0038014,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RIS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RIS2; 
    }
    namespace SFR_ahb{
        using Addr = Register::Address<0xf0038020,0x83ff83ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PFETCH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PFETCH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PFETCH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PFETCH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PFETCH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DLBOPT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DLBOPT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DLBOPT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DLBOPT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DLBOPT14; 
    }
    namespace SFR_bridge{
        using Addr = Register::Address<0xf0038024,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> APBTURBO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AXI2AHBSEL; 
    }
    namespace SFR_secure{
        using Addr = Register::Address<0xf0038028,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ROM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FUSE; 
    }
    namespace SFR_utmicktrim{
        using Addr = Register::Address<0xf0038030,0xfff0fffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> VBG; 
    }
    namespace SFR_utmihstrim{
        using Addr = Register::Address<0xf0038034,0xfff88888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SQUELCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SLOPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SLOPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SLOPE2; 
    }
    namespace SFR_utmifstrim{
        using Addr = Register::Address<0xf0038038,0xff88fc88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RISE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> XCVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> ZN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> ZP; 
    }
    namespace SFR_utmiswap{
        using Addr = Register::Address<0xf003803c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PORT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PORT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PORT2; 
    }
    namespace SFR_ebicfg{
        using Addr = Register::Address<0xf0038040,0xfffee0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DRIVE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PULL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SCH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DRIVE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PULL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BMS; 
    }
}
