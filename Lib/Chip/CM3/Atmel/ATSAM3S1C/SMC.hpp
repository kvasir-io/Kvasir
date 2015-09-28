#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SMC_setup0{
        using Addr = Register::Address<0x400e0000,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse0{
        using Addr = Register::Address<0x400e0004,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle0{
        using Addr = Register::Address<0x400e0008,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode0{
        using Addr = Register::Address<0x400e000c,0xcee0ffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PS; 
    }
    namespace SMC_setup1{
        using Addr = Register::Address<0x400e0010,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse1{
        using Addr = Register::Address<0x400e0014,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle1{
        using Addr = Register::Address<0x400e0018,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode1{
        using Addr = Register::Address<0x400e001c,0xcee0ffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PS; 
    }
    namespace SMC_setup2{
        using Addr = Register::Address<0x400e0020,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse2{
        using Addr = Register::Address<0x400e0024,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle2{
        using Addr = Register::Address<0x400e0028,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode2{
        using Addr = Register::Address<0x400e002c,0xcee0ffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PS; 
    }
    namespace SMC_setup3{
        using Addr = Register::Address<0x400e0030,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse3{
        using Addr = Register::Address<0x400e0034,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle3{
        using Addr = Register::Address<0x400e0038,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode3{
        using Addr = Register::Address<0x400e003c,0xcee0ffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PS; 
    }
    namespace SMC_ocms{
        using Addr = Register::Address<0x400e0080,0xfff0fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SMSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CS0SE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CS1SE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CS2SE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CS3SE; 
    }
    namespace SMC_key1{
        using Addr = Register::Address<0x400e0084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEY1; 
    }
    namespace SMC_key2{
        using Addr = Register::Address<0x400e0088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEY2; 
    }
    namespace SMC_wpmr{
        using Addr = Register::Address<0x400e00e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace SMC_wpsr{
        using Addr = Register::Address<0x400e00e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
