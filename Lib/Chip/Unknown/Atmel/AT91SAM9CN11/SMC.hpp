#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SMC_setup0{
        using Addr = Register::Address<0xffffea00,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse0{
        using Addr = Register::Address<0xffffea04,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle0{
        using Addr = Register::Address<0xffffea08,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode0{
        using Addr = Register::Address<0xffffea0c,0xcee0cecc>;
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
        using Addr = Register::Address<0xffffea10,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse1{
        using Addr = Register::Address<0xffffea14,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle1{
        using Addr = Register::Address<0xffffea18,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode1{
        using Addr = Register::Address<0xffffea1c,0xcee0cecc>;
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
        using Addr = Register::Address<0xffffea20,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse2{
        using Addr = Register::Address<0xffffea24,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle2{
        using Addr = Register::Address<0xffffea28,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode2{
        using Addr = Register::Address<0xffffea2c,0xcee0cecc>;
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
        using Addr = Register::Address<0xffffea30,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse3{
        using Addr = Register::Address<0xffffea34,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle3{
        using Addr = Register::Address<0xffffea38,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode3{
        using Addr = Register::Address<0xffffea3c,0xcee0cecc>;
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
        using Addr = Register::Address<0xffffea40,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse4{
        using Addr = Register::Address<0xffffea44,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle4{
        using Addr = Register::Address<0xffffea48,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode4{
        using Addr = Register::Address<0xffffea4c,0xcee0cecc>;
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
        using Addr = Register::Address<0xffffea50,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse5{
        using Addr = Register::Address<0xffffea54,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle5{
        using Addr = Register::Address<0xffffea58,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_mode5{
        using Addr = Register::Address<0xffffea5c,0xcee0cecc>;
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
        using Addr = Register::Address<0xffffeac0,0x00000000>;
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
        using Addr = Register::Address<0xffffeac4,0xffffffff>;
    }
    namespace SMC_delay3{
        using Addr = Register::Address<0xffffeac8,0xffffffff>;
    }
    namespace SMC_delay4{
        using Addr = Register::Address<0xffffeacc,0xffffffff>;
    }
    namespace SMC_delay5{
        using Addr = Register::Address<0xffffead0,0xffffffff>;
    }
    namespace SMC_delay6{
        using Addr = Register::Address<0xffffead4,0xffffffff>;
    }
    namespace SMC_delay7{
        using Addr = Register::Address<0xffffead8,0xffffffff>;
    }
    namespace SMC_delay8{
        using Addr = Register::Address<0xffffeadc,0xffffffff>;
    }
    namespace SMC_wpmr{
        using Addr = Register::Address<0xffffeae4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace SMC_wpsr{
        using Addr = Register::Address<0xffffeae8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
