#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0x1ff30fff,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(ramsize),RamsizeVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(ramsize),RamsizeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(ramsize),RamsizeVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(ramsize),RamsizeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(ramsize),RamsizeVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(ramsize),RamsizeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(ramsize),RamsizeVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(ramsize),RamsizeVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(ramsize),RamsizeVal::v1011> v1011{};
        }
        ///32K oscillator clock select
        enum class Osc32kselVal {
            v00=0x00000000,     ///<System oscillator (OSC32KCLK)
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<RTC 32.768kHz oscillator
            v11=0x00000003,     ///<LPO 1 kHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Osc32kselVal> osc32ksel{}; 
        namespace Osc32kselValC{
            constexpr Register::FieldValue<decltype(osc32ksel),Osc32kselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(osc32ksel),Osc32kselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(osc32ksel),Osc32kselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(osc32ksel),Osc32kselVal::v11> v11{};
        }
        ///USB voltage regulator in standby mode during VLPR and VLPW modes
        enum class UsbvstbyVal {
            v0=0x00000000,     ///<USB voltage regulator not in standby during VLPR and VLPW modes.
            v1=0x00000001,     ///<USB voltage regulator in standby during VLPR and VLPW modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,UsbvstbyVal> usbvstby{}; 
        namespace UsbvstbyValC{
            constexpr Register::FieldValue<decltype(usbvstby),UsbvstbyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbvstby),UsbvstbyVal::v1> v1{};
        }
        ///USB voltage regulator in standby mode during Stop, VLPS, LLS and VLLS modes.
        enum class UsbsstbyVal {
            v0=0x00000000,     ///<USB voltage regulator not in standby during Stop, VLPS, LLS and VLLS modes.
            v1=0x00000001,     ///<USB voltage regulator in standby during Stop, VLPS, LLS and VLLS modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,UsbsstbyVal> usbsstby{}; 
        namespace UsbsstbyValC{
            constexpr Register::FieldValue<decltype(usbsstby),UsbsstbyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbsstby),UsbsstbyVal::v1> v1{};
        }
        ///USB voltage regulator enable
        enum class UsbregenVal {
            v0=0x00000000,     ///<USB voltage regulator is disabled.
            v1=0x00000001,     ///<USB voltage regulator is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,UsbregenVal> usbregen{}; 
        namespace UsbregenValC{
            constexpr Register::FieldValue<decltype(usbregen),UsbregenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbregen),UsbregenVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(urwe),UrweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(urwe),UrweVal::v1> v1{};
        }
        ///USB voltage regulator VLP standby write enable
        enum class UvsweVal {
            v0=0x00000000,     ///<SOPT1 USBVSTBY cannot be written.
            v1=0x00000001,     ///<SOPT1 USBVSTBY can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,UvsweVal> uvswe{}; 
        namespace UvsweValC{
            constexpr Register::FieldValue<decltype(uvswe),UvsweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uvswe),UvsweVal::v1> v1{};
        }
        ///USB voltage regulator stop standby write enable
        enum class UssweVal {
            v0=0x00000000,     ///<SOPT1 USBSSTBY cannot be written.
            v1=0x00000001,     ///<SOPT1 USBSSTBY can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,UssweVal> usswe{}; 
        namespace UssweValC{
            constexpr Register::FieldValue<decltype(usswe),UssweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usswe),UssweVal::v1> v1{};
        }
    }
    namespace SimUsbphyctl{    ///<USB PHY Control Register
        using Addr = Register::Address<0x40047008,0xff0ffcff,0,unsigned>;
        ///no description available
        enum class UsbvregselVal {
            v0=0x00000000,     ///<VREG_IN0 will be selected if both regulator inputs are powered
            v1=0x00000001,     ///<VREG_IN1 will be selected if both regulator inputs are powered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,UsbvregselVal> usbvregsel{}; 
        namespace UsbvregselValC{
            constexpr Register::FieldValue<decltype(usbvregsel),UsbvregselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbvregsel),UsbvregselVal::v1> v1{};
        }
        ///no description available
        enum class UsbvregpdVal {
            v0=0x00000000,     ///<Regulator output pulldown resistor is not enabled
            v1=0x00000001,     ///<Regulator output pulldown resistor is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,UsbvregpdVal> usbvregpd{}; 
        namespace UsbvregpdValC{
            constexpr Register::FieldValue<decltype(usbvregpd),UsbvregpdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbvregpd),UsbvregpdVal::v1> v1{};
        }
        ///USB 3.3V Output Target
        enum class Usb3vouttrgVal {
            v000=0x00000000,     ///<2.733V
            v001=0x00000001,     ///<3.020V
            v010=0x00000002,     ///<3.074V
            v011=0x00000003,     ///<3.130V
            v100=0x00000004,     ///<3.188V
            v101=0x00000005,     ///<3.248V
            v110=0x00000006,     ///<3.310V (default)
            v111=0x00000007,     ///<3.662V (For Freescale use only, not for customer use)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Usb3vouttrgVal> usb3vouttrg{}; 
        namespace Usb3vouttrgValC{
            constexpr Register::FieldValue<decltype(usb3vouttrg),Usb3vouttrgVal::v000> v000{};
            constexpr Register::FieldValue<decltype(usb3vouttrg),Usb3vouttrgVal::v001> v001{};
            constexpr Register::FieldValue<decltype(usb3vouttrg),Usb3vouttrgVal::v010> v010{};
            constexpr Register::FieldValue<decltype(usb3vouttrg),Usb3vouttrgVal::v011> v011{};
            constexpr Register::FieldValue<decltype(usb3vouttrg),Usb3vouttrgVal::v100> v100{};
            constexpr Register::FieldValue<decltype(usb3vouttrg),Usb3vouttrgVal::v101> v101{};
            constexpr Register::FieldValue<decltype(usb3vouttrg),Usb3vouttrgVal::v110> v110{};
            constexpr Register::FieldValue<decltype(usb3vouttrg),Usb3vouttrgVal::v111> v111{};
        }
        ///USB Disable Inrush Current Limit
        enum class UsbdisilimVal {
            v0=0x00000000,     ///<The current limiter for the USB Voltage Regulator is enabled
            v1=0x00000001,     ///<The current limiter for the USB Voltage Regulator is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,UsbdisilimVal> usbdisilim{}; 
        namespace UsbdisilimValC{
            constexpr Register::FieldValue<decltype(usbdisilim),UsbdisilimVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbdisilim),UsbdisilimVal::v1> v1{};
        }
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0xc0c0ec0c,0,unsigned>;
        ///USB Slow Clock Source
        enum class UsbslsrcVal {
            v0=0x00000000,     ///<MCGIRCLK
            v1=0x00000001,     ///<RTC 32.768kHz clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UsbslsrcVal> usbslsrc{}; 
        namespace UsbslsrcValC{
            constexpr Register::FieldValue<decltype(usbslsrc),UsbslsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbslsrc),UsbslsrcVal::v1> v1{};
        }
        ///USB PHY PLL Regulator Enable
        enum class UsbregenVal {
            v0=0x00000000,     ///<USB PHY PLL Regulator disabled.
            v1=0x00000001,     ///<USB PHY PLL Regulator enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UsbregenVal> usbregen{}; 
        namespace UsbregenValC{
            constexpr Register::FieldValue<decltype(usbregen),UsbregenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbregen),UsbregenVal::v1> v1{};
        }
        ///RTC clock out select
        enum class RtcclkoutselVal {
            v0=0x00000000,     ///<RTC 1 Hz clock is output on the RTC_CLKOUT pin.
            v1=0x00000001,     ///<RTC 32.768kHz clock is output on the RTC_CLKOUT pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RtcclkoutselVal> rtcclkoutsel{}; 
        namespace RtcclkoutselValC{
            constexpr Register::FieldValue<decltype(rtcclkoutsel),RtcclkoutselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtcclkoutsel),RtcclkoutselVal::v1> v1{};
        }
        ///CLKOUT select
        enum class ClkoutselVal {
            v000=0x00000000,     ///<FlexBus CLKOUT
            v001=0x00000001,     ///<Reserved
            v010=0x00000002,     ///<Flash clock
            v011=0x00000003,     ///<LPO clock (1 kHz)
            v100=0x00000004,     ///<MCGIRCLK
            v101=0x00000005,     ///<RTC 32.768kHz clock
            v110=0x00000006,     ///<OSCERCLK0
            v111=0x00000007,     ///<IRC 48 MHz clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,ClkoutselVal> clkoutsel{}; 
        namespace ClkoutselValC{
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v000> v000{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v001> v001{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v110> v110{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v111> v111{};
        }
        ///FlexBus security level
        enum class FbslVal {
            v00=0x00000000,     ///<All off-chip accesses (instruction and data) via the FlexBus or SDRAM are disallowed.
            v01=0x00000001,     ///<All off-chip accesses (instruction and data) via the FlexBus or SDRAM are disallowed.
            v10=0x00000002,     ///<Off-chip instruction accesses are disallowed. Data accesses are allowed.
            v11=0x00000003,     ///<Off-chip instruction accesses and data accesses are allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,FbslVal> fbsl{}; 
        namespace FbslValC{
            constexpr Register::FieldValue<decltype(fbsl),FbslVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fbsl),FbslVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fbsl),FbslVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fbsl),FbslVal::v11> v11{};
        }
        ///Debug trace clock select
        enum class TraceclkselVal {
            v0=0x00000000,     ///<MCGOUTCLK
            v1=0x00000001,     ///<Core/system clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,TraceclkselVal> traceclksel{}; 
        namespace TraceclkselValC{
            constexpr Register::FieldValue<decltype(traceclksel),TraceclkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(traceclksel),TraceclkselVal::v1> v1{};
        }
        ///PLL/FLL clock select
        enum class PllfllselVal {
            v00=0x00000000,     ///<MCGFLLCLK clock
            v01=0x00000001,     ///<MCGPLLCLK clock
            v10=0x00000002,     ///<USB1 PFD clock
            v11=0x00000003,     ///<IRC48 MHz clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PllfllselVal> pllfllsel{}; 
        namespace PllfllselValC{
            constexpr Register::FieldValue<decltype(pllfllsel),PllfllselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pllfllsel),PllfllselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pllfllsel),PllfllselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pllfllsel),PllfllselVal::v11> v11{};
        }
        ///USB clock source select
        enum class UsbsrcVal {
            v0=0x00000000,     ///<External bypass clock (USB_CLKIN).
            v1=0x00000001,     ///<MCGFLLCLK , or MCGPLLCLK , or IRC48M , or USB1 PFD clock as selected by SOPT2[PLLFLLSEL], and then divided by the USB fractional divider as configured by SIM_CLKDIV2[USBFRAC, USBDIV].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UsbsrcVal> usbsrc{}; 
        namespace UsbsrcValC{
            constexpr Register::FieldValue<decltype(usbsrc),UsbsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbsrc),UsbsrcVal::v1> v1{};
        }
        ///RMII clock source select
        enum class RmiisrcVal {
            v0=0x00000000,     ///<EXTAL clock
            v1=0x00000001,     ///<External bypass clock (ENET_1588_CLKIN).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RmiisrcVal> rmiisrc{}; 
        namespace RmiisrcValC{
            constexpr Register::FieldValue<decltype(rmiisrc),RmiisrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rmiisrc),RmiisrcVal::v1> v1{};
        }
        ///IEEE 1588 timestamp clock source select
        enum class TimesrcVal {
            v00=0x00000000,     ///<Core/system clock.
            v01=0x00000001,     ///<MCGFLLCLK , or MCGPLLCLK , or IRC48M , or USB1 PFD clock as selected by SOPT2[PLLFLLSEL].
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<External bypass clock (ENET_1588_CLKIN).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TimesrcVal> timesrc{}; 
        namespace TimesrcValC{
            constexpr Register::FieldValue<decltype(timesrc),TimesrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(timesrc),TimesrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(timesrc),TimesrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(timesrc),TimesrcVal::v11> v11{};
        }
        ///TPM clock source select
        enum class TpmsrcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<MCGFLLCLK , or MCGPLLCLK , or IRC48M , or USB1 PFD clock as selected by SOPT2[PLLFLLSEL], and then divided by the PLLFLLCLK fractional divider as configured by SIM_CLKDIV3[PLLFLLFRAC, PLLFLLDIV].
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,TpmsrcVal> tpmsrc{}; 
        namespace TpmsrcValC{
            constexpr Register::FieldValue<decltype(tpmsrc),TpmsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tpmsrc),TpmsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tpmsrc),TpmsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tpmsrc),TpmsrcVal::v11> v11{};
        }
        ///LPUART clock source select
        enum class LpuartsrcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<MCGFLLCLK , or MCGPLLCLK , or IRC48M , or USB1 PFD clock as selected by SOPT2[PLLFLLSEL], and then divided by the PLLFLLCLK fractional divider as configured by SIM_CLKDIV3[PLLFLLFRAC, PLLFLLDIV].
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,LpuartsrcVal> lpuartsrc{}; 
        namespace LpuartsrcValC{
            constexpr Register::FieldValue<decltype(lpuartsrc),LpuartsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lpuartsrc),LpuartsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lpuartsrc),LpuartsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(lpuartsrc),LpuartsrcVal::v11> v11{};
        }
        ///SDHC clock source select
        enum class SdhcsrcVal {
            v00=0x00000000,     ///<Core/system clock.
            v01=0x00000001,     ///<MCGFLLCLK, or MCGPLLCLK , or IRC48M , or USB1 PFD clock as selected by SOPT2[PLLFLLSEL].
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<External bypass clock (SDHC0_CLKIN)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,SdhcsrcVal> sdhcsrc{}; 
        namespace SdhcsrcValC{
            constexpr Register::FieldValue<decltype(sdhcsrc),SdhcsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sdhcsrc),SdhcsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sdhcsrc),SdhcsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sdhcsrc),SdhcsrcVal::v11> v11{};
        }
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0x0083eee0,0,unsigned>;
        ///FTM0 Fault 0 Select
        enum class Ftm0flt0Val {
            v0=0x00000000,     ///<FTM0_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ftm0flt0Val> ftm0flt0{}; 
        namespace Ftm0flt0ValC{
            constexpr Register::FieldValue<decltype(ftm0flt0),Ftm0flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt0),Ftm0flt0Val::v1> v1{};
        }
        ///FTM0 Fault 1 Select
        enum class Ftm0flt1Val {
            v0=0x00000000,     ///<FTM0_FLT1 pin
            v1=0x00000001,     ///<CMP1 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ftm0flt1Val> ftm0flt1{}; 
        namespace Ftm0flt1ValC{
            constexpr Register::FieldValue<decltype(ftm0flt1),Ftm0flt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt1),Ftm0flt1Val::v1> v1{};
        }
        ///FTM0 Fault 2 Select
        enum class Ftm0flt2Val {
            v0=0x00000000,     ///<FTM0_FLT2 pin
            v1=0x00000001,     ///<CMP2 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ftm0flt2Val> ftm0flt2{}; 
        namespace Ftm0flt2ValC{
            constexpr Register::FieldValue<decltype(ftm0flt2),Ftm0flt2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt2),Ftm0flt2Val::v1> v1{};
        }
        ///FTM0 Fault 3 Select
        enum class Ftm0flt3Val {
            v0=0x00000000,     ///<FTM0_FLT3 pin
            v1=0x00000001,     ///<CMP3 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ftm0flt3Val> ftm0flt3{}; 
        namespace Ftm0flt3ValC{
            constexpr Register::FieldValue<decltype(ftm0flt3),Ftm0flt3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt3),Ftm0flt3Val::v1> v1{};
        }
        ///FTM1 Fault 0 Select
        enum class Ftm1flt0Val {
            v0=0x00000000,     ///<FTM1_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ftm1flt0Val> ftm1flt0{}; 
        namespace Ftm1flt0ValC{
            constexpr Register::FieldValue<decltype(ftm1flt0),Ftm1flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1flt0),Ftm1flt0Val::v1> v1{};
        }
        ///FTM2 Fault 0 Select
        enum class Ftm2flt0Val {
            v0=0x00000000,     ///<FTM2_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ftm2flt0Val> ftm2flt0{}; 
        namespace Ftm2flt0ValC{
            constexpr Register::FieldValue<decltype(ftm2flt0),Ftm2flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2flt0),Ftm2flt0Val::v1> v1{};
        }
        ///FTM3 Fault 0 Select
        enum class Ftm3flt0Val {
            v0=0x00000000,     ///<FTM3_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ftm3flt0Val> ftm3flt0{}; 
        namespace Ftm3flt0ValC{
            constexpr Register::FieldValue<decltype(ftm3flt0),Ftm3flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3flt0),Ftm3flt0Val::v1> v1{};
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
            constexpr Register::FieldValue<decltype(ftm1ch0src),Ftm1ch0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm1ch0src),Ftm1ch0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm1ch0src),Ftm1ch0srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ftm1ch0src),Ftm1ch0srcVal::v11> v11{};
        }
        ///FTM2 channel 0 input capture source select
        enum class Ftm2ch0srcVal {
            v00=0x00000000,     ///<FTM2_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Ftm2ch0srcVal> ftm2ch0src{}; 
        namespace Ftm2ch0srcValC{
            constexpr Register::FieldValue<decltype(ftm2ch0src),Ftm2ch0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm2ch0src),Ftm2ch0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm2ch0src),Ftm2ch0srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ftm2ch0src),Ftm2ch0srcVal::v11> v11{};
        }
        ///FTM2 channel 1 input capture source select
        enum class Ftm2ch1srcVal {
            v0=0x00000000,     ///<FTM2_CH1 signal
            v1=0x00000001,     ///<Exclusive OR of FTM2_CH1, FTM2_CH0 and FTM1_CH1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ftm2ch1srcVal> ftm2ch1src{}; 
        namespace Ftm2ch1srcValC{
            constexpr Register::FieldValue<decltype(ftm2ch1src),Ftm2ch1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2ch1src),Ftm2ch1srcVal::v1> v1{};
        }
        ///FlexTimer 0 External Clock Pin Select
        enum class Ftm0clkselVal {
            v0=0x00000000,     ///<FTM_CLK0 pin
            v1=0x00000001,     ///<FTM_CLK1 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm0clkselVal> ftm0clksel{}; 
        namespace Ftm0clkselValC{
            constexpr Register::FieldValue<decltype(ftm0clksel),Ftm0clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0clksel),Ftm0clkselVal::v1> v1{};
        }
        ///FTM1 External Clock Pin Select
        enum class Ftm1clkselVal {
            v0=0x00000000,     ///<FTM_CLK0 pin
            v1=0x00000001,     ///<FTM_CLK1 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ftm1clkselVal> ftm1clksel{}; 
        namespace Ftm1clkselValC{
            constexpr Register::FieldValue<decltype(ftm1clksel),Ftm1clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1clksel),Ftm1clkselVal::v1> v1{};
        }
        ///FlexTimer 2 External Clock Pin Select
        enum class Ftm2clkselVal {
            v0=0x00000000,     ///<FTM2 external clock driven by FTM_CLK0 pin.
            v1=0x00000001,     ///<FTM2 external clock driven by FTM_CLK1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ftm2clkselVal> ftm2clksel{}; 
        namespace Ftm2clkselValC{
            constexpr Register::FieldValue<decltype(ftm2clksel),Ftm2clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2clksel),Ftm2clkselVal::v1> v1{};
        }
        ///FlexTimer 3 External Clock Pin Select
        enum class Ftm3clkselVal {
            v0=0x00000000,     ///<FTM3 external clock driven by FTM_CLK0 pin.
            v1=0x00000001,     ///<FTM3 external clock driven by FTM_CLK1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ftm3clkselVal> ftm3clksel{}; 
        namespace Ftm3clkselValC{
            constexpr Register::FieldValue<decltype(ftm3clksel),Ftm3clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3clksel),Ftm3clkselVal::v1> v1{};
        }
        ///FlexTimer 0 Hardware Trigger 0 Source Select
        enum class Ftm0trg0srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM0 hardware trigger 0
            v1=0x00000001,     ///<FTM1 channel match drives FTM0 hardware trigger 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ftm0trg0srcVal> ftm0trg0src{}; 
        namespace Ftm0trg0srcValC{
            constexpr Register::FieldValue<decltype(ftm0trg0src),Ftm0trg0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0trg0src),Ftm0trg0srcVal::v1> v1{};
        }
        ///FlexTimer 0 Hardware Trigger 1 Source Select
        enum class Ftm0trg1srcVal {
            v0=0x00000000,     ///<PDB output trigger 1 drives FTM0 hardware trigger 1
            v1=0x00000001,     ///<FTM2 channel match drives FTM0 hardware trigger 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ftm0trg1srcVal> ftm0trg1src{}; 
        namespace Ftm0trg1srcValC{
            constexpr Register::FieldValue<decltype(ftm0trg1src),Ftm0trg1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0trg1src),Ftm0trg1srcVal::v1> v1{};
        }
        ///FlexTimer 3 Hardware Trigger 0 Source Select
        enum class Ftm3trg0srcVal {
            v0=0x00000000,     ///<Reserved
            v1=0x00000001,     ///<FTM1 channel match drives FTM3 hardware trigger 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ftm3trg0srcVal> ftm3trg0src{}; 
        namespace Ftm3trg0srcValC{
            constexpr Register::FieldValue<decltype(ftm3trg0src),Ftm3trg0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3trg0src),Ftm3trg0srcVal::v1> v1{};
        }
        ///FlexTimer 3 Hardware Trigger 1 Source Select
        enum class Ftm3trg1srcVal {
            v0=0x00000000,     ///<Reserved
            v1=0x00000001,     ///<FTM2 channel match drives FTM3 hardware trigger 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ftm3trg1srcVal> ftm3trg1src{}; 
        namespace Ftm3trg1srcValC{
            constexpr Register::FieldValue<decltype(ftm3trg1src),Ftm3trg1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3trg1src),Ftm3trg1srcVal::v1> v1{};
        }
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xfff0ff00,0,unsigned>;
        ///UART 0 transmit data source select
        enum class Uart0txsrcVal {
            v00=0x00000000,     ///<UART0_TX pin
            v01=0x00000001,     ///<UART0_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART0_TX pin modulated with FTM2 channel 0 output
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Uart0txsrcVal> uart0txsrc{}; 
        namespace Uart0txsrcValC{
            constexpr Register::FieldValue<decltype(uart0txsrc),Uart0txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart0txsrc),Uart0txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart0txsrc),Uart0txsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(uart0txsrc),Uart0txsrcVal::v11> v11{};
        }
        ///UART 0 receive data source select
        enum class Uart0rxsrcVal {
            v00=0x00000000,     ///<UART0_RX pin
            v01=0x00000001,     ///<CMP0
            v10=0x00000002,     ///<CMP1
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Uart0rxsrcVal> uart0rxsrc{}; 
        namespace Uart0rxsrcValC{
            constexpr Register::FieldValue<decltype(uart0rxsrc),Uart0rxsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart0rxsrc),Uart0rxsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart0rxsrc),Uart0rxsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(uart0rxsrc),Uart0rxsrcVal::v11> v11{};
        }
        ///UART 1 transmit data source select
        enum class Uart1txsrcVal {
            v00=0x00000000,     ///<UART1_TX pin
            v01=0x00000001,     ///<UART1_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART1_TX pin modulated with FTM2 channel 0 output
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Uart1txsrcVal> uart1txsrc{}; 
        namespace Uart1txsrcValC{
            constexpr Register::FieldValue<decltype(uart1txsrc),Uart1txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart1txsrc),Uart1txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart1txsrc),Uart1txsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(uart1txsrc),Uart1txsrcVal::v11> v11{};
        }
        ///UART 1 receive data source select
        enum class Uart1rxsrcVal {
            v00=0x00000000,     ///<UART1_RX pin
            v01=0x00000001,     ///<CMP0
            v10=0x00000002,     ///<CMP1
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Uart1rxsrcVal> uart1rxsrc{}; 
        namespace Uart1rxsrcValC{
            constexpr Register::FieldValue<decltype(uart1rxsrc),Uart1rxsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart1rxsrc),Uart1rxsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart1rxsrc),Uart1rxsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(uart1rxsrc),Uart1rxsrcVal::v11> v11{};
        }
        ///LPUART0 transmit data source select
        enum class Lpuart0txsrcVal {
            v00=0x00000000,     ///<LPUART0_TX pin
            v01=0x00000001,     ///<LPUART0_TX pin modulated with TPM1 channel 0 output
            v10=0x00000002,     ///<LPUART0_TX pin modulated with TPM2 channel 0 output
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Lpuart0txsrcVal> lpuart0txsrc{}; 
        namespace Lpuart0txsrcValC{
            constexpr Register::FieldValue<decltype(lpuart0txsrc),Lpuart0txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lpuart0txsrc),Lpuart0txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lpuart0txsrc),Lpuart0txsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(lpuart0txsrc),Lpuart0txsrcVal::v11> v11{};
        }
        ///LPUART0 receive data source select
        enum class Lpuart0rxsrcVal {
            v00=0x00000000,     ///<LPUART0_RX pin
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Lpuart0rxsrcVal> lpuart0rxsrc{}; 
        namespace Lpuart0rxsrcValC{
            constexpr Register::FieldValue<decltype(lpuart0rxsrc),Lpuart0rxsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lpuart0rxsrc),Lpuart0rxsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lpuart0rxsrc),Lpuart0rxsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(lpuart0rxsrc),Lpuart0rxsrcVal::v11> v11{};
        }
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xffff6060,0,unsigned>;
        ///ADC0 trigger select
        enum class Adc0trgselVal {
            v0000=0x00000000,     ///<PDB external trigger pin input (PDB0_EXTRG)
            v0001=0x00000001,     ///<High speed comparator 0 output
            v0010=0x00000002,     ///<High speed comparator 1 output
            v0011=0x00000003,     ///<High speed comparator 2 output
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
            v1111=0x0000000f,     ///<TPM1 channel 0 (A pretrigger) and channel 1 (B pretrigger)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Adc0trgselVal> adc0trgsel{}; 
        namespace Adc0trgselValC{
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1111> v1111{};
        }
        ///ADC0 pretrigger select
        enum class Adc0pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A
            v1=0x00000001,     ///<Pre-trigger B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adc0pretrgselVal> adc0pretrgsel{}; 
        namespace Adc0pretrgselValC{
            constexpr Register::FieldValue<decltype(adc0pretrgsel),Adc0pretrgselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0pretrgsel),Adc0pretrgselVal::v1> v1{};
        }
        ///ADC0 alternate trigger enable
        enum class Adc0alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC0.
            v1=0x00000001,     ///<Alternate trigger selected for ADC0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Adc0alttrgenVal> adc0alttrgen{}; 
        namespace Adc0alttrgenValC{
            constexpr Register::FieldValue<decltype(adc0alttrgen),Adc0alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0alttrgen),Adc0alttrgenVal::v1> v1{};
        }
        ///ADC1 trigger select
        enum class Adc1trgselVal {
            v0000=0x00000000,     ///<PDB external trigger pin input (PDB0_EXTRG)
            v0001=0x00000001,     ///<High speed comparator 0 output
            v0010=0x00000002,     ///<High speed comparator 1 output
            v0011=0x00000003,     ///<High speed comparator 2 output
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
            v1111=0x0000000f,     ///<TPM2 channel 0 (A pretrigger) and channel 1 (B pretrigger)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Adc1trgselVal> adc1trgsel{}; 
        namespace Adc1trgselValC{
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(adc1trgsel),Adc1trgselVal::v1111> v1111{};
        }
        ///ADC1 pre-trigger select
        enum class Adc1pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A selected for ADC1.
            v1=0x00000001,     ///<Pre-trigger B selected for ADC1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Adc1pretrgselVal> adc1pretrgsel{}; 
        namespace Adc1pretrgselValC{
            constexpr Register::FieldValue<decltype(adc1pretrgsel),Adc1pretrgselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1pretrgsel),Adc1pretrgselVal::v1> v1{};
        }
        ///ADC1 alternate trigger enable
        enum class Adc1alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC1
            v1=0x00000001,     ///<Alternate trigger selected for ADC1 as defined by ADC1TRGSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Adc1alttrgenVal> adc1alttrgen{}; 
        namespace Adc1alttrgenValC{
            constexpr Register::FieldValue<decltype(adc1alttrgen),Adc1alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1alttrgen),Adc1alttrgenVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(ftm0syncbit),Ftm0syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0syncbit),Ftm0syncbitVal::v1> v1{};
        }
        ///FTM1 Hardware Trigger 0 Software Synchronization
        enum class Ftm1syncbitVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM1, software must clear this bit to allow other trigger sources to assert.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ftm1syncbitVal> ftm1syncbit{}; 
        namespace Ftm1syncbitValC{
            constexpr Register::FieldValue<decltype(ftm1syncbit),Ftm1syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1syncbit),Ftm1syncbitVal::v1> v1{};
        }
        ///FTM2 Hardware Trigger 0 Software Synchronization
        enum class Ftm2syncbitVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM2, software must clear this bit to allow other trigger sources to assert.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ftm2syncbitVal> ftm2syncbit{}; 
        namespace Ftm2syncbitValC{
            constexpr Register::FieldValue<decltype(ftm2syncbit),Ftm2syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2syncbit),Ftm2syncbitVal::v1> v1{};
        }
        ///FTM3 Hardware Trigger 0 Software Synchronization
        enum class Ftm3syncbitVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM3, software must clear this bit to allow other trigger sources to assert.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ftm3syncbitVal> ftm3syncbit{}; 
        namespace Ftm3syncbitValC{
            constexpr Register::FieldValue<decltype(ftm3syncbit),Ftm3syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3syncbit),Ftm3syncbitVal::v1> v1{};
        }
        ///FTM0 channel 0 output source
        enum class Ftm0och0srcVal {
            v0=0x00000000,     ///<FTM0_CH0 pin is output of FTM0 channel 0 output
            v1=0x00000001,     ///<FTM0_CH0 pin is output of FTM0 channel 0 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ftm0och0srcVal> ftm0och0src{}; 
        namespace Ftm0och0srcValC{
            constexpr Register::FieldValue<decltype(ftm0och0src),Ftm0och0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och0src),Ftm0och0srcVal::v1> v1{};
        }
        ///FTM0 channel 1 output source
        enum class Ftm0och1srcVal {
            v0=0x00000000,     ///<FTM0_CH1 pin is output of FTM0 channel 1 output
            v1=0x00000001,     ///<FTM0_CH1 pin is output of FTM0 channel 1 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ftm0och1srcVal> ftm0och1src{}; 
        namespace Ftm0och1srcValC{
            constexpr Register::FieldValue<decltype(ftm0och1src),Ftm0och1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och1src),Ftm0och1srcVal::v1> v1{};
        }
        ///FTM0 channel 2 output source
        enum class Ftm0och2srcVal {
            v0=0x00000000,     ///<FTM0_CH2 pin is output of FTM0 channel 2 output
            v1=0x00000001,     ///<FTM0_CH2 pin is output of FTM0 channel 2 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ftm0och2srcVal> ftm0och2src{}; 
        namespace Ftm0och2srcValC{
            constexpr Register::FieldValue<decltype(ftm0och2src),Ftm0och2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och2src),Ftm0och2srcVal::v1> v1{};
        }
        ///FTM0 channel 3 output source
        enum class Ftm0och3srcVal {
            v0=0x00000000,     ///<FTM0_CH3 pin is output of FTM0 channel 3 output
            v1=0x00000001,     ///<FTM0_CH3 pin is output of FTM0 channel 3 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ftm0och3srcVal> ftm0och3src{}; 
        namespace Ftm0och3srcValC{
            constexpr Register::FieldValue<decltype(ftm0och3src),Ftm0och3srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och3src),Ftm0och3srcVal::v1> v1{};
        }
        ///FTM0 channel 4 output source
        enum class Ftm0och4srcVal {
            v0=0x00000000,     ///<FTM0_CH4 pin is output of FTM0 channel 4 output
            v1=0x00000001,     ///<FTM0_CH4 pin is output of FTM0 channel 4 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ftm0och4srcVal> ftm0och4src{}; 
        namespace Ftm0och4srcValC{
            constexpr Register::FieldValue<decltype(ftm0och4src),Ftm0och4srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och4src),Ftm0och4srcVal::v1> v1{};
        }
        ///FTM0 channel 5 output source
        enum class Ftm0och5srcVal {
            v0=0x00000000,     ///<FTM0_CH5 pin is output of FTM0 channel 5 output
            v1=0x00000001,     ///<FTM0_CH5 pin is output of FTM0 channel 5 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ftm0och5srcVal> ftm0och5src{}; 
        namespace Ftm0och5srcValC{
            constexpr Register::FieldValue<decltype(ftm0och5src),Ftm0och5srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och5src),Ftm0och5srcVal::v1> v1{};
        }
        ///FTM0 channel 6 output source
        enum class Ftm0och6srcVal {
            v0=0x00000000,     ///<FTM0_CH6 pin is output of FTM0 channel 6 output
            v1=0x00000001,     ///<FTM0_CH6 pin is output of FTM0 channel 6 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ftm0och6srcVal> ftm0och6src{}; 
        namespace Ftm0och6srcValC{
            constexpr Register::FieldValue<decltype(ftm0och6src),Ftm0och6srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och6src),Ftm0och6srcVal::v1> v1{};
        }
        ///FTM0 channel 7 output source
        enum class Ftm0och7srcVal {
            v0=0x00000000,     ///<FTM0_CH7 pin is output of FTM0 channel 7 output
            v1=0x00000001,     ///<FTM0_CH7 pin is output of FTM0 channel 7 output, modulated by FTM1 channel 1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ftm0och7srcVal> ftm0och7src{}; 
        namespace Ftm0och7srcValC{
            constexpr Register::FieldValue<decltype(ftm0och7src),Ftm0och7srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och7src),Ftm0och7srcVal::v1> v1{};
        }
        ///FTM3 channel 0 output source
        enum class Ftm3och0srcVal {
            v0=0x00000000,     ///<FTM3_CH0 pin is output of FTM3 channel 0 output
            v1=0x00000001,     ///<FTM3_CH0 pin is output of FTM3 channel 0 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm3och0srcVal> ftm3och0src{}; 
        namespace Ftm3och0srcValC{
            constexpr Register::FieldValue<decltype(ftm3och0src),Ftm3och0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och0src),Ftm3och0srcVal::v1> v1{};
        }
        ///FTM3 channel 1 output source
        enum class Ftm3och1srcVal {
            v0=0x00000000,     ///<FTM3_CH1 pin is output of FTM3 channel 1 output
            v1=0x00000001,     ///<FTM3_CH1 pin is output of FTM3 channel 1 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ftm3och1srcVal> ftm3och1src{}; 
        namespace Ftm3och1srcValC{
            constexpr Register::FieldValue<decltype(ftm3och1src),Ftm3och1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och1src),Ftm3och1srcVal::v1> v1{};
        }
        ///FTM3 channel 2 output source
        enum class Ftm3och2srcVal {
            v0=0x00000000,     ///<FTM3_CH2 pin is output of FTM3 channel 2 output
            v1=0x00000001,     ///<FTM3_CH2 pin is output of FTM3 channel 2 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ftm3och2srcVal> ftm3och2src{}; 
        namespace Ftm3och2srcValC{
            constexpr Register::FieldValue<decltype(ftm3och2src),Ftm3och2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och2src),Ftm3och2srcVal::v1> v1{};
        }
        ///FTM3 channel 3 output source
        enum class Ftm3och3srcVal {
            v0=0x00000000,     ///<FTM3_CH3 pin is output of FTM3 channel 3 output
            v1=0x00000001,     ///<FTM3_CH3 pin is output of FTM3 channel 3 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ftm3och3srcVal> ftm3och3src{}; 
        namespace Ftm3och3srcValC{
            constexpr Register::FieldValue<decltype(ftm3och3src),Ftm3och3srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och3src),Ftm3och3srcVal::v1> v1{};
        }
        ///FTM3 channel 4 output source
        enum class Ftm3och4srcVal {
            v0=0x00000000,     ///<FTM3_CH4 pin is output of FTM3 channel 4 output
            v1=0x00000001,     ///<FTM3_CH4 pin is output of FTM3 channel 4 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ftm3och4srcVal> ftm3och4src{}; 
        namespace Ftm3och4srcValC{
            constexpr Register::FieldValue<decltype(ftm3och4src),Ftm3och4srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och4src),Ftm3och4srcVal::v1> v1{};
        }
        ///FTM3 channel 5 output source
        enum class Ftm3och5srcVal {
            v0=0x00000000,     ///<FTM3_CH5 pin is output of FTM3 channel 5 output
            v1=0x00000001,     ///<FTM3_CH5 pin is output of FTM3 channel 5 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ftm3och5srcVal> ftm3och5src{}; 
        namespace Ftm3och5srcValC{
            constexpr Register::FieldValue<decltype(ftm3och5src),Ftm3och5srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och5src),Ftm3och5srcVal::v1> v1{};
        }
        ///FTM3 channel 6 output source
        enum class Ftm3och6srcVal {
            v0=0x00000000,     ///<FTM3_CH6 pin is output of FTM3 channel 6 output
            v1=0x00000001,     ///<FTM3_CH6 pin is output of FTM3 channel 6 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ftm3och6srcVal> ftm3och6src{}; 
        namespace Ftm3och6srcValC{
            constexpr Register::FieldValue<decltype(ftm3och6src),Ftm3och6srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och6src),Ftm3och6srcVal::v1> v1{};
        }
        ///FTM3 channel 7 output source
        enum class Ftm3och7srcVal {
            v0=0x00000000,     ///<FTM3_CH7 pin is output of FTM3 channel 7 output
            v1=0x00000001,     ///<FTM3_CH7 pin is output of FTM3 channel 7 output modulated by FTM2 channel 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ftm3och7srcVal> ftm3och7src{}; 
        namespace Ftm3och7srcValC{
            constexpr Register::FieldValue<decltype(ftm3och7src),Ftm3och7srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och7src),Ftm3och7srcVal::v1> v1{};
        }
    }
    namespace SimSopt9{    ///<System Options Register 9
        using Addr = Register::Address<0x40048020,0xf9c3ffff,0,unsigned>;
        ///TPM1 channel 0 input capture source select
        enum class Tpm1ch0srcVal {
            v00=0x00000000,     ///<TPM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Tpm1ch0srcVal> tpm1ch0src{}; 
        namespace Tpm1ch0srcValC{
            constexpr Register::FieldValue<decltype(tpm1ch0src),Tpm1ch0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tpm1ch0src),Tpm1ch0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tpm1ch0src),Tpm1ch0srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tpm1ch0src),Tpm1ch0srcVal::v11> v11{};
        }
        ///TPM2 channel 0 input capture source select
        enum class Tpm2ch0srcVal {
            v00=0x00000000,     ///<TPM2_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Tpm2ch0srcVal> tpm2ch0src{}; 
        namespace Tpm2ch0srcValC{
            constexpr Register::FieldValue<decltype(tpm2ch0src),Tpm2ch0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tpm2ch0src),Tpm2ch0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tpm2ch0src),Tpm2ch0srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tpm2ch0src),Tpm2ch0srcVal::v11> v11{};
        }
        ///TPM1 External Clock Pin Select
        enum class Tpm1clkselVal {
            v0=0x00000000,     ///<TPM_CLKIN0 pin
            v1=0x00000001,     ///<TPM_CLKIN1 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Tpm1clkselVal> tpm1clksel{}; 
        namespace Tpm1clkselValC{
            constexpr Register::FieldValue<decltype(tpm1clksel),Tpm1clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm1clksel),Tpm1clkselVal::v1> v1{};
        }
        ///TPM2 External Clock Pin Select
        enum class Tpm2clkselVal {
            v0=0x00000000,     ///<TPM_CLKIN0 pin
            v1=0x00000001,     ///<TPM_CLKIN1 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Tpm2clkselVal> tpm2clksel{}; 
        namespace Tpm2clkselValC{
            constexpr Register::FieldValue<decltype(tpm2clksel),Tpm2clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm2clksel),Tpm2clkselVal::v1> v1{};
        }
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0x000f0000,0,unsigned>;
        ///Pincount identification
        enum class PinidVal {
            v0000=0x00000000,     ///<Reserved
            v0001=0x00000001,     ///<Reserved
            v0010=0x00000002,     ///<32-pin
            v0011=0x00000003,     ///<Reserved
            v0100=0x00000004,     ///<48-pin
            v0101=0x00000005,     ///<64-pin
            v0110=0x00000006,     ///<80-pin
            v0111=0x00000007,     ///<81-pin or 121-pin
            v1000=0x00000008,     ///<100-pin
            v1001=0x00000009,     ///<121-pin
            v1010=0x0000000a,     ///<144-pin
            v1011=0x0000000b,     ///<Custom pinout (WLCSP)
            v1100=0x0000000c,     ///<169-pin
            v1101=0x0000000d,     ///<Reserved
            v1110=0x0000000e,     ///<256-pin
            v1111=0x0000000f,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PinidVal> pinid{}; 
        namespace PinidValC{
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v1111> v1111{};
        }
        ///Kinetis family identification
        enum class FamidVal {
            v000=0x00000000,     ///<K1x Family (without tamper)
            v001=0x00000001,     ///<K2x Family (without tamper)
            v010=0x00000002,     ///<K3x Family or K1x/K6x Family (with tamper)
            v011=0x00000003,     ///<K4x Family or K2x Family (with tamper)
            v100=0x00000004,     ///<K6x Family (without tamper)
            v101=0x00000005,     ///<K7x Family
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,FamidVal> famid{}; 
        namespace FamidValC{
            constexpr Register::FieldValue<decltype(famid),FamidVal::v000> v000{};
            constexpr Register::FieldValue<decltype(famid),FamidVal::v001> v001{};
            constexpr Register::FieldValue<decltype(famid),FamidVal::v010> v010{};
            constexpr Register::FieldValue<decltype(famid),FamidVal::v011> v011{};
            constexpr Register::FieldValue<decltype(famid),FamidVal::v100> v100{};
            constexpr Register::FieldValue<decltype(famid),FamidVal::v101> v101{};
            constexpr Register::FieldValue<decltype(famid),FamidVal::v110> v110{};
            constexpr Register::FieldValue<decltype(famid),FamidVal::v111> v111{};
        }
        ///Device Die ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> dieid{}; 
        namespace DieidValC{
        }
        ///Device revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
        namespace RevidValC{
        }
        ///Kinetis Series ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> seriesid{}; 
        namespace SeriesidValC{
        }
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
            constexpr Register::FieldValue<decltype(subfamid),SubfamidVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(subfamid),SubfamidVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(subfamid),SubfamidVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(subfamid),SubfamidVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(subfamid),SubfamidVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(subfamid),SubfamidVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(subfamid),SubfamidVal::v0110> v0110{};
        }
        ///Kinetis Family ID
        enum class FamilyidVal {
            v0000=0x00000000,     ///<K0x Family
            v0001=0x00000001,     ///<K1x Family
            v0010=0x00000002,     ///<K2x Family
            v0011=0x00000003,     ///<K3x Family
            v0100=0x00000004,     ///<K4x Family
            v0110=0x00000006,     ///<K6x Family
            v0111=0x00000007,     ///<K7x Family
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,FamilyidVal> familyid{}; 
        namespace FamilyidValC{
            constexpr Register::FieldValue<decltype(familyid),FamilyidVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(familyid),FamilyidVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(familyid),FamilyidVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(familyid),FamilyidVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(familyid),FamilyidVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(familyid),FamilyidVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(familyid),FamilyidVal::v0111> v0111{};
        }
    }
    namespace SimScgc1{    ///<System Clock Gating Control Register 1
        using Addr = Register::Address<0x40048028,0xfffffb3f,0,unsigned>;
        ///I2C2 Clock Gate Control
        enum class I2c2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,I2c2Val> i2c2{}; 
        namespace I2c2ValC{
            constexpr Register::FieldValue<decltype(i2c2),I2c2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c2),I2c2Val::v1> v1{};
        }
        ///I2C3 Clock Gate Control
        enum class I2c3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,I2c3Val> i2c3{}; 
        namespace I2c3ValC{
            constexpr Register::FieldValue<decltype(i2c3),I2c3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c3),I2c3Val::v1> v1{};
        }
        ///UART4 Clock Gate Control
        enum class Uart4Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Uart4Val> uart4{}; 
        namespace Uart4ValC{
            constexpr Register::FieldValue<decltype(uart4),Uart4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart4),Uart4Val::v1> v1{};
        }
    }
    namespace SimScgc2{    ///<System Clock Gating Control Register 2
        using Addr = Register::Address<0x4004802c,0xffffc9ee,0,unsigned>;
        ///ENET Clock Gate Control
        enum class EnetVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnetVal> enet{}; 
        namespace EnetValC{
            constexpr Register::FieldValue<decltype(enet),EnetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enet),EnetVal::v1> v1{};
        }
        ///LPUART0 Clock Gate Control
        enum class Lpuart0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Lpuart0Val> lpuart0{}; 
        namespace Lpuart0ValC{
            constexpr Register::FieldValue<decltype(lpuart0),Lpuart0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(lpuart0),Lpuart0Val::v1> v1{};
        }
        ///TPM1 Clock Gate Control
        enum class Tpm1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Tpm1Val> tpm1{}; 
        namespace Tpm1ValC{
            constexpr Register::FieldValue<decltype(tpm1),Tpm1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm1),Tpm1Val::v1> v1{};
        }
        ///TPM2 Clock Gate Control
        enum class Tpm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Tpm2Val> tpm2{}; 
        namespace Tpm2ValC{
            constexpr Register::FieldValue<decltype(tpm2),Tpm2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm2),Tpm2Val::v1> v1{};
        }
        ///DAC0 Clock Gate Control
        enum class Dac0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Dac0Val> dac0{}; 
        namespace Dac0ValC{
            constexpr Register::FieldValue<decltype(dac0),Dac0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dac0),Dac0Val::v1> v1{};
        }
        ///DAC1 Clock Gate Control
        enum class Dac1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dac1Val> dac1{}; 
        namespace Dac1ValC{
            constexpr Register::FieldValue<decltype(dac1),Dac1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dac1),Dac1Val::v1> v1{};
        }
    }
    namespace SimScgc3{    ///<System Clock Gating Control Register 3
        using Addr = Register::Address<0x40048030,0xf4fdefe0,0,unsigned>;
        ///RNGA Clock Gate Control
        enum class RngaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RngaVal> rnga{}; 
        namespace RngaValC{
            constexpr Register::FieldValue<decltype(rnga),RngaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rnga),RngaVal::v1> v1{};
        }
        ///USBHS Clock Gate Control
        enum class UsbhsVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UsbhsVal> usbhs{}; 
        namespace UsbhsValC{
            constexpr Register::FieldValue<decltype(usbhs),UsbhsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbhs),UsbhsVal::v1> v1{};
        }
        ///USBHS PHY Clock Gate Control
        enum class UsbhsphyVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,UsbhsphyVal> usbhsphy{}; 
        namespace UsbhsphyValC{
            constexpr Register::FieldValue<decltype(usbhsphy),UsbhsphyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbhsphy),UsbhsphyVal::v1> v1{};
        }
        ///USBHS DCD Clock Gate Control
        enum class UsbhsdcdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,UsbhsdcdVal> usbhsdcd{}; 
        namespace UsbhsdcdValC{
            constexpr Register::FieldValue<decltype(usbhsdcd),UsbhsdcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbhsdcd),UsbhsdcdVal::v1> v1{};
        }
        ///FlexCAN1 Clock Gate Control
        enum class Flexcan1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Flexcan1Val> flexcan1{}; 
        namespace Flexcan1ValC{
            constexpr Register::FieldValue<decltype(flexcan1),Flexcan1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(flexcan1),Flexcan1Val::v1> v1{};
        }
        ///SPI2 Clock Gate Control
        enum class Spi2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Spi2Val> spi2{}; 
        namespace Spi2ValC{
            constexpr Register::FieldValue<decltype(spi2),Spi2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi2),Spi2Val::v1> v1{};
        }
        ///SDHC Clock Gate Control
        enum class SdhcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,SdhcVal> sdhc{}; 
        namespace SdhcValC{
            constexpr Register::FieldValue<decltype(sdhc),SdhcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sdhc),SdhcVal::v1> v1{};
        }
        ///FTM2 Clock Gate Control
        enum class Ftm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm2Val> ftm2{}; 
        namespace Ftm2ValC{
            constexpr Register::FieldValue<decltype(ftm2),Ftm2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2),Ftm2Val::v1> v1{};
        }
        ///FTM3 Clock Gate Control
        enum class Ftm3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ftm3Val> ftm3{}; 
        namespace Ftm3ValC{
            constexpr Register::FieldValue<decltype(ftm3),Ftm3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3),Ftm3Val::v1> v1{};
        }
        ///ADC1 Clock Gate Control
        enum class Adc1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Adc1Val> adc1{}; 
        namespace Adc1ValC{
            constexpr Register::FieldValue<decltype(adc1),Adc1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1),Adc1Val::v1> v1{};
        }
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xffe3c339,0,unsigned>;
        ///EWM Clock Gate Control
        enum class EwmVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EwmVal> ewm{}; 
        namespace EwmValC{
            constexpr Register::FieldValue<decltype(ewm),EwmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ewm),EwmVal::v1> v1{};
        }
        ///CMT Clock Gate Control
        enum class CmtVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CmtVal> cmt{}; 
        namespace CmtValC{
            constexpr Register::FieldValue<decltype(cmt),CmtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmt),CmtVal::v1> v1{};
        }
        ///I2C0 Clock Gate Control
        enum class I2c0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,I2c0Val> i2c0{}; 
        namespace I2c0ValC{
            constexpr Register::FieldValue<decltype(i2c0),I2c0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c0),I2c0Val::v1> v1{};
        }
        ///I2C1 Clock Gate Control
        enum class I2c1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,I2c1Val> i2c1{}; 
        namespace I2c1ValC{
            constexpr Register::FieldValue<decltype(i2c1),I2c1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c1),I2c1Val::v1> v1{};
        }
        ///UART0 Clock Gate Control
        enum class Uart0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Uart0Val> uart0{}; 
        namespace Uart0ValC{
            constexpr Register::FieldValue<decltype(uart0),Uart0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0),Uart0Val::v1> v1{};
        }
        ///UART1 Clock Gate Control
        enum class Uart1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Uart1Val> uart1{}; 
        namespace Uart1ValC{
            constexpr Register::FieldValue<decltype(uart1),Uart1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1),Uart1Val::v1> v1{};
        }
        ///UART2 Clock Gate Control
        enum class Uart2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Uart2Val> uart2{}; 
        namespace Uart2ValC{
            constexpr Register::FieldValue<decltype(uart2),Uart2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart2),Uart2Val::v1> v1{};
        }
        ///UART3 Clock Gate Control
        enum class Uart3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Uart3Val> uart3{}; 
        namespace Uart3ValC{
            constexpr Register::FieldValue<decltype(uart3),Uart3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart3),Uart3Val::v1> v1{};
        }
        ///USB Clock Gate Control
        enum class UsbotgVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UsbotgVal> usbotg{}; 
        namespace UsbotgValC{
            constexpr Register::FieldValue<decltype(usbotg),UsbotgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbotg),UsbotgVal::v1> v1{};
        }
        ///Comparator Clock Gate Control
        enum class CmpVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,CmpVal> cmp{}; 
        namespace CmpValC{
            constexpr Register::FieldValue<decltype(cmp),CmpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmp),CmpVal::v1> v1{};
        }
        ///VREF Clock Gate Control
        enum class VrefVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,VrefVal> vref{}; 
        namespace VrefValC{
            constexpr Register::FieldValue<decltype(vref),VrefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vref),VrefVal::v1> v1{};
        }
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0xffffc1de,0,unsigned>;
        ///Low Power Timer Access Control
        enum class LptmrVal {
            v0=0x00000000,     ///<Access disabled
            v1=0x00000001,     ///<Access enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LptmrVal> lptmr{}; 
        namespace LptmrValC{
            constexpr Register::FieldValue<decltype(lptmr),LptmrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lptmr),LptmrVal::v1> v1{};
        }
        ///TSI Clock Gate Control
        enum class TsiVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TsiVal> tsi{}; 
        namespace TsiValC{
            constexpr Register::FieldValue<decltype(tsi),TsiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsi),TsiVal::v1> v1{};
        }
        ///Port A Clock Gate Control
        enum class PortaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,PortaVal> porta{}; 
        namespace PortaValC{
            constexpr Register::FieldValue<decltype(porta),PortaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porta),PortaVal::v1> v1{};
        }
        ///Port B Clock Gate Control
        enum class PortbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,PortbVal> portb{}; 
        namespace PortbValC{
            constexpr Register::FieldValue<decltype(portb),PortbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portb),PortbVal::v1> v1{};
        }
        ///Port C Clock Gate Control
        enum class PortcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,PortcVal> portc{}; 
        namespace PortcValC{
            constexpr Register::FieldValue<decltype(portc),PortcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portc),PortcVal::v1> v1{};
        }
        ///Port D Clock Gate Control
        enum class PortdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,PortdVal> portd{}; 
        namespace PortdValC{
            constexpr Register::FieldValue<decltype(portd),PortdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portd),PortdVal::v1> v1{};
        }
        ///Port E Clock Gate Control
        enum class PorteVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,PorteVal> porte{}; 
        namespace PorteValC{
            constexpr Register::FieldValue<decltype(porte),PorteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porte),PorteVal::v1> v1{};
        }
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0x501b4dec,0,unsigned>;
        ///Flash Memory Clock Gate Control
        enum class FtfVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FtfVal> ftf{}; 
        namespace FtfValC{
            constexpr Register::FieldValue<decltype(ftf),FtfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftf),FtfVal::v1> v1{};
        }
        ///DMA Mux Clock Gate Control
        enum class DmamuxVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DmamuxVal> dmamux{}; 
        namespace DmamuxValC{
            constexpr Register::FieldValue<decltype(dmamux),DmamuxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmamux),DmamuxVal::v1> v1{};
        }
        ///FlexCAN0 Clock Gate Control
        enum class Flexcan0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Flexcan0Val> flexcan0{}; 
        namespace Flexcan0ValC{
            constexpr Register::FieldValue<decltype(flexcan0),Flexcan0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(flexcan0),Flexcan0Val::v1> v1{};
        }
        ///RNGA Clock Gate Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rnga{}; 
        namespace RngaValC{
        }
        ///SPI0 Clock Gate Control
        enum class Spi0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Spi0Val> spi0{}; 
        namespace Spi0ValC{
            constexpr Register::FieldValue<decltype(spi0),Spi0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi0),Spi0Val::v1> v1{};
        }
        ///SPI1 Clock Gate Control
        enum class Spi1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Spi1Val> spi1{}; 
        namespace Spi1ValC{
            constexpr Register::FieldValue<decltype(spi1),Spi1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi1),Spi1Val::v1> v1{};
        }
        ///I2S Clock Gate Control
        enum class I2sVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,I2sVal> i2s{}; 
        namespace I2sValC{
            constexpr Register::FieldValue<decltype(i2s),I2sVal::v0> v0{};
            constexpr Register::FieldValue<decltype(i2s),I2sVal::v1> v1{};
        }
        ///CRC Clock Gate Control
        enum class CrcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CrcVal> crc{}; 
        namespace CrcValC{
            constexpr Register::FieldValue<decltype(crc),CrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crc),CrcVal::v1> v1{};
        }
        ///USB DCD Clock Gate Control
        enum class UsbdcdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,UsbdcdVal> usbdcd{}; 
        namespace UsbdcdValC{
            constexpr Register::FieldValue<decltype(usbdcd),UsbdcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbdcd),UsbdcdVal::v1> v1{};
        }
        ///PDB Clock Gate Control
        enum class PdbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,PdbVal> pdb{}; 
        namespace PdbValC{
            constexpr Register::FieldValue<decltype(pdb),PdbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdb),PdbVal::v1> v1{};
        }
        ///PIT Clock Gate Control
        enum class PitVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,PitVal> pit{}; 
        namespace PitValC{
            constexpr Register::FieldValue<decltype(pit),PitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pit),PitVal::v1> v1{};
        }
        ///FTM0 Clock Gate Control
        enum class Ftm0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm0Val> ftm0{}; 
        namespace Ftm0ValC{
            constexpr Register::FieldValue<decltype(ftm0),Ftm0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0),Ftm0Val::v1> v1{};
        }
        ///FTM1 Clock Gate Control
        enum class Ftm1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ftm1Val> ftm1{}; 
        namespace Ftm1ValC{
            constexpr Register::FieldValue<decltype(ftm1),Ftm1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1),Ftm1Val::v1> v1{};
        }
        ///FTM2 Clock Gate Control
        enum class Ftm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ftm2Val> ftm2{}; 
        namespace Ftm2ValC{
            constexpr Register::FieldValue<decltype(ftm2),Ftm2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2),Ftm2Val::v1> v1{};
        }
        ///ADC0 Clock Gate Control
        enum class Adc0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Adc0Val> adc0{}; 
        namespace Adc0ValC{
            constexpr Register::FieldValue<decltype(adc0),Adc0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0),Adc0Val::v1> v1{};
        }
        ///RTC Access Control
        enum class RtcVal {
            v0=0x00000000,     ///<Access and interrupts disabled
            v1=0x00000001,     ///<Access and interrupts enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,RtcVal> rtc{}; 
        namespace RtcValC{
            constexpr Register::FieldValue<decltype(rtc),RtcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtc),RtcVal::v1> v1{};
        }
        ///DAC0 Clock Gate Control
        enum class Dac0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Dac0Val> dac0{}; 
        namespace Dac0ValC{
            constexpr Register::FieldValue<decltype(dac0),Dac0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dac0),Dac0Val::v1> v1{};
        }
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x40048040,0xfffffff0,0,unsigned>;
        ///FlexBus Clock Gate Control
        enum class FlexbusVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FlexbusVal> flexbus{}; 
        namespace FlexbusValC{
            constexpr Register::FieldValue<decltype(flexbus),FlexbusVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flexbus),FlexbusVal::v1> v1{};
        }
        ///DMA Clock Gate Control
        enum class DmaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma),DmaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dma),DmaVal::v1> v1{};
        }
        ///MPU Clock Gate Control
        enum class MpuVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MpuVal> mpu{}; 
        namespace MpuValC{
            constexpr Register::FieldValue<decltype(mpu),MpuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mpu),MpuVal::v1> v1{};
        }
        ///SDRAMC Clock Gate Control
        enum class SdramcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SdramcVal> sdramc{}; 
        namespace SdramcValC{
            constexpr Register::FieldValue<decltype(sdramc),SdramcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sdramc),SdramcVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v1111> v1111{};
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
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(outdiv3),Outdiv3Val::v1111> v1111{};
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
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(outdiv2),Outdiv2Val::v1111> v1111{};
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
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1111> v1111{};
        }
    }
    namespace SimClkdiv2{    ///<System Clock Divider Register 2
        using Addr = Register::Address<0x40048048,0xfffffff0,0,unsigned>;
        ///USB clock divider fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbfrac{}; 
        namespace UsbfracValC{
        }
        ///USB clock divider divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> usbdiv{}; 
        namespace UsbdivValC{
        }
    }
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4004804c,0x00f0f0fc,0,unsigned>;
        ///Flash Disable
        enum class FlashdisVal {
            v0=0x00000000,     ///<Flash is enabled
            v1=0x00000001,     ///<Flash is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FlashdisVal> flashdis{}; 
        namespace FlashdisValC{
            constexpr Register::FieldValue<decltype(flashdis),FlashdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flashdis),FlashdisVal::v1> v1{};
        }
        ///Flash Doze
        enum class FlashdozeVal {
            v0=0x00000000,     ///<Flash remains enabled during Wait mode
            v1=0x00000001,     ///<Flash is disabled for the duration of Wait mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FlashdozeVal> flashdoze{}; 
        namespace FlashdozeValC{
            constexpr Register::FieldValue<decltype(flashdoze),FlashdozeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flashdoze),FlashdozeVal::v1> v1{};
        }
        ///FlexNVM partition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> depart{}; 
        namespace DepartValC{
        }
        ///EEPROM size
        enum class EesizeVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,EesizeVal> eesize{}; 
        namespace EesizeValC{
            constexpr Register::FieldValue<decltype(eesize),EesizeVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(eesize),EesizeVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(eesize),EesizeVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(eesize),EesizeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(eesize),EesizeVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(eesize),EesizeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(eesize),EesizeVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(eesize),EesizeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(eesize),EesizeVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(eesize),EesizeVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(eesize),EesizeVal::v1111> v1111{};
        }
        ///Program flash size
        enum class PfsizeVal {
            v0011=0x00000003,     ///<32 KB of program flash memory
            v0101=0x00000005,     ///<64 KB of program flash memory
            v0111=0x00000007,     ///<128 KB of program flash memory
            v1001=0x00000009,     ///<256 KB of program flash memory
            v1011=0x0000000b,     ///<512 KB of program flash memory
            v1101=0x0000000d,     ///<1024 KB of program flash memory
            v1111=0x0000000f,     ///<2048 KB of program flash memory
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,PfsizeVal> pfsize{}; 
        namespace PfsizeValC{
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v1111> v1111{};
        }
        ///FlexNVM size
        enum class NvmsizeVal {
            v0000=0x00000000,     ///<0 KB of FlexNVM
            v0011=0x00000003,     ///<32 KB of FlexNVM
            v0101=0x00000005,     ///<64 KB of FlexNVM
            v0111=0x00000007,     ///<128 KB of FlexNVM
            v1001=0x00000009,     ///<256 KB of FlexNVM
            v1011=0x0000000b,     ///<512 KB of FlexNVM
            v1111=0x0000000f,     ///<256 KB of FlexNVM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,NvmsizeVal> nvmsize{}; 
        namespace NvmsizeValC{
            constexpr Register::FieldValue<decltype(nvmsize),NvmsizeVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(nvmsize),NvmsizeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(nvmsize),NvmsizeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(nvmsize),NvmsizeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(nvmsize),NvmsizeVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(nvmsize),NvmsizeVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(nvmsize),NvmsizeVal::v1111> v1111{};
        }
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0x0000ffff,0,unsigned>;
        ///Max address block 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> maxaddr1{}; 
        namespace Maxaddr1ValC{
        }
        ///Program flash only
        enum class PflshVal {
            v0=0x00000000,     ///<Device supports FlexNVM
            v1=0x00000001,     ///<Program Flash only, device does not support FlexNVM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,PflshVal> pflsh{}; 
        namespace PflshValC{
            constexpr Register::FieldValue<decltype(pflsh),PflshVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pflsh),PflshVal::v1> v1{};
        }
        ///Max address block 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> maxaddr0{}; 
        namespace Maxaddr0ValC{
        }
        ///Swap program flash
        enum class SwappflshVal {
            v0=0x00000000,     ///<Swap is not active.
            v1=0x00000001,     ///<Swap is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SwappflshVal> swappflsh{}; 
        namespace SwappflshValC{
            constexpr Register::FieldValue<decltype(swappflsh),SwappflshVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swappflsh),SwappflshVal::v1> v1{};
        }
    }
    namespace SimUidh{    ///<Unique Identification Register High
        using Addr = Register::Address<0x40048054,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
    namespace SimUidmh{    ///<Unique Identification Register Mid-High
        using Addr = Register::Address<0x40048058,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
    namespace SimUidml{    ///<Unique Identification Register Mid Low
        using Addr = Register::Address<0x4004805c,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
    namespace SimUidl{    ///<Unique Identification Register Low
        using Addr = Register::Address<0x40048060,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
    namespace SimClkdiv3{    ///<System Clock Divider Register 3
        using Addr = Register::Address<0x40048064,0xfffffff0,0,unsigned>;
        ///PLLFLL clock divider fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pllfllfrac{}; 
        namespace PllfllfracValC{
        }
        ///PLLFLL clock divider divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> pllflldiv{}; 
        namespace PllflldivValC{
        }
    }
    namespace SimClkdiv4{    ///<System Clock Divider Register 4
        using Addr = Register::Address<0x40048068,0xfffffff0,0,unsigned>;
        ///Trace clock divider fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tracefrac{}; 
        namespace TracefracValC{
        }
        ///Trace clock divider divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> tracediv{}; 
        namespace TracedivValC{
        }
    }
}
