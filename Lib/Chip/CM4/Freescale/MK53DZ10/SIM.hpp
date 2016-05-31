#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0x3f770fff,0x00000000,unsigned>;
        ///RAM size
        enum class RamsizeVal {
            v0000=0x00000000,     ///<Undefined
            v0001=0x00000001,     ///<Undefined
            v0010=0x00000002,     ///<Undefined
            v0011=0x00000003,     ///<Undefined
            v0100=0x00000004,     ///<Undefined
            v0101=0x00000005,     ///<32 KBytes
            v0110=0x00000006,     ///<Undefined
            v0111=0x00000007,     ///<64 KBytes
            v1000=0x00000008,     ///<96 KBytes
            v1001=0x00000009,     ///<128 KBytes
            v1010=0x0000000a,     ///<Undefined
            v1011=0x0000000b,     ///<Undefined
            v1100=0x0000000c,     ///<Undefined
            v1101=0x0000000d,     ///<Undefined
            v1110=0x0000000e,     ///<Undefined
            v1111=0x0000000f,     ///<Undefined
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RamsizeVal> ramsize{}; 
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
            v0=0x00000000,     ///<System oscillator (OSC32KCLK)
            v1=0x00000001,     ///<RTC oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Osc32kselVal> osc32ksel{}; 
        namespace Osc32kselValC{
            constexpr Register::FieldValue<decltype(osc32ksel)::Type,Osc32kselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(osc32ksel)::Type,Osc32kselVal::v1> v1{};
        }
        ///EzPort chip select pin state
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ms{}; 
        ///USB voltage regulator in standby mode
        enum class UsbstbyVal {
            v0=0x00000000,     ///<USB voltage regulator not in standby.
            v1=0x00000001,     ///<USB voltage regulator in standby.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,UsbstbyVal> usbstby{}; 
        namespace UsbstbyValC{
            constexpr Register::FieldValue<decltype(usbstby)::Type,UsbstbyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbstby)::Type,UsbstbyVal::v1> v1{};
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
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0xcccae4fe,0x00000000,unsigned>;
        ///MCG clock select
        enum class McgclkselVal {
            v0=0x00000000,     ///<System oscillator (OSCCLK)
            v1=0x00000001,     ///<32 kHz RTC oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,McgclkselVal> mcgclksel{}; 
        namespace McgclkselValC{
            constexpr Register::FieldValue<decltype(mcgclksel)::Type,McgclkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mcgclksel)::Type,McgclkselVal::v1> v1{};
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
        ///CMT/UART pad drive strength
        enum class CmtuartpadVal {
            v0=0x00000000,     ///<Single-pad drive strength for CMT IRO or UART0_TXD.
            v1=0x00000001,     ///<Dual-pad drive strength for CMT IRO or UART0_TXD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CmtuartpadVal> cmtuartpad{}; 
        namespace CmtuartpadValC{
            constexpr Register::FieldValue<decltype(cmtuartpad)::Type,CmtuartpadVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmtuartpad)::Type,CmtuartpadVal::v1> v1{};
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
        ///IEEE 1588 timestamp clock source select
        enum class TimesrcVal {
            v00=0x00000000,     ///<Core/system clock.
            v01=0x00000001,     ///<MCGPLLCLK/MCGFLLCLK clock
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<External bypass clock (ENET_1588_CLKIN).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TimesrcVal> timesrc{}; 
        namespace TimesrcValC{
            constexpr Register::FieldValue<decltype(timesrc)::Type,TimesrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(timesrc)::Type,TimesrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(timesrc)::Type,TimesrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(timesrc)::Type,TimesrcVal::v11> v11{};
        }
        ///I2S master clock source select
        enum class I2ssrcVal {
            v00=0x00000000,     ///<Core/system clock divided by the I2S fractional clock divider. See the SIM_CLKDIV2[I2SFRAC, I2SDIV] descriptions.
            v01=0x00000001,     ///<MCGPLLCLK/MCGFLLCLK clock divided by the I2S fractional clock divider. See the SIM_CLKDIV2[I2SFRAC, I2SDIV] descriptions.
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<External bypass clock (I2S0_CLKIN)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,I2ssrcVal> i2ssrc{}; 
        namespace I2ssrcValC{
            constexpr Register::FieldValue<decltype(i2ssrc)::Type,I2ssrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(i2ssrc)::Type,I2ssrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(i2ssrc)::Type,I2ssrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(i2ssrc)::Type,I2ssrcVal::v11> v11{};
        }
        ///SDHC clock source select
        enum class SdhcsrcVal {
            v00=0x00000000,     ///<Core/system clock.
            v01=0x00000001,     ///<MCGPLLCLK/MCGFLLCLK clock
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<External bypass clock (SDHC0_CLKIN)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,SdhcsrcVal> sdhcsrc{}; 
        namespace SdhcsrcValC{
            constexpr Register::FieldValue<decltype(sdhcsrc)::Type,SdhcsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sdhcsrc)::Type,SdhcsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sdhcsrc)::Type,SdhcsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sdhcsrc)::Type,SdhcsrcVal::v11> v11{};
        }
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0xf8c3fee8,0x00000000,unsigned>;
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
        ///FTM0 Fault 2 Select
        enum class Ftm0flt2Val {
            v0=0x00000000,     ///<FTM0_FLT2 pin
            v1=0x00000001,     ///<CMP2 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ftm0flt2Val> ftm0flt2{}; 
        namespace Ftm0flt2ValC{
            constexpr Register::FieldValue<decltype(ftm0flt2)::Type,Ftm0flt2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt2)::Type,Ftm0flt2Val::v1> v1{};
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
        ///FTM1 channel 0 input capture source select
        enum class Ftm1ch0srcVal {
            v00=0x00000000,     ///<FTM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Ftm1ch0srcVal> ftm1ch0src{}; 
        namespace Ftm1ch0srcValC{
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v10> v10{};
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
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xffffff00,0x00000000,unsigned>;
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
        enum class UarttxsrcVal {
            v00=0x00000000,     ///<UART1_TX pin
            v01=0x00000001,     ///<UART1_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART1_TX pin modulated with FTM2 channel 0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,UarttxsrcVal> uarttxsrc{}; 
        namespace UarttxsrcValC{
            constexpr Register::FieldValue<decltype(uarttxsrc)::Type,UarttxsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uarttxsrc)::Type,UarttxsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uarttxsrc)::Type,UarttxsrcVal::v10> v10{};
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
    namespace SimSopt6{    ///<System Options Register 6
        using Addr = Register::Address<0x40048014,0x00ffffff,0x00000000,unsigned>;
        ///Reset pin filter select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> rstfltsel{}; 
        ///Reset pin filter enable
        enum class RstfltenVal {
            v000=0x00000000,     ///<All filtering disabled
            v001=0x00000001,     ///<Bus clock filter enabled in normal operation. LPO clock filter enabled in stop mode.
            v010=0x00000002,     ///<LPO clock filter enabled
            v011=0x00000003,     ///<Bus clock filter enabled in normal operation. All filtering disabled in stop mode.
            v100=0x00000004,     ///<LPO clock filter enabled in normal operation. All filtering disabled in stop mode.
            v101=0x00000005,     ///<Reserved (all filtering disabled)
            v110=0x00000006,     ///<Reserved (all filtering disabled)
            v111=0x00000007,     ///<Reserved (all filtering disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,RstfltenVal> rstflten{}; 
        namespace RstfltenValC{
            constexpr Register::FieldValue<decltype(rstflten)::Type,RstfltenVal::v000> v000{};
            constexpr Register::FieldValue<decltype(rstflten)::Type,RstfltenVal::v001> v001{};
            constexpr Register::FieldValue<decltype(rstflten)::Type,RstfltenVal::v010> v010{};
            constexpr Register::FieldValue<decltype(rstflten)::Type,RstfltenVal::v011> v011{};
            constexpr Register::FieldValue<decltype(rstflten)::Type,RstfltenVal::v100> v100{};
            constexpr Register::FieldValue<decltype(rstflten)::Type,RstfltenVal::v101> v101{};
            constexpr Register::FieldValue<decltype(rstflten)::Type,RstfltenVal::v110> v110{};
            constexpr Register::FieldValue<decltype(rstflten)::Type,RstfltenVal::v111> v111{};
        }
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xffff6060,0x00000000,unsigned>;
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
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0011> v0011{};
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
            v1011=0x0000000b,     ///<Unused
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<Low-power timer trigger
            v1111=0x0000000f,     ///<Unused
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Adc1trgselVal> adc1trgsel{}; 
        namespace Adc1trgselValC{
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0011> v0011{};
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
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1111> v1111{};
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
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0xffff0f80,0x00000000,unsigned>;
        ///Pincount identification
        enum class PinidVal {
            v0010=0x00000002,     ///<32-pin
            v0100=0x00000004,     ///<48-pin
            v0101=0x00000005,     ///<64-pin
            v0110=0x00000006,     ///<80-pin
            v0111=0x00000007,     ///<81-pin
            v1000=0x00000008,     ///<100-pin
            v1001=0x00000009,     ///<121-pin
            v1010=0x0000000a,     ///<144-pin
            v1100=0x0000000c,     ///<196-pin
            v1110=0x0000000e,     ///<256-pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PinidVal> pinid{}; 
        namespace PinidValC{
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1110> v1110{};
        }
        ///Kinetis family identification
        enum class FamidVal {
            v000=0x00000000,     ///<K10
            v001=0x00000001,     ///<K20
            v010=0x00000002,     ///<K30
            v011=0x00000003,     ///<K40
            v100=0x00000004,     ///<K60
            v101=0x00000005,     ///<K70
            v110=0x00000006,     ///<K50 and K52
            v111=0x00000007,     ///<K51 and K53
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FamidVal> famid{}; 
        namespace FamidValC{
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v000> v000{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v001> v001{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v010> v010{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v011> v011{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v100> v100{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v101> v101{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v110> v110{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v111> v111{};
        }
        ///Device revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> revid{}; 
    }
    namespace SimScgc1{    ///<System Clock Gating Control Register 1
        using Addr = Register::Address<0x40048028,0xfedff3ff,0x00000000,unsigned>;
        ///UART4 Clock Gate Control
        enum class Uart4Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Uart4Val> uart4{}; 
        namespace Uart4ValC{
            constexpr Register::FieldValue<decltype(uart4)::Type,Uart4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart4)::Type,Uart4Val::v1> v1{};
        }
        ///UART5 Clock Gate Control
        enum class Uart5Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Uart5Val> uart5{}; 
        namespace Uart5ValC{
            constexpr Register::FieldValue<decltype(uart5)::Type,Uart5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart5)::Type,Uart5Val::v1> v1{};
        }
        ///OPAMP Clock Gate Control
        enum class OpampVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,OpampVal> opamp{}; 
        namespace OpampValC{
            constexpr Register::FieldValue<decltype(opamp)::Type,OpampVal::v0> v0{};
            constexpr Register::FieldValue<decltype(opamp)::Type,OpampVal::v1> v1{};
        }
        ///TRIAMP Clock Gate Control
        enum class TriampVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,TriampVal> triamp{}; 
        namespace TriampValC{
            constexpr Register::FieldValue<decltype(triamp)::Type,TriampVal::v0> v0{};
            constexpr Register::FieldValue<decltype(triamp)::Type,TriampVal::v1> v1{};
        }
    }
    namespace SimScgc2{    ///<System Clock Gating Control Register 2
        using Addr = Register::Address<0x4004802c,0xffffcffe,0x00000000,unsigned>;
        ///ENET Clock Gate Control
        enum class EnetVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnetVal> enet{}; 
        namespace EnetValC{
            constexpr Register::FieldValue<decltype(enet)::Type,EnetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enet)::Type,EnetVal::v1> v1{};
        }
        ///DAC0 Clock Gate Control
        enum class Dac0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Dac0Val> dac0{}; 
        namespace Dac0ValC{
            constexpr Register::FieldValue<decltype(dac0)::Type,Dac0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dac0)::Type,Dac0Val::v1> v1{};
        }
        ///DAC1 Clock Gate Control
        enum class Dac1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dac1Val> dac1{}; 
        namespace Dac1ValC{
            constexpr Register::FieldValue<decltype(dac1)::Type,Dac1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dac1)::Type,Dac1Val::v1> v1{};
        }
    }
    namespace SimScgc3{    ///<System Clock Gating Control Register 3
        using Addr = Register::Address<0x40048030,0xb6fdeffe,0x00000000,unsigned>;
        ///RNGB Clock Gate Control
        enum class RngbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RngbVal> rngb{}; 
        namespace RngbValC{
            constexpr Register::FieldValue<decltype(rngb)::Type,RngbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rngb)::Type,RngbVal::v1> v1{};
        }
        ///SPI2 Clock Gate Control
        enum class Spi2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Spi2Val> spi2{}; 
        namespace Spi2ValC{
            constexpr Register::FieldValue<decltype(spi2)::Type,Spi2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi2)::Type,Spi2Val::v1> v1{};
        }
        ///SDHC Clock Gate Control
        enum class SdhcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,SdhcVal> sdhc{}; 
        namespace SdhcValC{
            constexpr Register::FieldValue<decltype(sdhc)::Type,SdhcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sdhc)::Type,SdhcVal::v1> v1{};
        }
        ///FTM2 Clock Gate Control
        enum class Ftm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm2Val> ftm2{}; 
        namespace Ftm2ValC{
            constexpr Register::FieldValue<decltype(ftm2)::Type,Ftm2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2)::Type,Ftm2Val::v1> v1{};
        }
        ///ADC1 Clock Gate Control
        enum class Adc1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Adc1Val> adc1{}; 
        namespace Adc1ValC{
            constexpr Register::FieldValue<decltype(adc1)::Type,Adc1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1)::Type,Adc1Val::v1> v1{};
        }
        ///Segment LCD Clock Gate Control
        enum class SlcdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,SlcdVal> slcd{}; 
        namespace SlcdValC{
            constexpr Register::FieldValue<decltype(slcd)::Type,SlcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slcd)::Type,SlcdVal::v1> v1{};
        }
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xefe3c339,0x00000000,unsigned>;
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
        ///UART3 Clock Gate Control
        enum class Uart3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Uart3Val> uart3{}; 
        namespace Uart3ValC{
            constexpr Register::FieldValue<decltype(uart3)::Type,Uart3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart3)::Type,Uart3Val::v1> v1{};
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
        ///LLWU Clock Gate Control
        enum class LlwuVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,LlwuVal> llwu{}; 
        namespace LlwuValC{
            constexpr Register::FieldValue<decltype(llwu)::Type,LlwuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(llwu)::Type,LlwuVal::v1> v1{};
        }
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0xffffc1dc,0x00000000,unsigned>;
        ///Low Power Timer Clock Gate Control
        enum class LptimerVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LptimerVal> lptimer{}; 
        namespace LptimerValC{
            constexpr Register::FieldValue<decltype(lptimer)::Type,LptimerVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lptimer)::Type,LptimerVal::v1> v1{};
        }
        ///Register File Clock Gate Control
        enum class RegfileVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RegfileVal> regfile{}; 
        namespace RegfileValC{
            constexpr Register::FieldValue<decltype(regfile)::Type,RegfileVal::v0> v0{};
            constexpr Register::FieldValue<decltype(regfile)::Type,RegfileVal::v1> v1{};
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
        using Addr = Register::Address<0x4004803c,0xd41b4ffc,0x00000000,unsigned>;
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
        ///RTC Clock Gate Control
        enum class RtcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,RtcVal> rtc{}; 
        namespace RtcValC{
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::v1> v1{};
        }
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x40048040,0xfffffff8,0x00000000,unsigned>;
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
        ///MPU Clock Gate Control
        enum class MpuVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MpuVal> mpu{}; 
        namespace MpuValC{
            constexpr Register::FieldValue<decltype(mpu)::Type,MpuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mpu)::Type,MpuVal::v1> v1{};
        }
    }
    namespace SimClkdiv1{    ///<System Clock Divider Register 1
        using Addr = Register::Address<0x40048044,0x0000ffff,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x40048048,0x000f00f0,0x00000000,unsigned>;
        ///USB clock divider fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbfrac{}; 
        ///USB clock divider divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> usbdiv{}; 
        ///I2S clock divider fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> i2sfrac{}; 
        ///I2S clock divider value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> i2sdiv{}; 
    }
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4004804c,0x00f0f0ff,0x00000000,unsigned>;
        ///FlexNVM partition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> depart{}; 
        ///EEPROM size
        enum class EesizeVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,EesizeVal> eesize{}; 
        namespace EesizeValC{
            constexpr Register::FieldValue<decltype(eesize)::Type,EesizeVal::v0010> v0010{};
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfsize{}; 
        ///FlexNVM size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nvmsize{}; 
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0x4040ffff,0x00000000,unsigned>;
        ///Max address block 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> maxaddr1{}; 
        ///Program flash
        enum class PflshVal {
            v0=0x00000000,     ///<For devices with FlexNVM: Physical flash block 1 is used as FlexNVM For devices without FlexNVM: Reserved
            v1=0x00000001,     ///<Physical flash block 1 is used as program flash
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PflshVal> pflsh{}; 
        namespace PflshValC{
            constexpr Register::FieldValue<decltype(pflsh)::Type,PflshVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pflsh)::Type,PflshVal::v1> v1{};
        }
        ///Max address block 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> maxaddr0{}; 
        ///Swap program flash
        enum class SwappflshVal {
            v0=0x00000000,     ///<Swap is not active.
            v1=0x00000001,     ///<Swap is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SwappflshVal> swappflsh{}; 
        namespace SwappflshValC{
            constexpr Register::FieldValue<decltype(swappflsh)::Type,SwappflshVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swappflsh)::Type,SwappflshVal::v1> v1{};
        }
    }
    namespace SimUidh{    ///<Unique Identification Register High
        using Addr = Register::Address<0x40048054,0x00000000,0x00000000,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uid{}; 
    }
    namespace SimUidmh{    ///<Unique Identification Register Mid-High
        using Addr = Register::Address<0x40048058,0x00000000,0x00000000,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uid{}; 
    }
    namespace SimUidml{    ///<Unique Identification Register Mid Low
        using Addr = Register::Address<0x4004805c,0x00000000,0x00000000,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uid{}; 
    }
    namespace SimUidl{    ///<Unique Identification Register Low
        using Addr = Register::Address<0x40048060,0x00000000,0x00000000,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uid{}; 
    }
}
