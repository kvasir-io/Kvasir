#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonertc_cnt{
        using Addr = Register::Address<0x4006a000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RTCCNT; 
    }
    namespace Nonertc_cmp{
        using Addr = Register::Address<0x4006a004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RTCCMP; 
    }
    namespace Nonertc_cr{
        using Addr = Register::Address<0x4006a008,0xffe0f0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTCSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LSIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LSEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CMPCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LSESM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> RPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ROEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ROES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ROWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ROAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ROLF; 
    }
    namespace Nonertc_sr{
        using Addr = Register::Address<0x4006a00c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSECFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OVFLAG; 
    }
    namespace Nonertc_iwen{
        using Addr = Register::Address<0x4006a010,0xfffff8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSECIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OVIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CSECWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CMWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVWEN; 
    }
}
