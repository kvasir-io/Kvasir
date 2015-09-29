#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0xfff00fff,0,unsigned>;
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
        ///32K Oscillator Clock Output
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
        ///32K oscillator clock select
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
    namespace SimSopt1cfg{    ///<SOPT1 Configuration Register
        using Addr = Register::Address<0x40047004,0xffffffff,0,unsigned>;
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0xfffcef1f,0,unsigned>;
        ///CLKOUT select
        enum class clkoutselVal {
            v010=0x00000002,     ///<Flash clock
            v011=0x00000003,     ///<LPO clock (1 kHz)
            v100=0x00000004,     ///<MCGIRCLK
            v110=0x00000006,     ///<OSCERCLK0
            v111=0x00000007,     ///<IRC 48 MHz clock
        };
        namespace clkoutselValC{
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v010> v010{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v011> v011{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v100> v100{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v110> v110{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,clkoutselVal> clkoutsel{}; 
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
            v11=0x00000003,     ///<IRC48 MHz clock
        };
        namespace pllfllselValC{
            constexpr MPL::Value<pllfllselVal,pllfllselVal::v00> v00{};
            constexpr MPL::Value<pllfllselVal,pllfllselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pllfllselVal> pllfllsel{}; 
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0xc883feec,0,unsigned>;
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
        ///FTM1 channel 0 input capture source select
        enum class ftm1ch0srcVal {
            v00=0x00000000,     ///<FTM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
        };
        namespace ftm1ch0srcValC{
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v00> v00{};
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v01> v01{};
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,ftm1ch0srcVal> ftm1ch0src{}; 
        ///FTM2 channel 0 input capture source select
        enum class ftm2ch0srcVal {
            v00=0x00000000,     ///<FTM2_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
        };
        namespace ftm2ch0srcValC{
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v00> v00{};
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v01> v01{};
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v10> v10{};
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
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xffffff00,0,unsigned>;
        ///UART 0 transmit data source select
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
            v1010=0x0000000a,     ///<FTM2 trigger
            v1110=0x0000000e,     ///<Low-power timer (LPTMR) trigger
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
    namespace SimSopt8{    ///<System Options Register 8
        using Addr = Register::Address<0x4004801c,0xffc0fff8,0,unsigned>;
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
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0x000f0000,0,unsigned>;
        ///Pincount identification
        enum class pinidVal {
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
        namespace pinidValC{
            constexpr MPL::Value<pinidVal,pinidVal::v0010> v0010{};
            constexpr MPL::Value<pinidVal,pinidVal::v0100> v0100{};
            constexpr MPL::Value<pinidVal,pinidVal::v0101> v0101{};
            constexpr MPL::Value<pinidVal,pinidVal::v0110> v0110{};
            constexpr MPL::Value<pinidVal,pinidVal::v0111> v0111{};
            constexpr MPL::Value<pinidVal,pinidVal::v1000> v1000{};
            constexpr MPL::Value<pinidVal,pinidVal::v1001> v1001{};
            constexpr MPL::Value<pinidVal,pinidVal::v1010> v1010{};
            constexpr MPL::Value<pinidVal,pinidVal::v1011> v1011{};
            constexpr MPL::Value<pinidVal,pinidVal::v1100> v1100{};
            constexpr MPL::Value<pinidVal,pinidVal::v1110> v1110{};
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
        };
        namespace famidValC{
            constexpr MPL::Value<famidVal,famidVal::v000> v000{};
            constexpr MPL::Value<famidVal,famidVal::v001> v001{};
            constexpr MPL::Value<famidVal,famidVal::v010> v010{};
            constexpr MPL::Value<famidVal,famidVal::v011> v011{};
            constexpr MPL::Value<famidVal,famidVal::v100> v100{};
            constexpr MPL::Value<famidVal,famidVal::v101> v101{};
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
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xffe7f3bd,0,unsigned>;
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
        using Addr = Register::Address<0x40048038,0xffffc1fe,0,unsigned>;
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
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0x703beffc,0,unsigned>;
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
            v0=0x00000000,     ///<Flash remains enabled during Wait mode
            v1=0x00000001,     ///<Flash is disabled for the duration of Wait mode
        };
        namespace flashdozeValC{
            constexpr MPL::Value<flashdozeVal,flashdozeVal::v0> v0{};
            constexpr MPL::Value<flashdozeVal,flashdozeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,flashdozeVal> flashdoze{}; 
        ///Program flash size
        enum class pfsizeVal {
            v0011=0x00000003,     ///<32 KB of program flash memory
            v0101=0x00000005,     ///<64 KB of program flash memory
            v0111=0x00000007,     ///<128 KB of program flash memory
            v1001=0x00000009,     ///<256 KB of program flash memory
            v1011=0x0000000b,     ///<512 KB of program flash memory
            v1101=0x0000000d,     ///<1024 KB of program flash memory
            v1111=0x0000000f,     ///<128 KB of program flash memory
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
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0x80ffffff,0,unsigned>;
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
