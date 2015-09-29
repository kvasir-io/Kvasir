#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0xfff0ffff,0,unsigned>;
        ///32K oscillator clock output
        enum class osc32koutVal {
            v00=0x00000000,     ///<ERCLK32K is not output.
            v01=0x00000001,     ///<ERCLK32K is output on PTE0.
            v10=0x00000002,     ///<ERCLK32K is output on PTE26.
        };
        namespace osc32koutValC{
            constexpr MPL::Value<osc32koutVal,osc32koutVal::v00> v00{};
            constexpr MPL::Value<osc32koutVal,osc32koutVal::v01> v01{};
            constexpr MPL::Value<osc32koutVal,osc32koutVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,osc32koutVal> osc32kout{}; 
        ///32K Oscillator Clock Select
        enum class osc32kselVal {
            v00=0x00000000,     ///<System oscillator (OSC32KCLK)
            v10=0x00000002,     ///<RTC_CLKIN
            v11=0x00000003,     ///<LPO 1kHz
        };
        namespace osc32kselValC{
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v00> v00{};
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v10> v10{};
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,osc32kselVal> osc32ksel{}; 
    }
    namespace SimSopt1cfg{    ///<SOPT1 Configuration Register
        using Addr = Register::Address<0x40047004,0xffffffff,0,unsigned>;
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0xc03bff0f,0,unsigned>;
        ///RTC Clock Out Select
        enum class rtcclkoutselVal {
            v0=0x00000000,     ///<RTC 1 Hz clock is output on the RTC_CLKOUT pin.
            v1=0x00000001,     ///<OSCERCLK clock is output on the RTC_CLKOUT pin.
        };
        namespace rtcclkoutselValC{
            constexpr MPL::Value<rtcclkoutselVal,rtcclkoutselVal::v0> v0{};
            constexpr MPL::Value<rtcclkoutselVal,rtcclkoutselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rtcclkoutselVal> rtcclkoutsel{}; 
        ///CLKOUT select
        enum class clkoutselVal {
            v010=0x00000002,     ///<Bus clock
            v011=0x00000003,     ///<LPO clock (1 kHz)
            v100=0x00000004,     ///<LIRC_CLK
            v110=0x00000006,     ///<OSCERCLK
            v111=0x00000007,     ///<IRC48M clock (IRC48M clock can be output to PAD only when chip VDD is 2.7-3.6 V)
        };
        namespace clkoutselValC{
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v010> v010{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v011> v011{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v100> v100{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v110> v110{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,clkoutselVal> clkoutsel{}; 
        ///USB clock source select
        enum class usbsrcVal {
            v0=0x00000000,     ///<External bypass clock (USB_CLKIN).
            v1=0x00000001,     ///<IRC48M clock
        };
        namespace usbsrcValC{
            constexpr MPL::Value<usbsrcVal,usbsrcVal::v0> v0{};
            constexpr MPL::Value<usbsrcVal,usbsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,usbsrcVal> usbsrc{}; 
        ///FlexIO Module Clock Source Select
        enum class flexiosrcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<IRC48M clock
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        namespace flexiosrcValC{
            constexpr MPL::Value<flexiosrcVal,flexiosrcVal::v00> v00{};
            constexpr MPL::Value<flexiosrcVal,flexiosrcVal::v01> v01{};
            constexpr MPL::Value<flexiosrcVal,flexiosrcVal::v10> v10{};
            constexpr MPL::Value<flexiosrcVal,flexiosrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,flexiosrcVal> flexiosrc{}; 
        ///TPM Clock Source Select
        enum class tpmsrcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<IRC48M clock
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
        ///LPUART0 Clock Source Select
        enum class lpuart0srcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<IRC48M clock
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        namespace lpuart0srcValC{
            constexpr MPL::Value<lpuart0srcVal,lpuart0srcVal::v00> v00{};
            constexpr MPL::Value<lpuart0srcVal,lpuart0srcVal::v01> v01{};
            constexpr MPL::Value<lpuart0srcVal,lpuart0srcVal::v10> v10{};
            constexpr MPL::Value<lpuart0srcVal,lpuart0srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,lpuart0srcVal> lpuart0src{}; 
        ///LPUART1 Clock Source Select
        enum class lpuart1srcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<IRC48M clock
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        namespace lpuart1srcValC{
            constexpr MPL::Value<lpuart1srcVal,lpuart1srcVal::v00> v00{};
            constexpr MPL::Value<lpuart1srcVal,lpuart1srcVal::v01> v01{};
            constexpr MPL::Value<lpuart1srcVal,lpuart1srcVal::v10> v10{};
            constexpr MPL::Value<lpuart1srcVal,lpuart1srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,lpuart1srcVal> lpuart1src{}; 
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0xf8e3ffff,0,unsigned>;
        ///TPM1 channel 0 input capture source select
        enum class tpm1ch0srcVal {
            v00=0x00000000,     ///<TPM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v11=0x00000003,     ///<USB start of frame pulse
        };
        namespace tpm1ch0srcValC{
            constexpr MPL::Value<tpm1ch0srcVal,tpm1ch0srcVal::v00> v00{};
            constexpr MPL::Value<tpm1ch0srcVal,tpm1ch0srcVal::v01> v01{};
            constexpr MPL::Value<tpm1ch0srcVal,tpm1ch0srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,tpm1ch0srcVal> tpm1ch0src{}; 
        ///TPM2 Channel 0 Input Capture Source Select
        enum class tpm2ch0srcVal {
            v0=0x00000000,     ///<TPM2_CH0 signal
            v1=0x00000001,     ///<CMP0 output
        };
        namespace tpm2ch0srcValC{
            constexpr MPL::Value<tpm2ch0srcVal,tpm2ch0srcVal::v0> v0{};
            constexpr MPL::Value<tpm2ch0srcVal,tpm2ch0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tpm2ch0srcVal> tpm2ch0src{}; 
        ///TPM0 External Clock Pin Select
        enum class tpm0clkselVal {
            v0=0x00000000,     ///<TPM0 external clock driven by TPM_CLKIN0 pin.
            v1=0x00000001,     ///<TPM0 external clock driven by TPM_CLKIN1 pin.
        };
        namespace tpm0clkselValC{
            constexpr MPL::Value<tpm0clkselVal,tpm0clkselVal::v0> v0{};
            constexpr MPL::Value<tpm0clkselVal,tpm0clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tpm0clkselVal> tpm0clksel{}; 
        ///TPM1 External Clock Pin Select
        enum class tpm1clkselVal {
            v0=0x00000000,     ///<TPM1 external clock driven by TPM_CLKIN0 pin.
            v1=0x00000001,     ///<TPM1 external clock driven by TPM_CLKIN1 pin.
        };
        namespace tpm1clkselValC{
            constexpr MPL::Value<tpm1clkselVal,tpm1clkselVal::v0> v0{};
            constexpr MPL::Value<tpm1clkselVal,tpm1clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,tpm1clkselVal> tpm1clksel{}; 
        ///TPM2 External Clock Pin Select
        enum class tpm2clkselVal {
            v0=0x00000000,     ///<TPM2 external clock driven by TPM_CLKIN0 pin.
            v1=0x00000001,     ///<TPM2 external clock driven by TPM_CLKIN1 pin.
        };
        namespace tpm2clkselValC{
            constexpr MPL::Value<tpm2clkselVal,tpm2clkselVal::v0> v0{};
            constexpr MPL::Value<tpm2clkselVal,tpm2clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,tpm2clkselVal> tpm2clksel{}; 
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xfff8ff88,0,unsigned>;
        ///LPUART0 Transmit Data Source Select
        enum class lpuart0txsrcVal {
            v00=0x00000000,     ///<LPUART0_TX pin
            v01=0x00000001,     ///<LPUART0_TX pin modulated with TPM1 channel 0 output
            v10=0x00000002,     ///<LPUART0_TX pin modulated with TPM2 channel 0 output
        };
        namespace lpuart0txsrcValC{
            constexpr MPL::Value<lpuart0txsrcVal,lpuart0txsrcVal::v00> v00{};
            constexpr MPL::Value<lpuart0txsrcVal,lpuart0txsrcVal::v01> v01{};
            constexpr MPL::Value<lpuart0txsrcVal,lpuart0txsrcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,lpuart0txsrcVal> lpuart0txsrc{}; 
        ///LPUART0 Receive Data Source Select
        enum class lpuart0rxsrcVal {
            v0=0x00000000,     ///<LPUART_RX pin
            v1=0x00000001,     ///<CMP0 output
        };
        namespace lpuart0rxsrcValC{
            constexpr MPL::Value<lpuart0rxsrcVal,lpuart0rxsrcVal::v0> v0{};
            constexpr MPL::Value<lpuart0rxsrcVal,lpuart0rxsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,lpuart0rxsrcVal> lpuart0rxsrc{}; 
        ///LPUART1 Transmit Data Source Select
        enum class lpuart1txsrcVal {
            v00=0x00000000,     ///<LPUART1_TX pin
            v01=0x00000001,     ///<LPUART1_TX pin modulated with TPM1 channel 0 output
            v10=0x00000002,     ///<LPUART1_TX pin modulated with TPM2 channel 0 output
        };
        namespace lpuart1txsrcValC{
            constexpr MPL::Value<lpuart1txsrcVal,lpuart1txsrcVal::v00> v00{};
            constexpr MPL::Value<lpuart1txsrcVal,lpuart1txsrcVal::v01> v01{};
            constexpr MPL::Value<lpuart1txsrcVal,lpuart1txsrcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,lpuart1txsrcVal> lpuart1txsrc{}; 
        ///LPUART1 Receive Data Source Select
        enum class lpuart1rxsrcVal {
            v0=0x00000000,     ///<LPUART1_RX pin
            v1=0x00000001,     ///<CMP0 output
        };
        namespace lpuart1rxsrcValC{
            constexpr MPL::Value<lpuart1rxsrcVal,lpuart1rxsrcVal::v0> v0{};
            constexpr MPL::Value<lpuart1rxsrcVal,lpuart1rxsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lpuart1rxsrcVal> lpuart1rxsrc{}; 
        ///LPUART0 Open Drain Enable
        enum class lpuart0odeVal {
            v0=0x00000000,     ///<Open drain is disabled on LPUART0.
            v1=0x00000001,     ///<Open drain is enabled on LPUART0.
        };
        namespace lpuart0odeValC{
            constexpr MPL::Value<lpuart0odeVal,lpuart0odeVal::v0> v0{};
            constexpr MPL::Value<lpuart0odeVal,lpuart0odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,lpuart0odeVal> lpuart0ode{}; 
        ///LPUART1 Open Drain Enable
        enum class lpuart1odeVal {
            v0=0x00000000,     ///<Open drain is disabled on LPUART1.
            v1=0x00000001,     ///<Open drain is enabled on LPUART1
        };
        namespace lpuart1odeValC{
            constexpr MPL::Value<lpuart1odeVal,lpuart1odeVal::v0> v0{};
            constexpr MPL::Value<lpuart1odeVal,lpuart1odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,lpuart1odeVal> lpuart1ode{}; 
        ///UART2 Open Drain Enable
        enum class uart2odeVal {
            v0=0x00000000,     ///<Open drain is disabled on UART2
            v1=0x00000001,     ///<Open drain is enabled on UART2
        };
        namespace uart2odeValC{
            constexpr MPL::Value<uart2odeVal,uart2odeVal::v0> v0{};
            constexpr MPL::Value<uart2odeVal,uart2odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,uart2odeVal> uart2ode{}; 
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xffffff60,0,unsigned>;
        ///ADC0 Trigger Select
        enum class adc0trgselVal {
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
        namespace adc0trgselValC{
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0000> v0000{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0001> v0001{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0100> v0100{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0101> v0101{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1000> v1000{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1001> v1001{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1010> v1010{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1100> v1100{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1101> v1101{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1110> v1110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,adc0trgselVal> adc0trgsel{}; 
        ///ADC0 Pretrigger Select
        enum class adc0pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger ADHDWTSA is selected, thus ADC0 will use ADC0_SC1A configuration for the next ADC conversion and store the result in ADC0_RA register.
            v1=0x00000001,     ///<Pre-trigger ADHDWTSB is selected, thus ADC0 will use ADC0_SC1B configuration for the next ADC conversion and store the result in ADC0_RB register.
        };
        namespace adc0pretrgselValC{
            constexpr MPL::Value<adc0pretrgselVal,adc0pretrgselVal::v0> v0{};
            constexpr MPL::Value<adc0pretrgselVal,adc0pretrgselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adc0pretrgselVal> adc0pretrgsel{}; 
        ///ADC0 Alternate Trigger Enable
        enum class adc0alttrgenVal {
            v0=0x00000000,     ///<ADC ADHWT trigger comes from TPM1 channel 0 and channel1. Prior to the assertion of TPM1 channel 0, a pre-trigger pulse will be sent to ADHWTSA to initiate an ADC acquisition using ADCx_SC1A configuration and store ADC conversion in ADCx_RA Register. Prior to the assertion of TPM1 channel 1 a pre-trigger pulse will be sent to ADHWTSB to initiate an ADC acquisition using ADCx_SC1Bconfiguration and store ADC conversion in ADCx_RB Register.
            v1=0x00000001,     ///<ADC ADHWT trigger comes from a peripheral event selected by ADC0TRGSEL bits.ADC0PRETRGSEL bit will select the optional ADHWTSA or ADHWTSB select lines for choosing the ADCx_SC1x config and ADCx_Rx result regsiter to store the ADC conversion.
        };
        namespace adc0alttrgenValC{
            constexpr MPL::Value<adc0alttrgenVal,adc0alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc0alttrgenVal,adc0alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,adc0alttrgenVal> adc0alttrgen{}; 
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0x00000ff0,0,unsigned>;
        ///Pincount Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pinid{}; 
        ///Device Revision Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
        ///System SRAM Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> sramsize{}; 
        ///Kinetis Series ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> seriesid{}; 
        ///Kinetis Sub-Family ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> subfamid{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> famid{}; 
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xff23ef3f,0,unsigned>;
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
        enum class usbfsVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace usbfsValC{
            constexpr MPL::Value<usbfsVal,usbfsVal::v0> v0{};
            constexpr MPL::Value<usbfsVal,usbfsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,usbfsVal> usbfs{}; 
        ///Comparator Clock Gate Control
        enum class cmp0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace cmp0ValC{
            constexpr MPL::Value<cmp0Val,cmp0Val::v0> v0{};
            constexpr MPL::Value<cmp0Val,cmp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,cmp0Val> cmp0{}; 
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
        ///SPI0 Clock Gate Control
        enum class spi0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace spi0ValC{
            constexpr MPL::Value<spi0Val,spi0Val::v0> v0{};
            constexpr MPL::Value<spi0Val,spi0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,spi0Val> spi0{}; 
        ///SPI1 Clock Gate Control
        enum class spi1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace spi1ValC{
            constexpr MPL::Value<spi1Val,spi1Val::v0> v0{};
            constexpr MPL::Value<spi1Val,spi1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,spi1Val> spi1{}; 
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0x7fc7c1fe,0,unsigned>;
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
        ///Segment LCD Clock Gate Control
        enum class slcdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace slcdValC{
            constexpr MPL::Value<slcdVal,slcdVal::v0> v0{};
            constexpr MPL::Value<slcdVal,slcdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,slcdVal> slcd{}; 
        ///LPUART0 Clock Gate Control
        enum class lpuart0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace lpuart0ValC{
            constexpr MPL::Value<lpuart0Val,lpuart0Val::v0> v0{};
            constexpr MPL::Value<lpuart0Val,lpuart0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lpuart0Val> lpuart0{}; 
        ///LPUART1 Clock Gate Control
        enum class lpuart1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace lpuart1ValC{
            constexpr MPL::Value<lpuart1Val,lpuart1Val::v0> v0{};
            constexpr MPL::Value<lpuart1Val,lpuart1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lpuart1Val> lpuart1{}; 
        ///FlexIO Module
        enum class flexioVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace flexioValC{
            constexpr MPL::Value<flexioVal,flexioVal::v0> v0{};
            constexpr MPL::Value<flexioVal,flexioVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,flexioVal> flexio{}; 
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0x507f7ffc,0,unsigned>;
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
        ///TPM0 Clock Gate Control
        enum class tpm0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace tpm0ValC{
            constexpr MPL::Value<tpm0Val,tpm0Val::v0> v0{};
            constexpr MPL::Value<tpm0Val,tpm0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tpm0Val> tpm0{}; 
        ///TPM1 Clock Gate Control
        enum class tpm1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace tpm1ValC{
            constexpr MPL::Value<tpm1Val,tpm1Val::v0> v0{};
            constexpr MPL::Value<tpm1Val,tpm1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,tpm1Val> tpm1{}; 
        ///TPM2 Clock Gate Control
        enum class tpm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace tpm2ValC{
            constexpr MPL::Value<tpm2Val,tpm2Val::v0> v0{};
            constexpr MPL::Value<tpm2Val,tpm2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,tpm2Val> tpm2{}; 
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
        using Addr = Register::Address<0x40048040,0xfffffeff,0,unsigned>;
        ///DMA Clock Gate Control
        enum class dmaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace dmaValC{
            constexpr MPL::Value<dmaVal,dmaVal::v0> v0{};
            constexpr MPL::Value<dmaVal,dmaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,dmaVal> dma{}; 
    }
    namespace SimClkdiv1{    ///<System Clock Divider Register 1
        using Addr = Register::Address<0x40048044,0x0ff8ffff,0,unsigned>;
        ///Clock 4 Output Divider value
        enum class outdiv4Val {
            v000=0x00000000,     ///<Divide-by-1.
            v001=0x00000001,     ///<Divide-by-2.
            v010=0x00000002,     ///<Divide-by-3.
            v011=0x00000003,     ///<Divide-by-4.
            v100=0x00000004,     ///<Divide-by-5.
            v101=0x00000005,     ///<Divide-by-6.
            v110=0x00000006,     ///<Divide-by-7.
            v111=0x00000007,     ///<Divide-by-8.
        };
        namespace outdiv4ValC{
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v000> v000{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v001> v001{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v010> v010{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v011> v011{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v100> v100{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v101> v101{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v110> v110{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,outdiv4Val> outdiv4{}; 
        ///Clock 1 Output Divider value
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
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4004804c,0xf0fffffc,0,unsigned>;
        ///Flash Disable
        enum class flashdisVal {
            v0=0x00000000,     ///<Flash is enabled.
            v1=0x00000001,     ///<Flash is disabled.
        };
        namespace flashdisValC{
            constexpr MPL::Value<flashdisVal,flashdisVal::v0> v0{};
            constexpr MPL::Value<flashdisVal,flashdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,flashdisVal> flashdis{}; 
        ///Flash Doze
        enum class flashdozeVal {
            v0=0x00000000,     ///<Flash remains enabled during Doze mode.
            v1=0x00000001,     ///<Flash is disabled for the duration of Doze mode.
        };
        namespace flashdozeValC{
            constexpr MPL::Value<flashdozeVal,flashdozeVal::v0> v0{};
            constexpr MPL::Value<flashdozeVal,flashdozeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,flashdozeVal> flashdoze{}; 
        ///Program Flash Size
        enum class pfsizeVal {
            v0000=0x00000000,     ///<8 KB of program flash memory, 1 KB protection region
            v0001=0x00000001,     ///<16 KB of program flash memory, 1 KB protection region
            v0011=0x00000003,     ///<32 KB of program flash memory, 1 KB protection region
            v0101=0x00000005,     ///<64 KB of program flash memory, 2 KB protection region
            v0111=0x00000007,     ///<128 KB of program flash memory, 4 KB protection region
            v1001=0x00000009,     ///<256 KB of program flash memory, 8 KB protection region
            v1111=0x0000000f,     ///<256 KB of program flash memory, 8 KB protection region
        };
        namespace pfsizeValC{
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v0000> v0000{};
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v0001> v0001{};
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v0011> v0011{};
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v0101> v0101{};
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v0111> v0111{};
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v1001> v1001{};
            constexpr MPL::Value<pfsizeVal,pfsizeVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,pfsizeVal> pfsize{}; 
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0x8080ffff,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> maxaddr1{}; 
        ///Max Address lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> maxaddr0{}; 
    }
    namespace SimUidmh{    ///<Unique Identification Register Mid-High
        using Addr = Register::Address<0x40048058,0xffff0000,0,unsigned>;
        ///Unique Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> uid{}; 
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
    namespace SimCopc{    ///<COP Control Register
        using Addr = Register::Address<0x40048100,0xffffff00,0,unsigned>;
        ///COP Windowed Mode
        enum class copwVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Windowed mode
        };
        namespace copwValC{
            constexpr MPL::Value<copwVal,copwVal::v0> v0{};
            constexpr MPL::Value<copwVal,copwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,copwVal> copw{}; 
        ///COP Clock Select
        enum class copclksVal {
            v0=0x00000000,     ///<COP configured for short timeout
            v1=0x00000001,     ///<COP configured for long timeout
        };
        namespace copclksValC{
            constexpr MPL::Value<copclksVal,copclksVal::v0> v0{};
            constexpr MPL::Value<copclksVal,copclksVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,copclksVal> copclks{}; 
        ///COP Watchdog Timeout
        enum class coptVal {
            v00=0x00000000,     ///<COP disabled
            v01=0x00000001,     ///<COP timeout after 25 cycles for short timeout or 213 cycles for long timeout
            v10=0x00000002,     ///<COP timeout after 28 cycles for short timeout or 216 cycles for long timeout
            v11=0x00000003,     ///<COP timeout after 210 cycles for short timeout or 218 cycles for long timeout
        };
        namespace coptValC{
            constexpr MPL::Value<coptVal,coptVal::v00> v00{};
            constexpr MPL::Value<coptVal,coptVal::v01> v01{};
            constexpr MPL::Value<coptVal,coptVal::v10> v10{};
            constexpr MPL::Value<coptVal,coptVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,coptVal> copt{}; 
        ///COP Stop Enable
        enum class copstpenVal {
            v0=0x00000000,     ///<COP is disabled and the counter is reset in Stop modes
            v1=0x00000001,     ///<COP is enabled in Stop modes
        };
        namespace copstpenValC{
            constexpr MPL::Value<copstpenVal,copstpenVal::v0> v0{};
            constexpr MPL::Value<copstpenVal,copstpenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,copstpenVal> copstpen{}; 
        ///COP Debug Enable
        enum class copdbgenVal {
            v0=0x00000000,     ///<COP is disabled and the counter is reset in Debug mode
            v1=0x00000001,     ///<COP is enabled in Debug mode
        };
        namespace copdbgenValC{
            constexpr MPL::Value<copdbgenVal,copdbgenVal::v0> v0{};
            constexpr MPL::Value<copdbgenVal,copdbgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,copdbgenVal> copdbgen{}; 
        ///COP Clock Select
        enum class copclkselVal {
            v00=0x00000000,     ///<LPO clock (1 kHz)
            v01=0x00000001,     ///<MCGIRCLK
            v10=0x00000002,     ///<OSCERCLK
            v11=0x00000003,     ///<Bus clock
        };
        namespace copclkselValC{
            constexpr MPL::Value<copclkselVal,copclkselVal::v00> v00{};
            constexpr MPL::Value<copclkselVal,copclkselVal::v01> v01{};
            constexpr MPL::Value<copclkselVal,copclkselVal::v10> v10{};
            constexpr MPL::Value<copclkselVal,copclkselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,copclkselVal> copclksel{}; 
    }
    namespace SimSrvcop{    ///<Service COP
        using Addr = Register::Address<0x40048104,0xffffff00,0,unsigned>;
        ///Service COP Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> srvcop{}; 
    }
}
