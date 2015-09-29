#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0x1ff30fff,0,unsigned>;
        ///RAM size
        enum class ramsizeVal {
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
        namespace ramsizeValC{
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0001> v0001{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0011> v0011{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0100> v0100{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0101> v0101{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0110> v0110{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0111> v0111{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v1000> v1000{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v1001> v1001{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v1011> v1011{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,ramsizeVal> ramsize{}; 
        ///32K oscillator clock select
        enum class osc32kselVal {
            v00=0x00000000,     ///<System oscillator (OSC32KCLK)
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<RTC 32.768kHz oscillator
            v11=0x00000003,     ///<LPO 1 kHz
        };
        namespace osc32kselValC{
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v00> v00{};
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v01> v01{};
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v10> v10{};
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,osc32kselVal> osc32ksel{}; 
        ///USB voltage regulator in standby mode during VLPR and VLPW modes
        enum class usbvstbyVal {
            v0=0x00000000,     ///<USB voltage regulator not in standby during VLPR and VLPW modes.
            v1=0x00000001,     ///<USB voltage regulator in standby during VLPR and VLPW modes.
        };
        namespace usbvstbyValC{
            constexpr MPL::Value<usbvstbyVal,usbvstbyVal::v0> v0{};
            constexpr MPL::Value<usbvstbyVal,usbvstbyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,usbvstbyVal> usbvstby{}; 
        ///USB voltage regulator in standby mode during Stop, VLPS, LLS and VLLS modes.
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
            v1=0x00000001,     ///<USB voltage regulator is enabled.
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
            v0=0x00000000,     ///<SOPT1 USBREGEN cannot be written.
            v1=0x00000001,     ///<SOPT1 USBREGEN can be written.
        };
        namespace urweValC{
            constexpr MPL::Value<urweVal,urweVal::v0> v0{};
            constexpr MPL::Value<urweVal,urweVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,urweVal> urwe{}; 
        ///USB voltage regulator VLP standby write enable
        enum class uvsweVal {
            v0=0x00000000,     ///<SOPT1 USBVSTBY cannot be written.
            v1=0x00000001,     ///<SOPT1 USBVSTBY can be written.
        };
        namespace uvsweValC{
            constexpr MPL::Value<uvsweVal,uvsweVal::v0> v0{};
            constexpr MPL::Value<uvsweVal,uvsweVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,uvsweVal> uvswe{}; 
        ///USB voltage regulator stop standby write enable
        enum class ussweVal {
            v0=0x00000000,     ///<SOPT1 USBSSTBY cannot be written.
            v1=0x00000001,     ///<SOPT1 USBSSTBY can be written.
        };
        namespace ussweValC{
            constexpr MPL::Value<ussweVal,ussweVal::v0> v0{};
            constexpr MPL::Value<ussweVal,ussweVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ussweVal> usswe{}; 
    }
    namespace SimUsbphyctl{    ///<USB PHY Control Register
        using Addr = Register::Address<0x40047008,0xff0ffcff,0,unsigned>;
        ///no description available
        enum class usbvregselVal {
            v0=0x00000000,     ///<VREG_IN0 will be selected if both regulator inputs are powered
            v1=0x00000001,     ///<VREG_IN1 will be selected if both regulator inputs are powered
        };
        namespace usbvregselValC{
            constexpr MPL::Value<usbvregselVal,usbvregselVal::v0> v0{};
            constexpr MPL::Value<usbvregselVal,usbvregselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,usbvregselVal> usbvregsel{}; 
        ///no description available
        enum class usbvregpdVal {
            v0=0x00000000,     ///<Regulator output pulldown resistor is not enabled
            v1=0x00000001,     ///<Regulator output pulldown resistor is enabled
        };
        namespace usbvregpdValC{
            constexpr MPL::Value<usbvregpdVal,usbvregpdVal::v0> v0{};
            constexpr MPL::Value<usbvregpdVal,usbvregpdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,usbvregpdVal> usbvregpd{}; 
        ///USB 3.3V Output Target
        enum class usb3vouttrgVal {
            v000=0x00000000,     ///<2.733V
            v001=0x00000001,     ///<3.020V
            v010=0x00000002,     ///<3.074V
            v011=0x00000003,     ///<3.130V
            v100=0x00000004,     ///<3.188V
            v101=0x00000005,     ///<3.248V
            v110=0x00000006,     ///<3.310V (default)
            v111=0x00000007,     ///<3.662V (For Freescale use only, not for customer use)
        };
        namespace usb3vouttrgValC{
            constexpr MPL::Value<usb3vouttrgVal,usb3vouttrgVal::v000> v000{};
            constexpr MPL::Value<usb3vouttrgVal,usb3vouttrgVal::v001> v001{};
            constexpr MPL::Value<usb3vouttrgVal,usb3vouttrgVal::v010> v010{};
            constexpr MPL::Value<usb3vouttrgVal,usb3vouttrgVal::v011> v011{};
            constexpr MPL::Value<usb3vouttrgVal,usb3vouttrgVal::v100> v100{};
            constexpr MPL::Value<usb3vouttrgVal,usb3vouttrgVal::v101> v101{};
            constexpr MPL::Value<usb3vouttrgVal,usb3vouttrgVal::v110> v110{};
            constexpr MPL::Value<usb3vouttrgVal,usb3vouttrgVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,usb3vouttrgVal> usb3vouttrg{}; 
        ///USB Disable Inrush Current Limit
        enum class usbdisilimVal {
            v0=0x00000000,     ///<The current limiter for the USB Voltage Regulator is enabled
            v1=0x00000001,     ///<The current limiter for the USB Voltage Regulator is disabled
        };
        namespace usbdisilimValC{
            constexpr MPL::Value<usbdisilimVal,usbdisilimVal::v0> v0{};
            constexpr MPL::Value<usbdisilimVal,usbdisilimVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,usbdisilimVal> usbdisilim{}; 
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0xc0c0ec0c,0,unsigned>;
        ///USB Slow Clock Source
        enum class usbslsrcVal {
            v0=0x00000000,     ///<MCGIRCLK
            v1=0x00000001,     ///<RTC 32.768kHz clock
        };
        namespace usbslsrcValC{
            constexpr MPL::Value<usbslsrcVal,usbslsrcVal::v0> v0{};
            constexpr MPL::Value<usbslsrcVal,usbslsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,usbslsrcVal> usbslsrc{}; 
        ///USB PHY PLL Regulator Enable
        enum class usbregenVal {
            v0=0x00000000,     ///<USB PHY PLL Regulator disabled.
            v1=0x00000001,     ///<USB PHY PLL Regulator enabled.
        };
        namespace usbregenValC{
            constexpr MPL::Value<usbregenVal,usbregenVal::v0> v0{};
            constexpr MPL::Value<usbregenVal,usbregenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,usbregenVal> usbregen{}; 
        ///RTC clock out select
        enum class rtcclkoutselVal {
            v0=0x00000000,     ///<RTC 1 Hz clock is output on the RTC_CLKOUT pin.
            v1=0x00000001,     ///<RTC 32.768kHz clock is output on the RTC_CLKOUT pin.
        };
        namespace rtcclkoutselValC{
            constexpr MPL::Value<rtcclkoutselVal,rtcclkoutselVal::v0> v0{};
            constexpr MPL::Value<rtcclkoutselVal,rtcclkoutselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rtcclkoutselVal> rtcclkoutsel{}; 
        ///CLKOUT select
        enum class clkoutselVal {
            v000=0x00000000,     ///<FlexBus CLKOUT
            v001=0x00000001,     ///<Reserved
            v010=0x00000002,     ///<Flash clock
            v011=0x00000003,     ///<LPO clock (1 kHz)
            v100=0x00000004,     ///<MCGIRCLK
            v101=0x00000005,     ///<RTC 32.768kHz clock
            v110=0x00000006,     ///<OSCERCLK0
            v111=0x00000007,     ///<IRC 48 MHz clock
        };
        namespace clkoutselValC{
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v000> v000{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v001> v001{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v010> v010{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v011> v011{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v100> v100{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v101> v101{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v110> v110{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,clkoutselVal> clkoutsel{}; 
        ///FlexBus security level
        enum class fbslVal {
            v00=0x00000000,     ///<All off-chip accesses (instruction and data) via the FlexBus or SDRAM are disallowed.
            v01=0x00000001,     ///<All off-chip accesses (instruction and data) via the FlexBus or SDRAM are disallowed.
            v10=0x00000002,     ///<Off-chip instruction accesses are disallowed. Data accesses are allowed.
            v11=0x00000003,     ///<Off-chip instruction accesses and data accesses are allowed.
        };
        namespace fbslValC{
            constexpr MPL::Value<fbslVal,fbslVal::v00> v00{};
            constexpr MPL::Value<fbslVal,fbslVal::v01> v01{};
            constexpr MPL::Value<fbslVal,fbslVal::v10> v10{};
            constexpr MPL::Value<fbslVal,fbslVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,fbslVal> fbsl{}; 
        ///Debug trace clock select
        enum class traceclkselVal {
            v0=0x00000000,     ///<MCGOUTCLK
            v1=0x00000001,     ///<Core/system clock
        };
        namespace traceclkselValC{
            constexpr MPL::Value<traceclkselVal,traceclkselVal::v0> v0{};
            constexpr MPL::Value<traceclkselVal,traceclkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,traceclkselVal> traceclksel{}; 
        ///PLL/FLL clock select
        enum class pllfllselVal {
            v00=0x00000000,     ///<MCGFLLCLK clock
            v01=0x00000001,     ///<MCGPLLCLK clock
            v10=0x00000002,     ///<USB1 PFD clock
            v11=0x00000003,     ///<IRC48 MHz clock
        };
        namespace pllfllselValC{
            constexpr MPL::Value<pllfllselVal,pllfllselVal::v00> v00{};
            constexpr MPL::Value<pllfllselVal,pllfllselVal::v01> v01{};
            constexpr MPL::Value<pllfllselVal,pllfllselVal::v10> v10{};
            constexpr MPL::Value<pllfllselVal,pllfllselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pllfllselVal> pllfllsel{}; 
        ///USB clock source select
        enum class usbsrcVal {
            v0=0x00000000,     ///<External bypass clock (USB_CLKIN).
            v1=0x00000001,     ///<MCGFLLCLK , or MCGPLLCLK , or IRC48M , or USB1 PFD clock as selected by SOPT2[PLLFLLSEL], and then divided by the USB fractional divider as configured by SIM_CLKDIV2[USBFRAC, USBDIV].
        };
        namespace usbsrcValC{
            constexpr MPL::Value<usbsrcVal,usbsrcVal::v0> v0{};
            constexpr MPL::Value<usbsrcVal,usbsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,usbsrcVal> usbsrc{}; 
        ///RMII clock source select
        enum class rmiisrcVal {
            v0=0x00000000,     ///<EXTAL clock
            v1=0x00000001,     ///<External bypass clock (ENET_1588_CLKIN).
        };
        namespace rmiisrcValC{
            constexpr MPL::Value<rmiisrcVal,rmiisrcVal::v0> v0{};
            constexpr MPL::Value<rmiisrcVal,rmiisrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,rmiisrcVal> rmiisrc{}; 
        ///IEEE 1588 timestamp clock source select
        enum class timesrcVal {
            v00=0x00000000,     ///<Core/system clock.
            v01=0x00000001,     ///<MCGFLLCLK , or MCGPLLCLK , or IRC48M , or USB1 PFD clock as selected by SOPT2[PLLFLLSEL].
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<External bypass clock (ENET_1588_CLKIN).
        };
        namespace timesrcValC{
            constexpr MPL::Value<timesrcVal,timesrcVal::v00> v00{};
            constexpr MPL::Value<timesrcVal,timesrcVal::v01> v01{};
            constexpr MPL::Value<timesrcVal,timesrcVal::v10> v10{};
            constexpr MPL::Value<timesrcVal,timesrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,timesrcVal> timesrc{}; 
        ///TPM clock source select
        enum class tpmsrcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<MCGFLLCLK , or MCGPLLCLK , or IRC48M , or USB1 PFD clock as selected by SOPT2[PLLFLLSEL], and then divided by the PLLFLLCLK fractional divider as configured by SIM_CLKDIV3[PLLFLLFRAC, PLLFLLDIV].
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        namespace tpmsrcValC{
            constexpr MPL::Value<tpmsrcVal,tpmsrcVal::v00> v00{};
            constexpr MPL::Value<tpmsrcVal,tpmsrcVal::v01> v01{};
            constexpr MPL::Value<tpmsrcVal,tpmsrcVal::v10> v10{};
            constexpr MPL::Value<tpmsrcVal,tpmsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,tpmsrcVal> tpmsrc{}; 
        ///LPUART clock source select
        enum class lpuartsrcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<MCGFLLCLK , or MCGPLLCLK , or IRC48M , or USB1 PFD clock as selected by SOPT2[PLLFLLSEL], and then divided by the PLLFLLCLK fractional divider as configured by SIM_CLKDIV3[PLLFLLFRAC, PLLFLLDIV].
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        namespace lpuartsrcValC{
            constexpr MPL::Value<lpuartsrcVal,lpuartsrcVal::v00> v00{};
            constexpr MPL::Value<lpuartsrcVal,lpuartsrcVal::v01> v01{};
            constexpr MPL::Value<lpuartsrcVal,lpuartsrcVal::v10> v10{};
            constexpr MPL::Value<lpuartsrcVal,lpuartsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,lpuartsrcVal> lpuartsrc{}; 
        ///SDHC clock source select
        enum class sdhcsrcVal {
            v00=0x00000000,     ///<Core/system clock.
            v01=0x00000001,     ///<MCGFLLCLK, or MCGPLLCLK , or IRC48M , or USB1 PFD clock as selected by SOPT2[PLLFLLSEL].
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<External bypass clock (SDHC0_CLKIN)
        };
        namespace sdhcsrcValC{
            constexpr MPL::Value<sdhcsrcVal,sdhcsrcVal::v00> v00{};
            constexpr MPL::Value<sdhcsrcVal,sdhcsrcVal::v01> v01{};
            constexpr MPL::Value<sdhcsrcVal,sdhcsrcVal::v10> v10{};
            constexpr MPL::Value<sdhcsrcVal,sdhcsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,sdhcsrcVal> sdhcsrc{}; 
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0x0083eee0,0,unsigned>;
        ///FTM0 Fault 0 Select
        enum class ftm0flt0Val {
            v0=0x00000000,     ///<FTM0_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        namespace ftm0flt0ValC{
            constexpr MPL::Value<ftm0flt0Val,ftm0flt0Val::v0> v0{};
            constexpr MPL::Value<ftm0flt0Val,ftm0flt0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ftm0flt0Val> ftm0flt0{}; 
        ///FTM0 Fault 1 Select
        enum class ftm0flt1Val {
            v0=0x00000000,     ///<FTM0_FLT1 pin
            v1=0x00000001,     ///<CMP1 out
        };
        namespace ftm0flt1ValC{
            constexpr MPL::Value<ftm0flt1Val,ftm0flt1Val::v0> v0{};
            constexpr MPL::Value<ftm0flt1Val,ftm0flt1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ftm0flt1Val> ftm0flt1{}; 
        ///FTM0 Fault 2 Select
        enum class ftm0flt2Val {
            v0=0x00000000,     ///<FTM0_FLT2 pin
            v1=0x00000001,     ///<CMP2 out
        };
        namespace ftm0flt2ValC{
            constexpr MPL::Value<ftm0flt2Val,ftm0flt2Val::v0> v0{};
            constexpr MPL::Value<ftm0flt2Val,ftm0flt2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ftm0flt2Val> ftm0flt2{}; 
        ///FTM0 Fault 3 Select
        enum class ftm0flt3Val {
            v0=0x00000000,     ///<FTM0_FLT3 pin
            v1=0x00000001,     ///<CMP3 out
        };
        namespace ftm0flt3ValC{
            constexpr MPL::Value<ftm0flt3Val,ftm0flt3Val::v0> v0{};
            constexpr MPL::Value<ftm0flt3Val,ftm0flt3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ftm0flt3Val> ftm0flt3{}; 
        ///FTM1 Fault 0 Select
        enum class ftm1flt0Val {
            v0=0x00000000,     ///<FTM1_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        namespace ftm1flt0ValC{
            constexpr MPL::Value<ftm1flt0Val,ftm1flt0Val::v0> v0{};
            constexpr MPL::Value<ftm1flt0Val,ftm1flt0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ftm1flt0Val> ftm1flt0{}; 
        ///FTM2 Fault 0 Select
        enum class ftm2flt0Val {
            v0=0x00000000,     ///<FTM2_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        namespace ftm2flt0ValC{
            constexpr MPL::Value<ftm2flt0Val,ftm2flt0Val::v0> v0{};
            constexpr MPL::Value<ftm2flt0Val,ftm2flt0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ftm2flt0Val> ftm2flt0{}; 
        ///FTM3 Fault 0 Select
        enum class ftm3flt0Val {
            v0=0x00000000,     ///<FTM3_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        namespace ftm3flt0ValC{
            constexpr MPL::Value<ftm3flt0Val,ftm3flt0Val::v0> v0{};
            constexpr MPL::Value<ftm3flt0Val,ftm3flt0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ftm3flt0Val> ftm3flt0{}; 
        ///FTM1 channel 0 input capture source select
        enum class ftm1ch0srcVal {
            v00=0x00000000,     ///<FTM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<USB start of frame pulse
        };
        namespace ftm1ch0srcValC{
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v00> v00{};
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v01> v01{};
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v10> v10{};
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,ftm1ch0srcVal> ftm1ch0src{}; 
        ///FTM2 channel 0 input capture source select
        enum class ftm2ch0srcVal {
            v00=0x00000000,     ///<FTM2_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<Reserved
        };
        namespace ftm2ch0srcValC{
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v00> v00{};
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v01> v01{};
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v10> v10{};
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,ftm2ch0srcVal> ftm2ch0src{}; 
        ///FTM2 channel 1 input capture source select
        enum class ftm2ch1srcVal {
            v0=0x00000000,     ///<FTM2_CH1 signal
            v1=0x00000001,     ///<Exclusive OR of FTM2_CH1, FTM2_CH0 and FTM1_CH1.
        };
        namespace ftm2ch1srcValC{
            constexpr MPL::Value<ftm2ch1srcVal,ftm2ch1srcVal::v0> v0{};
            constexpr MPL::Value<ftm2ch1srcVal,ftm2ch1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ftm2ch1srcVal> ftm2ch1src{}; 
        ///FlexTimer 0 External Clock Pin Select
        enum class ftm0clkselVal {
            v0=0x00000000,     ///<FTM_CLK0 pin
            v1=0x00000001,     ///<FTM_CLK1 pin
        };
        namespace ftm0clkselValC{
            constexpr MPL::Value<ftm0clkselVal,ftm0clkselVal::v0> v0{};
            constexpr MPL::Value<ftm0clkselVal,ftm0clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ftm0clkselVal> ftm0clksel{}; 
        ///FTM1 External Clock Pin Select
        enum class ftm1clkselVal {
            v0=0x00000000,     ///<FTM_CLK0 pin
            v1=0x00000001,     ///<FTM_CLK1 pin
        };
        namespace ftm1clkselValC{
            constexpr MPL::Value<ftm1clkselVal,ftm1clkselVal::v0> v0{};
            constexpr MPL::Value<ftm1clkselVal,ftm1clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ftm1clkselVal> ftm1clksel{}; 
        ///FlexTimer 2 External Clock Pin Select
        enum class ftm2clkselVal {
            v0=0x00000000,     ///<FTM2 external clock driven by FTM_CLK0 pin.
            v1=0x00000001,     ///<FTM2 external clock driven by FTM_CLK1 pin.
        };
        namespace ftm2clkselValC{
            constexpr MPL::Value<ftm2clkselVal,ftm2clkselVal::v0> v0{};
            constexpr MPL::Value<ftm2clkselVal,ftm2clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ftm2clkselVal> ftm2clksel{}; 
        ///FlexTimer 3 External Clock Pin Select
        enum class ftm3clkselVal {
            v0=0x00000000,     ///<FTM3 external clock driven by FTM_CLK0 pin.
            v1=0x00000001,     ///<FTM3 external clock driven by FTM_CLK1 pin.
        };
        namespace ftm3clkselValC{
            constexpr MPL::Value<ftm3clkselVal,ftm3clkselVal::v0> v0{};
            constexpr MPL::Value<ftm3clkselVal,ftm3clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ftm3clkselVal> ftm3clksel{}; 
        ///FlexTimer 0 Hardware Trigger 0 Source Select
        enum class ftm0trg0srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM0 hardware trigger 0
            v1=0x00000001,     ///<FTM1 channel match drives FTM0 hardware trigger 0
        };
        namespace ftm0trg0srcValC{
            constexpr MPL::Value<ftm0trg0srcVal,ftm0trg0srcVal::v0> v0{};
            constexpr MPL::Value<ftm0trg0srcVal,ftm0trg0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ftm0trg0srcVal> ftm0trg0src{}; 
        ///FlexTimer 0 Hardware Trigger 1 Source Select
        enum class ftm0trg1srcVal {
            v0=0x00000000,     ///<PDB output trigger 1 drives FTM0 hardware trigger 1
            v1=0x00000001,     ///<FTM2 channel match drives FTM0 hardware trigger 1
        };
        namespace ftm0trg1srcValC{
            constexpr MPL::Value<ftm0trg1srcVal,ftm0trg1srcVal::v0> v0{};
            constexpr MPL::Value<ftm0trg1srcVal,ftm0trg1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ftm0trg1srcVal> ftm0trg1src{}; 
        ///FlexTimer 3 Hardware Trigger 0 Source Select
        enum class ftm3trg0srcVal {
            v0=0x00000000,     ///<Reserved
            v1=0x00000001,     ///<FTM1 channel match drives FTM3 hardware trigger 0
        };
        namespace ftm3trg0srcValC{
            constexpr MPL::Value<ftm3trg0srcVal,ftm3trg0srcVal::v0> v0{};
            constexpr MPL::Value<ftm3trg0srcVal,ftm3trg0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ftm3trg0srcVal> ftm3trg0src{}; 
        ///FlexTimer 3 Hardware Trigger 1 Source Select
        enum class ftm3trg1srcVal {
            v0=0x00000000,     ///<Reserved
            v1=0x00000001,     ///<FTM2 channel match drives FTM3 hardware trigger 1
        };
        namespace ftm3trg1srcValC{
            constexpr MPL::Value<ftm3trg1srcVal,ftm3trg1srcVal::v0> v0{};
            constexpr MPL::Value<ftm3trg1srcVal,ftm3trg1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ftm3trg1srcVal> ftm3trg1src{}; 
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xfff0ff00,0,unsigned>;
        ///UART 0 transmit data source select
        enum class uart0txsrcVal {
            v00=0x00000000,     ///<UART0_TX pin
            v01=0x00000001,     ///<UART0_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART0_TX pin modulated with FTM2 channel 0 output
            v11=0x00000003,     ///<Reserved
        };
        namespace uart0txsrcValC{
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v00> v00{};
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v01> v01{};
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v10> v10{};
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,uart0txsrcVal> uart0txsrc{}; 
        ///UART 0 receive data source select
        enum class uart0rxsrcVal {
            v00=0x00000000,     ///<UART0_RX pin
            v01=0x00000001,     ///<CMP0
            v10=0x00000002,     ///<CMP1
            v11=0x00000003,     ///<Reserved
        };
        namespace uart0rxsrcValC{
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v00> v00{};
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v01> v01{};
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v10> v10{};
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,uart0rxsrcVal> uart0rxsrc{}; 
        ///UART 1 transmit data source select
        enum class uart1txsrcVal {
            v00=0x00000000,     ///<UART1_TX pin
            v01=0x00000001,     ///<UART1_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART1_TX pin modulated with FTM2 channel 0 output
            v11=0x00000003,     ///<Reserved
        };
        namespace uart1txsrcValC{
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v00> v00{};
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v01> v01{};
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v10> v10{};
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,uart1txsrcVal> uart1txsrc{}; 
        ///UART 1 receive data source select
        enum class uart1rxsrcVal {
            v00=0x00000000,     ///<UART1_RX pin
            v01=0x00000001,     ///<CMP0
            v10=0x00000002,     ///<CMP1
            v11=0x00000003,     ///<Reserved
        };
        namespace uart1rxsrcValC{
            constexpr MPL::Value<uart1rxsrcVal,uart1rxsrcVal::v00> v00{};
            constexpr MPL::Value<uart1rxsrcVal,uart1rxsrcVal::v01> v01{};
            constexpr MPL::Value<uart1rxsrcVal,uart1rxsrcVal::v10> v10{};
            constexpr MPL::Value<uart1rxsrcVal,uart1rxsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,uart1rxsrcVal> uart1rxsrc{}; 
        ///LPUART0 transmit data source select
        enum class lpuart0txsrcVal {
            v00=0x00000000,     ///<LPUART0_TX pin
            v01=0x00000001,     ///<LPUART0_TX pin modulated with TPM1 channel 0 output
            v10=0x00000002,     ///<LPUART0_TX pin modulated with TPM2 channel 0 output
            v11=0x00000003,     ///<Reserved
        };
        namespace lpuart0txsrcValC{
            constexpr MPL::Value<lpuart0txsrcVal,lpuart0txsrcVal::v00> v00{};
            constexpr MPL::Value<lpuart0txsrcVal,lpuart0txsrcVal::v01> v01{};
            constexpr MPL::Value<lpuart0txsrcVal,lpuart0txsrcVal::v10> v10{};
            constexpr MPL::Value<lpuart0txsrcVal,lpuart0txsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,lpuart0txsrcVal> lpuart0txsrc{}; 
        ///LPUART0 receive data source select
        enum class lpuart0rxsrcVal {
            v00=0x00000000,     ///<LPUART0_RX pin
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<Reserved
        };
        namespace lpuart0rxsrcValC{
            constexpr MPL::Value<lpuart0rxsrcVal,lpuart0rxsrcVal::v00> v00{};
            constexpr MPL::Value<lpuart0rxsrcVal,lpuart0rxsrcVal::v01> v01{};
            constexpr MPL::Value<lpuart0rxsrcVal,lpuart0rxsrcVal::v10> v10{};
            constexpr MPL::Value<lpuart0rxsrcVal,lpuart0rxsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,lpuart0rxsrcVal> lpuart0rxsrc{}; 
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xffff6060,0,unsigned>;
        ///ADC0 trigger select
        enum class adc0trgselVal {
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
        ///ADC0 pretrigger select
        enum class adc0pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A
            v1=0x00000001,     ///<Pre-trigger B
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
            v0=0x00000000,     ///<PDB trigger selected for ADC1
            v1=0x00000001,     ///<Alternate trigger selected for ADC1 as defined by ADC1TRGSEL.
        };
        namespace adc1alttrgenValC{
            constexpr MPL::Value<adc1alttrgenVal,adc1alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc1alttrgenVal,adc1alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,adc1alttrgenVal> adc1alttrgen{}; 
    }
    namespace SimSopt8{    ///<System Options Register 8
        using Addr = Register::Address<0x4004801c,0x0000fff0,0,unsigned>;
        ///FTM0 Hardware Trigger 0 Software Synchronization
        enum class ftm0syncbitVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM0, software must clear this bit to allow other trigger sources to assert.
        };
        namespace ftm0syncbitValC{
            constexpr MPL::Value<ftm0syncbitVal,ftm0syncbitVal::v0> v0{};
            constexpr MPL::Value<ftm0syncbitVal,ftm0syncbitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ftm0syncbitVal> ftm0syncbit{}; 
        ///FTM1 Hardware Trigger 0 Software Synchronization
        enum class ftm1syncbitVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM1, software must clear this bit to allow other trigger sources to assert.
        };
        namespace ftm1syncbitValC{
            constexpr MPL::Value<ftm1syncbitVal,ftm1syncbitVal::v0> v0{};
            constexpr MPL::Value<ftm1syncbitVal,ftm1syncbitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ftm1syncbitVal> ftm1syncbit{}; 
        ///FTM2 Hardware Trigger 0 Software Synchronization
        enum class ftm2syncbitVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM2, software must clear this bit to allow other trigger sources to assert.
        };
        namespace ftm2syncbitValC{
            constexpr MPL::Value<ftm2syncbitVal,ftm2syncbitVal::v0> v0{};
            constexpr MPL::Value<ftm2syncbitVal,ftm2syncbitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ftm2syncbitVal> ftm2syncbit{}; 
        ///FTM3 Hardware Trigger 0 Software Synchronization
        enum class ftm3syncbitVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM3, software must clear this bit to allow other trigger sources to assert.
        };
        namespace ftm3syncbitValC{
            constexpr MPL::Value<ftm3syncbitVal,ftm3syncbitVal::v0> v0{};
            constexpr MPL::Value<ftm3syncbitVal,ftm3syncbitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ftm3syncbitVal> ftm3syncbit{}; 
        ///FTM0 channel 0 output source
        enum class ftm0och0srcVal {
            v0=0x00000000,     ///<FTM0_CH0 pin is output of FTM0 channel 0 output
            v1=0x00000001,     ///<FTM0_CH0 pin is output of FTM0 channel 0 output, modulated by FTM1 channel 1 output
        };
        namespace ftm0och0srcValC{
            constexpr MPL::Value<ftm0och0srcVal,ftm0och0srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och0srcVal,ftm0och0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ftm0och0srcVal> ftm0och0src{}; 
        ///FTM0 channel 1 output source
        enum class ftm0och1srcVal {
            v0=0x00000000,     ///<FTM0_CH1 pin is output of FTM0 channel 1 output
            v1=0x00000001,     ///<FTM0_CH1 pin is output of FTM0 channel 1 output, modulated by FTM1 channel 1 output
        };
        namespace ftm0och1srcValC{
            constexpr MPL::Value<ftm0och1srcVal,ftm0och1srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och1srcVal,ftm0och1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ftm0och1srcVal> ftm0och1src{}; 
        ///FTM0 channel 2 output source
        enum class ftm0och2srcVal {
            v0=0x00000000,     ///<FTM0_CH2 pin is output of FTM0 channel 2 output
            v1=0x00000001,     ///<FTM0_CH2 pin is output of FTM0 channel 2 output, modulated by FTM1 channel 1 output
        };
        namespace ftm0och2srcValC{
            constexpr MPL::Value<ftm0och2srcVal,ftm0och2srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och2srcVal,ftm0och2srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ftm0och2srcVal> ftm0och2src{}; 
        ///FTM0 channel 3 output source
        enum class ftm0och3srcVal {
            v0=0x00000000,     ///<FTM0_CH3 pin is output of FTM0 channel 3 output
            v1=0x00000001,     ///<FTM0_CH3 pin is output of FTM0 channel 3 output, modulated by FTM1 channel 1 output
        };
        namespace ftm0och3srcValC{
            constexpr MPL::Value<ftm0och3srcVal,ftm0och3srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och3srcVal,ftm0och3srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ftm0och3srcVal> ftm0och3src{}; 
        ///FTM0 channel 4 output source
        enum class ftm0och4srcVal {
            v0=0x00000000,     ///<FTM0_CH4 pin is output of FTM0 channel 4 output
            v1=0x00000001,     ///<FTM0_CH4 pin is output of FTM0 channel 4 output, modulated by FTM1 channel 1 output
        };
        namespace ftm0och4srcValC{
            constexpr MPL::Value<ftm0och4srcVal,ftm0och4srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och4srcVal,ftm0och4srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ftm0och4srcVal> ftm0och4src{}; 
        ///FTM0 channel 5 output source
        enum class ftm0och5srcVal {
            v0=0x00000000,     ///<FTM0_CH5 pin is output of FTM0 channel 5 output
            v1=0x00000001,     ///<FTM0_CH5 pin is output of FTM0 channel 5 output, modulated by FTM1 channel 1 output
        };
        namespace ftm0och5srcValC{
            constexpr MPL::Value<ftm0och5srcVal,ftm0och5srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och5srcVal,ftm0och5srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ftm0och5srcVal> ftm0och5src{}; 
        ///FTM0 channel 6 output source
        enum class ftm0och6srcVal {
            v0=0x00000000,     ///<FTM0_CH6 pin is output of FTM0 channel 6 output
            v1=0x00000001,     ///<FTM0_CH6 pin is output of FTM0 channel 6 output, modulated by FTM1 channel 1 output
        };
        namespace ftm0och6srcValC{
            constexpr MPL::Value<ftm0och6srcVal,ftm0och6srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och6srcVal,ftm0och6srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ftm0och6srcVal> ftm0och6src{}; 
        ///FTM0 channel 7 output source
        enum class ftm0och7srcVal {
            v0=0x00000000,     ///<FTM0_CH7 pin is output of FTM0 channel 7 output
            v1=0x00000001,     ///<FTM0_CH7 pin is output of FTM0 channel 7 output, modulated by FTM1 channel 1 output
        };
        namespace ftm0och7srcValC{
            constexpr MPL::Value<ftm0och7srcVal,ftm0och7srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och7srcVal,ftm0och7srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ftm0och7srcVal> ftm0och7src{}; 
        ///FTM3 channel 0 output source
        enum class ftm3och0srcVal {
            v0=0x00000000,     ///<FTM3_CH0 pin is output of FTM3 channel 0 output
            v1=0x00000001,     ///<FTM3_CH0 pin is output of FTM3 channel 0 output modulated by FTM2 channel 1 output.
        };
        namespace ftm3och0srcValC{
            constexpr MPL::Value<ftm3och0srcVal,ftm3och0srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och0srcVal,ftm3och0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ftm3och0srcVal> ftm3och0src{}; 
        ///FTM3 channel 1 output source
        enum class ftm3och1srcVal {
            v0=0x00000000,     ///<FTM3_CH1 pin is output of FTM3 channel 1 output
            v1=0x00000001,     ///<FTM3_CH1 pin is output of FTM3 channel 1 output modulated by FTM2 channel 1 output.
        };
        namespace ftm3och1srcValC{
            constexpr MPL::Value<ftm3och1srcVal,ftm3och1srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och1srcVal,ftm3och1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ftm3och1srcVal> ftm3och1src{}; 
        ///FTM3 channel 2 output source
        enum class ftm3och2srcVal {
            v0=0x00000000,     ///<FTM3_CH2 pin is output of FTM3 channel 2 output
            v1=0x00000001,     ///<FTM3_CH2 pin is output of FTM3 channel 2 output modulated by FTM2 channel 1 output.
        };
        namespace ftm3och2srcValC{
            constexpr MPL::Value<ftm3och2srcVal,ftm3och2srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och2srcVal,ftm3och2srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ftm3och2srcVal> ftm3och2src{}; 
        ///FTM3 channel 3 output source
        enum class ftm3och3srcVal {
            v0=0x00000000,     ///<FTM3_CH3 pin is output of FTM3 channel 3 output
            v1=0x00000001,     ///<FTM3_CH3 pin is output of FTM3 channel 3 output modulated by FTM2 channel 1 output.
        };
        namespace ftm3och3srcValC{
            constexpr MPL::Value<ftm3och3srcVal,ftm3och3srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och3srcVal,ftm3och3srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ftm3och3srcVal> ftm3och3src{}; 
        ///FTM3 channel 4 output source
        enum class ftm3och4srcVal {
            v0=0x00000000,     ///<FTM3_CH4 pin is output of FTM3 channel 4 output
            v1=0x00000001,     ///<FTM3_CH4 pin is output of FTM3 channel 4 output modulated by FTM2 channel 1 output.
        };
        namespace ftm3och4srcValC{
            constexpr MPL::Value<ftm3och4srcVal,ftm3och4srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och4srcVal,ftm3och4srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ftm3och4srcVal> ftm3och4src{}; 
        ///FTM3 channel 5 output source
        enum class ftm3och5srcVal {
            v0=0x00000000,     ///<FTM3_CH5 pin is output of FTM3 channel 5 output
            v1=0x00000001,     ///<FTM3_CH5 pin is output of FTM3 channel 5 output modulated by FTM2 channel 1 output.
        };
        namespace ftm3och5srcValC{
            constexpr MPL::Value<ftm3och5srcVal,ftm3och5srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och5srcVal,ftm3och5srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ftm3och5srcVal> ftm3och5src{}; 
        ///FTM3 channel 6 output source
        enum class ftm3och6srcVal {
            v0=0x00000000,     ///<FTM3_CH6 pin is output of FTM3 channel 6 output
            v1=0x00000001,     ///<FTM3_CH6 pin is output of FTM3 channel 6 output modulated by FTM2 channel 1 output.
        };
        namespace ftm3och6srcValC{
            constexpr MPL::Value<ftm3och6srcVal,ftm3och6srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och6srcVal,ftm3och6srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ftm3och6srcVal> ftm3och6src{}; 
        ///FTM3 channel 7 output source
        enum class ftm3och7srcVal {
            v0=0x00000000,     ///<FTM3_CH7 pin is output of FTM3 channel 7 output
            v1=0x00000001,     ///<FTM3_CH7 pin is output of FTM3 channel 7 output modulated by FTM2 channel 1 output.
        };
        namespace ftm3och7srcValC{
            constexpr MPL::Value<ftm3och7srcVal,ftm3och7srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och7srcVal,ftm3och7srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ftm3och7srcVal> ftm3och7src{}; 
    }
    namespace SimSopt9{    ///<System Options Register 9
        using Addr = Register::Address<0x40048020,0xf9c3ffff,0,unsigned>;
        ///TPM1 channel 0 input capture source select
        enum class tpm1ch0srcVal {
            v00=0x00000000,     ///<TPM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<Reserved
        };
        namespace tpm1ch0srcValC{
            constexpr MPL::Value<tpm1ch0srcVal,tpm1ch0srcVal::v00> v00{};
            constexpr MPL::Value<tpm1ch0srcVal,tpm1ch0srcVal::v01> v01{};
            constexpr MPL::Value<tpm1ch0srcVal,tpm1ch0srcVal::v10> v10{};
            constexpr MPL::Value<tpm1ch0srcVal,tpm1ch0srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,tpm1ch0srcVal> tpm1ch0src{}; 
        ///TPM2 channel 0 input capture source select
        enum class tpm2ch0srcVal {
            v00=0x00000000,     ///<TPM2_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<Reserved
        };
        namespace tpm2ch0srcValC{
            constexpr MPL::Value<tpm2ch0srcVal,tpm2ch0srcVal::v00> v00{};
            constexpr MPL::Value<tpm2ch0srcVal,tpm2ch0srcVal::v01> v01{};
            constexpr MPL::Value<tpm2ch0srcVal,tpm2ch0srcVal::v10> v10{};
            constexpr MPL::Value<tpm2ch0srcVal,tpm2ch0srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,tpm2ch0srcVal> tpm2ch0src{}; 
        ///TPM1 External Clock Pin Select
        enum class tpm1clkselVal {
            v0=0x00000000,     ///<TPM_CLKIN0 pin
            v1=0x00000001,     ///<TPM_CLKIN1 pin
        };
        namespace tpm1clkselValC{
            constexpr MPL::Value<tpm1clkselVal,tpm1clkselVal::v0> v0{};
            constexpr MPL::Value<tpm1clkselVal,tpm1clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,tpm1clkselVal> tpm1clksel{}; 
        ///TPM2 External Clock Pin Select
        enum class tpm2clkselVal {
            v0=0x00000000,     ///<TPM_CLKIN0 pin
            v1=0x00000001,     ///<TPM_CLKIN1 pin
        };
        namespace tpm2clkselValC{
            constexpr MPL::Value<tpm2clkselVal,tpm2clkselVal::v0> v0{};
            constexpr MPL::Value<tpm2clkselVal,tpm2clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,tpm2clkselVal> tpm2clksel{}; 
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0x000f0000,0,unsigned>;
        ///Pincount identification
        enum class pinidVal {
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
        namespace pinidValC{
            constexpr MPL::Value<pinidVal,pinidVal::v0000> v0000{};
            constexpr MPL::Value<pinidVal,pinidVal::v0001> v0001{};
            constexpr MPL::Value<pinidVal,pinidVal::v0010> v0010{};
            constexpr MPL::Value<pinidVal,pinidVal::v0011> v0011{};
            constexpr MPL::Value<pinidVal,pinidVal::v0100> v0100{};
            constexpr MPL::Value<pinidVal,pinidVal::v0101> v0101{};
            constexpr MPL::Value<pinidVal,pinidVal::v0110> v0110{};
            constexpr MPL::Value<pinidVal,pinidVal::v0111> v0111{};
            constexpr MPL::Value<pinidVal,pinidVal::v1000> v1000{};
            constexpr MPL::Value<pinidVal,pinidVal::v1001> v1001{};
            constexpr MPL::Value<pinidVal,pinidVal::v1010> v1010{};
            constexpr MPL::Value<pinidVal,pinidVal::v1011> v1011{};
            constexpr MPL::Value<pinidVal,pinidVal::v1100> v1100{};
            constexpr MPL::Value<pinidVal,pinidVal::v1101> v1101{};
            constexpr MPL::Value<pinidVal,pinidVal::v1110> v1110{};
            constexpr MPL::Value<pinidVal,pinidVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,pinidVal> pinid{}; 
        ///Kinetis family identification
        enum class famidVal {
            v000=0x00000000,     ///<K1x Family (without tamper)
            v001=0x00000001,     ///<K2x Family (without tamper)
            v010=0x00000002,     ///<K3x Family or K1x/K6x Family (with tamper)
            v011=0x00000003,     ///<K4x Family or K2x Family (with tamper)
            v100=0x00000004,     ///<K6x Family (without tamper)
            v101=0x00000005,     ///<K7x Family
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        namespace famidValC{
            constexpr MPL::Value<famidVal,famidVal::v000> v000{};
            constexpr MPL::Value<famidVal,famidVal::v001> v001{};
            constexpr MPL::Value<famidVal,famidVal::v010> v010{};
            constexpr MPL::Value<famidVal,famidVal::v011> v011{};
            constexpr MPL::Value<famidVal,famidVal::v100> v100{};
            constexpr MPL::Value<famidVal,famidVal::v101> v101{};
            constexpr MPL::Value<famidVal,famidVal::v110> v110{};
            constexpr MPL::Value<famidVal,famidVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,famidVal> famid{}; 
        ///Device Die ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> dieid{}; 
        ///Device revision number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
        ///Kinetis Series ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> seriesid{}; 
        ///Kinetis Sub-Family ID
        enum class subfamidVal {
            v0000=0x00000000,     ///<Kx0 Subfamily
            v0001=0x00000001,     ///<Kx1 Subfamily (tamper detect)
            v0010=0x00000002,     ///<Kx2 Subfamily
            v0011=0x00000003,     ///<Kx3 Subfamily (tamper detect)
            v0100=0x00000004,     ///<Kx4 Subfamily
            v0101=0x00000005,     ///<Kx5 Subfamily (tamper detect)
            v0110=0x00000006,     ///<Kx6 Subfamily
        };
        namespace subfamidValC{
            constexpr MPL::Value<subfamidVal,subfamidVal::v0000> v0000{};
            constexpr MPL::Value<subfamidVal,subfamidVal::v0001> v0001{};
            constexpr MPL::Value<subfamidVal,subfamidVal::v0010> v0010{};
            constexpr MPL::Value<subfamidVal,subfamidVal::v0011> v0011{};
            constexpr MPL::Value<subfamidVal,subfamidVal::v0100> v0100{};
            constexpr MPL::Value<subfamidVal,subfamidVal::v0101> v0101{};
            constexpr MPL::Value<subfamidVal,subfamidVal::v0110> v0110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,subfamidVal> subfamid{}; 
        ///Kinetis Family ID
        enum class familyidVal {
            v0000=0x00000000,     ///<K0x Family
            v0001=0x00000001,     ///<K1x Family
            v0010=0x00000002,     ///<K2x Family
            v0011=0x00000003,     ///<K3x Family
            v0100=0x00000004,     ///<K4x Family
            v0110=0x00000006,     ///<K6x Family
            v0111=0x00000007,     ///<K7x Family
        };
        namespace familyidValC{
            constexpr MPL::Value<familyidVal,familyidVal::v0000> v0000{};
            constexpr MPL::Value<familyidVal,familyidVal::v0001> v0001{};
            constexpr MPL::Value<familyidVal,familyidVal::v0010> v0010{};
            constexpr MPL::Value<familyidVal,familyidVal::v0011> v0011{};
            constexpr MPL::Value<familyidVal,familyidVal::v0100> v0100{};
            constexpr MPL::Value<familyidVal,familyidVal::v0110> v0110{};
            constexpr MPL::Value<familyidVal,familyidVal::v0111> v0111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,familyidVal> familyid{}; 
    }
    namespace SimScgc1{    ///<System Clock Gating Control Register 1
        using Addr = Register::Address<0x40048028,0xfffffb3f,0,unsigned>;
        ///I2C2 Clock Gate Control
        enum class i2c2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace i2c2ValC{
            constexpr MPL::Value<i2c2Val,i2c2Val::v0> v0{};
            constexpr MPL::Value<i2c2Val,i2c2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,i2c2Val> i2c2{}; 
        ///I2C3 Clock Gate Control
        enum class i2c3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace i2c3ValC{
            constexpr MPL::Value<i2c3Val,i2c3Val::v0> v0{};
            constexpr MPL::Value<i2c3Val,i2c3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,i2c3Val> i2c3{}; 
        ///UART4 Clock Gate Control
        enum class uart4Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace uart4ValC{
            constexpr MPL::Value<uart4Val,uart4Val::v0> v0{};
            constexpr MPL::Value<uart4Val,uart4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,uart4Val> uart4{}; 
    }
    namespace SimScgc2{    ///<System Clock Gating Control Register 2
        using Addr = Register::Address<0x4004802c,0xffffc9ee,0,unsigned>;
        ///ENET Clock Gate Control
        enum class enetVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace enetValC{
            constexpr MPL::Value<enetVal,enetVal::v0> v0{};
            constexpr MPL::Value<enetVal,enetVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enetVal> enet{}; 
        ///LPUART0 Clock Gate Control
        enum class lpuart0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace lpuart0ValC{
            constexpr MPL::Value<lpuart0Val,lpuart0Val::v0> v0{};
            constexpr MPL::Value<lpuart0Val,lpuart0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lpuart0Val> lpuart0{}; 
        ///TPM1 Clock Gate Control
        enum class tpm1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace tpm1ValC{
            constexpr MPL::Value<tpm1Val,tpm1Val::v0> v0{};
            constexpr MPL::Value<tpm1Val,tpm1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,tpm1Val> tpm1{}; 
        ///TPM2 Clock Gate Control
        enum class tpm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace tpm2ValC{
            constexpr MPL::Value<tpm2Val,tpm2Val::v0> v0{};
            constexpr MPL::Value<tpm2Val,tpm2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,tpm2Val> tpm2{}; 
        ///DAC0 Clock Gate Control
        enum class dac0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace dac0ValC{
            constexpr MPL::Value<dac0Val,dac0Val::v0> v0{};
            constexpr MPL::Value<dac0Val,dac0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dac0Val> dac0{}; 
        ///DAC1 Clock Gate Control
        enum class dac1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace dac1ValC{
            constexpr MPL::Value<dac1Val,dac1Val::v0> v0{};
            constexpr MPL::Value<dac1Val,dac1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dac1Val> dac1{}; 
    }
    namespace SimScgc3{    ///<System Clock Gating Control Register 3
        using Addr = Register::Address<0x40048030,0xf4fdefe0,0,unsigned>;
        ///RNGA Clock Gate Control
        enum class rngaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace rngaValC{
            constexpr MPL::Value<rngaVal,rngaVal::v0> v0{};
            constexpr MPL::Value<rngaVal,rngaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rngaVal> rnga{}; 
        ///USBHS Clock Gate Control
        enum class usbhsVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace usbhsValC{
            constexpr MPL::Value<usbhsVal,usbhsVal::v0> v0{};
            constexpr MPL::Value<usbhsVal,usbhsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,usbhsVal> usbhs{}; 
        ///USBHS PHY Clock Gate Control
        enum class usbhsphyVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace usbhsphyValC{
            constexpr MPL::Value<usbhsphyVal,usbhsphyVal::v0> v0{};
            constexpr MPL::Value<usbhsphyVal,usbhsphyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,usbhsphyVal> usbhsphy{}; 
        ///USBHS DCD Clock Gate Control
        enum class usbhsdcdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace usbhsdcdValC{
            constexpr MPL::Value<usbhsdcdVal,usbhsdcdVal::v0> v0{};
            constexpr MPL::Value<usbhsdcdVal,usbhsdcdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,usbhsdcdVal> usbhsdcd{}; 
        ///FlexCAN1 Clock Gate Control
        enum class flexcan1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace flexcan1ValC{
            constexpr MPL::Value<flexcan1Val,flexcan1Val::v0> v0{};
            constexpr MPL::Value<flexcan1Val,flexcan1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,flexcan1Val> flexcan1{}; 
        ///SPI2 Clock Gate Control
        enum class spi2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace spi2ValC{
            constexpr MPL::Value<spi2Val,spi2Val::v0> v0{};
            constexpr MPL::Value<spi2Val,spi2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,spi2Val> spi2{}; 
        ///SDHC Clock Gate Control
        enum class sdhcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace sdhcValC{
            constexpr MPL::Value<sdhcVal,sdhcVal::v0> v0{};
            constexpr MPL::Value<sdhcVal,sdhcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,sdhcVal> sdhc{}; 
        ///FTM2 Clock Gate Control
        enum class ftm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftm2ValC{
            constexpr MPL::Value<ftm2Val,ftm2Val::v0> v0{};
            constexpr MPL::Value<ftm2Val,ftm2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ftm2Val> ftm2{}; 
        ///FTM3 Clock Gate Control
        enum class ftm3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftm3ValC{
            constexpr MPL::Value<ftm3Val,ftm3Val::v0> v0{};
            constexpr MPL::Value<ftm3Val,ftm3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ftm3Val> ftm3{}; 
        ///ADC1 Clock Gate Control
        enum class adc1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace adc1ValC{
            constexpr MPL::Value<adc1Val,adc1Val::v0> v0{};
            constexpr MPL::Value<adc1Val,adc1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,adc1Val> adc1{}; 
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xffe3c339,0,unsigned>;
        ///EWM Clock Gate Control
        enum class ewmVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ewmValC{
            constexpr MPL::Value<ewmVal,ewmVal::v0> v0{};
            constexpr MPL::Value<ewmVal,ewmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ewmVal> ewm{}; 
        ///CMT Clock Gate Control
        enum class cmtVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace cmtValC{
            constexpr MPL::Value<cmtVal,cmtVal::v0> v0{};
            constexpr MPL::Value<cmtVal,cmtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cmtVal> cmt{}; 
        ///I2C0 Clock Gate Control
        enum class i2c0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace i2c0ValC{
            constexpr MPL::Value<i2c0Val,i2c0Val::v0> v0{};
            constexpr MPL::Value<i2c0Val,i2c0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,i2c0Val> i2c0{}; 
        ///I2C1 Clock Gate Control
        enum class i2c1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace i2c1ValC{
            constexpr MPL::Value<i2c1Val,i2c1Val::v0> v0{};
            constexpr MPL::Value<i2c1Val,i2c1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,i2c1Val> i2c1{}; 
        ///UART0 Clock Gate Control
        enum class uart0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace uart0ValC{
            constexpr MPL::Value<uart0Val,uart0Val::v0> v0{};
            constexpr MPL::Value<uart0Val,uart0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,uart0Val> uart0{}; 
        ///UART1 Clock Gate Control
        enum class uart1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace uart1ValC{
            constexpr MPL::Value<uart1Val,uart1Val::v0> v0{};
            constexpr MPL::Value<uart1Val,uart1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,uart1Val> uart1{}; 
        ///UART2 Clock Gate Control
        enum class uart2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace uart2ValC{
            constexpr MPL::Value<uart2Val,uart2Val::v0> v0{};
            constexpr MPL::Value<uart2Val,uart2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,uart2Val> uart2{}; 
        ///UART3 Clock Gate Control
        enum class uart3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace uart3ValC{
            constexpr MPL::Value<uart3Val,uart3Val::v0> v0{};
            constexpr MPL::Value<uart3Val,uart3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,uart3Val> uart3{}; 
        ///USB Clock Gate Control
        enum class usbotgVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace usbotgValC{
            constexpr MPL::Value<usbotgVal,usbotgVal::v0> v0{};
            constexpr MPL::Value<usbotgVal,usbotgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,usbotgVal> usbotg{}; 
        ///Comparator Clock Gate Control
        enum class cmpVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace cmpValC{
            constexpr MPL::Value<cmpVal,cmpVal::v0> v0{};
            constexpr MPL::Value<cmpVal,cmpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,cmpVal> cmp{}; 
        ///VREF Clock Gate Control
        enum class vrefVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace vrefValC{
            constexpr MPL::Value<vrefVal,vrefVal::v0> v0{};
            constexpr MPL::Value<vrefVal,vrefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,vrefVal> vref{}; 
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0xffffc1de,0,unsigned>;
        ///Low Power Timer Access Control
        enum class lptmrVal {
            v0=0x00000000,     ///<Access disabled
            v1=0x00000001,     ///<Access enabled
        };
        namespace lptmrValC{
            constexpr MPL::Value<lptmrVal,lptmrVal::v0> v0{};
            constexpr MPL::Value<lptmrVal,lptmrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lptmrVal> lptmr{}; 
        ///TSI Clock Gate Control
        enum class tsiVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace tsiValC{
            constexpr MPL::Value<tsiVal,tsiVal::v0> v0{};
            constexpr MPL::Value<tsiVal,tsiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,tsiVal> tsi{}; 
        ///Port A Clock Gate Control
        enum class portaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portaValC{
            constexpr MPL::Value<portaVal,portaVal::v0> v0{};
            constexpr MPL::Value<portaVal,portaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,portaVal> porta{}; 
        ///Port B Clock Gate Control
        enum class portbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portbValC{
            constexpr MPL::Value<portbVal,portbVal::v0> v0{};
            constexpr MPL::Value<portbVal,portbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,portbVal> portb{}; 
        ///Port C Clock Gate Control
        enum class portcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portcValC{
            constexpr MPL::Value<portcVal,portcVal::v0> v0{};
            constexpr MPL::Value<portcVal,portcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,portcVal> portc{}; 
        ///Port D Clock Gate Control
        enum class portdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portdValC{
            constexpr MPL::Value<portdVal,portdVal::v0> v0{};
            constexpr MPL::Value<portdVal,portdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,portdVal> portd{}; 
        ///Port E Clock Gate Control
        enum class porteVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace porteValC{
            constexpr MPL::Value<porteVal,porteVal::v0> v0{};
            constexpr MPL::Value<porteVal,porteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,porteVal> porte{}; 
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0x501b4dec,0,unsigned>;
        ///Flash Memory Clock Gate Control
        enum class ftfVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftfValC{
            constexpr MPL::Value<ftfVal,ftfVal::v0> v0{};
            constexpr MPL::Value<ftfVal,ftfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ftfVal> ftf{}; 
        ///DMA Mux Clock Gate Control
        enum class dmamuxVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace dmamuxValC{
            constexpr MPL::Value<dmamuxVal,dmamuxVal::v0> v0{};
            constexpr MPL::Value<dmamuxVal,dmamuxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dmamuxVal> dmamux{}; 
        ///FlexCAN0 Clock Gate Control
        enum class flexcan0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace flexcan0ValC{
            constexpr MPL::Value<flexcan0Val,flexcan0Val::v0> v0{};
            constexpr MPL::Value<flexcan0Val,flexcan0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,flexcan0Val> flexcan0{}; 
        ///RNGA Clock Gate Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rnga{}; 
        ///SPI0 Clock Gate Control
        enum class spi0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace spi0ValC{
            constexpr MPL::Value<spi0Val,spi0Val::v0> v0{};
            constexpr MPL::Value<spi0Val,spi0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,spi0Val> spi0{}; 
        ///SPI1 Clock Gate Control
        enum class spi1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace spi1ValC{
            constexpr MPL::Value<spi1Val,spi1Val::v0> v0{};
            constexpr MPL::Value<spi1Val,spi1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,spi1Val> spi1{}; 
        ///I2S Clock Gate Control
        enum class i2sVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace i2sValC{
            constexpr MPL::Value<i2sVal,i2sVal::v0> v0{};
            constexpr MPL::Value<i2sVal,i2sVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,i2sVal> i2s{}; 
        ///CRC Clock Gate Control
        enum class crcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace crcValC{
            constexpr MPL::Value<crcVal,crcVal::v0> v0{};
            constexpr MPL::Value<crcVal,crcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,crcVal> crc{}; 
        ///USB DCD Clock Gate Control
        enum class usbdcdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace usbdcdValC{
            constexpr MPL::Value<usbdcdVal,usbdcdVal::v0> v0{};
            constexpr MPL::Value<usbdcdVal,usbdcdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,usbdcdVal> usbdcd{}; 
        ///PDB Clock Gate Control
        enum class pdbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace pdbValC{
            constexpr MPL::Value<pdbVal,pdbVal::v0> v0{};
            constexpr MPL::Value<pdbVal,pdbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,pdbVal> pdb{}; 
        ///PIT Clock Gate Control
        enum class pitVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace pitValC{
            constexpr MPL::Value<pitVal,pitVal::v0> v0{};
            constexpr MPL::Value<pitVal,pitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pitVal> pit{}; 
        ///FTM0 Clock Gate Control
        enum class ftm0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftm0ValC{
            constexpr MPL::Value<ftm0Val,ftm0Val::v0> v0{};
            constexpr MPL::Value<ftm0Val,ftm0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ftm0Val> ftm0{}; 
        ///FTM1 Clock Gate Control
        enum class ftm1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftm1ValC{
            constexpr MPL::Value<ftm1Val,ftm1Val::v0> v0{};
            constexpr MPL::Value<ftm1Val,ftm1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ftm1Val> ftm1{}; 
        ///FTM2 Clock Gate Control
        enum class ftm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftm2ValC{
            constexpr MPL::Value<ftm2Val,ftm2Val::v0> v0{};
            constexpr MPL::Value<ftm2Val,ftm2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ftm2Val> ftm2{}; 
        ///ADC0 Clock Gate Control
        enum class adc0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace adc0ValC{
            constexpr MPL::Value<adc0Val,adc0Val::v0> v0{};
            constexpr MPL::Value<adc0Val,adc0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,adc0Val> adc0{}; 
        ///RTC Access Control
        enum class rtcVal {
            v0=0x00000000,     ///<Access and interrupts disabled
            v1=0x00000001,     ///<Access and interrupts enabled
        };
        namespace rtcValC{
            constexpr MPL::Value<rtcVal,rtcVal::v0> v0{};
            constexpr MPL::Value<rtcVal,rtcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,rtcVal> rtc{}; 
        ///DAC0 Clock Gate Control
        enum class dac0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace dac0ValC{
            constexpr MPL::Value<dac0Val,dac0Val::v0> v0{};
            constexpr MPL::Value<dac0Val,dac0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,dac0Val> dac0{}; 
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x40048040,0xfffffff0,0,unsigned>;
        ///FlexBus Clock Gate Control
        enum class flexbusVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace flexbusValC{
            constexpr MPL::Value<flexbusVal,flexbusVal::v0> v0{};
            constexpr MPL::Value<flexbusVal,flexbusVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,flexbusVal> flexbus{}; 
        ///DMA Clock Gate Control
        enum class dmaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace dmaValC{
            constexpr MPL::Value<dmaVal,dmaVal::v0> v0{};
            constexpr MPL::Value<dmaVal,dmaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dmaVal> dma{}; 
        ///MPU Clock Gate Control
        enum class mpuVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace mpuValC{
            constexpr MPL::Value<mpuVal,mpuVal::v0> v0{};
            constexpr MPL::Value<mpuVal,mpuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,mpuVal> mpu{}; 
        ///SDRAMC Clock Gate Control
        enum class sdramcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace sdramcValC{
            constexpr MPL::Value<sdramcVal,sdramcVal::v0> v0{};
            constexpr MPL::Value<sdramcVal,sdramcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sdramcVal> sdramc{}; 
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
        using Addr = Register::Address<0x40048048,0xfffffff0,0,unsigned>;
        ///USB clock divider fraction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbfrac{}; 
        ///USB clock divider divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> usbdiv{}; 
    }
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4004804c,0x00f0f0fc,0,unsigned>;
        ///Flash Disable
        enum class flashdisVal {
            v0=0x00000000,     ///<Flash is enabled
            v1=0x00000001,     ///<Flash is disabled
        };
        namespace flashdisValC{
            constexpr MPL::Value<flashdisVal,flashdisVal::v0> v0{};
            constexpr MPL::Value<flashdisVal,flashdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,flashdisVal> flashdis{}; 
        ///Flash Doze
        enum class flashdozeVal {
            v0=0x00000000,     ///<Flash remains enabled during Wait mode
            v1=0x00000001,     ///<Flash is disabled for the duration of Wait mode
        };
        namespace flashdozeValC{
            constexpr MPL::Value<flashdozeVal,flashdozeVal::v0> v0{};
            constexpr MPL::Value<flashdozeVal,flashdozeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,flashdozeVal> flashdoze{}; 
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
        enum class pfsizeVal {
            v0011=0x00000003,     ///<32 KB of program flash memory
            v0101=0x00000005,     ///<64 KB of program flash memory
            v0111=0x00000007,     ///<128 KB of program flash memory
            v1001=0x00000009,     ///<256 KB of program flash memory
            v1011=0x0000000b,     ///<512 KB of program flash memory
            v1101=0x0000000d,     ///<1024 KB of program flash memory
            v1111=0x0000000f,     ///<2048 KB of program flash memory
        };
        namespace pfsizeValC{
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v0011> v0011{};
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v0101> v0101{};
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v0111> v0111{};
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v1001> v1001{};
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v1011> v1011{};
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v1101> v1101{};
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,pfsizeVal> pfsize{}; 
        ///FlexNVM size
        enum class nvmsizeVal {
            v0000=0x00000000,     ///<0 KB of FlexNVM
            v0011=0x00000003,     ///<32 KB of FlexNVM
            v0101=0x00000005,     ///<64 KB of FlexNVM
            v0111=0x00000007,     ///<128 KB of FlexNVM
            v1001=0x00000009,     ///<256 KB of FlexNVM
            v1011=0x0000000b,     ///<512 KB of FlexNVM
            v1111=0x0000000f,     ///<256 KB of FlexNVM
        };
        namespace nvmsizeValC{
            constexpr MPL::Value<nvmsizeVal,nvmsizeVal::v0000> v0000{};
            constexpr MPL::Value<nvmsizeVal,nvmsizeVal::v0011> v0011{};
            constexpr MPL::Value<nvmsizeVal,nvmsizeVal::v0101> v0101{};
            constexpr MPL::Value<nvmsizeVal,nvmsizeVal::v0111> v0111{};
            constexpr MPL::Value<nvmsizeVal,nvmsizeVal::v1001> v1001{};
            constexpr MPL::Value<nvmsizeVal,nvmsizeVal::v1011> v1011{};
            constexpr MPL::Value<nvmsizeVal,nvmsizeVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,nvmsizeVal> nvmsize{}; 
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0x0000ffff,0,unsigned>;
        ///Max address block 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> maxaddr1{}; 
        ///Program flash only
        enum class pflshVal {
            v0=0x00000000,     ///<Device supports FlexNVM
            v1=0x00000001,     ///<Program Flash only, device does not support FlexNVM
        };
        namespace pflshValC{
            constexpr MPL::Value<pflshVal,pflshVal::v0> v0{};
            constexpr MPL::Value<pflshVal,pflshVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pflshVal> pflsh{}; 
        ///Max address block 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> maxaddr0{}; 
        ///Swap program flash
        enum class swappflshVal {
            v0=0x00000000,     ///<Swap is not active.
            v1=0x00000001,     ///<Swap is active.
        };
        namespace swappflshValC{
            constexpr MPL::Value<swappflshVal,swappflshVal::v0> v0{};
            constexpr MPL::Value<swappflshVal,swappflshVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,swappflshVal> swappflsh{}; 
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
    namespace SimClkdiv3{    ///<System Clock Divider Register 3
        using Addr = Register::Address<0x40048064,0xfffffff0,0,unsigned>;
        ///PLLFLL clock divider fraction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pllfllfrac{}; 
        ///PLLFLL clock divider divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> pllflldiv{}; 
    }
    namespace SimClkdiv4{    ///<System Clock Divider Register 4
        using Addr = Register::Address<0x40048068,0xfffffff0,0,unsigned>;
        ///Trace clock divider fraction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tracefrac{}; 
        ///Trace clock divider divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> tracediv{}; 
    }
}
