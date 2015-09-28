#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneopamp1_cr{
        using Addr = Register::Address<0x40010038,0x00000010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPAMP1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FORCE_VP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> VP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> VM_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCM_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VMS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> VPS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CALON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CALSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,14)> PGA_GAIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USER_TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19)> TRIMOFFSETP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> TRIMOFFSETN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TSTREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OUTCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOCK; 
    }
    namespace Noneopamp2_cr{
        using Addr = Register::Address<0x4001003c,0x00000010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPAMP2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FORCE_VP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> VP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> VM_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCM_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VMS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> VPS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CALON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CAL_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,14)> PGA_GAIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USER_TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19)> TRIMOFFSETP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> TRIMOFFSETN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TSTREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OUTCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOCK; 
    }
    namespace Noneopamp3_cr{
        using Addr = Register::Address<0x40010040,0x00000010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPAMP3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FORCE_VP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> VP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> VM_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCM_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VMS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> VPS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CALON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CALSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,14)> PGA_GAIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USER_TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19)> TRIMOFFSETP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> TRIMOFFSETN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TSTREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OUTCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOCK; 
    }
    namespace Noneopamp4_cr{
        using Addr = Register::Address<0x40010044,0x00000010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPAMP4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FORCE_VP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> VP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> VM_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCM_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VMS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> VPS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CALON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CALSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,14)> PGA_GAIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USER_TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19)> TRIMOFFSETP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> TRIMOFFSETN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TSTREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OUTCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOCK; 
    }
}
