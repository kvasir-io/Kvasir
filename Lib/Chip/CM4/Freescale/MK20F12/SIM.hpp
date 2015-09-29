#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0x1ff70fff,0,unsigned>;
        ///RAM size
        enum class ramsizeVal {
            v0000=0x00000000,     ///<Undefined
            v0001=0x00000001,     ///<Undefined
            v0010=0x00000002,     ///<Undefined
            v0011=0x00000003,     ///<Undefined
            v0100=0x00000004,     ///<Undefined
            v0101=0x00000005,     ///<Undefined
            v0110=0x00000006,     ///<Undefined
            v0111=0x00000007,     ///<Undefined
            v1000=0x00000008,     ///<Undefined
            v1001=0x00000009,     ///<128 KB
            v1010=0x0000000a,     ///<Undefined
            v1011=0x0000000b,     ///<Undefined
            v1100=0x0000000c,     ///<Undefined
            v1101=0x0000000d,     ///<Undefined
            v1110=0x0000000e,     ///<Undefined
            v1111=0x0000000f,     ///<Undefined
        };
        namespace ramsizeValC{
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0000> v0000{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0001> v0001{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0010> v0010{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0011> v0011{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0100> v0100{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0101> v0101{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0110> v0110{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0111> v0111{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v1000> v1000{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v1001> v1001{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v1010> v1010{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v1011> v1011{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v1100> v1100{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v1101> v1101{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v1110> v1110{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,ramsizeVal> ramsize{}; 
        ///32 kHz oscillator clock select
        enum class osc32kselVal {
            v0=0x00000000,     ///<System oscillator (OSC32KCLK)
            v1=0x00000001,     ///<RTC oscillator
        };
        namespace osc32kselValC{
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v0> v0{};
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,osc32kselVal> osc32ksel{}; 
        ///USB voltage regulator in standby mode during VLPR or VLPW
        enum class usbvstbyVal {
            v0=0x00000000,     ///<USB voltage regulator not in standby during VLPR and VLPW modes.
            v1=0x00000001,     ///<USB voltage regulator in standby during VLPR and VLPW modes.
        };
        namespace usbvstbyValC{
            constexpr MPL::Value<usbvstbyVal,usbvstbyVal::v0> v0{};
            constexpr MPL::Value<usbvstbyVal,usbvstbyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,usbvstbyVal> usbvstby{}; 
        ///USB voltage regulator in standby mode during Stop, VLPS, LLS or VLLS
        enum class usbsstbyVal {
            v0=0x00000000,     ///<USB voltage regulator not in standby during Stop, VLPS, LLS and VLLS modes.
            v1=0x00000001,     ///<USB voltage regulator in standby during Stop, VLPS, LLS and VLLS modes.
        };
        namespace usbsstbyValC{
            constexpr MPL::Value<usbsstbyVal,usbsstbyVal::v0> v0{};
            constexpr MPL::Value<usbsstbyVal,usbsstbyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,usbsstbyVal> usbsstby{}; 
        ///USB voltage regulator enable
        enum class usbregenVal {
            v0=0x00000000,     ///<USB voltage regulator is disabled.
            v1=0x00000001,     ///<USB voltage regulator is enabled
        };
        namespace usbregenValC{
            constexpr MPL::Value<usbregenVal,usbregenVal::v0> v0{};
            constexpr MPL::Value<usbregenVal,usbregenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,usbregenVal> usbregen{}; 
    }
    namespace SimSopt1cfg{    ///<SOPT1 Configuration Register
        using Addr = Register::Address<0x40047004,0xf8ffffff,0,unsigned>;
        ///USB voltage regulator enable write enable
        enum class urweVal {
            v0=0x00000000,     ///<SOPT1[USBREGEN] cannot be written.
            v1=0x00000001,     ///<SOPT1[USBREGEN] can be written.
        };
        namespace urweValC{
            constexpr MPL::Value<urweVal,urweVal::v0> v0{};
            constexpr MPL::Value<urweVal,urweVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,urweVal> urwe{}; 
        ///USB voltage regulator VLP standby write enable
        enum class uvsweVal {
            v0=0x00000000,     ///<SOPT1[USBVSTBY] cannot be written.
            v1=0x00000001,     ///<SOPT1[USBVSTBY] can be written.
        };
        namespace uvsweValC{
            constexpr MPL::Value<uvsweVal,uvsweVal::v0> v0{};
            constexpr MPL::Value<uvsweVal,uvsweVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,uvsweVal> uvswe{}; 
        ///USB voltage regulator stop standby write enable
        enum class ussweVal {
            v0=0x00000000,     ///<SOPT1[USBSSTBY] cannot be written.
            v1=0x00000001,     ///<SOPT1[USBSSTBY] can be written.
        };
        namespace ussweValC{
            constexpr MPL::Value<ussweVal,ussweVal::v0> v0{};
            constexpr MPL::Value<ussweVal,ussweVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ussweVal> usswe{}; 
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0x0f386403,0,unsigned>;
        ///USB HS clock source select
        enum class usbhsrcVal {
            v00=0x00000000,     ///<Bus clock
            v01=0x00000001,     ///<MCGPLL0CLK
            v10=0x00000002,     ///<MCGPLL1CLK
            v11=0x00000003,     ///<OSC0ERCLK
        };
        namespace usbhsrcValC{
            constexpr MPL::Value<usbhsrcVal,usbhsrcVal::v00> v00{};
            constexpr MPL::Value<usbhsrcVal,usbhsrcVal::v01> v01{};
            constexpr MPL::Value<usbhsrcVal,usbhsrcVal::v10> v10{};
            constexpr MPL::Value<usbhsrcVal,usbhsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,usbhsrcVal> usbhsrc{}; 
        ///RTC clock out select
        enum class rtcclkoutselVal {
            v0=0x00000000,     ///<RTC 1 Hz clock drives RTC CLKOUT.
            v1=0x00000001,     ///<RTC 32 kHz oscillator drives RTC CLKOUT.
        };
        namespace rtcclkoutselValC{
            constexpr MPL::Value<rtcclkoutselVal,rtcclkoutselVal::v0> v0{};
            constexpr MPL::Value<rtcclkoutselVal,rtcclkoutselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rtcclkoutselVal> rtcclkoutsel{}; 
        ///Clock out select
        enum class clkoutselVal {
            v000=0x00000000,     ///<FlexBus clock (reset value)
            v010=0x00000002,     ///<Flash ungated clock
            v011=0x00000003,     ///<LPO clock (1 kHz)
            v100=0x00000004,     ///<MCGIRCLK
            v101=0x00000005,     ///<RTC 32 kHz clock
            v110=0x00000006,     ///<OSC0ERCLK
            v111=0x00000007,     ///<OSC1ERCLK
        };
        namespace clkoutselValC{
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v000> v000{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v010> v010{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v011> v011{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v100> v100{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v101> v101{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v110> v110{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,clkoutselVal> clkoutsel{}; 
        ///Flexbus security level
        enum class fbslVal {
            v00=0x00000000,     ///<All off-chip accesses (op code and data) via the FlexBus are disallowed.
            v10=0x00000002,     ///<Off-chip op code accesses are disallowed. Data accesses are allowed.
            v11=0x00000003,     ///<Off-chip op code accesses and data accesses are allowed.
        };
        namespace fbslValC{
            constexpr MPL::Value<fbslVal,fbslVal::v00> v00{};
            constexpr MPL::Value<fbslVal,fbslVal::v10> v10{};
            constexpr MPL::Value<fbslVal,fbslVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,fbslVal> fbsl{}; 
        ///CMT/UART pad drive strength
        enum class cmtuartpadVal {
            v0=0x00000000,     ///<Single-pad drive strength for CMT IRO or UART0_TXD.
            v1=0x00000001,     ///<Dual-pad drive strength for CMT IRO or UART0_TXD.
        };
        namespace cmtuartpadValC{
            constexpr MPL::Value<cmtuartpadVal,cmtuartpadVal::v0> v0{};
            constexpr MPL::Value<cmtuartpadVal,cmtuartpadVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,cmtuartpadVal> cmtuartpad{}; 
        ///Debug trace clock select
        enum class traceclkselVal {
            v0=0x00000000,     ///<MCGCLKOUT
            v1=0x00000001,     ///<Core/system clock
        };
        namespace traceclkselValC{
            constexpr MPL::Value<traceclkselVal,traceclkselVal::v0> v0{};
            constexpr MPL::Value<traceclkselVal,traceclkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,traceclkselVal> traceclksel{}; 
        ///NFC Flash clock select
        enum class nfcClkselVal {
            v0=0x00000000,     ///<Clock divider NFC clock
            v1=0x00000001,     ///<EXTAL1 clock.
        };
        namespace nfcClkselValC{
            constexpr MPL::Value<nfcClkselVal,nfcClkselVal::v0> v0{};
            constexpr MPL::Value<nfcClkselVal,nfcClkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,nfcClkselVal> nfcClksel{}; 
        ///PLL/FLL clock select
        enum class pllfllselVal {
            v00=0x00000000,     ///<MCGFLLCLK
            v01=0x00000001,     ///<MCGPLL0CLK
            v10=0x00000002,     ///<MCGPLL1CLK
            v11=0x00000003,     ///<System Platform clock
        };
        namespace pllfllselValC{
            constexpr MPL::Value<pllfllselVal,pllfllselVal::v00> v00{};
            constexpr MPL::Value<pllfllselVal,pllfllselVal::v01> v01{};
            constexpr MPL::Value<pllfllselVal,pllfllselVal::v10> v10{};
            constexpr MPL::Value<pllfllselVal,pllfllselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pllfllselVal> pllfllsel{}; 
        ///USB FS clock select
        enum class usbfClkselVal {
            v0=0x00000000,     ///<External bypass clock (PTE26)
            v1=0x00000001,     ///<Clock divider USB FS clock
        };
        namespace usbfClkselValC{
            constexpr MPL::Value<usbfClkselVal,usbfClkselVal::v0> v0{};
            constexpr MPL::Value<usbfClkselVal,usbfClkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,usbfClkselVal> usbfClksel{}; 
        ///USB FS clock source select
        enum class usbfsrcVal {
            v00=0x00000000,     ///<MCGPLLCLK/MCGFLLCLK selected by PLLFLLSEL[1:0]
            v01=0x00000001,     ///<MCGPLL0CLK
            v10=0x00000002,     ///<MCGPLL1CLK
            v11=0x00000003,     ///<OSC0ERCLK
        };
        namespace usbfsrcValC{
            constexpr MPL::Value<usbfsrcVal,usbfsrcVal::v00> v00{};
            constexpr MPL::Value<usbfsrcVal,usbfsrcVal::v01> v01{};
            constexpr MPL::Value<usbfsrcVal,usbfsrcVal::v10> v10{};
            constexpr MPL::Value<usbfsrcVal,usbfsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,usbfsrcVal> usbfsrc{}; 
        ///ESDHC perclk source select
        enum class esdhcsrcVal {
            v00=0x00000000,     ///<Core/system clock
            v01=0x00000001,     ///<MCGPLLCLK/MCGFLLCLK selected by PLLFLLSEL[1:0]
            v10=0x00000002,     ///<OSC0ERCLK
            v11=0x00000003,     ///<External bypass clock (PTD11)
        };
        namespace esdhcsrcValC{
            constexpr MPL::Value<esdhcsrcVal,esdhcsrcVal::v00> v00{};
            constexpr MPL::Value<esdhcsrcVal,esdhcsrcVal::v01> v01{};
            constexpr MPL::Value<esdhcsrcVal,esdhcsrcVal::v10> v10{};
            constexpr MPL::Value<esdhcsrcVal,esdhcsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,esdhcsrcVal> esdhcsrc{}; 
        ///NFC Flash clock source select
        enum class nfcsrcVal {
            v00=0x00000000,     ///<Bus clock
            v01=0x00000001,     ///<MCGPLL0CLK
            v10=0x00000002,     ///<MCGPLL1CLK
            v11=0x00000003,     ///<OSC0ERCLK
        };
        namespace nfcsrcValC{
            constexpr MPL::Value<nfcsrcVal,nfcsrcVal::v00> v00{};
            constexpr MPL::Value<nfcsrcVal,nfcsrcVal::v01> v01{};
            constexpr MPL::Value<nfcsrcVal,nfcsrcVal::v10> v10{};
            constexpr MPL::Value<nfcsrcVal,nfcsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,nfcsrcVal> nfcsrc{}; 
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0x00c3eee0,0,unsigned>;
        ///FlexTimer 0 Fault 0 Select
        enum class ftm0flt0Val {
            v0=0x00000000,     ///<FTM0_FLT0 drives FTM 0 fault 0.
            v1=0x00000001,     ///<CMP0 OUT drives FTM 0 fault 0.
        };
        namespace ftm0flt0ValC{
            constexpr MPL::Value<ftm0flt0Val,ftm0flt0Val::v0> v0{};
            constexpr MPL::Value<ftm0flt0Val,ftm0flt0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ftm0flt0Val> ftm0flt0{}; 
        ///FlexTimer 0 Fault 1 Select
        enum class ftm0flt1Val {
            v0=0x00000000,     ///<FTM0_FLT1 drives FTM 0 fault 1.
            v1=0x00000001,     ///<CMP1 OUT drives FTM 0 fault 1.
        };
        namespace ftm0flt1ValC{
            constexpr MPL::Value<ftm0flt1Val,ftm0flt1Val::v0> v0{};
            constexpr MPL::Value<ftm0flt1Val,ftm0flt1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ftm0flt1Val> ftm0flt1{}; 
        ///FlexTimer 0 Fault 2 Select
        enum class ftm0flt2Val {
            v0=0x00000000,     ///<FTM0_FLT2 drives FTM 0 fault 2.
            v1=0x00000001,     ///<CMP2 OUT drives FTM 0 fault 2.
        };
        namespace ftm0flt2ValC{
            constexpr MPL::Value<ftm0flt2Val,ftm0flt2Val::v0> v0{};
            constexpr MPL::Value<ftm0flt2Val,ftm0flt2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ftm0flt2Val> ftm0flt2{}; 
        ///FlexTimer 0 Fault 3 Select.
        enum class ftm0flt3Val {
            v0=0x00000000,     ///<FTM0_FLT3 drives FTM 0 fault 3.
            v1=0x00000001,     ///<CMP0 OUT drives FTM 0 fault 3.
        };
        namespace ftm0flt3ValC{
            constexpr MPL::Value<ftm0flt3Val,ftm0flt3Val::v0> v0{};
            constexpr MPL::Value<ftm0flt3Val,ftm0flt3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ftm0flt3Val> ftm0flt3{}; 
        ///FlexTimer 1 Fault 0 Select
        enum class ftm1flt0Val {
            v0=0x00000000,     ///<FTM1_FLT0 drives FTM 1 fault 0.
            v1=0x00000001,     ///<CMP0 OUT drives FTM 1 fault 0.
        };
        namespace ftm1flt0ValC{
            constexpr MPL::Value<ftm1flt0Val,ftm1flt0Val::v0> v0{};
            constexpr MPL::Value<ftm1flt0Val,ftm1flt0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ftm1flt0Val> ftm1flt0{}; 
        ///FlexTimer 2 Fault 0 Select
        enum class ftm2flt0Val {
            v0=0x00000000,     ///<FTM2_FLT0 drives FTM 2 fault 0.
            v1=0x00000001,     ///<CMP0 OUT drives FTM 2 fault 0.
        };
        namespace ftm2flt0ValC{
            constexpr MPL::Value<ftm2flt0Val,ftm2flt0Val::v0> v0{};
            constexpr MPL::Value<ftm2flt0Val,ftm2flt0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ftm2flt0Val> ftm2flt0{}; 
        ///FlexTimer 3 Fault 0 Select.
        enum class ftm3flt0Val {
            v0=0x00000000,     ///<FTM3_FLT0 drives FTM 2 fault 0.
            v1=0x00000001,     ///<CMP0 OUT drives FTM 2 fault 0.
        };
        namespace ftm3flt0ValC{
            constexpr MPL::Value<ftm3flt0Val,ftm3flt0Val::v0> v0{};
            constexpr MPL::Value<ftm3flt0Val,ftm3flt0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ftm3flt0Val> ftm3flt0{}; 
        ///FlexTimer 1 channel 0 input capture source select
        enum class ftm1ch0srcVal {
            v00=0x00000000,     ///<FTM1_CH0 pin
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<USB SOF trigger
        };
        namespace ftm1ch0srcValC{
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v00> v00{};
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v01> v01{};
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v10> v10{};
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,ftm1ch0srcVal> ftm1ch0src{}; 
        ///FlexTimer 2 channel 0 input capture source select
        enum class ftm2ch0srcVal {
            v00=0x00000000,     ///<FTM2_CH0 pin
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
        };
        namespace ftm2ch0srcValC{
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v00> v00{};
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v01> v01{};
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,ftm2ch0srcVal> ftm2ch0src{}; 
        ///FlexTimer 0 external clock pin select
        enum class ftm0clkselVal {
            v0=0x00000000,     ///<FTM0 external clock driven by FTM CLKIN0 pin
            v1=0x00000001,     ///<FTM0 external clock driven by FTM CLKIN1 pin.
        };
        namespace ftm0clkselValC{
            constexpr MPL::Value<ftm0clkselVal,ftm0clkselVal::v0> v0{};
            constexpr MPL::Value<ftm0clkselVal,ftm0clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ftm0clkselVal> ftm0clksel{}; 
        ///FlexTimer 1 external clock pin select
        enum class ftm1clkselVal {
            v0=0x00000000,     ///<FTM1 external clock driven by FTM CLKIN0 pin.
            v1=0x00000001,     ///<FTM1 external clock driven by FTM CLKIN1 pin.
        };
        namespace ftm1clkselValC{
            constexpr MPL::Value<ftm1clkselVal,ftm1clkselVal::v0> v0{};
            constexpr MPL::Value<ftm1clkselVal,ftm1clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ftm1clkselVal> ftm1clksel{}; 
        ///FlexTimer 2 external clock pin select
        enum class ftm2clkselVal {
            v0=0x00000000,     ///<FTM2 external clock driven by FTM CLKIN0 pin.
            v1=0x00000001,     ///<FTM2 external clock driven by FTM CLKIN1 pin.
        };
        namespace ftm2clkselValC{
            constexpr MPL::Value<ftm2clkselVal,ftm2clkselVal::v0> v0{};
            constexpr MPL::Value<ftm2clkselVal,ftm2clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ftm2clkselVal> ftm2clksel{}; 
        ///FlexTimer 3 external clock pin select
        enum class ftm3clkselVal {
            v0=0x00000000,     ///<FTM3 external clock driven by FTM CLKIN0 pin.
            v1=0x00000001,     ///<FTM3 external clock driven by FTM CLKIN1 pin .
        };
        namespace ftm3clkselValC{
            constexpr MPL::Value<ftm3clkselVal,ftm3clkselVal::v0> v0{};
            constexpr MPL::Value<ftm3clkselVal,ftm3clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ftm3clkselVal> ftm3clksel{}; 
        ///FlexTimer 0 hardware trigger 0 source select
        enum class ftm0trg0srcVal {
            v0=0x00000000,     ///<CMP0 OUT drives FTM0 hardware trigger 0.
            v1=0x00000001,     ///<FTM1 channel match trigger drives FTM0 hardware trigger 0.
        };
        namespace ftm0trg0srcValC{
            constexpr MPL::Value<ftm0trg0srcVal,ftm0trg0srcVal::v0> v0{};
            constexpr MPL::Value<ftm0trg0srcVal,ftm0trg0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ftm0trg0srcVal> ftm0trg0src{}; 
        ///FlexTimer 0 hardware trigger 1 source select
        enum class ftm0trg1srcVal {
            v0=0x00000000,     ///<PDB output trigger 1 drives FTM0 hardware trigger 1.
            v1=0x00000001,     ///<FTM2 channel match trigger drives FTM0 hardware trigger 1.
        };
        namespace ftm0trg1srcValC{
            constexpr MPL::Value<ftm0trg1srcVal,ftm0trg1srcVal::v0> v0{};
            constexpr MPL::Value<ftm0trg1srcVal,ftm0trg1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ftm0trg1srcVal> ftm0trg1src{}; 
        ///FlexTimer 3 hardware trigger 0 source select
        enum class ftm3trg0srcVal {
            v0=0x00000000,     ///<CMP3 OUT drives FTM3 hardware trigger 0.
            v1=0x00000001,     ///<FTM1 channel match trigger drives FTM3 hardware trigger 0.
        };
        namespace ftm3trg0srcValC{
            constexpr MPL::Value<ftm3trg0srcVal,ftm3trg0srcVal::v0> v0{};
            constexpr MPL::Value<ftm3trg0srcVal,ftm3trg0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ftm3trg0srcVal> ftm3trg0src{}; 
        ///FlexTimer 3 hardware trigger 1 source select
        enum class ftm3trg1srcVal {
            v0=0x00000000,     ///<PDB output trigger 3 drives FTM3 hardware trigger 1.
            v1=0x00000001,     ///<FTM2 channel match trigger drives FTM3 hardware trigger 1.
        };
        namespace ftm3trg1srcValC{
            constexpr MPL::Value<ftm3trg1srcVal,ftm3trg1srcVal::v0> v0{};
            constexpr MPL::Value<ftm3trg1srcVal,ftm3trg1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ftm3trg1srcVal> ftm3trg1src{}; 
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xffffff00,0,unsigned>;
        ///UART0 transmit data source select
        enum class uart0txsrcVal {
            v00=0x00000000,     ///<UART0_TX pin
            v01=0x00000001,     ///<UART0_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART0_TX pin modulated with FTM2 channel 0 output
        };
        namespace uart0txsrcValC{
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v00> v00{};
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v01> v01{};
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,uart0txsrcVal> uart0txsrc{}; 
        ///UART0 receive data source select
        enum class uart0rxsrcVal {
            v00=0x00000000,     ///<UART0_RX pin
            v01=0x00000001,     ///<CMP0
            v10=0x00000002,     ///<CMP1
        };
        namespace uart0rxsrcValC{
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v00> v00{};
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v01> v01{};
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,uart0rxsrcVal> uart0rxsrc{}; 
        ///UART1 transmit data source select
        enum class uart1txsrcVal {
            v00=0x00000000,     ///<UART1_TX pin
            v01=0x00000001,     ///<UART1_TX pin modulated with FTM1 channel 0 Output
            v10=0x00000002,     ///<UART1_TX pin modulated with FTM2 channel 0 Output
        };
        namespace uart1txsrcValC{
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v00> v00{};
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v01> v01{};
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,uart1txsrcVal> uart1txsrc{}; 
        ///UART1 receive data source select
        enum class uart1rxsrcVal {
            v00=0x00000000,     ///<UART1_RX pin
            v01=0x00000001,     ///<CMP0
            v10=0x00000002,     ///<CMP1
        };
        namespace uart1rxsrcValC{
            constexpr MPL::Value<uart1rxsrcVal,uart1rxsrcVal::v00> v00{};
            constexpr MPL::Value<uart1rxsrcVal,uart1rxsrcVal::v01> v01{};
            constexpr MPL::Value<uart1rxsrcVal,uart1rxsrcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,uart1rxsrcVal> uart1rxsrc{}; 
    }
    namespace SimSopt6{    ///<System Options Register 6
        using Addr = Register::Address<0x40048014,0xfff00000,0,unsigned>;
        ///MCC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcc{}; 
        ///PCR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pcr{}; 
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0x60606060,0,unsigned>;
        ///ADC0 trigger select
        enum class adc0trgselVal {
            v0000=0x00000000,     ///<External trigger
            v0001=0x00000001,     ///<High speed comparator 0 asynchronous interrupt
            v0010=0x00000002,     ///<High speed comparator 1 asynchronous interrupt
            v0011=0x00000003,     ///<High speed comparator 2 asynchronous interrupt
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<Low-power timer trigger
            v1111=0x0000000f,     ///<High speed comparator 3 asynchronous interrupt
        };
        namespace adc0trgselValC{
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0000> v0000{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0001> v0001{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0010> v0010{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0011> v0011{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0100> v0100{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0101> v0101{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0110> v0110{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0111> v0111{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1000> v1000{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1001> v1001{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1010> v1010{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1011> v1011{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1100> v1100{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1101> v1101{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1110> v1110{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,adc0trgselVal> adc0trgsel{}; 
        ///ADC0 pre-trigger select
        enum class adc0pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A selected for ADC0.
            v1=0x00000001,     ///<Pre-trigger B selected for ADC0.
        };
        namespace adc0pretrgselValC{
            constexpr MPL::Value<adc0pretrgselVal,adc0pretrgselVal::v0> v0{};
            constexpr MPL::Value<adc0pretrgselVal,adc0pretrgselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adc0pretrgselVal> adc0pretrgsel{}; 
        ///ADC0 alternate trigger enable
        enum class adc0alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC0.
            v1=0x00000001,     ///<Alternate trigger selected for ADC0.
        };
        namespace adc0alttrgenValC{
            constexpr MPL::Value<adc0alttrgenVal,adc0alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc0alttrgenVal,adc0alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,adc0alttrgenVal> adc0alttrgen{}; 
        ///ADC1 trigger select
        enum class adc1trgselVal {
            v0000=0x00000000,     ///<External trigger
            v0001=0x00000001,     ///<High speed comparator 0 asynchronous interrupt
            v0010=0x00000002,     ///<High speed comparator 1 asynchronous interrupt
            v0011=0x00000003,     ///<High speed comparator 2 asynchronous interrupt
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<Low-power timer trigger
            v1111=0x0000000f,     ///<High speed comparator 3 asynchronous interrupt
        };
        namespace adc1trgselValC{
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0000> v0000{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0001> v0001{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0010> v0010{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0011> v0011{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0100> v0100{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0101> v0101{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0110> v0110{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0111> v0111{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1000> v1000{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1001> v1001{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1010> v1010{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1011> v1011{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1100> v1100{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1101> v1101{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1110> v1110{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,adc1trgselVal> adc1trgsel{}; 
        ///ADC1 pre-trigger select
        enum class adc1pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A selected for ADC1.
            v1=0x00000001,     ///<Pre-trigger B selected for ADC1.
        };
        namespace adc1pretrgselValC{
            constexpr MPL::Value<adc1pretrgselVal,adc1pretrgselVal::v0> v0{};
            constexpr MPL::Value<adc1pretrgselVal,adc1pretrgselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,adc1pretrgselVal> adc1pretrgsel{}; 
        ///ADC1 alternate trigger enable
        enum class adc1alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC1.
            v1=0x00000001,     ///<Alternate trigger selected for ADC1.
        };
        namespace adc1alttrgenValC{
            constexpr MPL::Value<adc1alttrgenVal,adc1alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc1alttrgenVal,adc1alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,adc1alttrgenVal> adc1alttrgen{}; 
        ///ADC2 trigger select
        enum class adc2trgselVal {
            v0000=0x00000000,     ///<External trigger
            v0001=0x00000001,     ///<High speed comparator 0 asynchronous interrupt
            v0010=0x00000002,     ///<High speed comparator 1 asynchronous interrupt
            v0011=0x00000003,     ///<High speed comparator 2 asynchronous interrupt
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<Low-power timer trigger
            v1111=0x0000000f,     ///<High speed comparator 3 asynchronous interrupt
        };
        namespace adc2trgselValC{
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0000> v0000{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0001> v0001{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0010> v0010{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0011> v0011{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0100> v0100{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0101> v0101{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0110> v0110{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0111> v0111{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1000> v1000{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1001> v1001{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1010> v1010{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1011> v1011{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1100> v1100{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1101> v1101{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1110> v1110{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,adc2trgselVal> adc2trgsel{}; 
        ///ADC2 pre-trigger select
        enum class adc2pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A selected for ADC2.
            v1=0x00000001,     ///<Pre-trigger B selected for ADC2.
        };
        namespace adc2pretrgselValC{
            constexpr MPL::Value<adc2pretrgselVal,adc2pretrgselVal::v0> v0{};
            constexpr MPL::Value<adc2pretrgselVal,adc2pretrgselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,adc2pretrgselVal> adc2pretrgsel{}; 
        ///ADC2 alternate trigger enable
        enum class adc2alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC2.
            v1=0x00000001,     ///<Alternate trigger selected for ADC2.
        };
        namespace adc2alttrgenValC{
            constexpr MPL::Value<adc2alttrgenVal,adc2alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc2alttrgenVal,adc2alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,adc2alttrgenVal> adc2alttrgen{}; 
        ///ADC3 trigger select
        enum class adc3trgselVal {
            v0000=0x00000000,     ///<External trigger
            v0001=0x00000001,     ///<High speed comparator 0 asynchronous interrupt
            v0010=0x00000002,     ///<High speed comparator 1 asynchronous interrupt
            v0011=0x00000003,     ///<High speed comparator 2 asynchronous interrupt
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<Low-power timer trigger
            v1111=0x0000000f,     ///<High speed comparator 3 asynchronous interrupt
        };
        namespace adc3trgselValC{
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0000> v0000{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0001> v0001{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0010> v0010{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0011> v0011{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0100> v0100{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0101> v0101{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0110> v0110{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0111> v0111{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1000> v1000{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1001> v1001{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1010> v1010{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1011> v1011{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1100> v1100{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1101> v1101{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1110> v1110{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,adc3trgselVal> adc3trgsel{}; 
        ///ADC3 pre-trigger select
        enum class adc3pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A selected for ADC3.
            v1=0x00000001,     ///<Pre-trigger B selected for ADC3.
        };
        namespace adc3pretrgselValC{
            constexpr MPL::Value<adc3pretrgselVal,adc3pretrgselVal::v0> v0{};
            constexpr MPL::Value<adc3pretrgselVal,adc3pretrgselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,adc3pretrgselVal> adc3pretrgsel{}; 
        ///ADC3 alternate trigger enable
        enum class adc3alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC3.
            v1=0x00000001,     ///<Alternate trigger selected for ADC3.
        };
        namespace adc3alttrgenValC{
            constexpr MPL::Value<adc3alttrgenVal,adc3alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc3alttrgenVal,adc3alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,adc3alttrgenVal> adc3alttrgen{}; 
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0xffff0f80,0,unsigned>;
        ///Pincount identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pinid{}; 
        ///Kinetis family identification
        enum class famidVal {
            v000=0x00000000,     ///<K10
            v001=0x00000001,     ///<K20
            v010=0x00000002,     ///<K61
            v100=0x00000004,     ///<K60
            v101=0x00000005,     ///<K70
        };
        namespace famidValC{
            constexpr MPL::Value<famidVal,famidVal::v000> v000{};
            constexpr MPL::Value<famidVal,famidVal::v001> v001{};
            constexpr MPL::Value<famidVal,famidVal::v010> v010{};
            constexpr MPL::Value<famidVal,famidVal::v100> v100{};
            constexpr MPL::Value<famidVal,famidVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,famidVal> famid{}; 
        ///Device revision number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
    }
    namespace SimScgc1{    ///<System Clock Gating Control Register 1
        using Addr = Register::Address<0x40048028,0xfffff3df,0,unsigned>;
        ///OSC1 clock gate control
        enum class osc1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace osc1ValC{
            constexpr MPL::Value<osc1Val,osc1Val::v0> v0{};
            constexpr MPL::Value<osc1Val,osc1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,osc1Val> osc1{}; 
        ///UART4 clock gate control
        enum class uart4Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace uart4ValC{
            constexpr MPL::Value<uart4Val,uart4Val::v0> v0{};
            constexpr MPL::Value<uart4Val,uart4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,uart4Val> uart4{}; 
        ///UART5 clock gate control
        enum class uart5Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace uart5ValC{
            constexpr MPL::Value<uart5Val,uart5Val::v0> v0{};
            constexpr MPL::Value<uart5Val,uart5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,uart5Val> uart5{}; 
    }
    namespace SimScgc2{    ///<System Clock Gating Control Register 2
        using Addr = Register::Address<0x4004802c,0xffffcffe,0,unsigned>;
        ///ENET clock gate control
        enum class enetVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace enetValC{
            constexpr MPL::Value<enetVal,enetVal::v0> v0{};
            constexpr MPL::Value<enetVal,enetVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enetVal> enet{}; 
        ///12BDAC0 clock gate control
        enum class dac0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace dac0ValC{
            constexpr MPL::Value<dac0Val,dac0Val::v0> v0{};
            constexpr MPL::Value<dac0Val,dac0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dac0Val> dac0{}; 
        ///12BDAC1 clock gate control
        enum class dac1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace dac1ValC{
            constexpr MPL::Value<dac1Val,dac1Val::v0> v0{};
            constexpr MPL::Value<dac1Val,dac1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dac1Val> dac1{}; 
    }
    namespace SimScgc3{    ///<System Clock Gating Control Register 3
        using Addr = Register::Address<0x40048030,0xe4fd6eee,0,unsigned>;
        ///RNGA clock gate control
        enum class rngaVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace rngaValC{
            constexpr MPL::Value<rngaVal,rngaVal::v0> v0{};
            constexpr MPL::Value<rngaVal,rngaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rngaVal> rnga{}; 
        ///FlexCAN1 clock gate control
        enum class flexcan1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace flexcan1ValC{
            constexpr MPL::Value<flexcan1Val,flexcan1Val::v0> v0{};
            constexpr MPL::Value<flexcan1Val,flexcan1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,flexcan1Val> flexcan1{}; 
        ///NFC clock gate control
        enum class nfcVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace nfcValC{
            constexpr MPL::Value<nfcVal,nfcVal::v0> v0{};
            constexpr MPL::Value<nfcVal,nfcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,nfcVal> nfc{}; 
        ///DSPI2 clock gate control
        enum class dspi2Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace dspi2ValC{
            constexpr MPL::Value<dspi2Val,dspi2Val::v0> v0{};
            constexpr MPL::Value<dspi2Val,dspi2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dspi2Val> dspi2{}; 
        ///SAI1 clock gate control
        enum class sai1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace sai1ValC{
            constexpr MPL::Value<sai1Val,sai1Val::v0> v0{};
            constexpr MPL::Value<sai1Val,sai1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,sai1Val> sai1{}; 
        ///ESDHC clock gate control
        enum class esdhcVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace esdhcValC{
            constexpr MPL::Value<esdhcVal,esdhcVal::v0> v0{};
            constexpr MPL::Value<esdhcVal,esdhcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,esdhcVal> esdhc{}; 
        ///FTM2 clock gate control
        enum class ftm2Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace ftm2ValC{
            constexpr MPL::Value<ftm2Val,ftm2Val::v0> v0{};
            constexpr MPL::Value<ftm2Val,ftm2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ftm2Val> ftm2{}; 
        ///FTM3 clock gate control
        enum class ftm3Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace ftm3ValC{
            constexpr MPL::Value<ftm3Val,ftm3Val::v0> v0{};
            constexpr MPL::Value<ftm3Val,ftm3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ftm3Val> ftm3{}; 
        ///ADC1 clock gate control
        enum class adc1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace adc1ValC{
            constexpr MPL::Value<adc1Val,adc1Val::v0> v0{};
            constexpr MPL::Value<adc1Val,adc1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,adc1Val> adc1{}; 
        ///ADC3 clock gate control
        enum class adc3Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace adc3ValC{
            constexpr MPL::Value<adc3Val,adc3Val::v0> v0{};
            constexpr MPL::Value<adc3Val,adc3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,adc3Val> adc3{}; 
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xefe3c339,0,unsigned>;
        ///EWM clock gate control
        enum class ewmVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace ewmValC{
            constexpr MPL::Value<ewmVal,ewmVal::v0> v0{};
            constexpr MPL::Value<ewmVal,ewmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ewmVal> ewm{}; 
        ///CMT clock gate control
        enum class cmtVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace cmtValC{
            constexpr MPL::Value<cmtVal,cmtVal::v0> v0{};
            constexpr MPL::Value<cmtVal,cmtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cmtVal> cmt{}; 
        ///IIC0 clock gate control
        enum class iic0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace iic0ValC{
            constexpr MPL::Value<iic0Val,iic0Val::v0> v0{};
            constexpr MPL::Value<iic0Val,iic0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,iic0Val> iic0{}; 
        ///IIC1 clock gate control
        enum class iic1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace iic1ValC{
            constexpr MPL::Value<iic1Val,iic1Val::v0> v0{};
            constexpr MPL::Value<iic1Val,iic1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,iic1Val> iic1{}; 
        ///UART0 clock gate control
        enum class uart0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace uart0ValC{
            constexpr MPL::Value<uart0Val,uart0Val::v0> v0{};
            constexpr MPL::Value<uart0Val,uart0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,uart0Val> uart0{}; 
        ///UART1 clock gate control
        enum class uart1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace uart1ValC{
            constexpr MPL::Value<uart1Val,uart1Val::v0> v0{};
            constexpr MPL::Value<uart1Val,uart1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,uart1Val> uart1{}; 
        ///UART2 clock gate control
        enum class uart2Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace uart2ValC{
            constexpr MPL::Value<uart2Val,uart2Val::v0> v0{};
            constexpr MPL::Value<uart2Val,uart2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,uart2Val> uart2{}; 
        ///UART3 clock gate control
        enum class uart3Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace uart3ValC{
            constexpr MPL::Value<uart3Val,uart3Val::v0> v0{};
            constexpr MPL::Value<uart3Val,uart3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,uart3Val> uart3{}; 
        ///USB FS clock gate control
        enum class usbfsVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace usbfsValC{
            constexpr MPL::Value<usbfsVal,usbfsVal::v0> v0{};
            constexpr MPL::Value<usbfsVal,usbfsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,usbfsVal> usbfs{}; 
        ///Comparator clock gate control
        enum class cmpVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace cmpValC{
            constexpr MPL::Value<cmpVal,cmpVal::v0> v0{};
            constexpr MPL::Value<cmpVal,cmpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,cmpVal> cmp{}; 
        ///VREF clock gate control
        enum class vrefVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace vrefValC{
            constexpr MPL::Value<vrefVal,vrefVal::v0> v0{};
            constexpr MPL::Value<vrefVal,vrefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,vrefVal> vref{}; 
        ///LLWU Clock Gate Control
        enum class llwuVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace llwuValC{
            constexpr MPL::Value<llwuVal,llwuVal::v0> v0{};
            constexpr MPL::Value<llwuVal,llwuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,llwuVal> llwu{}; 
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0xffff81dc,0,unsigned>;
        ///LPTMR clock gate control
        enum class lptimerVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace lptimerValC{
            constexpr MPL::Value<lptimerVal,lptimerVal::v0> v0{};
            constexpr MPL::Value<lptimerVal,lptimerVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lptimerVal> lptimer{}; 
        ///Register File Clock Gate Control
        enum class regfileVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace regfileValC{
            constexpr MPL::Value<regfileVal,regfileVal::v0> v0{};
            constexpr MPL::Value<regfileVal,regfileVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,regfileVal> regfile{}; 
        ///TSI clock gate control
        enum class tsiVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace tsiValC{
            constexpr MPL::Value<tsiVal,tsiVal::v0> v0{};
            constexpr MPL::Value<tsiVal,tsiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,tsiVal> tsi{}; 
        ///PORTA clock gate control
        enum class portaVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace portaValC{
            constexpr MPL::Value<portaVal,portaVal::v0> v0{};
            constexpr MPL::Value<portaVal,portaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,portaVal> porta{}; 
        ///PORTB clock gate control
        enum class portbVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace portbValC{
            constexpr MPL::Value<portbVal,portbVal::v0> v0{};
            constexpr MPL::Value<portbVal,portbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,portbVal> portb{}; 
        ///PORTC clock gate control
        enum class portcVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace portcValC{
            constexpr MPL::Value<portcVal,portcVal::v0> v0{};
            constexpr MPL::Value<portcVal,portcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,portcVal> portc{}; 
        ///PORTD clock gate control
        enum class portdVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace portdValC{
            constexpr MPL::Value<portdVal,portdVal::v0> v0{};
            constexpr MPL::Value<portdVal,portdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,portdVal> portd{}; 
        ///PORTE clock gate control
        enum class porteVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace porteValC{
            constexpr MPL::Value<porteVal,porteVal::v0> v0{};
            constexpr MPL::Value<porteVal,porteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,porteVal> porte{}; 
        ///PORTF clock gate control
        enum class portfVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace portfValC{
            constexpr MPL::Value<portfVal,portfVal::v0> v0{};
            constexpr MPL::Value<portfVal,portfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,portfVal> portf{}; 
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0xc40b4fe9,0,unsigned>;
        ///DMAMUX0 clock gate control
        enum class dmamux0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace dmamux0ValC{
            constexpr MPL::Value<dmamux0Val,dmamux0Val::v0> v0{};
            constexpr MPL::Value<dmamux0Val,dmamux0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dmamux0Val> dmamux0{}; 
        ///DMAMUX1 clock gate control
        enum class dmamux1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace dmamux1ValC{
            constexpr MPL::Value<dmamux1Val,dmamux1Val::v0> v0{};
            constexpr MPL::Value<dmamux1Val,dmamux1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dmamux1Val> dmamux1{}; 
        ///FlexCAN0 clock gate control
        enum class flexcan0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace flexcan0ValC{
            constexpr MPL::Value<flexcan0Val,flexcan0Val::v0> v0{};
            constexpr MPL::Value<flexcan0Val,flexcan0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,flexcan0Val> flexcan0{}; 
        ///DSPI0 clock gate control
        enum class dspi0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace dspi0ValC{
            constexpr MPL::Value<dspi0Val,dspi0Val::v0> v0{};
            constexpr MPL::Value<dspi0Val,dspi0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dspi0Val> dspi0{}; 
        ///DSPI1 clock gate control
        enum class dspi1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace dspi1ValC{
            constexpr MPL::Value<dspi1Val,dspi1Val::v0> v0{};
            constexpr MPL::Value<dspi1Val,dspi1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dspi1Val> dspi1{}; 
        ///SAI0 clock gate control
        enum class sai0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace sai0ValC{
            constexpr MPL::Value<sai0Val,sai0Val::v0> v0{};
            constexpr MPL::Value<sai0Val,sai0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,sai0Val> sai0{}; 
        ///CRC clock gate control
        enum class crcVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace crcValC{
            constexpr MPL::Value<crcVal,crcVal::v0> v0{};
            constexpr MPL::Value<crcVal,crcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,crcVal> crc{}; 
        ///USBHS clock gate control
        enum class usbhsVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace usbhsValC{
            constexpr MPL::Value<usbhsVal,usbhsVal::v0> v0{};
            constexpr MPL::Value<usbhsVal,usbhsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,usbhsVal> usbhs{}; 
        ///USB DCD clock gate control
        enum class usbdcdVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace usbdcdValC{
            constexpr MPL::Value<usbdcdVal,usbdcdVal::v0> v0{};
            constexpr MPL::Value<usbdcdVal,usbdcdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,usbdcdVal> usbdcd{}; 
        ///PDB clock gate control
        enum class pdbVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace pdbValC{
            constexpr MPL::Value<pdbVal,pdbVal::v0> v0{};
            constexpr MPL::Value<pdbVal,pdbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,pdbVal> pdb{}; 
        ///PIT clock gate control
        enum class pitVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace pitValC{
            constexpr MPL::Value<pitVal,pitVal::v0> v0{};
            constexpr MPL::Value<pitVal,pitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pitVal> pit{}; 
        ///FTM0 clock gate control
        enum class ftm0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace ftm0ValC{
            constexpr MPL::Value<ftm0Val,ftm0Val::v0> v0{};
            constexpr MPL::Value<ftm0Val,ftm0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ftm0Val> ftm0{}; 
        ///FTM1 clock gate control
        enum class ftm1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace ftm1ValC{
            constexpr MPL::Value<ftm1Val,ftm1Val::v0> v0{};
            constexpr MPL::Value<ftm1Val,ftm1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ftm1Val> ftm1{}; 
        ///ADC0 clock gate control
        enum class adc0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace adc0ValC{
            constexpr MPL::Value<adc0Val,adc0Val::v0> v0{};
            constexpr MPL::Value<adc0Val,adc0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,adc0Val> adc0{}; 
        ///ADC2 clock gate control
        enum class adc2Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace adc2ValC{
            constexpr MPL::Value<adc2Val,adc2Val::v0> v0{};
            constexpr MPL::Value<adc2Val,adc2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,adc2Val> adc2{}; 
        ///RTC clock gate control
        enum class rtcVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace rtcValC{
            constexpr MPL::Value<rtcVal,rtcVal::v0> v0{};
            constexpr MPL::Value<rtcVal,rtcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,rtcVal> rtc{}; 
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x40048040,0xfffffff8,0,unsigned>;
        ///FlexBus controller clock gate control
        enum class flexbusVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace flexbusValC{
            constexpr MPL::Value<flexbusVal,flexbusVal::v0> v0{};
            constexpr MPL::Value<flexbusVal,flexbusVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,flexbusVal> flexbus{}; 
        ///DMA controller clock gate control
        enum class dmaVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace dmaValC{
            constexpr MPL::Value<dmaVal,dmaVal::v0> v0{};
            constexpr MPL::Value<dmaVal,dmaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dmaVal> dma{}; 
        ///MPU clock gate control
        enum class mpuVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        namespace mpuValC{
            constexpr MPL::Value<mpuVal,mpuVal::v0> v0{};
            constexpr MPL::Value<mpuVal,mpuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,mpuVal> mpu{}; 
    }
    namespace SimClkdiv1{    ///<System Clock Divider Register 1
        using Addr = Register::Address<0x40048044,0x0000ffff,0,unsigned>;
        ///Clock 4 output divider value
        enum class outdiv4Val {
            v0000=0x00000000,     ///<Divide-by-1.
            v0001=0x00000001,     ///<Divide-by-2.
            v0010=0x00000002,     ///<Divide-by-3.
            v0011=0x00000003,     ///<Divide-by-4.
            v0100=0x00000004,     ///<Divide-by-5.
            v0101=0x00000005,     ///<Divide-by-6.
            v0110=0x00000006,     ///<Divide-by-7.
            v0111=0x00000007,     ///<Divide-by-8.
            v1000=0x00000008,     ///<Divide-by-9.
            v1001=0x00000009,     ///<Divide-by-10.
            v1010=0x0000000a,     ///<Divide-by-11.
            v1011=0x0000000b,     ///<Divide-by-12.
            v1100=0x0000000c,     ///<Divide-by-13.
            v1101=0x0000000d,     ///<Divide-by-14.
            v1110=0x0000000e,     ///<Divide-by-15.
            v1111=0x0000000f,     ///<Divide-by-16.
        };
        namespace outdiv4ValC{
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v0000> v0000{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v0001> v0001{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v0010> v0010{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v0011> v0011{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v0100> v0100{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v0101> v0101{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v0110> v0110{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v0111> v0111{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v1000> v1000{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v1001> v1001{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v1010> v1010{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v1011> v1011{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v1100> v1100{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v1101> v1101{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v1110> v1110{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,outdiv4Val> outdiv4{}; 
        ///Clock 3 output divider value
        enum class outdiv3Val {
            v0000=0x00000000,     ///<Divide-by-1.
            v0001=0x00000001,     ///<Divide-by-2.
            v0010=0x00000002,     ///<Divide-by-3.
            v0011=0x00000003,     ///<Divide-by-4.
            v0100=0x00000004,     ///<Divide-by-5.
            v0101=0x00000005,     ///<Divide-by-6.
            v0110=0x00000006,     ///<Divide-by-7.
            v0111=0x00000007,     ///<Divide-by-8.
            v1000=0x00000008,     ///<Divide-by-9.
            v1001=0x00000009,     ///<Divide-by-10.
            v1010=0x0000000a,     ///<Divide-by-11.
            v1011=0x0000000b,     ///<Divide-by-12.
            v1100=0x0000000c,     ///<Divide-by-13.
            v1101=0x0000000d,     ///<Divide-by-14.
            v1110=0x0000000e,     ///<Divide-by-15.
            v1111=0x0000000f,     ///<Divide-by-16.
        };
        namespace outdiv3ValC{
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v0000> v0000{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v0001> v0001{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v0010> v0010{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v0011> v0011{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v0100> v0100{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v0101> v0101{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v0110> v0110{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v0111> v0111{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v1000> v1000{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v1001> v1001{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v1010> v1010{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v1011> v1011{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v1100> v1100{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v1101> v1101{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v1110> v1110{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,outdiv3Val> outdiv3{}; 
        ///Clock 2 output divider value
        enum class outdiv2Val {
            v0000=0x00000000,     ///<Divide-by-1.
            v0001=0x00000001,     ///<Divide-by-2.
            v0010=0x00000002,     ///<Divide-by-3.
            v0011=0x00000003,     ///<Divide-by-4.
            v0100=0x00000004,     ///<Divide-by-5.
            v0101=0x00000005,     ///<Divide-by-6.
            v0110=0x00000006,     ///<Divide-by-7.
            v0111=0x00000007,     ///<Divide-by-8.
            v1000=0x00000008,     ///<Divide-by-9.
            v1001=0x00000009,     ///<Divide-by-10.
            v1010=0x0000000a,     ///<Divide-by-11.
            v1011=0x0000000b,     ///<Divide-by-12.
            v1100=0x0000000c,     ///<Divide-by-13.
            v1101=0x0000000d,     ///<Divide-by-14.
            v1110=0x0000000e,     ///<Divide-by-15.
            v1111=0x0000000f,     ///<Divide-by-16.
        };
        namespace outdiv2ValC{
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v0000> v0000{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v0001> v0001{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v0010> v0010{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v0011> v0011{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v0100> v0100{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v0101> v0101{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v0110> v0110{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v0111> v0111{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v1000> v1000{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v1001> v1001{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v1010> v1010{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v1011> v1011{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v1100> v1100{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v1101> v1101{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v1110> v1110{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,outdiv2Val> outdiv2{}; 
        ///Clock 1 output divider value
        enum class outdiv1Val {
            v0000=0x00000000,     ///<Divide-by-1.
            v0001=0x00000001,     ///<Divide-by-2.
            v0010=0x00000002,     ///<Divide-by-3.
            v0011=0x00000003,     ///<Divide-by-4.
            v0100=0x00000004,     ///<Divide-by-5.
            v0101=0x00000005,     ///<Divide-by-6.
            v0110=0x00000006,     ///<Divide-by-7.
            v0111=0x00000007,     ///<Divide-by-8.
            v1000=0x00000008,     ///<Divide-by-9.
            v1001=0x00000009,     ///<Divide-by-10.
            v1010=0x0000000a,     ///<Divide-by-11.
            v1011=0x0000000b,     ///<Divide-by-12.
            v1100=0x0000000c,     ///<Divide-by-13.
            v1101=0x0000000d,     ///<Divide-by-14.
            v1110=0x0000000e,     ///<Divide-by-15.
            v1111=0x0000000f,     ///<Divide-by-16.
        };
        namespace outdiv1ValC{
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v0000> v0000{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v0001> v0001{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v0010> v0010{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v0011> v0011{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v0100> v0100{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v0101> v0101{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v0110> v0110{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v0111> v0111{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v1000> v1000{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v1001> v1001{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v1010> v1010{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v1011> v1011{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v1100> v1100{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v1101> v1101{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v1110> v1110{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,outdiv1Val> outdiv1{}; 
    }
    namespace SimClkdiv2{    ///<System Clock Divider Register 2
        using Addr = Register::Address<0x40048048,0xfffff0f0,0,unsigned>;
        ///USB FS clock divider fraction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbfsfrac{}; 
        ///USB FS clock divider divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> usbfsdiv{}; 
        ///USB HS clock divider fraction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> usbhsfrac{}; 
        ///USB HS clock divider divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> usbhsdiv{}; 
    }
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4004804c,0x00f0f0fe,0,unsigned>;
        ///Disable FTFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ftfdis{}; 
        ///FlexNVM partition
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> depart{}; 
        ///EEPROM size
        enum class eesizeVal {
            v0000=0x00000000,     ///<16 KB
            v0001=0x00000001,     ///<8 KB
            v0010=0x00000002,     ///<4 KB
            v0011=0x00000003,     ///<2 KB
            v0100=0x00000004,     ///<1 KB
            v0101=0x00000005,     ///<512 Bytes
            v0110=0x00000006,     ///<256 Bytes
            v0111=0x00000007,     ///<128 Bytes
            v1000=0x00000008,     ///<64 Bytes
            v1001=0x00000009,     ///<32 Bytes
            v1111=0x0000000f,     ///<0 Bytes
        };
        namespace eesizeValC{
            constexpr MPL::Value<eesizeVal,eesizeVal::v0000> v0000{};
            constexpr MPL::Value<eesizeVal,eesizeVal::v0001> v0001{};
            constexpr MPL::Value<eesizeVal,eesizeVal::v0010> v0010{};
            constexpr MPL::Value<eesizeVal,eesizeVal::v0011> v0011{};
            constexpr MPL::Value<eesizeVal,eesizeVal::v0100> v0100{};
            constexpr MPL::Value<eesizeVal,eesizeVal::v0101> v0101{};
            constexpr MPL::Value<eesizeVal,eesizeVal::v0110> v0110{};
            constexpr MPL::Value<eesizeVal,eesizeVal::v0111> v0111{};
            constexpr MPL::Value<eesizeVal,eesizeVal::v1000> v1000{};
            constexpr MPL::Value<eesizeVal,eesizeVal::v1001> v1001{};
            constexpr MPL::Value<eesizeVal,eesizeVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,eesizeVal> eesize{}; 
        ///Program flash size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> pfsize{}; 
        ///FlexNVM size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> nvmsize{}; 
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0xc0c0ffff,0,unsigned>;
        ///Max address block 2 or 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> maxaddr23{}; 
        ///Max address block 0 or 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> maxaddr01{}; 
    }
    namespace SimUidh{    ///<Unique Identification Register High
        using Addr = Register::Address<0x40048054,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimUidmh{    ///<Unique Identification Register Mid-High
        using Addr = Register::Address<0x40048058,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimUidml{    ///<Unique Identification Register Mid Low
        using Addr = Register::Address<0x4004805c,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimUidl{    ///<Unique Identification Register Low
        using Addr = Register::Address<0x40048060,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimClkdiv4{    ///<System Clock Divider Register 4
        using Addr = Register::Address<0x40048068,0x00fffff0,0,unsigned>;
        ///Trace clock divider fraction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tracefrac{}; 
        ///Trace clock divider divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> tracediv{}; 
        ///NFC clock divider fraction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> nfcfrac{}; 
        ///NFC clock divider divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> nfcdiv{}; 
    }
    namespace SimMcr{    ///<Misc Control Register
        using Addr = Register::Address<0x4004806c,0x1fffffff,0,unsigned>;
        ///PDB Loop Mode
        enum class pdbloopVal {
            v0=0x00000000,     ///<Provides two seperated minor loop, loop for ADC0/1 and loop for ADC2/3D
            v1=0x00000001,     ///<Provides a loop to involve ADC0, ADC1, ADC2 and ADC3.
        };
        namespace pdbloopValC{
            constexpr MPL::Value<pdbloopVal,pdbloopVal::v0> v0{};
            constexpr MPL::Value<pdbloopVal,pdbloopVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,pdbloopVal> pdbloop{}; 
        ///60 MHz ULPI clock (ULPI_CLK) output enable
        enum class ulpiclkobeVal {
            v0=0x00000000,     ///<Internal generated 60MHz ULPI clock is not output to the ULPI_CLK pin.
            v1=0x00000001,     ///<Interanl generated 60MHz ULPI clock provide clock for external ULPI phy.
        };
        namespace ulpiclkobeValC{
            constexpr MPL::Value<ulpiclkobeVal,ulpiclkobeVal::v0> v0{};
            constexpr MPL::Value<ulpiclkobeVal,ulpiclkobeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ulpiclkobeVal> ulpiclkobe{}; 
        ///Trace clock disable.
        enum class traceclkdisVal {
            v0=0x00000000,     ///<Enables trace clock.
            v1=0x00000001,     ///<Disable trace clock.
        };
        namespace traceclkdisValC{
            constexpr MPL::Value<traceclkdisVal,traceclkdisVal::v0> v0{};
            constexpr MPL::Value<traceclkdisVal,traceclkdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,traceclkdisVal> traceclkdis{}; 
    }
}
