#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0x1ff30fff,0,unsigned>;
        ///RAM size
        enum class ramsizeVal {
            v0000=0x00000000,     ///<Undefined
            v0001=0x00000001,     ///<8 KBytes
            v0010=0x00000002,     ///<Undefined
            v0011=0x00000003,     ///<16 KBytes
            v0100=0x00000004,     ///<Undefined
            v0101=0x00000005,     ///<Undefined
            v0110=0x00000006,     ///<Undefined
            v0111=0x00000007,     ///<Undefined
            v1000=0x00000008,     ///<Undefined
            v1001=0x00000009,     ///<Undefined
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
        ///32K oscillator clock select
        enum class osc32kselVal {
            v00=0x00000000,     ///<System oscillator (OSC32KCLK)
            v10=0x00000002,     ///<RTC 32.768kHz oscillator
            v11=0x00000003,     ///<LPO 1 kHz
        };
        namespace osc32kselValC{
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v00> v00{};
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
            v0=0x00000000,     ///<SOPT1 USBVSTB cannot be written.
            v1=0x00000001,     ///<SOPT1 USBVSTB can be written.
        };
        namespace uvsweValC{
            constexpr MPL::Value<uvsweVal,uvsweVal::v0> v0{};
            constexpr MPL::Value<uvsweVal,uvsweVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,uvsweVal> uvswe{}; 
        ///USB voltage regulator stop standby write enable
        enum class ussweVal {
            v0=0x00000000,     ///<SOPT1 USBSSTB cannot be written.
            v1=0x00000001,     ///<SOPT1 USBSSTB can be written.
        };
        namespace ussweValC{
            constexpr MPL::Value<ussweVal,ussweVal::v0> v0{};
            constexpr MPL::Value<ussweVal,ussweVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ussweVal> usswe{}; 
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0xfffae70f,0,unsigned>;
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
            v010=0x00000002,     ///<Flash clock
            v011=0x00000003,     ///<LPO clock (1 kHz)
            v100=0x00000004,     ///<IRCLK
            v101=0x00000005,     ///<RTC 32.768kHz
            v110=0x00000006,     ///<ERCLK0
        };
        namespace clkoutselValC{
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v010> v010{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v011> v011{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v100> v100{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v101> v101{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v110> v110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,clkoutselVal> clkoutsel{}; 
        ///PTD7 pad drive strength
        enum class ptd7padVal {
            v0=0x00000000,     ///<Single-pad drive strength for PTD7.
            v1=0x00000001,     ///<Double pad drive strength for PTD7.
        };
        namespace ptd7padValC{
            constexpr MPL::Value<ptd7padVal,ptd7padVal::v0> v0{};
            constexpr MPL::Value<ptd7padVal,ptd7padVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ptd7padVal> ptd7pad{}; 
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
            v0=0x00000000,     ///<MCGFLLCLK clock
            v1=0x00000001,     ///<MCGPLLCLK clock
        };
        namespace pllfllselValC{
            constexpr MPL::Value<pllfllselVal,pllfllselVal::v0> v0{};
            constexpr MPL::Value<pllfllselVal,pllfllselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pllfllselVal> pllfllsel{}; 
        ///USB clock source select
        enum class usbsrcVal {
            v0=0x00000000,     ///<External bypass clock (USB_CLKIN).
            v1=0x00000001,     ///<MCGPLLCLK/MCGFLLCLK clock divided by the USB fractional divider. See the SIM_CLKDIV2[USBFRAC, USBDIV] descriptions.
        };
        namespace usbsrcValC{
            constexpr MPL::Value<usbsrcVal,usbsrcVal::v0> v0{};
            constexpr MPL::Value<usbsrcVal,usbsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,usbsrcVal> usbsrc{}; 
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0xecf3ffec,0,unsigned>;
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
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xffffff22,0,unsigned>;
        ///UART 0 transmit data source select
        enum class uart0txsrcVal {
            v0=0x00000000,     ///<UART0_TX pin
            v1=0x00000001,     ///<UART0_TX pin modulated with FTM1 channel 0 output
        };
        namespace uart0txsrcValC{
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v0> v0{};
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,uart0txsrcVal> uart0txsrc{}; 
        ///UART 0 receive data source select
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
        ///UART 1 transmit data source select
        enum class uart1txsrcVal {
            v0=0x00000000,     ///<UART1_TX pin
            v1=0x00000001,     ///<UART1_TX pin modulated with FTM1 channel 0 output
        };
        namespace uart1txsrcValC{
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v0> v0{};
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,uart1txsrcVal> uart1txsrc{}; 
        ///UART 1 receive data source select
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
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xffffff60,0,unsigned>;
        ///ADC0 trigger select
        enum class adc0trgselVal {
            v0000=0x00000000,     ///<PDB external trigger pin input (PDB0_EXTRG)
            v0001=0x00000001,     ///<High speed comparator 0 output
            v0010=0x00000002,     ///<High speed comparator 1 output
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<Unused
            v1011=0x0000000b,     ///<Unused
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<Low-power timer trigger
            v1111=0x0000000f,     ///<Unused
        };
        namespace adc0trgselValC{
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0000> v0000{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0001> v0001{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0010> v0010{};
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
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0xffff0f80,0,unsigned>;
        ///Pincount identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pinid{}; 
        ///Kinetis family identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> famid{}; 
        ///Device revision number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xffe3e3b9,0,unsigned>;
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
        enum class lptimerVal {
            v0=0x00000000,     ///<Access disabled
            v1=0x00000001,     ///<Access enabled
        };
        namespace lptimerValC{
            constexpr MPL::Value<lptimerVal,lptimerVal::v0> v0{};
            constexpr MPL::Value<lptimerVal,lptimerVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lptimerVal> lptimer{}; 
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
        using Addr = Register::Address<0x4004803c,0xd41b6ffc,0,unsigned>;
        ///Flash Memory Clock Gate Control
        enum class ftflVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftflValC{
            constexpr MPL::Value<ftflVal,ftflVal::v0> v0{};
            constexpr MPL::Value<ftflVal,ftflVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ftflVal> ftfl{}; 
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
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x40048040,0xfffffffd,0,unsigned>;
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
    }
    namespace SimClkdiv1{    ///<System Clock Divider Register 1
        using Addr = Register::Address<0x40048044,0x00f0ffff,0,unsigned>;
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
        using Addr = Register::Address<0x40048050,0x8000ffff,0,unsigned>;
        ///Max address block 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> maxaddr1{}; 
        ///Program flash
        enum class pflshVal {
            v0=0x00000000,     ///<Physical flash block 1 is used as FlexNVM
            v1=0x00000001,     ///<Physical flash block 1 is used as program flash
        };
        namespace pflshValC{
            constexpr MPL::Value<pflshVal,pflshVal::v0> v0{};
            constexpr MPL::Value<pflshVal,pflshVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pflshVal> pflsh{}; 
        ///Max address block 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> maxaddr0{}; 
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
}
