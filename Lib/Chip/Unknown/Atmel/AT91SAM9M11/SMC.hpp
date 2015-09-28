#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SMC_setup0{
        using Addr = Register::Address<0xffffe800,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse0{
        using Addr = Register::Address<0xffffe804,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle0{
        using Addr = Register::Address<0xffffe808,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode0{
        using Addr = Register::Address<0xffffe80c,0xcee0cecc>;
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
        using Addr = Register::Address<0xffffe810,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse1{
        using Addr = Register::Address<0xffffe814,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle1{
        using Addr = Register::Address<0xffffe818,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode1{
        using Addr = Register::Address<0xffffe81c,0xcee0cecc>;
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
        using Addr = Register::Address<0xffffe820,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse2{
        using Addr = Register::Address<0xffffe824,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle2{
        using Addr = Register::Address<0xffffe828,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode2{
        using Addr = Register::Address<0xffffe82c,0xcee0cecc>;
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
        using Addr = Register::Address<0xffffe830,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse3{
        using Addr = Register::Address<0xffffe834,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle3{
        using Addr = Register::Address<0xffffe838,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode3{
        using Addr = Register::Address<0xffffe83c,0xcee0cecc>;
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
        using Addr = Register::Address<0xffffe840,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse4{
        using Addr = Register::Address<0xffffe844,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle4{
        using Addr = Register::Address<0xffffe848,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode4{
        using Addr = Register::Address<0xffffe84c,0xcee0cecc>;
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
        using Addr = Register::Address<0xffffe850,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse5{
        using Addr = Register::Address<0xffffe854,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle5{
        using Addr = Register::Address<0xffffe858,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode5{
        using Addr = Register::Address<0xffffe85c,0xcee0cecc>;
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
    namespace SMC_delay1{
        using Addr = Register::Address<0xffffe8c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> Delay1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> Delay2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> Delay3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> Delay4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> Delay5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> Delay6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> Delay7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> Delay8; 
    }
    namespace SMC_delay2{
        using Addr = Register::Address<0xffffe8c4,0xffffffff>;
    }
    namespace SMC_delay3{
        using Addr = Register::Address<0xffffe8c8,0xffffffff>;
    }
    namespace SMC_delay4{
        using Addr = Register::Address<0xffffe8cc,0xffffffff>;
    }
    namespace SMC_delay5{
        using Addr = Register::Address<0xffffe8d0,0xffffffff>;
    }
    namespace SMC_delay6{
        using Addr = Register::Address<0xffffe8d4,0xffffffff>;
    }
    namespace SMC_delay7{
        using Addr = Register::Address<0xffffe8d8,0xffffffff>;
    }
    namespace SMC_delay8{
        using Addr = Register::Address<0xffffe8dc,0xffffffff>;
    }
}
