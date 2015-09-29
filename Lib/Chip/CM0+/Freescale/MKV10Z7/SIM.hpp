#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0xfff3ffff,0,unsigned>;
        ///32K Oscillator Clock Select
        enum class osc32kselVal {
            v00=0x00000000,     ///<System oscillator (OSC32KCLK)
            v11=0x00000003,     ///<LPO 1 kHz
        };
        namespace osc32kselValC{
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v00> v00{};
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,osc32kselVal> osc32ksel{}; 
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0xfcffff1f,0,unsigned>;
        ///CLKOUT Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> clkoutsel{}; 
        ///FTM Fixed Frequency Clock Select
        enum class ftmffclkselVal {
            v00=0x00000000,     ///<MCGFFCLK
            v01=0x00000001,     ///<MCGIRCLK
            v10=0x00000002,     ///<OSCERCLK
            v11=0x00000003,     ///<MCGFFCLK
        };
        namespace ftmffclkselValC{
            constexpr MPL::Value<ftmffclkselVal,ftmffclkselVal::v00> v00{};
            constexpr MPL::Value<ftmffclkselVal,ftmffclkselVal::v01> v01{};
            constexpr MPL::Value<ftmffclkselVal,ftmffclkselVal::v10> v10{};
            constexpr MPL::Value<ftmffclkselVal,ftmffclkselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,ftmffclkselVal> ftmffclksel{}; 
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0xc0830070,0,unsigned>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ftm1flt0Val> ftm1flt0{}; 
        ///FTM2 Fault 0 Select
        enum class ftm2flt0Val {
            v0=0x00000000,     ///<FTM2_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        namespace ftm2flt0ValC{
            constexpr MPL::Value<ftm2flt0Val,ftm2flt0Val::v0> v0{};
            constexpr MPL::Value<ftm2flt0Val,ftm2flt0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ftm2flt0Val> ftm2flt0{}; 
        ///FlexTimer 0 Hardware Trigger 0 Source Select
        enum class ftm0trg0srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM0 hardware trigger 0
            v1=0x00000001,     ///<FTM1 channel match drives FTM0 hardware trigger 0
        };
        namespace ftm0trg0srcValC{
            constexpr MPL::Value<ftm0trg0srcVal,ftm0trg0srcVal::v0> v0{};
            constexpr MPL::Value<ftm0trg0srcVal,ftm0trg0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ftm0trg0srcVal> ftm0trg0src{}; 
        ///FlexTimer 0 Hardware Trigger 1 Source Select
        enum class ftm0trg1srcVal {
            v0=0x00000000,     ///<PDB channel 1 trigger drives FTM0 hardware trigger 1
            v1=0x00000001,     ///<FTM2 channel match drives FTM0 hardware trigger 1
        };
        namespace ftm0trg1srcValC{
            constexpr MPL::Value<ftm0trg1srcVal,ftm0trg1srcVal::v0> v0{};
            constexpr MPL::Value<ftm0trg1srcVal,ftm0trg1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ftm0trg1srcVal> ftm0trg1src{}; 
        ///FlexTimer 0 Hardware Trigger 2 Source Select
        enum class ftm0trg2srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM0 hardware trigger 2
            v1=0x00000001,     ///<HSCMP1 output drives FTM0 hardware trigger 2
        };
        namespace ftm0trg2srcValC{
            constexpr MPL::Value<ftm0trg2srcVal,ftm0trg2srcVal::v0> v0{};
            constexpr MPL::Value<ftm0trg2srcVal,ftm0trg2srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ftm0trg2srcVal> ftm0trg2src{}; 
        ///FlexTimer 1 Hardware Trigger 0 Source Select
        enum class ftm1trg0srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM1 hardware trigger 0
            v1=0x00000001,     ///<FTM0 channel match drives FTM1 hardware trigger 0
        };
        namespace ftm1trg0srcValC{
            constexpr MPL::Value<ftm1trg0srcVal,ftm1trg0srcVal::v0> v0{};
            constexpr MPL::Value<ftm1trg0srcVal,ftm1trg0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ftm1trg0srcVal> ftm1trg0src{}; 
        ///FlexTimer 1 Hardware Trigger 1 Source Select
        enum class ftm1trg1srcVal {
            v0=0x00000000,     ///<PDB channel 1 trigger drives FTM1 hardware trigger 1
            v1=0x00000001,     ///<FTM2 channel match drives FTM1 hardware trigger 1
        };
        namespace ftm1trg1srcValC{
            constexpr MPL::Value<ftm1trg1srcVal,ftm1trg1srcVal::v0> v0{};
            constexpr MPL::Value<ftm1trg1srcVal,ftm1trg1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ftm1trg1srcVal> ftm1trg1src{}; 
        ///FlexTimer 1 Hardware Trigger 2 Source Select
        enum class ftm1trg2srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM1 hardware trigger 2
            v1=0x00000001,     ///<HSCMP1 output drives FTM1 hardware trigger 2
        };
        namespace ftm1trg2srcValC{
            constexpr MPL::Value<ftm1trg2srcVal,ftm1trg2srcVal::v0> v0{};
            constexpr MPL::Value<ftm1trg2srcVal,ftm1trg2srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ftm1trg2srcVal> ftm1trg2src{}; 
        ///FlexTimer 2 Hardware Trigger 0 Source Select
        enum class ftm2trg0srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM2 hardware trigger 0
            v1=0x00000001,     ///<FTM0 channel match drives FTM2 hardware trigger 0
        };
        namespace ftm2trg0srcValC{
            constexpr MPL::Value<ftm2trg0srcVal,ftm2trg0srcVal::v0> v0{};
            constexpr MPL::Value<ftm2trg0srcVal,ftm2trg0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ftm2trg0srcVal> ftm2trg0src{}; 
        ///FlexTimer 2 Hardware Trigger 1 Source Select
        enum class ftm2trg1srcVal {
            v0=0x00000000,     ///<PDB output trigger 1 drives FTM2 hardware trigger 1
            v1=0x00000001,     ///<FTM1 channel match drives FTM2 hardware trigger 1
        };
        namespace ftm2trg1srcValC{
            constexpr MPL::Value<ftm2trg1srcVal,ftm2trg1srcVal::v0> v0{};
            constexpr MPL::Value<ftm2trg1srcVal,ftm2trg1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ftm2trg1srcVal> ftm2trg1src{}; 
        ///FlexTimer 2 Hardware Trigger 2 Source Select
        enum class ftm2trg2srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM2 hardware trigger 2
            v1=0x00000001,     ///<HSCMP1 output drives FTM2 hardware trigger 2
        };
        namespace ftm2trg2srcValC{
            constexpr MPL::Value<ftm2trg2srcVal,ftm2trg2srcVal::v0> v0{};
            constexpr MPL::Value<ftm2trg2srcVal,ftm2trg2srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ftm2trg2srcVal> ftm2trg2src{}; 
        ///FTM1 Channel 0 Input Capture Source Select
        enum class ftm1ich0srcVal {
            v00=0x00000000,     ///<FTM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
        };
        namespace ftm1ich0srcValC{
            constexpr MPL::Value<ftm1ich0srcVal,ftm1ich0srcVal::v00> v00{};
            constexpr MPL::Value<ftm1ich0srcVal,ftm1ich0srcVal::v01> v01{};
            constexpr MPL::Value<ftm1ich0srcVal,ftm1ich0srcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,ftm1ich0srcVal> ftm1ich0src{}; 
        ///FTM2 Channel 0 Input Capture Source Select
        enum class ftm2ich0srcVal {
            v00=0x00000000,     ///<FTM2_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
        };
        namespace ftm2ich0srcValC{
            constexpr MPL::Value<ftm2ich0srcVal,ftm2ich0srcVal::v00> v00{};
            constexpr MPL::Value<ftm2ich0srcVal,ftm2ich0srcVal::v01> v01{};
            constexpr MPL::Value<ftm2ich0srcVal,ftm2ich0srcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,ftm2ich0srcVal> ftm2ich0src{}; 
        ///FTM2 Channel 1 Input Capture Source Select
        enum class ftm2ich1srcVal {
            v0=0x00000000,     ///<FTM2_CH1 pin is fed to FTM2 CH1
            v1=0x00000001,     ///<FTM2_CH1 pin XOR FTM2_CH0 pin XOR FTM1_CH1 pin is fed to FTM2 CH1 If this field is set, then the three input pins feed FTM2 channel 1 input capture. In this case, FTM1 channel 1 cannot be used for input capture of FTM1, as it has no pin. FTM1 channel1 can be used for Output Compare mode of FTM1, though without an output.
        };
        namespace ftm2ich1srcValC{
            constexpr MPL::Value<ftm2ich1srcVal,ftm2ich1srcVal::v0> v0{};
            constexpr MPL::Value<ftm2ich1srcVal,ftm2ich1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ftm2ich1srcVal> ftm2ich1src{}; 
        ///FTM0 External Clock Pin Select
        enum class ftm0clkselVal {
            v00=0x00000000,     ///<FTM0 external clock driven by FTM_CLKIN0 pin
            v01=0x00000001,     ///<FTM0 external clock driven by FTM_CLKIN1 pin
            v10=0x00000002,     ///<FTM0 external clock driven by FTM_CLKIN2 pin
        };
        namespace ftm0clkselValC{
            constexpr MPL::Value<ftm0clkselVal,ftm0clkselVal::v00> v00{};
            constexpr MPL::Value<ftm0clkselVal,ftm0clkselVal::v01> v01{};
            constexpr MPL::Value<ftm0clkselVal,ftm0clkselVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,ftm0clkselVal> ftm0clksel{}; 
        ///FTM1 External Clock Pin Select
        enum class ftm1clkselVal {
            v00=0x00000000,     ///<FTM1 external clock driven by FTM_CLKIN0 pin
            v01=0x00000001,     ///<FTM1 external clock driven by FTM_CLKIN1 pin
            v10=0x00000002,     ///<FTM1 external clock driven by FTM_CLKIN2 pin
        };
        namespace ftm1clkselValC{
            constexpr MPL::Value<ftm1clkselVal,ftm1clkselVal::v00> v00{};
            constexpr MPL::Value<ftm1clkselVal,ftm1clkselVal::v01> v01{};
            constexpr MPL::Value<ftm1clkselVal,ftm1clkselVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,ftm1clkselVal> ftm1clksel{}; 
        ///FTM2 External Clock Pin Select
        enum class ftm2clkselVal {
            v00=0x00000000,     ///<FTM2 external clock driven by FTM_CLKIN0 pin
            v01=0x00000001,     ///<FTM2 external clock driven by FTM_CLKIN1 pin
            v10=0x00000002,     ///<FTM2 external clock driven by FTM_CLKIN2 pin
        };
        namespace ftm2clkselValC{
            constexpr MPL::Value<ftm2clkselVal,ftm2clkselVal::v00> v00{};
            constexpr MPL::Value<ftm2clkselVal,ftm2clkselVal::v01> v01{};
            constexpr MPL::Value<ftm2clkselVal,ftm2clkselVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ftm2clkselVal> ftm2clksel{}; 
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xfffcff00,0,unsigned>;
        ///UART 0 Transmit Data Source Select
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
        ///UART 0 Receive Data Source Select
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
        ///UART 1 Transmit Data Source Select
        enum class uart1txsrcVal {
            v00=0x00000000,     ///<UART1_TX pin
            v01=0x00000001,     ///<UART1_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART1_TX pin modulated with FTM2 channel 0 output
        };
        namespace uart1txsrcValC{
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v00> v00{};
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v01> v01{};
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,uart1txsrcVal> uart1txsrc{}; 
        ///UART 1 Receive Data Source Select
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
        ///UART1 Open Drain Enable
        enum class uart1odeVal {
            v0=0x00000000,     ///<Open drain is disabled on UART1
            v1=0x00000001,     ///<Open drain is enabled on UART1
        };
        namespace uart1odeValC{
            constexpr MPL::Value<uart1odeVal,uart1odeVal::v0> v0{};
            constexpr MPL::Value<uart1odeVal,uart1odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,uart1odeVal> uart1ode{}; 
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xf0ff6060,0,unsigned>;
        ///ADC0 Trigger Select
        enum class adc0trgselVal {
            v0000=0x00000000,     ///<External trigger pin input (PDB0_EXTRG)
            v0001=0x00000001,     ///<HSCMP0 output
            v0010=0x00000002,     ///<HSCMP1 output
            v0100=0x00000004,     ///<DMA channel 0 transfer last write complete
            v0101=0x00000005,     ///<DMA channel 1 transfer last write complete
            v0110=0x00000006,     ///<DMA channel 2 transfer last write complete
            v0111=0x00000007,     ///<DMA channel 3 transfer last write complete
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1110=0x0000000e,     ///<LPTMR0 trigger
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
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1110> v1110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,adc0trgselVal> adc0trgsel{}; 
        ///ADC0 Pre-trigger Select
        enum class adc0pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A for ADC0. Clearing this field will result in ADHWTSA=1 and ADHWTSB=0.
            v1=0x00000001,     ///<Pre-trigger B for ADC0. Setting this bit will result in ADHWTSA=0 and ADHWTSB=1.
        };
        namespace adc0pretrgselValC{
            constexpr MPL::Value<adc0pretrgselVal,adc0pretrgselVal::v0> v0{};
            constexpr MPL::Value<adc0pretrgselVal,adc0pretrgselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adc0pretrgselVal> adc0pretrgsel{}; 
        ///ADC0 Alternate Trigger Enable
        enum class adc0alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC0
            v1=0x00000001,     ///<Alternate trigger selected for ADC0 as defined by ADC0TRGSEL
        };
        namespace adc0alttrgenValC{
            constexpr MPL::Value<adc0alttrgenVal,adc0alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc0alttrgenVal,adc0alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,adc0alttrgenVal> adc0alttrgen{}; 
        ///ADC1 Trigger Select
        enum class adc1trgselVal {
            v0000=0x00000000,     ///<External trigger pin input (PDB0_EXTRG)
            v0001=0x00000001,     ///<HSCMP0 output
            v0010=0x00000002,     ///<HSCMP1 output
            v0100=0x00000004,     ///<DMA channel 0 transfer last write complete
            v0101=0x00000005,     ///<DMA channel 1 transfer last write complete
            v0110=0x00000006,     ///<DMA channel 2 transfer last write complete
            v0111=0x00000007,     ///<DMA channel 3 transfer last write complete
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1110=0x0000000e,     ///<LPTMR0 trigger
        };
        namespace adc1trgselValC{
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0000> v0000{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0001> v0001{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0010> v0010{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0100> v0100{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0101> v0101{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0110> v0110{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0111> v0111{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1000> v1000{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1001> v1001{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1010> v1010{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1110> v1110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,adc1trgselVal> adc1trgsel{}; 
        ///ADC1 Pre-trigger Select
        enum class adc1pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A for ADC1. Clearing this field will result in ADHWTSA=1 and ADHWTSB=0.
            v1=0x00000001,     ///<Pre-trigger B for ADC1. Setting this bit will result in ADHWTSA=0 and ADHWTSB=1.
        };
        namespace adc1pretrgselValC{
            constexpr MPL::Value<adc1pretrgselVal,adc1pretrgselVal::v0> v0{};
            constexpr MPL::Value<adc1pretrgselVal,adc1pretrgselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,adc1pretrgselVal> adc1pretrgsel{}; 
        ///ADC1 Alternate Trigger Enable
        enum class adc1alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC1
            v1=0x00000001,     ///<Alternate trigger selected for ADC1 as defined by ADC1TRGSEL.
        };
        namespace adc1alttrgenValC{
            constexpr MPL::Value<adc1alttrgenVal,adc1alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc1alttrgenVal,adc1alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,adc1alttrgenVal> adc1alttrgen{}; 
        ///ADC0 ALT Clock Source Select
        enum class adc0altclksrcVal {
            v00=0x00000000,     ///<OUTDIV5 output
            v01=0x00000001,     ///<MCGIRCLK
            v10=0x00000002,     ///<OSCERCLK
        };
        namespace adc0altclksrcValC{
            constexpr MPL::Value<adc0altclksrcVal,adc0altclksrcVal::v00> v00{};
            constexpr MPL::Value<adc0altclksrcVal,adc0altclksrcVal::v01> v01{};
            constexpr MPL::Value<adc0altclksrcVal,adc0altclksrcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,adc0altclksrcVal> adc0altclksrc{}; 
        ///ADC1 ALT Clock Source Select
        enum class adc1altclksrcVal {
            v00=0x00000000,     ///<OUTDIV5 output
            v01=0x00000001,     ///<MCGIRCLK
            v10=0x00000002,     ///<OSCERCLK
        };
        namespace adc1altclksrcValC{
            constexpr MPL::Value<adc1altclksrcVal,adc1altclksrcVal::v00> v00{};
            constexpr MPL::Value<adc1altclksrcVal,adc1altclksrcVal::v01> v01{};
            constexpr MPL::Value<adc1altclksrcVal,adc1altclksrcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,adc1altclksrcVal> adc1altclksrc{}; 
    }
    namespace SimSopt8{    ///<System Options Register 8
        using Addr = Register::Address<0x4004801c,0xff00fef8,0,unsigned>;
        ///FlexTimer 0 Hardware Trigger 0 configure by software
        enum class ftm0syncbitVal {
            v0=0x00000000,     ///<No effect to FTM0; this allow the hardware trigger options to function as expected. See SOPT4[FTM0TRG0SRC].
            v1=0x00000001,     ///<If TRIG0 enabled, this refreshes the FTM0CNTIN and all buffered registers of the FTM0 (must write 0 first then write 1); this masks the hardware trigger.
        };
        namespace ftm0syncbitValC{
            constexpr MPL::Value<ftm0syncbitVal,ftm0syncbitVal::v0> v0{};
            constexpr MPL::Value<ftm0syncbitVal,ftm0syncbitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ftm0syncbitVal> ftm0syncbit{}; 
        ///FlexTimer 1 Hardware Trigger 0 configure by software
        enum class ftm1syncbitVal {
            v0=0x00000000,     ///<No effect to FTM1; this allows the hardware trigger options to function as expected. See SOPT4[FTM1TRG0SRC].
            v1=0x00000001,     ///<If TRIG0 enabled, this refreshes the FTM1CNTIN and all buffered registers of the FTM1 (must write 0 first then write 1); this masks the hardware trigger.
        };
        namespace ftm1syncbitValC{
            constexpr MPL::Value<ftm1syncbitVal,ftm1syncbitVal::v0> v0{};
            constexpr MPL::Value<ftm1syncbitVal,ftm1syncbitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ftm1syncbitVal> ftm1syncbit{}; 
        ///FlexTimer 2 Hardware Trigger 0 configure by software
        enum class ftm2syncbitVal {
            v0=0x00000000,     ///<No effect to FTM2; this allows the hardware trigger options to function as expected. See SOPT4[FTM2TRG0SRC].
            v1=0x00000001,     ///<If TRIG0 is enabled, this refreshes the FTM2CNTIN and all buffered registers of the FTM2 (must write 0 first then write 1); this masks the hardware trigger.
        };
        namespace ftm2syncbitValC{
            constexpr MPL::Value<ftm2syncbitVal,ftm2syncbitVal::v0> v0{};
            constexpr MPL::Value<ftm2syncbitVal,ftm2syncbitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ftm2syncbitVal> ftm2syncbit{}; 
        ///Carrier frequency selection for FTM0/2 output channel
        enum class carrierSelectVal {
            v0=0x00000000,     ///<FTM1_CH1 output provides the carrier signal for Timer Modulation mode
            v1=0x00000001,     ///<LPTMR0 prescaler output provides the carrier signal for Timer Modulation mode
        };
        namespace carrierSelectValC{
            constexpr MPL::Value<carrierSelectVal,carrierSelectVal::v0> v0{};
            constexpr MPL::Value<carrierSelectVal,carrierSelectVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,carrierSelectVal> carrierSelect{}; 
        ///FTM0 channel 0 output PWM/OCMP mode source select
        enum class ftm0och0srcVal {
            v0=0x00000000,     ///<FTM0CH0 pin is the output of FTM0 channel 0 PWM/OCMP
            v1=0x00000001,     ///<FTM0CH0 pin is the output of FTM0 channel 0 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        namespace ftm0och0srcValC{
            constexpr MPL::Value<ftm0och0srcVal,ftm0och0srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och0srcVal,ftm0och0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ftm0och0srcVal> ftm0och0src{}; 
        ///FTM0 channel 1 output PWM/OCMP mode source select
        enum class ftm0och1srcVal {
            v0=0x00000000,     ///<FTM0CH1 pin is the output of FTM0 channel 1 PWM/OCMP
            v1=0x00000001,     ///<FTM0CH1 pin is the output of FTM0 channel 1 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        namespace ftm0och1srcValC{
            constexpr MPL::Value<ftm0och1srcVal,ftm0och1srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och1srcVal,ftm0och1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ftm0och1srcVal> ftm0och1src{}; 
        ///FTM0 channel 2 output PWM/OCMP mode source select
        enum class ftm0och2srcVal {
            v0=0x00000000,     ///<FTM0CH2 pin is the output of FTM0 channel 2 PWM/OCMP
            v1=0x00000001,     ///<FTM0CH2 pin is the output of FTM0 channel 2 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        namespace ftm0och2srcValC{
            constexpr MPL::Value<ftm0och2srcVal,ftm0och2srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och2srcVal,ftm0och2srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ftm0och2srcVal> ftm0och2src{}; 
        ///FTM0 channel 3 output PWM/OCMP mode source select
        enum class ftm0och3srcVal {
            v0=0x00000000,     ///<FTM0CH3 pin is the output of FTM0 channel 3 PWM/OCMP
            v1=0x00000001,     ///<FTM0CH3 pin is the output of FTM0 channel 3 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        namespace ftm0och3srcValC{
            constexpr MPL::Value<ftm0och3srcVal,ftm0och3srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och3srcVal,ftm0och3srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ftm0och3srcVal> ftm0och3src{}; 
        ///FTM0 channel 4 output PWM/OCMP mode source select
        enum class ftm0och4srcVal {
            v0=0x00000000,     ///<FTM0CH4 pin is the output of FTM0 channel 4 PWM/OCMP
            v1=0x00000001,     ///<FTM0CH4 pin is the output of FTM0 channel 4 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        namespace ftm0och4srcValC{
            constexpr MPL::Value<ftm0och4srcVal,ftm0och4srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och4srcVal,ftm0och4srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ftm0och4srcVal> ftm0och4src{}; 
        ///FTM0 channel 5 output PWM/OCMP mode source select
        enum class ftm0och5srcVal {
            v0=0x00000000,     ///<FTM0CH5 pin is the output of FTM0 channel 5 PWM/OCMP
            v1=0x00000001,     ///<FTM0CH5 pin is the output of FTM0 channel 5 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        namespace ftm0och5srcValC{
            constexpr MPL::Value<ftm0och5srcVal,ftm0och5srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och5srcVal,ftm0och5srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ftm0och5srcVal> ftm0och5src{}; 
        ///FTM2 channel 0 output PWM/OCMP mode source select
        enum class ftm2och0srcVal {
            v0=0x00000000,     ///<FTM2CH0 pin is the output of FTM2 channel 0 PWM/OCMP
            v1=0x00000001,     ///<FTM2CH0 pin is the output of FTM2 channel 0 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        namespace ftm2och0srcValC{
            constexpr MPL::Value<ftm2och0srcVal,ftm2och0srcVal::v0> v0{};
            constexpr MPL::Value<ftm2och0srcVal,ftm2och0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ftm2och0srcVal> ftm2och0src{}; 
        ///FTM2 channel 1 output PWM/OCMP mode source select
        enum class ftm2och1srcVal {
            v0=0x00000000,     ///<FTM2CH1 pin is the output of FTM2 channel 1 PWM/OCMP
            v1=0x00000001,     ///<FTM2CH1 pin is the output of FTM2 channel 1 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        namespace ftm2och1srcValC{
            constexpr MPL::Value<ftm2och1srcVal,ftm2och1srcVal::v0> v0{};
            constexpr MPL::Value<ftm2och1srcVal,ftm2och1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ftm2och1srcVal> ftm2och1src{}; 
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0x00000070,0,unsigned>;
        ///Pincount identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pinid{}; 
        ///Device die number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> dieid{}; 
        ///Device revision number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
        ///System SRAM Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> sramsize{}; 
        ///Series ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> serierid{}; 
        ///V Sub-family ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> subfamid{}; 
        ///V-Family ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> famid{}; 
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xfff7f3bd,0,unsigned>;
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
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0xffffc1fe,0,unsigned>;
        ///Low Power Timer Clock Gate Control
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
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0x60bbeffc,0,unsigned>;
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
        ///ADC1 Clock Gate Control
        enum class adc1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace adc1ValC{
            constexpr MPL::Value<adc1Val,adc1Val::v0> v0{};
            constexpr MPL::Value<adc1Val,adc1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,adc1Val> adc1{}; 
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
        using Addr = Register::Address<0x40048044,0x0ff80fff,0,unsigned>;
        ///Clock 5 Output Divider Value
        enum class outdiv5Val {
            v000=0x00000000,     ///<Divide-by-1
            v001=0x00000001,     ///<Divide-by-2
            v010=0x00000002,     ///<Divide-by-3
            v011=0x00000003,     ///<Divide-by-4
            v100=0x00000004,     ///<Divide-by-5
            v101=0x00000005,     ///<Divide-by-6
            v110=0x00000006,     ///<Divide-by-7
            v111=0x00000007,     ///<Divide-by-8
        };
        namespace outdiv5ValC{
            constexpr MPL::Value<outdiv5Val,outdiv5Val::v000> v000{};
            constexpr MPL::Value<outdiv5Val,outdiv5Val::v001> v001{};
            constexpr MPL::Value<outdiv5Val,outdiv5Val::v010> v010{};
            constexpr MPL::Value<outdiv5Val,outdiv5Val::v011> v011{};
            constexpr MPL::Value<outdiv5Val,outdiv5Val::v100> v100{};
            constexpr MPL::Value<outdiv5Val,outdiv5Val::v101> v101{};
            constexpr MPL::Value<outdiv5Val,outdiv5Val::v110> v110{};
            constexpr MPL::Value<outdiv5Val,outdiv5Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,outdiv5Val> outdiv5{}; 
        ///OUTDIV5 Divider Control
        enum class outdiv5enVal {
            v0=0x00000000,     ///<OUTDIV5 disabled
            v1=0x00000001,     ///<OUTDIV5 enabled
        };
        namespace outdiv5enValC{
            constexpr MPL::Value<outdiv5enVal,outdiv5enVal::v0> v0{};
            constexpr MPL::Value<outdiv5enVal,outdiv5enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,outdiv5enVal> outdiv5en{}; 
        ///Clock 4 Output Divider Value
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
        ///Clock 1 Output Divider Value
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
        ///Program Flash Size
        enum class pfsizeVal {
            v0000=0x00000000,     ///<8 KB of program flash memory, 0.25 KB protection region
            v0001=0x00000001,     ///<16 KB of program flash memory, 0.5 KB protection region
            v0011=0x00000003,     ///<32 KB of program flash memory, 1 KB protection region
            v0101=0x00000005,     ///<64 KB of program flash memory, 2 KB protection region
            v0111=0x00000007,     ///<128 KB of program flash memory, 4 KB protection region
            v1001=0x00000009,     ///<256 KB of program flash memory, 4 KB protection region
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> maxaddr{}; 
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
    namespace SimWdogctrl{    ///<WDOG Control Register
        using Addr = Register::Address<0x40048100,0xfffffffd,0,unsigned>;
        ///WDOG Clock Select
        enum class wdogclksVal {
            v0=0x00000000,     ///<Internal 1 kHz clock is source to WDOG
            v1=0x00000001,     ///<MCGIRCLK is source to WDOG
        };
        namespace wdogclksValC{
            constexpr MPL::Value<wdogclksVal,wdogclksVal::v0> v0{};
            constexpr MPL::Value<wdogclksVal,wdogclksVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wdogclksVal> wdogclks{}; 
    }
}
