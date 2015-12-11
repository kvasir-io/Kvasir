#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0x1ff00fff,0,unsigned>;
        ///RAM size
        enum class RamsizeVal {
            v0001=0x00000001,     ///<8 KB
            v0011=0x00000003,     ///<16 KB
            v0100=0x00000004,     ///<24 KB
            v0101=0x00000005,     ///<32 KB
            v0110=0x00000006,     ///<48 KB
            v0111=0x00000007,     ///<64 KB
            v1000=0x00000008,     ///<96 KB
            v1001=0x00000009,     ///<128 KB
            v1011=0x0000000b,     ///<256 KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,RamsizeVal> ramsize{}; 
        namespace RamsizeValC{
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v1011> v1011{};
        }
        ///32K Oscillator Clock Output
        enum class Osc32koutVal {
            v00=0x00000000,     ///<ERCLK32K is not output.
            v01=0x00000001,     ///<ERCLK32K is output on PTE0.
            v10=0x00000002,     ///<ERCLK32K is output on PTE26.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Osc32koutVal> osc32kout{}; 
        namespace Osc32koutValC{
            constexpr Register::FieldValue<decltype(osc32kout)::Type,Osc32koutVal::v00> v00{};
            constexpr Register::FieldValue<decltype(osc32kout)::Type,Osc32koutVal::v01> v01{};
            constexpr Register::FieldValue<decltype(osc32kout)::Type,Osc32koutVal::v10> v10{};
        }
        ///32K oscillator clock select
        enum class Osc32kselVal {
            v00=0x00000000,     ///<System oscillator (OSC32KCLK)
            v10=0x00000002,     ///<RTC 32.768kHz oscillator
            v11=0x00000003,     ///<LPO 1 kHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Osc32kselVal> osc32ksel{}; 
        namespace Osc32kselValC{
            constexpr Register::FieldValue<decltype(osc32ksel)::Type,Osc32kselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(osc32ksel)::Type,Osc32kselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(osc32ksel)::Type,Osc32kselVal::v11> v11{};
        }
        ///USB voltage regulator in standby mode during VLPR and VLPW modes
        enum class UsbvstbyVal {
            v0=0x00000000,     ///<USB voltage regulator not in standby during VLPR and VLPW modes.
            v1=0x00000001,     ///<USB voltage regulator in standby during VLPR and VLPW modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,UsbvstbyVal> usbvstby{}; 
        namespace UsbvstbyValC{
            constexpr Register::FieldValue<decltype(usbvstby)::Type,UsbvstbyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbvstby)::Type,UsbvstbyVal::v1> v1{};
        }
        ///USB voltage regulator in standby mode during Stop, VLPS, LLS and VLLS modes.
        enum class UsbsstbyVal {
            v0=0x00000000,     ///<USB voltage regulator not in standby during Stop, VLPS, LLS and VLLS modes.
            v1=0x00000001,     ///<USB voltage regulator in standby during Stop, VLPS, LLS and VLLS modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,UsbsstbyVal> usbsstby{}; 
        namespace UsbsstbyValC{
            constexpr Register::FieldValue<decltype(usbsstby)::Type,UsbsstbyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbsstby)::Type,UsbsstbyVal::v1> v1{};
        }
        ///USB voltage regulator enable
        enum class UsbregenVal {
            v0=0x00000000,     ///<USB voltage regulator is disabled.
            v1=0x00000001,     ///<USB voltage regulator is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,UsbregenVal> usbregen{}; 
        namespace UsbregenValC{
            constexpr Register::FieldValue<decltype(usbregen)::Type,UsbregenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbregen)::Type,UsbregenVal::v1> v1{};
        }
    }
    namespace SimSopt1cfg{    ///<SOPT1 Configuration Register
        using Addr = Register::Address<0x40047004,0xf8ffffff,0,unsigned>;
        ///USB voltage regulator enable write enable
        enum class UrweVal {
            v0=0x00000000,     ///<SOPT1 USBREGEN cannot be written.
            v1=0x00000001,     ///<SOPT1 USBREGEN can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,UrweVal> urwe{}; 
        namespace UrweValC{
            constexpr Register::FieldValue<decltype(urwe)::Type,UrweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(urwe)::Type,UrweVal::v1> v1{};
        }
        ///USB voltage regulator VLP standby write enable
        enum class UvsweVal {
            v0=0x00000000,     ///<SOPT1 USBVSTBY cannot be written.
            v1=0x00000001,     ///<SOPT1 USBVSTBY can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,UvsweVal> uvswe{}; 
        namespace UvsweValC{
            constexpr Register::FieldValue<decltype(uvswe)::Type,UvsweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uvswe)::Type,UvsweVal::v1> v1{};
        }
        ///USB voltage regulator stop standby write enable
        enum class UssweVal {
            v0=0x00000000,     ///<SOPT1 USBSSTBY cannot be written.
            v1=0x00000001,     ///<SOPT1 USBSSTBY can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,UssweVal> usswe{}; 
        namespace UssweValC{
            constexpr Register::FieldValue<decltype(usswe)::Type,UssweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usswe)::Type,UssweVal::v1> v1{};
        }
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0xf3f8ec0f,0,unsigned>;
        ///RTC clock out select
        enum class RtcclkoutselVal {
            v0=0x00000000,     ///<RTC 1 Hz clock is output on the RTC_CLKOUT pin.
            v1=0x00000001,     ///<RTC 32.768kHz clock is output on the RTC_CLKOUT pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RtcclkoutselVal> rtcclkoutsel{}; 
        namespace RtcclkoutselValC{
            constexpr Register::FieldValue<decltype(rtcclkoutsel)::Type,RtcclkoutselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtcclkoutsel)::Type,RtcclkoutselVal::v1> v1{};
        }
        ///CLKOUT select
        enum class ClkoutselVal {
            v000=0x00000000,     ///<FlexBus CLKOUT
            v010=0x00000002,     ///<Flash clock
            v011=0x00000003,     ///<LPO clock (1 kHz)
            v100=0x00000004,     ///<MCGIRCLK
            v101=0x00000005,     ///<RTC 32.768kHz clock
            v110=0x00000006,     ///<OSCERCLK0
            v111=0x00000007,     ///<IRC 48 MHz clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,ClkoutselVal> clkoutsel{}; 
        namespace ClkoutselValC{
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v000> v000{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v110> v110{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v111> v111{};
        }
        ///FlexBus security level
        enum class FbslVal {
            v00=0x00000000,     ///<All off-chip accesses (instruction and data) via the FlexBus are disallowed.
            v01=0x00000001,     ///<All off-chip accesses (instruction and data) via the FlexBus are disallowed.
            v10=0x00000002,     ///<Off-chip instruction accesses are disallowed. Data accesses are allowed.
            v11=0x00000003,     ///<Off-chip instruction accesses and data accesses are allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,FbslVal> fbsl{}; 
        namespace FbslValC{
            constexpr Register::FieldValue<decltype(fbsl)::Type,FbslVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fbsl)::Type,FbslVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fbsl)::Type,FbslVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fbsl)::Type,FbslVal::v11> v11{};
        }
        ///Debug trace clock select
        enum class TraceclkselVal {
            v0=0x00000000,     ///<MCGOUTCLK
            v1=0x00000001,     ///<Core/system clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,TraceclkselVal> traceclksel{}; 
        namespace TraceclkselValC{
            constexpr Register::FieldValue<decltype(traceclksel)::Type,TraceclkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(traceclksel)::Type,TraceclkselVal::v1> v1{};
        }
        ///PLL/FLL clock select
        enum class PllfllselVal {
            v00=0x00000000,     ///<MCGFLLCLK clock
            v01=0x00000001,     ///<MCGPLLCLK clock
            v11=0x00000003,     ///<IRC48 MHz clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PllfllselVal> pllfllsel{}; 
        namespace PllfllselValC{
            constexpr Register::FieldValue<decltype(pllfllsel)::Type,PllfllselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pllfllsel)::Type,PllfllselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pllfllsel)::Type,PllfllselVal::v11> v11{};
        }
        ///USB clock source select
        enum class UsbsrcVal {
            v0=0x00000000,     ///<External bypass clock (USB_CLKIN).
            v1=0x00000001,     ///<MCGFLLCLK , or MCGPLLCLK , or IRC48M clock as selected by SOPT2[PLLFLLSEL], and then divided by the USB fractional divider as configured by SIM_CLKDIV2[USBFRAC, USBDIV].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UsbsrcVal> usbsrc{}; 
        namespace UsbsrcValC{
            constexpr Register::FieldValue<decltype(usbsrc)::Type,UsbsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbsrc)::Type,UsbsrcVal::v1> v1{};
        }
        ///LPUART clock source select
        enum class LpuartsrcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<MCGFLLCLK , or MCGPLLCLK , or IRC48M clock as selected by SOPT2[PLLFLLSEL].
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,LpuartsrcVal> lpuartsrc{}; 
        namespace LpuartsrcValC{
            constexpr Register::FieldValue<decltype(lpuartsrc)::Type,LpuartsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lpuartsrc)::Type,LpuartsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lpuartsrc)::Type,LpuartsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(lpuartsrc)::Type,LpuartsrcVal::v11> v11{};
        }
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0x0083eeec,0,unsigned>;
        ///FTM0 Fault 0 Select
        enum class Ftm0flt0Val {
            v0=0x00000000,     ///<FTM0_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ftm0flt0Val> ftm0flt0{}; 
        namespace Ftm0flt0ValC{
            constexpr Register::FieldValue<decltype(ftm0flt0)::Type,Ftm0flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt0)::Type,Ftm0flt0Val::v1> v1{};
        }
        ///FTM0 Fault 1 Select
        enum class Ftm0flt1Val {
            v0=0x00000000,     ///<FTM0_FLT1 pin
            v1=0x00000001,     ///<CMP1 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ftm0flt1Val> ftm0flt1{}; 
        namespace Ftm0flt1ValC{
            constexpr Register::FieldValue<decltype(ftm0flt1)::Type,Ftm0flt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt1)::Type,Ftm0flt1Val::v1> v1{};
        }
        ///FTM1 Fault 0 Select
        enum class Ftm1flt0Val {
            v0=0x00000000,     ///<FTM1_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ftm1flt0Val> ftm1flt0{}; 
        namespace Ftm1flt0ValC{
            constexpr Register::FieldValue<decltype(ftm1flt0)::Type,Ftm1flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1flt0)::Type,Ftm1flt0Val::v1> v1{};
        }
        ///FTM2 Fault 0 Select
        enum class Ftm2flt0Val {
            v0=0x00000000,     ///<FTM2_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ftm2flt0Val> ftm2flt0{}; 
        namespace Ftm2flt0ValC{
            constexpr Register::FieldValue<decltype(ftm2flt0)::Type,Ftm2flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2flt0)::Type,Ftm2flt0Val::v1> v1{};
        }
        ///FTM3 Fault 0 Select
        enum class Ftm3flt0Val {
            v0=0x00000000,     ///<FTM3_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ftm3flt0Val> ftm3flt0{}; 
        namespace Ftm3flt0ValC{
            constexpr Register::FieldValue<decltype(ftm3flt0)::Type,Ftm3flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3flt0)::Type,Ftm3flt0Val::v1> v1{};
        }
        ///FTM1 channel 0 input capture source select
        enum class Ftm1ch0srcVal {
            v00=0x00000000,     ///<FTM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<USB start of frame pulse
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Ftm1ch0srcVal> ftm1ch0src{}; 
        namespace Ftm1ch0srcValC{
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v11> v11{};
        }
        ///FTM2 channel 0 input capture source select
        enum class Ftm2ch0srcVal {
            v00=0x00000000,     ///<FTM2_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Ftm2ch0srcVal> ftm2ch0src{}; 
        namespace Ftm2ch0srcValC{
            constexpr Register::FieldValue<decltype(ftm2ch0src)::Type,Ftm2ch0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm2ch0src)::Type,Ftm2ch0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm2ch0src)::Type,Ftm2ch0srcVal::v10> v10{};
        }
        ///FTM2 channel 1 input capture source select
        enum class Ftm2ch1srcVal {
            v0=0x00000000,     ///<FTM2_CH1 signal
            v1=0x00000001,     ///<Exclusive OR of FTM2_CH1, FTM2_CH0 and FTM1_CH1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ftm2ch1srcVal> ftm2ch1src{}; 
        namespace Ftm2ch1srcValC{
            constexpr Register::FieldValue<decltype(ftm2ch1src)::Type,Ftm2ch1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2ch1src)::Type,Ftm2ch1srcVal::v1> v1{};
        }
        ///FlexTimer 0 External Clock Pin Select
        enum class Ftm0clkselVal {
            v0=0x00000000,     ///<FTM_CLK0 pin
            v1=0x00000001,     ///<FTM_CLK1 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm0clkselVal> ftm0clksel{}; 
        namespace Ftm0clkselValC{
            constexpr Register::FieldValue<decltype(ftm0clksel)::Type,Ftm0clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0clksel)::Type,Ftm0clkselVal::v1> v1{};
        }
        ///FTM1 External Clock Pin Select
        enum class Ftm1clkselVal {
            v0=0x00000000,     ///<FTM_CLK0 pin
            v1=0x00000001,     ///<FTM_CLK1 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ftm1clkselVal> ftm1clksel{}; 
        namespace Ftm1clkselValC{
            constexpr Register::FieldValue<decltype(ftm1clksel)::Type,Ftm1clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1clksel)::Type,Ftm1clkselVal::v1> v1{};
        }
        ///FlexTimer 2 External Clock Pin Select
        enum class Ftm2clkselVal {
            v0=0x00000000,     ///<FTM2 external clock driven by FTM_CLK0 pin.
            v1=0x00000001,     ///<FTM2 external clock driven by FTM_CLK1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ftm2clkselVal> ftm2clksel{}; 
        namespace Ftm2clkselValC{
            constexpr Register::FieldValue<decltype(ftm2clksel)::Type,Ftm2clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2clksel)::Type,Ftm2clkselVal::v1> v1{};
        }
        ///FlexTimer 3 External Clock Pin Select
        enum class Ftm3clkselVal {
            v0=0x00000000,     ///<FTM3 external clock driven by FTM_CLK0 pin.
            v1=0x00000001,     ///<FTM3 external clock driven by FTM_CLK1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ftm3clkselVal> ftm3clksel{}; 
        namespace Ftm3clkselValC{
            constexpr Register::FieldValue<decltype(ftm3clksel)::Type,Ftm3clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3clksel)::Type,Ftm3clkselVal::v1> v1{};
        }
        ///FlexTimer 0 Hardware Trigger 0 Source Select
        enum class Ftm0trg0srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM0 hardware trigger 0
            v1=0x00000001,     ///<FTM1 channel match drives FTM0 hardware trigger 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ftm0trg0srcVal> ftm0trg0src{}; 
        namespace Ftm0trg0srcValC{
            constexpr Register::FieldValue<decltype(ftm0trg0src)::Type,Ftm0trg0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0trg0src)::Type,Ftm0trg0srcVal::v1> v1{};
        }
        ///FlexTimer 0 Hardware Trigger 1 Source Select
        enum class Ftm0trg1srcVal {
            v0=0x00000000,     ///<PDB output trigger 1 drives FTM0 hardware trigger 1
            v1=0x00000001,     ///<FTM2 channel match drives FTM0 hardware trigger 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ftm0trg1srcVal> ftm0trg1src{}; 
        namespace Ftm0trg1srcValC{
            constexpr Register::FieldValue<decltype(ftm0trg1src)::Type,Ftm0trg1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0trg1src)::Type,Ftm0trg1srcVal::v1> v1{};
        }
        ///FlexTimer 3 Hardware Trigger 0 Source Select
        enum class Ftm3trg0srcVal {
            v1=0x00000001,     ///<FTM1 channel match drives FTM3 hardware trigger 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ftm3trg0srcVal> ftm3trg0src{}; 
        namespace Ftm3trg0srcValC{
            constexpr Register::FieldValue<decltype(ftm3trg0src)::Type,Ftm3trg0srcVal::v1> v1{};
        }
        ///FlexTimer 3 Hardware Trigger 1 Source Select
        enum class Ftm3trg1srcVal {
            v1=0x00000001,     ///<FTM2 channel match drives FTM3 hardware trigger 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ftm3trg1srcVal> ftm3trg1src{}; 
        namespace Ftm3trg1srcValC{
            constexpr Register::FieldValue<decltype(ftm3trg1src)::Type,Ftm3trg1srcVal::v1> v1{};
        }
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xfff3ff00,0,unsigned>;
        ///UART 0 transmit data source select
        enum class Uart0txsrcVal {
            v00=0x00000000,     ///<UART0_TX pin
            v01=0x00000001,     ///<UART0_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART0_TX pin modulated with FTM2 channel 0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Uart0txsrcVal> uart0txsrc{}; 
        namespace Uart0txsrcValC{
            constexpr Register::FieldValue<decltype(uart0txsrc)::Type,Uart0txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart0txsrc)::Type,Uart0txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart0txsrc)::Type,Uart0txsrcVal::v10> v10{};
        }
        ///UART 0 receive data source select
        enum class Uart0rxsrcVal {
            v00=0x00000000,     ///<UART0_RX pin
            v01=0x00000001,     ///<CMP0
            v10=0x00000002,     ///<CMP1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Uart0rxsrcVal> uart0rxsrc{}; 
        namespace Uart0rxsrcValC{
            constexpr Register::FieldValue<decltype(uart0rxsrc)::Type,Uart0rxsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart0rxsrc)::Type,Uart0rxsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart0rxsrc)::Type,Uart0rxsrcVal::v10> v10{};
        }
        ///UART 1 transmit data source select
        enum class Uart1txsrcVal {
            v00=0x00000000,     ///<UART1_TX pin
            v01=0x00000001,     ///<UART1_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART1_TX pin modulated with FTM2 channel 0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Uart1txsrcVal> uart1txsrc{}; 
        namespace Uart1txsrcValC{
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v10> v10{};
        }
        ///UART 1 receive data source select
        enum class Uart1rxsrcVal {
            v00=0x00000000,     ///<UART1_RX pin
            v01=0x00000001,     ///<CMP0
            v10=0x00000002,     ///<CMP1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Uart1rxsrcVal> uart1rxsrc{}; 
        namespace Uart1rxsrcValC{
            constexpr Register::FieldValue<decltype(uart1rxsrc)::Type,Uart1rxsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart1rxsrc)::Type,Uart1rxsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart1rxsrc)::Type,Uart1rxsrcVal::v10> v10{};
        }
        ///LPUART0 receive data source select
        enum class Lpuart0rxsrcVal {
            v00=0x00000000,     ///<LPUART0_RX pin
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Lpuart0rxsrcVal> lpuart0rxsrc{}; 
        namespace Lpuart0rxsrcValC{
            constexpr Register::FieldValue<decltype(lpuart0rxsrc)::Type,Lpuart0rxsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lpuart0rxsrc)::Type,Lpuart0rxsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lpuart0rxsrc)::Type,Lpuart0rxsrcVal::v10> v10{};
        }
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xffff6060,0,unsigned>;
        ///ADC0 trigger select
        enum class Adc0trgselVal {
            v0000=0x00000000,     ///<PDB external trigger pin input (PDB0_EXTRG)
            v0001=0x00000001,     ///<High speed comparator 0 output
            v0010=0x00000002,     ///<High speed comparator 1 output
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
            v1110=0x0000000e,     ///<Low-power timer (LPTMR) trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Adc0trgselVal> adc0trgsel{}; 
        namespace Adc0trgselValC{
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1110> v1110{};
        }
        ///ADC0 pretrigger select
        enum class Adc0pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A
            v1=0x00000001,     ///<Pre-trigger B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adc0pretrgselVal> adc0pretrgsel{}; 
        namespace Adc0pretrgselValC{
            constexpr Register::FieldValue<decltype(adc0pretrgsel)::Type,Adc0pretrgselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0pretrgsel)::Type,Adc0pretrgselVal::v1> v1{};
        }
        ///ADC0 alternate trigger enable
        enum class Adc0alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC0.
            v1=0x00000001,     ///<Alternate trigger selected for ADC0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Adc0alttrgenVal> adc0alttrgen{}; 
        namespace Adc0alttrgenValC{
            constexpr Register::FieldValue<decltype(adc0alttrgen)::Type,Adc0alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0alttrgen)::Type,Adc0alttrgenVal::v1> v1{};
        }
        ///ADC1 trigger select
        enum class Adc1trgselVal {
            v0000=0x00000000,     ///<PDB external trigger pin input (PDB0_EXTRG)
            v0001=0x00000001,     ///<High speed comparator 0 output
            v0010=0x00000002,     ///<High speed comparator 1 output
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
            v1110=0x0000000e,     ///<Low-power timer (LPTMR) trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Adc1trgselVal> adc1trgsel{}; 
        namespace Adc1trgselValC{
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1110> v1110{};
        }
        ///ADC1 pre-trigger select
        enum class Adc1pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A selected for ADC1.
            v1=0x00000001,     ///<Pre-trigger B selected for ADC1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Adc1pretrgselVal> adc1pretrgsel{}; 
        namespace Adc1pretrgselValC{
            constexpr Register::FieldValue<decltype(adc1pretrgsel)::Type,Adc1pretrgselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1pretrgsel)::Type,Adc1pretrgselVal::v1> v1{};
        }
        ///ADC1 alternate trigger enable
        enum class Adc1alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC1
            v1=0x00000001,     ///<Alternate trigger selected for ADC1 as defined by ADC1TRGSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Adc1alttrgenVal> adc1alttrgen{}; 
        namespace Adc1alttrgenValC{
            constexpr Register::FieldValue<decltype(adc1alttrgen)::Type,Adc1alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1alttrgen)::Type,Adc1alttrgenVal::v1> v1{};
        }
    }
    namespace SimSopt8{    ///<System Options Register 8
        using Addr = Register::Address<0x4004801c,0x0000fff0,0,unsigned>;
        ///FTM0 Hardware Trigger 0 Software Synchronization
        enum class Ftm0syncbitVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM0, software must clear this bit to allow other trigger sources to assert.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ftm0syncbitVal> ftm0syncbit{}; 
        namespace Ftm0syncbitValC{
            constexpr Register::FieldValue<decltype(ftm0syncbit)::Type,Ftm0syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0syncbit)::Type,Ftm0syncbitVal::v1> v1{};
        }
        ///FTM1 Hardware Trigger 0 Software Synchronization
        enum class Ftm1syncbitVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM1, software must clear this bit to allow other trigger sources to assert.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ftm1syncbitVal> ftm1syncbit{}; 
        namespace Ftm1syncbitValC{
            constexpr Register::FieldValue<decltype(ftm1syncbit)::Type,Ftm1syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1syncbit)::Type,Ftm1syncbitVal::v1> v1{};
        }
        ///FTM2 Hardware Trigger 0 Software Synchronization
        enum class Ftm2syncbitVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM2, software must clear this bit to allow other trigger sources to assert.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ftm2syncbitVal> ftm2syncbit{}; 
        namespace Ftm2syncbitValC{
            constexpr Register::FieldValue<decltype(ftm2syncbit)::Type,Ftm2syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2syncbit)::Type,Ftm2syncbitVal::v1> v1{};
        }
        ///FTM3 Hardware Trigger 0 Software Synchronization
        enum class Ftm3syncbitVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM3, software must clear this bit to allow other trigger sources to assert.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ftm3syncbitVal> ftm3syncbit{}; 
        namespace Ftm3syncbitValC{
            constexpr Register::FieldValue<decltype(ftm3syncbit)::Type,Ftm3syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3syncbit)::Type,Ftm3syncbitVal::v1> v1{};
        }
        ///FTM0 channel 0 output source
        enum class Ftm0och0srcVal {
            v0=0x00000000,     ///<FTM0_CH0 pin is output of FTM0 channel 0 output
            v1=0x00000001,     ///<FTM0_CH0 pin is output of FTM0 channel 0 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ftm0och0srcVal> ftm0och0src{}; 
        namespace Ftm0och0srcValC{
            constexpr Register::FieldValue<decltype(ftm0och0src)::Type,Ftm0och0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och0src)::Type,Ftm0och0srcVal::v1> v1{};
        }
        ///FTM0 channel 1 output source
        enum class Ftm0och1srcVal {
            v0=0x00000000,     ///<FTM0_CH1 pin is output of FTM0 channel 1 output
            v1=0x00000001,     ///<FTM0_CH1 pin is output of FTM0 channel 1 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ftm0och1srcVal> ftm0och1src{}; 
        namespace Ftm0och1srcValC{
            constexpr Register::FieldValue<decltype(ftm0och1src)::Type,Ftm0och1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och1src)::Type,Ftm0och1srcVal::v1> v1{};
        }
        ///FTM0 channel 2 output source
        enum class Ftm0och2srcVal {
            v0=0x00000000,     ///<FTM0_CH2 pin is output of FTM0 channel 2 output
            v1=0x00000001,     ///<FTM0_CH2 pin is output of FTM0 channel 2 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ftm0och2srcVal> ftm0och2src{}; 
        namespace Ftm0och2srcValC{
            constexpr Register::FieldValue<decltype(ftm0och2src)::Type,Ftm0och2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och2src)::Type,Ftm0och2srcVal::v1> v1{};
        }
        ///FTM0 channel 3 output source
        enum class Ftm0och3srcVal {
            v0=0x00000000,     ///<FTM0_CH3 pin is output of FTM0 channel 3 output
            v1=0x00000001,     ///<FTM0_CH3 pin is output of FTM0 channel 3 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ftm0och3srcVal> ftm0och3src{}; 
        namespace Ftm0och3srcValC{
            constexpr Register::FieldValue<decltype(ftm0och3src)::Type,Ftm0och3srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och3src)::Type,Ftm0och3srcVal::v1> v1{};
        }
        ///FTM0 channel 4 output source
        enum class Ftm0och4srcVal {
            v0=0x00000000,     ///<FTM0_CH4 pin is output of FTM0 channel 4 output
            v1=0x00000001,     ///<FTM0_CH4 pin is output of FTM0 channel 4 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ftm0och4srcVal> ftm0och4src{}; 
        namespace Ftm0och4srcValC{
            constexpr Register::FieldValue<decltype(ftm0och4src)::Type,Ftm0och4srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och4src)::Type,Ftm0och4srcVal::v1> v1{};
        }
        ///FTM0 channel 5 output source
        enum class Ftm0och5srcVal {
            v0=0x00000000,     ///<FTM0_CH5 pin is output of FTM0 channel 5 output
            v1=0x00000001,     ///<FTM0_CH5 pin is output of FTM0 channel 5 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ftm0och5srcVal> ftm0och5src{}; 
        namespace Ftm0och5srcValC{
            constexpr Register::FieldValue<decltype(ftm0och5src)::Type,Ftm0och5srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och5src)::Type,Ftm0och5srcVal::v1> v1{};
        }
        ///FTM0 channel 6 output source
        enum class Ftm0och6srcVal {
            v0=0x00000000,     ///<FTM0_CH6 pin is output of FTM0 channel 6 output
            v1=0x00000001,     ///<FTM0_CH6 pin is output of FTM0 channel 6 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ftm0och6srcVal> ftm0och6src{}; 
        namespace Ftm0och6srcValC{
            constexpr Register::FieldValue<decltype(ftm0och6src)::Type,Ftm0och6srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och6src)::Type,Ftm0och6srcVal::v1> v1{};
        }
        ///FTM0 channel 7 output source
        enum class Ftm0och7srcVal {
            v0=0x00000000,     ///<FTM0_CH7 pin is output of FTM0 channel 7 output
            v1=0x00000001,     ///<FTM0_CH7 pin is output of FTM0 channel 7 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ftm0och7srcVal> ftm0och7src{}; 
        namespace Ftm0och7srcValC{
            constexpr Register::FieldValue<decltype(ftm0och7src)::Type,Ftm0och7srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och7src)::Type,Ftm0och7srcVal::v1> v1{};
        }
        ///FTM3 channel 0 output source
        enum class Ftm3och0srcVal {
            v0=0x00000000,     ///<FTM3_CH0 pin is output of FTM3 channel 0 output
            v1=0x00000001,     ///<FTM3_CH0 pin is output of FTM3 channel 0 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm3och0srcVal> ftm3och0src{}; 
        namespace Ftm3och0srcValC{
            constexpr Register::FieldValue<decltype(ftm3och0src)::Type,Ftm3och0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och0src)::Type,Ftm3och0srcVal::v1> v1{};
        }
        ///FTM3 channel 1 output source
        enum class Ftm3och1srcVal {
            v0=0x00000000,     ///<FTM3_CH1 pin is output of FTM3 channel 1 output
            v1=0x00000001,     ///<FTM3_CH1 pin is output of FTM3 channel 1 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ftm3och1srcVal> ftm3och1src{}; 
        namespace Ftm3och1srcValC{
            constexpr Register::FieldValue<decltype(ftm3och1src)::Type,Ftm3och1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och1src)::Type,Ftm3och1srcVal::v1> v1{};
        }
        ///FTM3 channel 2 output source
        enum class Ftm3och2srcVal {
            v0=0x00000000,     ///<FTM3_CH2 pin is output of FTM3 channel 2 output
            v1=0x00000001,     ///<FTM3_CH2 pin is output of FTM3 channel 2 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ftm3och2srcVal> ftm3och2src{}; 
        namespace Ftm3och2srcValC{
            constexpr Register::FieldValue<decltype(ftm3och2src)::Type,Ftm3och2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och2src)::Type,Ftm3och2srcVal::v1> v1{};
        }
        ///FTM3 channel 3 output source
        enum class Ftm3och3srcVal {
            v0=0x00000000,     ///<FTM3_CH3 pin is output of FTM3 channel 3 output
            v1=0x00000001,     ///<FTM3_CH3 pin is output of FTM3 channel 3 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ftm3och3srcVal> ftm3och3src{}; 
        namespace Ftm3och3srcValC{
            constexpr Register::FieldValue<decltype(ftm3och3src)::Type,Ftm3och3srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och3src)::Type,Ftm3och3srcVal::v1> v1{};
        }
        ///FTM3 channel 4 output source
        enum class Ftm3och4srcVal {
            v0=0x00000000,     ///<FTM3_CH4 pin is output of FTM3 channel 4 output
            v1=0x00000001,     ///<FTM3_CH4 pin is output of FTM3 channel 4 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ftm3och4srcVal> ftm3och4src{}; 
        namespace Ftm3och4srcValC{
            constexpr Register::FieldValue<decltype(ftm3och4src)::Type,Ftm3och4srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och4src)::Type,Ftm3och4srcVal::v1> v1{};
        }
        ///FTM3 channel 5 output source
        enum class Ftm3och5srcVal {
            v0=0x00000000,     ///<FTM3_CH5 pin is output of FTM3 channel 5 output
            v1=0x00000001,     ///<FTM3_CH5 pin is output of FTM3 channel 5 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ftm3och5srcVal> ftm3och5src{}; 
        namespace Ftm3och5srcValC{
            constexpr Register::FieldValue<decltype(ftm3och5src)::Type,Ftm3och5srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och5src)::Type,Ftm3och5srcVal::v1> v1{};
        }
        ///FTM3 channel 6 output source
        enum class Ftm3och6srcVal {
            v0=0x00000000,     ///<FTM3_CH6 pin is output of FTM3 channel 6 output
            v1=0x00000001,     ///<FTM3_CH6 pin is output of FTM3 channel 6 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ftm3och6srcVal> ftm3och6src{}; 
        namespace Ftm3och6srcValC{
            constexpr Register::FieldValue<decltype(ftm3och6src)::Type,Ftm3och6srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och6src)::Type,Ftm3och6srcVal::v1> v1{};
        }
        ///FTM3 channel 7 output source
        enum class Ftm3och7srcVal {
            v0=0x00000000,     ///<FTM3_CH7 pin is output of FTM3 channel 7 output
            v1=0x00000001,     ///<FTM3_CH7 pin is output of FTM3 channel 7 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ftm3och7srcVal> ftm3och7src{}; 
        namespace Ftm3och7srcValC{
            constexpr Register::FieldValue<decltype(ftm3och7src)::Type,Ftm3och7srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och7src)::Type,Ftm3och7srcVal::v1> v1{};
        }
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0x000f0000,0,unsigned>;
        ///Pincount identification
        enum class PinidVal {
            v0010=0x00000002,     ///<32-pin
            v0100=0x00000004,     ///<48-pin
            v0101=0x00000005,     ///<64-pin
            v0110=0x00000006,     ///<80-pin
            v0111=0x00000007,     ///<81-pin or 121-pin
            v1000=0x00000008,     ///<100-pin
            v1001=0x00000009,     ///<121-pin
            v1010=0x0000000a,     ///<144-pin
            v1011=0x0000000b,     ///<Custom pinout (WLCSP)
            v1100=0x0000000c,     ///<169-pin
            v1110=0x0000000e,     ///<256-pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PinidVal> pinid{}; 
        namespace PinidValC{
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1110> v1110{};
        }
        ///Kinetis family identification
        enum class FamidVal {
            v000=0x00000000,     ///<K1x Family (without tamper)
            v001=0x00000001,     ///<K2x Family (without tamper)
            v010=0x00000002,     ///<K3x Family or K1x/K6x Family (with tamper)
            v011=0x00000003,     ///<K4x Family or K2x Family (with tamper)
            v100=0x00000004,     ///<K6x Family (without tamper)
            v101=0x00000005,     ///<K7x Family
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,FamidVal> famid{}; 
        namespace FamidValC{
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v000> v000{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v001> v001{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v010> v010{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v011> v011{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v100> v100{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v101> v101{};
        }
        ///Device Die ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> dieid{}; 
        ///Device revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
        ///Kinetis Series ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> seriesid{}; 
        ///Kinetis Sub-Family ID
        enum class SubfamidVal {
            v0000=0x00000000,     ///<Kx0 Subfamily
            v0001=0x00000001,     ///<Kx1 Subfamily (tamper detect)
            v0010=0x00000002,     ///<Kx2 Subfamily
            v0011=0x00000003,     ///<Kx3 Subfamily (tamper detect)
            v0100=0x00000004,     ///<Kx4 Subfamily
            v0101=0x00000005,     ///<Kx5 Subfamily (tamper detect)
            v0110=0x00000006,     ///<Kx6 Subfamily
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,SubfamidVal> subfamid{}; 
        namespace SubfamidValC{
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0110> v0110{};
        }
        ///Kinetis Family ID
        enum class FamilyidVal {
            v0001=0x00000001,     ///<K1x Family
            v0010=0x00000002,     ///<K2x Family
            v0011=0x00000003,     ///<K3x Family
            v0100=0x00000004,     ///<K4x Family
            v0110=0x00000006,     ///<K6x Family
            v0111=0x00000007,     ///<K7x Family
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,FamilyidVal> familyid{}; 
        namespace FamilyidValC{
            constexpr Register::FieldValue<decltype(familyid)::Type,FamilyidVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(familyid)::Type,FamilyidVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(familyid)::Type,FamilyidVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(familyid)::Type,FamilyidVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(familyid)::Type,FamilyidVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(familyid)::Type,FamilyidVal::v0111> v0111{};
        }
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xffe3e33d,0,unsigned>;
        ///EWM Clock Gate Control
        enum class EwmVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EwmVal> ewm{}; 
        namespace EwmValC{
            constexpr Register::FieldValue<decltype(ewm)::Type,EwmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ewm)::Type,EwmVal::v1> v1{};
        }
        ///I2C0 Clock Gate Control
        enum class I2c0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,I2c0Val> i2c0{}; 
        namespace I2c0ValC{
            constexpr Register::FieldValue<decltype(i2c0)::Type,I2c0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c0)::Type,I2c0Val::v1> v1{};
        }
        ///I2C1 Clock Gate Control
        enum class I2c1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,I2c1Val> i2c1{}; 
        namespace I2c1ValC{
            constexpr Register::FieldValue<decltype(i2c1)::Type,I2c1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c1)::Type,I2c1Val::v1> v1{};
        }
        ///UART0 Clock Gate Control
        enum class Uart0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Uart0Val> uart0{}; 
        namespace Uart0ValC{
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::v1> v1{};
        }
        ///UART1 Clock Gate Control
        enum class Uart1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Uart1Val> uart1{}; 
        namespace Uart1ValC{
            constexpr Register::FieldValue<decltype(uart1)::Type,Uart1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1)::Type,Uart1Val::v1> v1{};
        }
        ///UART2 Clock Gate Control
        enum class Uart2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Uart2Val> uart2{}; 
        namespace Uart2ValC{
            constexpr Register::FieldValue<decltype(uart2)::Type,Uart2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart2)::Type,Uart2Val::v1> v1{};
        }
        ///USB Clock Gate Control
        enum class UsbotgVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UsbotgVal> usbotg{}; 
        namespace UsbotgValC{
            constexpr Register::FieldValue<decltype(usbotg)::Type,UsbotgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbotg)::Type,UsbotgVal::v1> v1{};
        }
        ///Comparator Clock Gate Control
        enum class CmpVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,CmpVal> cmp{}; 
        namespace CmpValC{
            constexpr Register::FieldValue<decltype(cmp)::Type,CmpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmp)::Type,CmpVal::v1> v1{};
        }
        ///VREF Clock Gate Control
        enum class VrefVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,VrefVal> vref{}; 
        namespace VrefValC{
            constexpr Register::FieldValue<decltype(vref)::Type,VrefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vref)::Type,VrefVal::v1> v1{};
        }
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0xffffc1fe,0,unsigned>;
        ///Low Power Timer Access Control
        enum class LptmrVal {
            v0=0x00000000,     ///<Access disabled
            v1=0x00000001,     ///<Access enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LptmrVal> lptmr{}; 
        namespace LptmrValC{
            constexpr Register::FieldValue<decltype(lptmr)::Type,LptmrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lptmr)::Type,LptmrVal::v1> v1{};
        }
        ///Port A Clock Gate Control
        enum class PortaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,PortaVal> porta{}; 
        namespace PortaValC{
            constexpr Register::FieldValue<decltype(porta)::Type,PortaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porta)::Type,PortaVal::v1> v1{};
        }
        ///Port B Clock Gate Control
        enum class PortbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,PortbVal> portb{}; 
        namespace PortbValC{
            constexpr Register::FieldValue<decltype(portb)::Type,PortbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portb)::Type,PortbVal::v1> v1{};
        }
        ///Port C Clock Gate Control
        enum class PortcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,PortcVal> portc{}; 
        namespace PortcValC{
            constexpr Register::FieldValue<decltype(portc)::Type,PortcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portc)::Type,PortcVal::v1> v1{};
        }
        ///Port D Clock Gate Control
        enum class PortdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,PortdVal> portd{}; 
        namespace PortdValC{
            constexpr Register::FieldValue<decltype(portd)::Type,PortdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portd)::Type,PortdVal::v1> v1{};
        }
        ///Port E Clock Gate Control
        enum class PorteVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,PorteVal> porte{}; 
        namespace PorteValC{
            constexpr Register::FieldValue<decltype(porte)::Type,PorteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porte)::Type,PorteVal::v1> v1{};
        }
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0x503b483c,0,unsigned>;
        ///Flash Memory Clock Gate Control
        enum class FtfVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FtfVal> ftf{}; 
        namespace FtfValC{
            constexpr Register::FieldValue<decltype(ftf)::Type,FtfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftf)::Type,FtfVal::v1> v1{};
        }
        ///DMA Mux Clock Gate Control
        enum class DmamuxVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DmamuxVal> dmamux{}; 
        namespace DmamuxValC{
            constexpr Register::FieldValue<decltype(dmamux)::Type,DmamuxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmamux)::Type,DmamuxVal::v1> v1{};
        }
        ///FTM3 Clock Gate Control
        enum class Ftm3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ftm3Val> ftm3{}; 
        namespace Ftm3ValC{
            constexpr Register::FieldValue<decltype(ftm3)::Type,Ftm3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3)::Type,Ftm3Val::v1> v1{};
        }
        ///ADC1 Clock Gate Control
        enum class Adc1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Adc1Val> adc1{}; 
        namespace Adc1ValC{
            constexpr Register::FieldValue<decltype(adc1)::Type,Adc1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1)::Type,Adc1Val::v1> v1{};
        }
        ///DAC1 Clock Gate Control
        enum class Dac1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Dac1Val> dac1{}; 
        namespace Dac1ValC{
            constexpr Register::FieldValue<decltype(dac1)::Type,Dac1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dac1)::Type,Dac1Val::v1> v1{};
        }
        ///RNGA Clock Gate Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rnga{}; 
        ///LPUART0 Clock Gate Control
        enum class Lpuart0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Lpuart0Val> lpuart0{}; 
        namespace Lpuart0ValC{
            constexpr Register::FieldValue<decltype(lpuart0)::Type,Lpuart0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(lpuart0)::Type,Lpuart0Val::v1> v1{};
        }
        ///SPI0 Clock Gate Control
        enum class Spi0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Spi0Val> spi0{}; 
        namespace Spi0ValC{
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::v1> v1{};
        }
        ///SPI1 Clock Gate Control
        enum class Spi1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Spi1Val> spi1{}; 
        namespace Spi1ValC{
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::v1> v1{};
        }
        ///I2S Clock Gate Control
        enum class I2sVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,I2sVal> i2s{}; 
        namespace I2sValC{
            constexpr Register::FieldValue<decltype(i2s)::Type,I2sVal::v0> v0{};
            constexpr Register::FieldValue<decltype(i2s)::Type,I2sVal::v1> v1{};
        }
        ///CRC Clock Gate Control
        enum class CrcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CrcVal> crc{}; 
        namespace CrcValC{
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v1> v1{};
        }
        ///PDB Clock Gate Control
        enum class PdbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,PdbVal> pdb{}; 
        namespace PdbValC{
            constexpr Register::FieldValue<decltype(pdb)::Type,PdbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdb)::Type,PdbVal::v1> v1{};
        }
        ///PIT Clock Gate Control
        enum class PitVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,PitVal> pit{}; 
        namespace PitValC{
            constexpr Register::FieldValue<decltype(pit)::Type,PitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pit)::Type,PitVal::v1> v1{};
        }
        ///FTM0 Clock Gate Control
        enum class Ftm0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm0Val> ftm0{}; 
        namespace Ftm0ValC{
            constexpr Register::FieldValue<decltype(ftm0)::Type,Ftm0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0)::Type,Ftm0Val::v1> v1{};
        }
        ///FTM1 Clock Gate Control
        enum class Ftm1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ftm1Val> ftm1{}; 
        namespace Ftm1ValC{
            constexpr Register::FieldValue<decltype(ftm1)::Type,Ftm1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1)::Type,Ftm1Val::v1> v1{};
        }
        ///FTM2 Clock Gate Control
        enum class Ftm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ftm2Val> ftm2{}; 
        namespace Ftm2ValC{
            constexpr Register::FieldValue<decltype(ftm2)::Type,Ftm2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2)::Type,Ftm2Val::v1> v1{};
        }
        ///ADC0 Clock Gate Control
        enum class Adc0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Adc0Val> adc0{}; 
        namespace Adc0ValC{
            constexpr Register::FieldValue<decltype(adc0)::Type,Adc0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0)::Type,Adc0Val::v1> v1{};
        }
        ///RTC Access Control
        enum class RtcVal {
            v0=0x00000000,     ///<Access and interrupts disabled
            v1=0x00000001,     ///<Access and interrupts enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,RtcVal> rtc{}; 
        namespace RtcValC{
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::v1> v1{};
        }
        ///DAC0 Clock Gate Control
        enum class Dac0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Dac0Val> dac0{}; 
        namespace Dac0ValC{
            constexpr Register::FieldValue<decltype(dac0)::Type,Dac0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dac0)::Type,Dac0Val::v1> v1{};
        }
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x40048040,0xfffffffc,0,unsigned>;
        ///FlexBus Clock Gate Control
        enum class FlexbusVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FlexbusVal> flexbus{}; 
        namespace FlexbusValC{
            constexpr Register::FieldValue<decltype(flexbus)::Type,FlexbusVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flexbus)::Type,FlexbusVal::v1> v1{};
        }
        ///DMA Clock Gate Control
        enum class DmaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v1> v1{};
        }
    }
    namespace SimClkdiv1{    ///<System Clock Divider Register 1
        using Addr = Register::Address<0x40048044,0x0000ffff,0,unsigned>;
        ///Clock 4 output divider value
        enum class Outdiv4Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,Outdiv4Val> outdiv4{}; 
        namespace Outdiv4ValC{
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v1111> v1111{};
        }
        ///Clock 3 output divider value
        enum class Outdiv3Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,Outdiv3Val> outdiv3{}; 
        namespace Outdiv3ValC{
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v1111> v1111{};
        }
        ///Clock 2 output divider value
        enum class Outdiv2Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,Outdiv2Val> outdiv2{}; 
        namespace Outdiv2ValC{
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v1111> v1111{};
        }
        ///Clock 1 output divider value
        enum class Outdiv1Val {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,Outdiv1Val> outdiv1{}; 
        namespace Outdiv1ValC{
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v1111> v1111{};
        }
    }
    namespace SimClkdiv2{    ///<System Clock Divider Register 2
        using Addr = Register::Address<0x40048048,0xfffffff0,0,unsigned>;
        ///USB clock divider fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbfrac{}; 
        ///USB clock divider divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> usbdiv{}; 
    }
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4004804c,0xf0fffffc,0,unsigned>;
        ///Flash Disable
        enum class FlashdisVal {
            v0=0x00000000,     ///<Flash is enabled
            v1=0x00000001,     ///<Flash is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FlashdisVal> flashdis{}; 
        namespace FlashdisValC{
            constexpr Register::FieldValue<decltype(flashdis)::Type,FlashdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flashdis)::Type,FlashdisVal::v1> v1{};
        }
        ///Flash Doze
        enum class FlashdozeVal {
            v0=0x00000000,     ///<Flash remains enabled during Wait mode
            v1=0x00000001,     ///<Flash is disabled for the duration of Wait mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FlashdozeVal> flashdoze{}; 
        namespace FlashdozeValC{
            constexpr Register::FieldValue<decltype(flashdoze)::Type,FlashdozeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flashdoze)::Type,FlashdozeVal::v1> v1{};
        }
        ///Program flash size
        enum class PfsizeVal {
            v0011=0x00000003,     ///<32 KB of program flash memory
            v0101=0x00000005,     ///<64 KB of program flash memory
            v0111=0x00000007,     ///<128 KB of program flash memory
            v1001=0x00000009,     ///<256 KB of program flash memory
            v1011=0x0000000b,     ///<512 KB of program flash memory
            v1101=0x0000000d,     ///<1024 KB of program flash memory
            v1111=0x0000000f,     ///<512 KB of program flash memory
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,PfsizeVal> pfsize{}; 
        namespace PfsizeValC{
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v1111> v1111{};
        }
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0x8080ffff,0,unsigned>;
        ///Max address block 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> maxaddr1{}; 
        ///Max address block 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> maxaddr0{}; 
    }
    namespace SimUidh{    ///<Unique Identification Register High
        using Addr = Register::Address<0x40048054,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimUidmh{    ///<Unique Identification Register Mid-High
        using Addr = Register::Address<0x40048058,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimUidml{    ///<Unique Identification Register Mid Low
        using Addr = Register::Address<0x4004805c,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimUidl{    ///<Unique Identification Register Low
        using Addr = Register::Address<0x40048060,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
}
