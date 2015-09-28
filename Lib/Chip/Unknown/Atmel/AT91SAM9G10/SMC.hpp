#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SMC_setup0{
        using Addr = Register::Address<0xffffec00,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse0{
        using Addr = Register::Address<0xffffec04,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle0{
        using Addr = Register::Address<0xffffec08,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode0{
        using Addr = Register::Address<0xffffec0c,0xcee0cecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PS; 
    }
    namespace SMC_setup1{
        using Addr = Register::Address<0xffffec10,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse1{
        using Addr = Register::Address<0xffffec14,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle1{
        using Addr = Register::Address<0xffffec18,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode1{
        using Addr = Register::Address<0xffffec1c,0xcee0cecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PS; 
    }
    namespace SMC_setup2{
        using Addr = Register::Address<0xffffec20,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse2{
        using Addr = Register::Address<0xffffec24,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle2{
        using Addr = Register::Address<0xffffec28,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode2{
        using Addr = Register::Address<0xffffec2c,0xcee0cecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PS; 
    }
    namespace SMC_setup3{
        using Addr = Register::Address<0xffffec30,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse3{
        using Addr = Register::Address<0xffffec34,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle3{
        using Addr = Register::Address<0xffffec38,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode3{
        using Addr = Register::Address<0xffffec3c,0xcee0cecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PS; 
    }
    namespace SMC_setup4{
        using Addr = Register::Address<0xffffec40,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse4{
        using Addr = Register::Address<0xffffec44,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle4{
        using Addr = Register::Address<0xffffec48,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode4{
        using Addr = Register::Address<0xffffec4c,0xcee0cecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PS; 
    }
    namespace SMC_setup5{
        using Addr = Register::Address<0xffffec50,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse5{
        using Addr = Register::Address<0xffffec54,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle5{
        using Addr = Register::Address<0xffffec58,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode5{
        using Addr = Register::Address<0xffffec5c,0xcee0cecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PS; 
    }
    namespace SMC_setup6{
        using Addr = Register::Address<0xffffec60,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse6{
        using Addr = Register::Address<0xffffec64,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle6{
        using Addr = Register::Address<0xffffec68,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode6{
        using Addr = Register::Address<0xffffec6c,0xcee0cecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PS; 
    }
    namespace SMC_setup7{
        using Addr = Register::Address<0xffffec70,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse7{
        using Addr = Register::Address<0xffffec74,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle7{
        using Addr = Register::Address<0xffffec78,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode7{
        using Addr = Register::Address<0xffffec7c,0xcee0cecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PS; 
    }
}
