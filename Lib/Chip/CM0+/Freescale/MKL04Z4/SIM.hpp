#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0xfff3ffff,0,unsigned>;
        ///32K oscillator clock select
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
        using Addr = Register::Address<0x40048004,0xf0ffff0f,0,unsigned>;
        ///RTC clock out select
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> clkoutsel{}; 
        ///TPM clock source select
        enum class tpmsrcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<MCGFLLCLK clock
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
        ///UART0 clock source select
        enum class uart0srcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<MCGFLLCLK clock
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        namespace uart0srcValC{
            constexpr MPL::Value<uart0srcVal,uart0srcVal::v00> v00{};
            constexpr MPL::Value<uart0srcVal,uart0srcVal::v01> v01{};
            constexpr MPL::Value<uart0srcVal,uart0srcVal::v10> v10{};
            constexpr MPL::Value<uart0srcVal,uart0srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,uart0srcVal> uart0src{}; 
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0xfcfbffff,0,unsigned>;
        ///TPM1 channel 0 input capture source select
        enum class tpm1ch0srcVal {
            v0=0x00000000,     ///<TPM1_CH0 signal
            v1=0x00000001,     ///<CMP0 output
        };
        namespace tpm1ch0srcValC{
            constexpr MPL::Value<tpm1ch0srcVal,tpm1ch0srcVal::v0> v0{};
            constexpr MPL::Value<tpm1ch0srcVal,tpm1ch0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,tpm1ch0srcVal> tpm1ch0src{}; 
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
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xfffefffa,0,unsigned>;
        ///UART0 transmit data source select
        enum class uart0txsrcVal {
            v0=0x00000000,     ///<UART0_TX pin
            v1=0x00000001,     ///<UART0_TX pin modulated with TPM1 channel 0 output
        };
        namespace uart0txsrcValC{
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v0> v0{};
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,uart0txsrcVal> uart0txsrc{}; 
        ///UART0 receive data source select
        enum class uart0rxsrcVal {
            v0=0x00000000,     ///<UART0_RX pin
            v1=0x00000001,     ///<CMP0 output
        };
        namespace uart0rxsrcValC{
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v0> v0{};
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,uart0rxsrcVal> uart0rxsrc{}; 
        ///UART0 Open Drain Enable
        enum class uart0odeVal {
            v0=0x00000000,     ///<Open drain is disabled on UART0
            v1=0x00000001,     ///<Open drain is enabled on UART0
        };
        namespace uart0odeValC{
            constexpr MPL::Value<uart0odeVal,uart0odeVal::v0> v0{};
            constexpr MPL::Value<uart0odeVal,uart0odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,uart0odeVal> uart0ode{}; 
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xffffff60,0,unsigned>;
        ///ADC0 trigger select
        enum class adc0trgselVal {
            v0000=0x00000000,     ///<External trigger pin input (EXTRG_IN)
            v0001=0x00000001,     ///<CMP0 output
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v1000=0x00000008,     ///<TPM0 overflow
            v1001=0x00000009,     ///<TPM1 overflow
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
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1100> v1100{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1101> v1101{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1110> v1110{};
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
            v0=0x00000000,     ///<TPM1 channel 0 (A) and channel 1 (B) triggers selected for ADC0.
            v1=0x00000001,     ///<Alternate trigger selected for ADC0.
        };
        namespace adc0alttrgenValC{
            constexpr MPL::Value<adc0alttrgenVal,adc0alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc0alttrgenVal,adc0alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,adc0alttrgenVal> adc0alttrgen{}; 
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0x00000070,0,unsigned>;
        ///Pincount identification
        enum class pinidVal {
            v0000=0x00000000,     ///<16-pin
            v0001=0x00000001,     ///<24-pin
            v0010=0x00000002,     ///<32-pin
            v0100=0x00000004,     ///<48-pin
            v0101=0x00000005,     ///<64-pin
            v0110=0x00000006,     ///<80-pin
            v1000=0x00000008,     ///<100-pin
        };
        namespace pinidValC{
            constexpr MPL::Value<pinidVal,pinidVal::v0000> v0000{};
            constexpr MPL::Value<pinidVal,pinidVal::v0001> v0001{};
            constexpr MPL::Value<pinidVal,pinidVal::v0010> v0010{};
            constexpr MPL::Value<pinidVal,pinidVal::v0100> v0100{};
            constexpr MPL::Value<pinidVal,pinidVal::v0101> v0101{};
            constexpr MPL::Value<pinidVal,pinidVal::v0110> v0110{};
            constexpr MPL::Value<pinidVal,pinidVal::v1000> v1000{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,pinidVal> pinid{}; 
        ///Device die number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> dieid{}; 
        ///Device revision number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
        ///System SRAM Size
        enum class sramsizeVal {
            v0000=0x00000000,     ///<0.5 KB
            v0001=0x00000001,     ///<1 KB
            v0010=0x00000002,     ///<2 KB
            v0011=0x00000003,     ///<4 KB
            v0100=0x00000004,     ///<8 KB
            v0101=0x00000005,     ///<16 KB
            v0110=0x00000006,     ///<32 KB
            v0111=0x00000007,     ///<64 KB
        };
        namespace sramsizeValC{
            constexpr MPL::Value<sramsizeVal,sramsizeVal::v0000> v0000{};
            constexpr MPL::Value<sramsizeVal,sramsizeVal::v0001> v0001{};
            constexpr MPL::Value<sramsizeVal,sramsizeVal::v0010> v0010{};
            constexpr MPL::Value<sramsizeVal,sramsizeVal::v0011> v0011{};
            constexpr MPL::Value<sramsizeVal,sramsizeVal::v0100> v0100{};
            constexpr MPL::Value<sramsizeVal,sramsizeVal::v0101> v0101{};
            constexpr MPL::Value<sramsizeVal,sramsizeVal::v0110> v0110{};
            constexpr MPL::Value<sramsizeVal,sramsizeVal::v0111> v0111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,sramsizeVal> sramsize{}; 
        ///Kinetis Series ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> seriesid{}; 
        ///Kinetis Sub-Family ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> subfamid{}; 
        ///Kinetis family ID
        enum class famidVal {
            v0000=0x00000000,     ///<KL0x Family (low end)
            v0001=0x00000001,     ///<KL1x Family (basic)
            v0010=0x00000002,     ///<KL2x Family (USB)
            v0011=0x00000003,     ///<KL3x Family (Segment LCD)
            v0100=0x00000004,     ///<KL4x Family (USB and Segment LCD)
        };
        namespace famidValC{
            constexpr MPL::Value<famidVal,famidVal::v0000> v0000{};
            constexpr MPL::Value<famidVal,famidVal::v0001> v0001{};
            constexpr MPL::Value<famidVal,famidVal::v0010> v0010{};
            constexpr MPL::Value<famidVal,famidVal::v0011> v0011{};
            constexpr MPL::Value<famidVal,famidVal::v0100> v0100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,famidVal> famid{}; 
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xffb7fbbf,0,unsigned>;
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
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0xfffff9fe,0,unsigned>;
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
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0xd47ffffc,0,unsigned>;
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
        ///Clock 4 output divider value
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
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4004804c,0xf0fffffc,0,unsigned>;
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
            v0=0x00000000,     ///<Flash remains enabled during Doze mode
            v1=0x00000001,     ///<Flash is disabled for the duration of Doze mode
        };
        namespace flashdozeValC{
            constexpr MPL::Value<flashdozeVal,flashdozeVal::v0> v0{};
            constexpr MPL::Value<flashdozeVal,flashdozeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,flashdozeVal> flashdoze{}; 
        ///Program flash size
        enum class pfsizeVal {
            v0000=0x00000000,     ///<8 KB of program flash memory, 0.25 KB protection region
            v0001=0x00000001,     ///<16 KB of program flash memory, 0.5 KB protection region
            v0011=0x00000003,     ///<32 KB of program flash memory, 1 KB protection region
            v0101=0x00000005,     ///<64 KB of program flash memory, 2 KB protection region
            v0111=0x00000007,     ///<128 KB of program flash memory, 4 KB protection region
            v1001=0x00000009,     ///<256 KB of program flash memory, 8 KB protection region
            v1111=0x0000000f,     ///<32 KB of program flash memory, 1 KB protection region
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
        using Addr = Register::Address<0x40048050,0x80ffffff,0,unsigned>;
        ///Max address block
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
        using Addr = Register::Address<0x40048100,0xfffffff0,0,unsigned>;
        ///COP windowed mode
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
            v0=0x00000000,     ///<Internal 1 kHz clock is source to COP
            v1=0x00000001,     ///<Bus clock is source to COP
        };
        namespace copclksValC{
            constexpr MPL::Value<copclksVal,copclksVal::v0> v0{};
            constexpr MPL::Value<copclksVal,copclksVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,copclksVal> copclks{}; 
        ///COP Watchdog Timeout
        enum class coptVal {
            v00=0x00000000,     ///<COP disabled
            v01=0x00000001,     ///<COP timeout after 2^5 LPO cycles or 213 bus clock cycles
            v10=0x00000002,     ///<COP timeout after 2^8 LPO cycles or 216 bus clock cycles
            v11=0x00000003,     ///<COP timeout after 2^10 LPO cycles or 218 bus clock cycles
        };
        namespace coptValC{
            constexpr MPL::Value<coptVal,coptVal::v00> v00{};
            constexpr MPL::Value<coptVal,coptVal::v01> v01{};
            constexpr MPL::Value<coptVal,coptVal::v10> v10{};
            constexpr MPL::Value<coptVal,coptVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,coptVal> copt{}; 
    }
    namespace SimSrvcop{    ///<Service COP Register
        using Addr = Register::Address<0x40048104,0xffffff00,0,unsigned>;
        ///Sevice COP Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> srvcop{}; 
    }
}
