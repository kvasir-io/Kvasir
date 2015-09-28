#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MCM_plasc{
        using Addr = Register::Address<0xe0080008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ASC; 
    }
    namespace MCM_plamc{
        using Addr = Register::Address<0xe008000a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AMC; 
    }
    namespace MCM_placr{
        using Addr = Register::Address<0xe008000c,0x88fffdff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRAMUAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SRAMUWP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> SRAMLAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SRAMLWP; 
    }
    namespace MCM_iscr{
        using Addr = Register::Address<0xe0080010,0x60ff60ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FIOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FDZC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FOFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FUFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FIXC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FIDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FIOCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FDZCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FOFCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FUFCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FIXCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FIDCE; 
    }
}
