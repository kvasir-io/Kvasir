#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0xfff0ffff,0x00000000,unsigned>;
        ///32K oscillator clock output
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
        ///32K Oscillator Clock Select
        enum class Osc32kselVal {
            v00=0x00000000,     ///<System oscillator (OSC32KCLK)
            v10=0x00000002,     ///<RTC_CLKIN
            v11=0x00000003,     ///<LPO 1kHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Osc32kselVal> osc32ksel{}; 
        namespace Osc32kselValC{
            constexpr Register::FieldValue<decltype(osc32ksel)::Type,Osc32kselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(osc32ksel)::Type,Osc32kselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(osc32ksel)::Type,Osc32kselVal::v11> v11{};
        }
    }
    namespace SimSopt1cfg{    ///<SOPT1 Configuration Register
        using Addr = Register::Address<0x40047004,0xffffffff,0x00000000,unsigned>;
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0xc03bff0f,0x00000000,unsigned>;
        ///RTC Clock Out Select
        enum class RtcclkoutselVal {
            v0=0x00000000,     ///<RTC 1 Hz clock is output on the RTC_CLKOUT pin.
            v1=0x00000001,     ///<OSCERCLK clock is output on the RTC_CLKOUT pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RtcclkoutselVal> rtcclkoutsel{}; 
        namespace RtcclkoutselValC{
            constexpr Register::FieldValue<decltype(rtcclkoutsel)::Type,RtcclkoutselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtcclkoutsel)::Type,RtcclkoutselVal::v1> v1{};
        }
        ///CLKOUT select
        enum class ClkoutselVal {
            v010=0x00000002,     ///<Bus clock
            v011=0x00000003,     ///<LPO clock (1 kHz)
            v100=0x00000004,     ///<LIRC_CLK
            v110=0x00000006,     ///<OSCERCLK
            v111=0x00000007,     ///<IRC48M clock (IRC48M clock can be output to PAD only when chip VDD is 2.7-3.6 V)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,ClkoutselVal> clkoutsel{}; 
        namespace ClkoutselValC{
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v110> v110{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v111> v111{};
        }
        ///USB clock source select
        enum class UsbsrcVal {
            v0=0x00000000,     ///<External bypass clock (USB_CLKIN).
            v1=0x00000001,     ///<IRC48M clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UsbsrcVal> usbsrc{}; 
        namespace UsbsrcValC{
            constexpr Register::FieldValue<decltype(usbsrc)::Type,UsbsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbsrc)::Type,UsbsrcVal::v1> v1{};
        }
        ///FlexIO Module Clock Source Select
        enum class FlexiosrcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<IRC48M clock
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,FlexiosrcVal> flexiosrc{}; 
        namespace FlexiosrcValC{
            constexpr Register::FieldValue<decltype(flexiosrc)::Type,FlexiosrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(flexiosrc)::Type,FlexiosrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(flexiosrc)::Type,FlexiosrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(flexiosrc)::Type,FlexiosrcVal::v11> v11{};
        }
        ///TPM Clock Source Select
        enum class TpmsrcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<IRC48M clock
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,TpmsrcVal> tpmsrc{}; 
        namespace TpmsrcValC{
            constexpr Register::FieldValue<decltype(tpmsrc)::Type,TpmsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tpmsrc)::Type,TpmsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tpmsrc)::Type,TpmsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tpmsrc)::Type,TpmsrcVal::v11> v11{};
        }
        ///LPUART0 Clock Source Select
        enum class Lpuart0srcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<IRC48M clock
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Lpuart0srcVal> lpuart0src{}; 
        namespace Lpuart0srcValC{
            constexpr Register::FieldValue<decltype(lpuart0src)::Type,Lpuart0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lpuart0src)::Type,Lpuart0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lpuart0src)::Type,Lpuart0srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(lpuart0src)::Type,Lpuart0srcVal::v11> v11{};
        }
        ///LPUART1 Clock Source Select
        enum class Lpuart1srcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<IRC48M clock
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,Lpuart1srcVal> lpuart1src{}; 
        namespace Lpuart1srcValC{
            constexpr Register::FieldValue<decltype(lpuart1src)::Type,Lpuart1srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lpuart1src)::Type,Lpuart1srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lpuart1src)::Type,Lpuart1srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(lpuart1src)::Type,Lpuart1srcVal::v11> v11{};
        }
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0xf8e3ffff,0x00000000,unsigned>;
        ///TPM1 channel 0 input capture source select
        enum class Tpm1ch0srcVal {
            v00=0x00000000,     ///<TPM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v11=0x00000003,     ///<USB start of frame pulse
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Tpm1ch0srcVal> tpm1ch0src{}; 
        namespace Tpm1ch0srcValC{
            constexpr Register::FieldValue<decltype(tpm1ch0src)::Type,Tpm1ch0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tpm1ch0src)::Type,Tpm1ch0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tpm1ch0src)::Type,Tpm1ch0srcVal::v11> v11{};
        }
        ///TPM2 Channel 0 Input Capture Source Select
        enum class Tpm2ch0srcVal {
            v0=0x00000000,     ///<TPM2_CH0 signal
            v1=0x00000001,     ///<CMP0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tpm2ch0srcVal> tpm2ch0src{}; 
        namespace Tpm2ch0srcValC{
            constexpr Register::FieldValue<decltype(tpm2ch0src)::Type,Tpm2ch0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm2ch0src)::Type,Tpm2ch0srcVal::v1> v1{};
        }
        ///TPM0 External Clock Pin Select
        enum class Tpm0clkselVal {
            v0=0x00000000,     ///<TPM0 external clock driven by TPM_CLKIN0 pin.
            v1=0x00000001,     ///<TPM0 external clock driven by TPM_CLKIN1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tpm0clkselVal> tpm0clksel{}; 
        namespace Tpm0clkselValC{
            constexpr Register::FieldValue<decltype(tpm0clksel)::Type,Tpm0clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm0clksel)::Type,Tpm0clkselVal::v1> v1{};
        }
        ///TPM1 External Clock Pin Select
        enum class Tpm1clkselVal {
            v0=0x00000000,     ///<TPM1 external clock driven by TPM_CLKIN0 pin.
            v1=0x00000001,     ///<TPM1 external clock driven by TPM_CLKIN1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Tpm1clkselVal> tpm1clksel{}; 
        namespace Tpm1clkselValC{
            constexpr Register::FieldValue<decltype(tpm1clksel)::Type,Tpm1clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm1clksel)::Type,Tpm1clkselVal::v1> v1{};
        }
        ///TPM2 External Clock Pin Select
        enum class Tpm2clkselVal {
            v0=0x00000000,     ///<TPM2 external clock driven by TPM_CLKIN0 pin.
            v1=0x00000001,     ///<TPM2 external clock driven by TPM_CLKIN1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Tpm2clkselVal> tpm2clksel{}; 
        namespace Tpm2clkselValC{
            constexpr Register::FieldValue<decltype(tpm2clksel)::Type,Tpm2clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm2clksel)::Type,Tpm2clkselVal::v1> v1{};
        }
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xfff8ff88,0x00000000,unsigned>;
        ///LPUART0 Transmit Data Source Select
        enum class Lpuart0txsrcVal {
            v00=0x00000000,     ///<LPUART0_TX pin
            v01=0x00000001,     ///<LPUART0_TX pin modulated with TPM1 channel 0 output
            v10=0x00000002,     ///<LPUART0_TX pin modulated with TPM2 channel 0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Lpuart0txsrcVal> lpuart0txsrc{}; 
        namespace Lpuart0txsrcValC{
            constexpr Register::FieldValue<decltype(lpuart0txsrc)::Type,Lpuart0txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lpuart0txsrc)::Type,Lpuart0txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lpuart0txsrc)::Type,Lpuart0txsrcVal::v10> v10{};
        }
        ///LPUART0 Receive Data Source Select
        enum class Lpuart0rxsrcVal {
            v0=0x00000000,     ///<LPUART_RX pin
            v1=0x00000001,     ///<CMP0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Lpuart0rxsrcVal> lpuart0rxsrc{}; 
        namespace Lpuart0rxsrcValC{
            constexpr Register::FieldValue<decltype(lpuart0rxsrc)::Type,Lpuart0rxsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpuart0rxsrc)::Type,Lpuart0rxsrcVal::v1> v1{};
        }
        ///LPUART1 Transmit Data Source Select
        enum class Lpuart1txsrcVal {
            v00=0x00000000,     ///<LPUART1_TX pin
            v01=0x00000001,     ///<LPUART1_TX pin modulated with TPM1 channel 0 output
            v10=0x00000002,     ///<LPUART1_TX pin modulated with TPM2 channel 0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Lpuart1txsrcVal> lpuart1txsrc{}; 
        namespace Lpuart1txsrcValC{
            constexpr Register::FieldValue<decltype(lpuart1txsrc)::Type,Lpuart1txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lpuart1txsrc)::Type,Lpuart1txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lpuart1txsrc)::Type,Lpuart1txsrcVal::v10> v10{};
        }
        ///LPUART1 Receive Data Source Select
        enum class Lpuart1rxsrcVal {
            v0=0x00000000,     ///<LPUART1_RX pin
            v1=0x00000001,     ///<CMP0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Lpuart1rxsrcVal> lpuart1rxsrc{}; 
        namespace Lpuart1rxsrcValC{
            constexpr Register::FieldValue<decltype(lpuart1rxsrc)::Type,Lpuart1rxsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpuart1rxsrc)::Type,Lpuart1rxsrcVal::v1> v1{};
        }
        ///LPUART0 Open Drain Enable
        enum class Lpuart0odeVal {
            v0=0x00000000,     ///<Open drain is disabled on LPUART0.
            v1=0x00000001,     ///<Open drain is enabled on LPUART0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Lpuart0odeVal> lpuart0ode{}; 
        namespace Lpuart0odeValC{
            constexpr Register::FieldValue<decltype(lpuart0ode)::Type,Lpuart0odeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpuart0ode)::Type,Lpuart0odeVal::v1> v1{};
        }
        ///LPUART1 Open Drain Enable
        enum class Lpuart1odeVal {
            v0=0x00000000,     ///<Open drain is disabled on LPUART1.
            v1=0x00000001,     ///<Open drain is enabled on LPUART1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Lpuart1odeVal> lpuart1ode{}; 
        namespace Lpuart1odeValC{
            constexpr Register::FieldValue<decltype(lpuart1ode)::Type,Lpuart1odeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpuart1ode)::Type,Lpuart1odeVal::v1> v1{};
        }
        ///UART2 Open Drain Enable
        enum class Uart2odeVal {
            v0=0x00000000,     ///<Open drain is disabled on UART2
            v1=0x00000001,     ///<Open drain is enabled on UART2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Uart2odeVal> uart2ode{}; 
        namespace Uart2odeValC{
            constexpr Register::FieldValue<decltype(uart2ode)::Type,Uart2odeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart2ode)::Type,Uart2odeVal::v1> v1{};
        }
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xffffff60,0x00000000,unsigned>;
        ///ADC0 Trigger Select
        enum class Adc0trgselVal {
            v0000=0x00000000,     ///<External trigger pin input (EXTRG_IN)
            v0001=0x00000001,     ///<CMP0 output
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v1000=0x00000008,     ///<TPM0 overflow
            v1001=0x00000009,     ///<TPM1 overflow
            v1010=0x0000000a,     ///<TPM2 overflow
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<LPTMR0 trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Adc0trgselVal> adc0trgsel{}; 
        namespace Adc0trgselValC{
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1110> v1110{};
        }
        ///ADC0 Pretrigger Select
        enum class Adc0pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger ADHDWTSA is selected, thus ADC0 will use ADC0_SC1A configuration for the next ADC conversion and store the result in ADC0_RA register.
            v1=0x00000001,     ///<Pre-trigger ADHDWTSB is selected, thus ADC0 will use ADC0_SC1B configuration for the next ADC conversion and store the result in ADC0_RB register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adc0pretrgselVal> adc0pretrgsel{}; 
        namespace Adc0pretrgselValC{
            constexpr Register::FieldValue<decltype(adc0pretrgsel)::Type,Adc0pretrgselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0pretrgsel)::Type,Adc0pretrgselVal::v1> v1{};
        }
        ///ADC0 Alternate Trigger Enable
        enum class Adc0alttrgenVal {
            v0=0x00000000,     ///<ADC ADHWT trigger comes from TPM1 channel 0 and channel1. Prior to the assertion of TPM1 channel 0, a pre-trigger pulse will be sent to ADHWTSA to initiate an ADC acquisition using ADCx_SC1A configuration and store ADC conversion in ADCx_RA Register. Prior to the assertion of TPM1 channel 1 a pre-trigger pulse will be sent to ADHWTSB to initiate an ADC acquisition using ADCx_SC1Bconfiguration and store ADC conversion in ADCx_RB Register.
            v1=0x00000001,     ///<ADC ADHWT trigger comes from a peripheral event selected by ADC0TRGSEL bits.ADC0PRETRGSEL bit will select the optional ADHWTSA or ADHWTSB select lines for choosing the ADCx_SC1x config and ADCx_Rx result regsiter to store the ADC conversion.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Adc0alttrgenVal> adc0alttrgen{}; 
        namespace Adc0alttrgenValC{
            constexpr Register::FieldValue<decltype(adc0alttrgen)::Type,Adc0alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0alttrgen)::Type,Adc0alttrgenVal::v1> v1{};
        }
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0x00000ff0,0x00000000,unsigned>;
        ///Pincount Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pinid{}; 
        ///Device Revision Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> revid{}; 
        ///System SRAM Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sramsize{}; 
        ///Kinetis Series ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> seriesid{}; 
        ///Kinetis Sub-Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> subfamid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> famid{}; 
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xff23ef3f,0x00000000,unsigned>;
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
        enum class UsbfsVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UsbfsVal> usbfs{}; 
        namespace UsbfsValC{
            constexpr Register::FieldValue<decltype(usbfs)::Type,UsbfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbfs)::Type,UsbfsVal::v1> v1{};
        }
        ///Comparator Clock Gate Control
        enum class Cmp0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Cmp0Val> cmp0{}; 
        namespace Cmp0ValC{
            constexpr Register::FieldValue<decltype(cmp0)::Type,Cmp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(cmp0)::Type,Cmp0Val::v1> v1{};
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
        ///SPI0 Clock Gate Control
        enum class Spi0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Spi0Val> spi0{}; 
        namespace Spi0ValC{
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::v1> v1{};
        }
        ///SPI1 Clock Gate Control
        enum class Spi1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Spi1Val> spi1{}; 
        namespace Spi1ValC{
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::v1> v1{};
        }
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0x7fc7c1fe,0x00000000,unsigned>;
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
        ///Segment LCD Clock Gate Control
        enum class SlcdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SlcdVal> slcd{}; 
        namespace SlcdValC{
            constexpr Register::FieldValue<decltype(slcd)::Type,SlcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slcd)::Type,SlcdVal::v1> v1{};
        }
        ///LPUART0 Clock Gate Control
        enum class Lpuart0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Lpuart0Val> lpuart0{}; 
        namespace Lpuart0ValC{
            constexpr Register::FieldValue<decltype(lpuart0)::Type,Lpuart0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(lpuart0)::Type,Lpuart0Val::v1> v1{};
        }
        ///LPUART1 Clock Gate Control
        enum class Lpuart1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Lpuart1Val> lpuart1{}; 
        namespace Lpuart1ValC{
            constexpr Register::FieldValue<decltype(lpuart1)::Type,Lpuart1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(lpuart1)::Type,Lpuart1Val::v1> v1{};
        }
        ///FlexIO Module
        enum class FlexioVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,FlexioVal> flexio{}; 
        namespace FlexioValC{
            constexpr Register::FieldValue<decltype(flexio)::Type,FlexioVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flexio)::Type,FlexioVal::v1> v1{};
        }
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0x507f7ffc,0x00000000,unsigned>;
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
        ///TPM0 Clock Gate Control
        enum class Tpm0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tpm0Val> tpm0{}; 
        namespace Tpm0ValC{
            constexpr Register::FieldValue<decltype(tpm0)::Type,Tpm0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm0)::Type,Tpm0Val::v1> v1{};
        }
        ///TPM1 Clock Gate Control
        enum class Tpm1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Tpm1Val> tpm1{}; 
        namespace Tpm1ValC{
            constexpr Register::FieldValue<decltype(tpm1)::Type,Tpm1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm1)::Type,Tpm1Val::v1> v1{};
        }
        ///TPM2 Clock Gate Control
        enum class Tpm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Tpm2Val> tpm2{}; 
        namespace Tpm2ValC{
            constexpr Register::FieldValue<decltype(tpm2)::Type,Tpm2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm2)::Type,Tpm2Val::v1> v1{};
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
        using Addr = Register::Address<0x40048040,0xfffffeff,0x00000000,unsigned>;
        ///DMA Clock Gate Control
        enum class DmaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v1> v1{};
        }
    }
    namespace SimClkdiv1{    ///<System Clock Divider Register 1
        using Addr = Register::Address<0x40048044,0x0ff8ffff,0x00000000,unsigned>;
        ///Clock 4 Output Divider value
        enum class Outdiv4Val {
            v000=0x00000000,     ///<Divide-by-1.
            v001=0x00000001,     ///<Divide-by-2.
            v010=0x00000002,     ///<Divide-by-3.
            v011=0x00000003,     ///<Divide-by-4.
            v100=0x00000004,     ///<Divide-by-5.
            v101=0x00000005,     ///<Divide-by-6.
            v110=0x00000006,     ///<Divide-by-7.
            v111=0x00000007,     ///<Divide-by-8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,Outdiv4Val> outdiv4{}; 
        namespace Outdiv4ValC{
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v000> v000{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v001> v001{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v010> v010{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v011> v011{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v100> v100{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v101> v101{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v110> v110{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v111> v111{};
        }
        ///Clock 1 Output Divider value
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
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4004804c,0xf0fffffc,0x00000000,unsigned>;
        ///Flash Disable
        enum class FlashdisVal {
            v0=0x00000000,     ///<Flash is enabled.
            v1=0x00000001,     ///<Flash is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FlashdisVal> flashdis{}; 
        namespace FlashdisValC{
            constexpr Register::FieldValue<decltype(flashdis)::Type,FlashdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flashdis)::Type,FlashdisVal::v1> v1{};
        }
        ///Flash Doze
        enum class FlashdozeVal {
            v0=0x00000000,     ///<Flash remains enabled during Doze mode.
            v1=0x00000001,     ///<Flash is disabled for the duration of Doze mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FlashdozeVal> flashdoze{}; 
        namespace FlashdozeValC{
            constexpr Register::FieldValue<decltype(flashdoze)::Type,FlashdozeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flashdoze)::Type,FlashdozeVal::v1> v1{};
        }
        ///Program Flash Size
        enum class PfsizeVal {
            v0000=0x00000000,     ///<8 KB of program flash memory, 1 KB protection region
            v0001=0x00000001,     ///<16 KB of program flash memory, 1 KB protection region
            v0011=0x00000003,     ///<32 KB of program flash memory, 1 KB protection region
            v0101=0x00000005,     ///<64 KB of program flash memory, 2 KB protection region
            v0111=0x00000007,     ///<128 KB of program flash memory, 4 KB protection region
            v1001=0x00000009,     ///<256 KB of program flash memory, 8 KB protection region
            v1111=0x0000000f,     ///<256 KB of program flash memory, 8 KB protection region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PfsizeVal> pfsize{}; 
        namespace PfsizeValC{
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(pfsize)::Type,PfsizeVal::v1111> v1111{};
        }
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0x8080ffff,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> maxaddr1{}; 
        ///Max Address lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> maxaddr0{}; 
    }
    namespace SimUidmh{    ///<Unique Identification Register Mid-High
        using Addr = Register::Address<0x40048058,0xffff0000,0x00000000,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uid{}; 
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
    namespace SimCopc{    ///<COP Control Register
        using Addr = Register::Address<0x40048100,0xffffff00,0x00000000,unsigned>;
        ///COP Windowed Mode
        enum class CopwVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Windowed mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CopwVal> copw{}; 
        namespace CopwValC{
            constexpr Register::FieldValue<decltype(copw)::Type,CopwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(copw)::Type,CopwVal::v1> v1{};
        }
        ///COP Clock Select
        enum class CopclksVal {
            v0=0x00000000,     ///<COP configured for short timeout
            v1=0x00000001,     ///<COP configured for long timeout
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CopclksVal> copclks{}; 
        namespace CopclksValC{
            constexpr Register::FieldValue<decltype(copclks)::Type,CopclksVal::v0> v0{};
            constexpr Register::FieldValue<decltype(copclks)::Type,CopclksVal::v1> v1{};
        }
        ///COP Watchdog Timeout
        enum class CoptVal {
            v00=0x00000000,     ///<COP disabled
            v01=0x00000001,     ///<COP timeout after 25 cycles for short timeout or 213 cycles for long timeout
            v10=0x00000002,     ///<COP timeout after 28 cycles for short timeout or 216 cycles for long timeout
            v11=0x00000003,     ///<COP timeout after 210 cycles for short timeout or 218 cycles for long timeout
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,CoptVal> copt{}; 
        namespace CoptValC{
            constexpr Register::FieldValue<decltype(copt)::Type,CoptVal::v00> v00{};
            constexpr Register::FieldValue<decltype(copt)::Type,CoptVal::v01> v01{};
            constexpr Register::FieldValue<decltype(copt)::Type,CoptVal::v10> v10{};
            constexpr Register::FieldValue<decltype(copt)::Type,CoptVal::v11> v11{};
        }
        ///COP Stop Enable
        enum class CopstpenVal {
            v0=0x00000000,     ///<COP is disabled and the counter is reset in Stop modes
            v1=0x00000001,     ///<COP is enabled in Stop modes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CopstpenVal> copstpen{}; 
        namespace CopstpenValC{
            constexpr Register::FieldValue<decltype(copstpen)::Type,CopstpenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(copstpen)::Type,CopstpenVal::v1> v1{};
        }
        ///COP Debug Enable
        enum class CopdbgenVal {
            v0=0x00000000,     ///<COP is disabled and the counter is reset in Debug mode
            v1=0x00000001,     ///<COP is enabled in Debug mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CopdbgenVal> copdbgen{}; 
        namespace CopdbgenValC{
            constexpr Register::FieldValue<decltype(copdbgen)::Type,CopdbgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(copdbgen)::Type,CopdbgenVal::v1> v1{};
        }
        ///COP Clock Select
        enum class CopclkselVal {
            v00=0x00000000,     ///<LPO clock (1 kHz)
            v01=0x00000001,     ///<MCGIRCLK
            v10=0x00000002,     ///<OSCERCLK
            v11=0x00000003,     ///<Bus clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CopclkselVal> copclksel{}; 
        namespace CopclkselValC{
            constexpr Register::FieldValue<decltype(copclksel)::Type,CopclkselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(copclksel)::Type,CopclkselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(copclksel)::Type,CopclkselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(copclksel)::Type,CopclkselVal::v11> v11{};
        }
    }
    namespace SimSrvcop{    ///<Service COP
        using Addr = Register::Address<0x40048104,0xffffff00,0x00000000,unsigned>;
        ///Service COP Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> srvcop{}; 
    }
}
