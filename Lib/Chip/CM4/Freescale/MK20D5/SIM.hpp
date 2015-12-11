#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0x1ff30fff,0,unsigned>;
        ///RAM size
        enum class RamsizeVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,RamsizeVal> ramsize{}; 
        namespace RamsizeValC{
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v1111> v1111{};
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
            v0=0x00000000,     ///<SOPT1 USBVSTB cannot be written.
            v1=0x00000001,     ///<SOPT1 USBVSTB can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,UvsweVal> uvswe{}; 
        namespace UvsweValC{
            constexpr Register::FieldValue<decltype(uvswe)::Type,UvsweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uvswe)::Type,UvsweVal::v1> v1{};
        }
        ///USB voltage regulator stop standby write enable
        enum class UssweVal {
            v0=0x00000000,     ///<SOPT1 USBSSTB cannot be written.
            v1=0x00000001,     ///<SOPT1 USBSSTB can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,UssweVal> usswe{}; 
        namespace UssweValC{
            constexpr Register::FieldValue<decltype(usswe)::Type,UssweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usswe)::Type,UssweVal::v1> v1{};
        }
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0xfffae70f,0,unsigned>;
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
            v010=0x00000002,     ///<Flash clock
            v011=0x00000003,     ///<LPO clock (1 kHz)
            v100=0x00000004,     ///<IRCLK
            v101=0x00000005,     ///<RTC 32.768kHz
            v110=0x00000006,     ///<ERCLK0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,ClkoutselVal> clkoutsel{}; 
        namespace ClkoutselValC{
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v110> v110{};
        }
        ///PTD7 pad drive strength
        enum class Ptd7padVal {
            v0=0x00000000,     ///<Single-pad drive strength for PTD7.
            v1=0x00000001,     ///<Double pad drive strength for PTD7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ptd7padVal> ptd7pad{}; 
        namespace Ptd7padValC{
            constexpr Register::FieldValue<decltype(ptd7pad)::Type,Ptd7padVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ptd7pad)::Type,Ptd7padVal::v1> v1{};
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
            v0=0x00000000,     ///<MCGFLLCLK clock
            v1=0x00000001,     ///<MCGPLLCLK clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,PllfllselVal> pllfllsel{}; 
        namespace PllfllselValC{
            constexpr Register::FieldValue<decltype(pllfllsel)::Type,PllfllselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pllfllsel)::Type,PllfllselVal::v1> v1{};
        }
        ///USB clock source select
        enum class UsbsrcVal {
            v0=0x00000000,     ///<External bypass clock (USB_CLKIN).
            v1=0x00000001,     ///<MCGPLLCLK/MCGFLLCLK clock divided by the USB fractional divider. See the SIM_CLKDIV2[USBFRAC, USBDIV] descriptions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UsbsrcVal> usbsrc{}; 
        namespace UsbsrcValC{
            constexpr Register::FieldValue<decltype(usbsrc)::Type,UsbsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbsrc)::Type,UsbsrcVal::v1> v1{};
        }
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0xecf3ffec,0,unsigned>;
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
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xffffff22,0,unsigned>;
        ///UART 0 transmit data source select
        enum class Uart0txsrcVal {
            v0=0x00000000,     ///<UART0_TX pin
            v1=0x00000001,     ///<UART0_TX pin modulated with FTM1 channel 0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Uart0txsrcVal> uart0txsrc{}; 
        namespace Uart0txsrcValC{
            constexpr Register::FieldValue<decltype(uart0txsrc)::Type,Uart0txsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0txsrc)::Type,Uart0txsrcVal::v1> v1{};
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
            v0=0x00000000,     ///<UART1_TX pin
            v1=0x00000001,     ///<UART1_TX pin modulated with FTM1 channel 0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Uart1txsrcVal> uart1txsrc{}; 
        namespace Uart1txsrcValC{
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v1> v1{};
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
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xffffff60,0,unsigned>;
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
            v1010=0x0000000a,     ///<Unused
            v1011=0x0000000b,     ///<Unused
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<Low-power timer trigger
            v1111=0x0000000f,     ///<Unused
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
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1111> v1111{};
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
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0xffff0f80,0,unsigned>;
        ///Pincount identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pinid{}; 
        ///Kinetis family identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> famid{}; 
        ///Device revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xffe3e3b9,0,unsigned>;
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
        ///CMT Clock Gate Control
        enum class CmtVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CmtVal> cmt{}; 
        namespace CmtValC{
            constexpr Register::FieldValue<decltype(cmt)::Type,CmtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmt)::Type,CmtVal::v1> v1{};
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
        using Addr = Register::Address<0x40048038,0xffffc1de,0,unsigned>;
        ///Low Power Timer Access Control
        enum class LptimerVal {
            v0=0x00000000,     ///<Access disabled
            v1=0x00000001,     ///<Access enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LptimerVal> lptimer{}; 
        namespace LptimerValC{
            constexpr Register::FieldValue<decltype(lptimer)::Type,LptimerVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lptimer)::Type,LptimerVal::v1> v1{};
        }
        ///TSI Clock Gate Control
        enum class TsiVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TsiVal> tsi{}; 
        namespace TsiValC{
            constexpr Register::FieldValue<decltype(tsi)::Type,TsiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsi)::Type,TsiVal::v1> v1{};
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
        using Addr = Register::Address<0x4004803c,0xd41b6ffc,0,unsigned>;
        ///Flash Memory Clock Gate Control
        enum class FtflVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FtflVal> ftfl{}; 
        namespace FtflValC{
            constexpr Register::FieldValue<decltype(ftfl)::Type,FtflVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftfl)::Type,FtflVal::v1> v1{};
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
        ///USB DCD Clock Gate Control
        enum class UsbdcdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,UsbdcdVal> usbdcd{}; 
        namespace UsbdcdValC{
            constexpr Register::FieldValue<decltype(usbdcd)::Type,UsbdcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbdcd)::Type,UsbdcdVal::v1> v1{};
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
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x40048040,0xfffffffd,0,unsigned>;
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
        using Addr = Register::Address<0x40048044,0x00f0ffff,0,unsigned>;
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
        using Addr = Register::Address<0x4004804c,0x00f0f0fc,0,unsigned>;
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
        ///FlexNVM partition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> depart{}; 
        ///EEPROM size
        enum class EesizeVal {
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
            constexpr Register::FieldValue<decltype(eesize)::Type,EesizeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(eesize)::Type,EesizeVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(eesize)::Type,EesizeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(eesize)::Type,EesizeVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(eesize)::Type,EesizeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(eesize)::Type,EesizeVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(eesize)::Type,EesizeVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(eesize)::Type,EesizeVal::v1111> v1111{};
        }
        ///Program flash size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> pfsize{}; 
        ///FlexNVM size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> nvmsize{}; 
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0x8000ffff,0,unsigned>;
        ///Max address block 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> maxaddr1{}; 
        ///Program flash
        enum class PflshVal {
            v0=0x00000000,     ///<Physical flash block 1 is used as FlexNVM
            v1=0x00000001,     ///<Physical flash block 1 is used as program flash
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,PflshVal> pflsh{}; 
        namespace PflshValC{
            constexpr Register::FieldValue<decltype(pflsh)::Type,PflshVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pflsh)::Type,PflshVal::v1> v1{};
        }
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
