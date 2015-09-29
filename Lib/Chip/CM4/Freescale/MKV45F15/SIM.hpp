#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0xfff30fff,0,unsigned>;
        ///RAM size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ramsize{}; 
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
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0x7fffef1f,0,unsigned>;
        ///CLKOUT select
        enum class clkoutselVal {
            v010=0x00000002,     ///<Flash clock
            v011=0x00000003,     ///<LPO clock (1 kHz)
            v100=0x00000004,     ///<MCGIRCLK
            v101=0x00000005,     ///<OSCERCLK_UNDIV
            v110=0x00000006,     ///<OSCERCLK
        };
        namespace clkoutselValC{
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v010> v010{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v011> v011{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v100> v100{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v101> v101{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v110> v110{};
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
        ///Nanoedge clock(PWM 2x clock) select
        enum class nanoedgeclk2xselVal {
            v0=0x00000000,     ///<MCGPLLCLK
            v1=0x00000001,     ///<MCGPLLCLK2X
        };
        namespace nanoedgeclk2xselValC{
            constexpr MPL::Value<nanoedgeclk2xselVal,nanoedgeclk2xselVal::v0> v0{};
            constexpr MPL::Value<nanoedgeclk2xselVal,nanoedgeclk2xselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,nanoedgeclk2xselVal> nanoedgeclk2xsel{}; 
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0x8fa8efe0,0,unsigned>;
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
        ///no description available
        enum class ftm0flt3Val {
            v0=0x00000000,     ///<FTM0_FLT3 pin
            v1=0x00000001,     ///<XBARA output 49
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
        ///FlexTimer 0 Hardware Trigger 0 Source Select
        enum class ftm0trg0srcVal {
            v0=0x00000000,     ///<CMP0 output drives FTM0 hardware trigger 0
            v1=0x00000001,     ///<FTM1 channel match drives FTM0 hardware trigger 0
        };
        namespace ftm0trg0srcValC{
            constexpr MPL::Value<ftm0trg0srcVal,ftm0trg0srcVal::v0> v0{};
            constexpr MPL::Value<ftm0trg0srcVal,ftm0trg0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ftm0trg0srcVal> ftm0trg0src{}; 
        ///FlexTimer 0 Hardware Trigger 1 Source Select
        enum class ftm0trg1srcVal {
            v0=0x00000000,     ///<PDB0 output trigger drives FTM0 hardware trigger 1
            v1=0x00000001,     ///<FTM1 channel match drives FTM0 hardware trigger 1
        };
        namespace ftm0trg1srcValC{
            constexpr MPL::Value<ftm0trg1srcVal,ftm0trg1srcVal::v0> v0{};
            constexpr MPL::Value<ftm0trg1srcVal,ftm0trg1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ftm0trg1srcVal> ftm0trg1src{}; 
        ///FlexTimer 0 Hardware Trigger 2 Source Select
        enum class ftm0trg2srcVal {
            v0=0x00000000,     ///<FTM0_FLT0 pin drives FTM0 hardware trigger 2
            v1=0x00000001,     ///<XBARA output 34 drives FTM0 hardware trigger 2
        };
        namespace ftm0trg2srcValC{
            constexpr MPL::Value<ftm0trg2srcVal,ftm0trg2srcVal::v0> v0{};
            constexpr MPL::Value<ftm0trg2srcVal,ftm0trg2srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ftm0trg2srcVal> ftm0trg2src{}; 
        ///FlexTimer 1 Hardware Trigger 0 Source Select
        enum class ftm1trg0srcVal {
            v0=0x00000000,     ///<CMP0 output drives FTM1 hardware trigger 0
            v1=0x00000001,     ///<FTM0 channel match drives FTM1 hardware trigger 0
        };
        namespace ftm1trg0srcValC{
            constexpr MPL::Value<ftm1trg0srcVal,ftm1trg0srcVal::v0> v0{};
            constexpr MPL::Value<ftm1trg0srcVal,ftm1trg0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ftm1trg0srcVal> ftm1trg0src{}; 
        ///FlexTimer 1 Hardware Trigger 2 Source Select
        enum class ftm1trg2srcVal {
            v0=0x00000000,     ///<FTM1_FLT0 pin drives FTM1 hardware trigger 2
            v1=0x00000001,     ///<XBARA output 35 drives FTM1 hardware trigger 2
        };
        namespace ftm1trg2srcValC{
            constexpr MPL::Value<ftm1trg2srcVal,ftm1trg2srcVal::v0> v0{};
            constexpr MPL::Value<ftm1trg2srcVal,ftm1trg2srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ftm1trg2srcVal> ftm1trg2src{}; 
        ///FlexTimer 3 Hardware Trigger 0 Source Select
        enum class ftm3trg0srcVal {
            v0=0x00000000,     ///<CMP0 output drives FTM3 hardware trigger 0
            v1=0x00000001,     ///<FTM1 channel match drives FTM3 hardware trigger 0
        };
        namespace ftm3trg0srcValC{
            constexpr MPL::Value<ftm3trg0srcVal,ftm3trg0srcVal::v0> v0{};
            constexpr MPL::Value<ftm3trg0srcVal,ftm3trg0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ftm3trg0srcVal> ftm3trg0src{}; 
        ///FlexTimer 3 Hardware Trigger 1 Source Select
        enum class ftm3trg1srcVal {
            v0=0x00000000,     ///<PDB1 output trigger drives FTM3 hardware trigger 1
            v1=0x00000001,     ///<FTM1 channel match drives FTM3 hardware trigger 1
        };
        namespace ftm3trg1srcValC{
            constexpr MPL::Value<ftm3trg1srcVal,ftm3trg1srcVal::v0> v0{};
            constexpr MPL::Value<ftm3trg1srcVal,ftm3trg1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ftm3trg1srcVal> ftm3trg1src{}; 
        ///FlexTimer 3 Hardware Trigger 2 Source Select
        enum class ftm3trg2srcVal {
            v0=0x00000000,     ///<FTM3_FLT0 pin drives FTM3 hardware trigger 2
            v1=0x00000001,     ///<XBARA output 37 drives FTM3 hardware trigger 2
        };
        namespace ftm3trg2srcValC{
            constexpr MPL::Value<ftm3trg2srcVal,ftm3trg2srcVal::v0> v0{};
            constexpr MPL::Value<ftm3trg2srcVal,ftm3trg2srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ftm3trg2srcVal> ftm3trg2src{}; 
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
        using Addr = Register::Address<0x40048018,0xffff3030,0,unsigned>;
        ///ADCA trigger select
        enum class adcatrgselVal {
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
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<XBARA output 38
            v1110=0x0000000e,     ///<Low-power timer trigger
        };
        namespace adcatrgselValC{
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v0000> v0000{};
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v0001> v0001{};
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v0010> v0010{};
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v0011> v0011{};
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v0100> v0100{};
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v0101> v0101{};
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v0110> v0110{};
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v0111> v0111{};
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v1000> v1000{};
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v1001> v1001{};
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v1011> v1011{};
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v1100> v1100{};
            constexpr MPL::Value<adcatrgselVal,adcatrgselVal::v1110> v1110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,adcatrgselVal> adcatrgsel{}; 
        ///ADCA alternate trigger enable
        enum class adcaalttrgenVal {
            v00=0x00000000,     ///<XBARA output 12.
            v01=0x00000001,     ///<PDB0 trigger selected for ADCA.
        };
        namespace adcaalttrgenValC{
            constexpr MPL::Value<adcaalttrgenVal,adcaalttrgenVal::v00> v00{};
            constexpr MPL::Value<adcaalttrgenVal,adcaalttrgenVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,adcaalttrgenVal> adcaalttrgen{}; 
        ///ADCB trigger select
        enum class adcbtrgselVal {
            v0001=0x00000001,     ///<High speed comparator 0 output
            v0010=0x00000002,     ///<High speed comparator 1 output
            v0011=0x00000003,     ///<High speed comparator 2 output
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<XBARA output 41
            v1110=0x0000000e,     ///<Low-power timer trigger
        };
        namespace adcbtrgselValC{
            constexpr MPL::Value<adcbtrgselVal,adcbtrgselVal::v0001> v0001{};
            constexpr MPL::Value<adcbtrgselVal,adcbtrgselVal::v0010> v0010{};
            constexpr MPL::Value<adcbtrgselVal,adcbtrgselVal::v0011> v0011{};
            constexpr MPL::Value<adcbtrgselVal,adcbtrgselVal::v0100> v0100{};
            constexpr MPL::Value<adcbtrgselVal,adcbtrgselVal::v0101> v0101{};
            constexpr MPL::Value<adcbtrgselVal,adcbtrgselVal::v0110> v0110{};
            constexpr MPL::Value<adcbtrgselVal,adcbtrgselVal::v0111> v0111{};
            constexpr MPL::Value<adcbtrgselVal,adcbtrgselVal::v1000> v1000{};
            constexpr MPL::Value<adcbtrgselVal,adcbtrgselVal::v1001> v1001{};
            constexpr MPL::Value<adcbtrgselVal,adcbtrgselVal::v1011> v1011{};
            constexpr MPL::Value<adcbtrgselVal,adcbtrgselVal::v1100> v1100{};
            constexpr MPL::Value<adcbtrgselVal,adcbtrgselVal::v1110> v1110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,adcbtrgselVal> adcbtrgsel{}; 
        ///ADCB alternate trigger enable
        enum class adcbalttrgenVal {
            v00=0x00000000,     ///<XBARA output 13.
            v01=0x00000001,     ///<PDB1 trigger selected for ADCB
        };
        namespace adcbalttrgenValC{
            constexpr MPL::Value<adcbalttrgenVal,adcbalttrgenVal::v00> v00{};
            constexpr MPL::Value<adcbalttrgenVal,adcbalttrgenVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,adcbalttrgenVal> adcbalttrgen{}; 
    }
    namespace SimSopt8{    ///<System Options Register 8
        using Addr = Register::Address<0x4004801c,0x0000fcf4,0,unsigned>;
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
        ///Carrier frequency selection for FTM0 output channel
        enum class ftm0cfselVal {
            v0=0x00000000,     ///<FTM1 channel 1 output provides the carrier signal for FTM0 Timer Modulation mode.
            v1=0x00000001,     ///<LPTMR0 prescaler output provides the carrier signal for FTM0 Timer Modulation mode.
        };
        namespace ftm0cfselValC{
            constexpr MPL::Value<ftm0cfselVal,ftm0cfselVal::v0> v0{};
            constexpr MPL::Value<ftm0cfselVal,ftm0cfselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ftm0cfselVal> ftm0cfsel{}; 
        ///Carrier frequency selection for FTM3 output channel
        enum class ftm3cfselVal {
            v0=0x00000000,     ///<FTM1 channel 1 output provides the carrier signal for FTM3 Timer Modulation mode.
            v1=0x00000001,     ///<LPTMR0 prescaler output provides the carrier signal for FTM3 Timer Modulation mode.
        };
        namespace ftm3cfselValC{
            constexpr MPL::Value<ftm3cfselVal,ftm3cfselVal::v0> v0{};
            constexpr MPL::Value<ftm3cfselVal,ftm3cfselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ftm3cfselVal> ftm3cfsel{}; 
        ///FTM0 channel 0 output source
        enum class ftm0och0srcVal {
            v0=0x00000000,     ///<FTM0_CH0 pin is output of FTM0 channel 0 output
            v1=0x00000001,     ///<FTM0_CH0 pin is output of FTM0 channel 0 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        namespace ftm0och0srcValC{
            constexpr MPL::Value<ftm0och0srcVal,ftm0och0srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och0srcVal,ftm0och0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ftm0och0srcVal> ftm0och0src{}; 
        ///FTM0 channel 1 output source
        enum class ftm0och1srcVal {
            v0=0x00000000,     ///<FTM0_CH1 pin is output of FTM0 channel 1 output
            v1=0x00000001,     ///<FTM0_CH1 pin is output of FTM0 channel 1 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        namespace ftm0och1srcValC{
            constexpr MPL::Value<ftm0och1srcVal,ftm0och1srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och1srcVal,ftm0och1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ftm0och1srcVal> ftm0och1src{}; 
        ///FTM0 channel 2 output source
        enum class ftm0och2srcVal {
            v0=0x00000000,     ///<FTM0_CH2 pin is output of FTM0 channel 2 output
            v1=0x00000001,     ///<FTM0_CH2 pin is output of FTM0 channel 2 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        namespace ftm0och2srcValC{
            constexpr MPL::Value<ftm0och2srcVal,ftm0och2srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och2srcVal,ftm0och2srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ftm0och2srcVal> ftm0och2src{}; 
        ///FTM0 channel 3 output source
        enum class ftm0och3srcVal {
            v0=0x00000000,     ///<FTM0_CH3 pin is output of FTM0 channel 3 output
            v1=0x00000001,     ///<FTM0_CH3 pin is output of FTM0 channel 3 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        namespace ftm0och3srcValC{
            constexpr MPL::Value<ftm0och3srcVal,ftm0och3srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och3srcVal,ftm0och3srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ftm0och3srcVal> ftm0och3src{}; 
        ///FTM0 channel 4 output source
        enum class ftm0och4srcVal {
            v0=0x00000000,     ///<FTM0_CH4 pin is output of FTM0 channel 4 output
            v1=0x00000001,     ///<FTM0_CH4 pin is output of FTM0 channel 4 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        namespace ftm0och4srcValC{
            constexpr MPL::Value<ftm0och4srcVal,ftm0och4srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och4srcVal,ftm0och4srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ftm0och4srcVal> ftm0och4src{}; 
        ///FTM0 channel 5 output source
        enum class ftm0och5srcVal {
            v0=0x00000000,     ///<FTM0_CH5 pin is output of FTM0 channel 5 output
            v1=0x00000001,     ///<FTM0_CH5 pin is output of FTM0 channel 5 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        namespace ftm0och5srcValC{
            constexpr MPL::Value<ftm0och5srcVal,ftm0och5srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och5srcVal,ftm0och5srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ftm0och5srcVal> ftm0och5src{}; 
        ///FTM0 channel 6 output source
        enum class ftm0och6srcVal {
            v0=0x00000000,     ///<FTM0_CH6 pin is output of FTM0 channel 6 output
            v1=0x00000001,     ///<FTM0_CH6 pin is output of FTM0 channel 6 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        namespace ftm0och6srcValC{
            constexpr MPL::Value<ftm0och6srcVal,ftm0och6srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och6srcVal,ftm0och6srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ftm0och6srcVal> ftm0och6src{}; 
        ///FTM0 channel 7 output source
        enum class ftm0och7srcVal {
            v0=0x00000000,     ///<FTM0_CH7 pin is output of FTM0 channel 7 output
            v1=0x00000001,     ///<FTM0_CH7 pin is output of FTM0 channel 7 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        namespace ftm0och7srcValC{
            constexpr MPL::Value<ftm0och7srcVal,ftm0och7srcVal::v0> v0{};
            constexpr MPL::Value<ftm0och7srcVal,ftm0och7srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ftm0och7srcVal> ftm0och7src{}; 
        ///FTM3 channel 0 output source
        enum class ftm3och0srcVal {
            v0=0x00000000,     ///<FTM3_CH0 pin is output of FTM3 channel 0 output
            v1=0x00000001,     ///<FTM3_CH0 pin is output of FTM3 channel 0 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        namespace ftm3och0srcValC{
            constexpr MPL::Value<ftm3och0srcVal,ftm3och0srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och0srcVal,ftm3och0srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ftm3och0srcVal> ftm3och0src{}; 
        ///FTM3 channel 1 output source
        enum class ftm3och1srcVal {
            v0=0x00000000,     ///<FTM3_CH1 pin is output of FTM3 channel 1 output
            v1=0x00000001,     ///<FTM3_CH1 pin is output of FTM3 channel 1 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        namespace ftm3och1srcValC{
            constexpr MPL::Value<ftm3och1srcVal,ftm3och1srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och1srcVal,ftm3och1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ftm3och1srcVal> ftm3och1src{}; 
        ///FTM3 channel 2 output source
        enum class ftm3och2srcVal {
            v0=0x00000000,     ///<FTM3_CH2 pin is output of FTM3 channel 2 output
            v1=0x00000001,     ///<FTM3_CH2 pin is output of FTM3 channel 2 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        namespace ftm3och2srcValC{
            constexpr MPL::Value<ftm3och2srcVal,ftm3och2srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och2srcVal,ftm3och2srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ftm3och2srcVal> ftm3och2src{}; 
        ///FTM3 channel 3 output source
        enum class ftm3och3srcVal {
            v0=0x00000000,     ///<FTM3_CH3 pin is output of FTM3 channel 3 output
            v1=0x00000001,     ///<FTM3_CH3 pin is output of FTM3 channel 3 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        namespace ftm3och3srcValC{
            constexpr MPL::Value<ftm3och3srcVal,ftm3och3srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och3srcVal,ftm3och3srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ftm3och3srcVal> ftm3och3src{}; 
        ///FTM3 channel 4 output source
        enum class ftm3och4srcVal {
            v0=0x00000000,     ///<FTM3_CH4 pin is output of FTM3 channel 4 output
            v1=0x00000001,     ///<FTM3_CH4 pin is output of FTM3 channel 4 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        namespace ftm3och4srcValC{
            constexpr MPL::Value<ftm3och4srcVal,ftm3och4srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och4srcVal,ftm3och4srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ftm3och4srcVal> ftm3och4src{}; 
        ///FTM3 channel 5 output source
        enum class ftm3och5srcVal {
            v0=0x00000000,     ///<FTM3_CH5 pin is output of FTM3 channel 5 output
            v1=0x00000001,     ///<FTM3_CH5 pin is output of FTM3 channel 5 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        namespace ftm3och5srcValC{
            constexpr MPL::Value<ftm3och5srcVal,ftm3och5srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och5srcVal,ftm3och5srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ftm3och5srcVal> ftm3och5src{}; 
        ///FTM3 channel 6 output source
        enum class ftm3och6srcVal {
            v0=0x00000000,     ///<FTM3_CH6 pin is output of FTM3 channel 6 output
            v1=0x00000001,     ///<FTM3_CH6 pin is output of FTM3 channel 6 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        namespace ftm3och6srcValC{
            constexpr MPL::Value<ftm3och6srcVal,ftm3och6srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och6srcVal,ftm3och6srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ftm3och6srcVal> ftm3och6src{}; 
        ///FTM3 channel 7 output source
        enum class ftm3och7srcVal {
            v0=0x00000000,     ///<FTM3_CH7 pin is output of FTM3 channel 7 output
            v1=0x00000001,     ///<FTM3_CH7 pin is output of FTM3 channel 7 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        namespace ftm3och7srcValC{
            constexpr MPL::Value<ftm3och7srcVal,ftm3och7srcVal::v0> v0{};
            constexpr MPL::Value<ftm3och7srcVal,ftm3och7srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ftm3och7srcVal> ftm3och7src{}; 
    }
    namespace SimSopt9{    ///<System Options Register 9
        using Addr = Register::Address<0x40048020,0x30ffff8f,0,unsigned>;
        ///FTM1 channel 0 input capture source select
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ftm1ich0srcVal> ftm1ich0src{}; 
        ///FTM1 channel 0 input capture source select
        enum class ftm1ich1srcVal {
            v0=0x00000000,     ///<FTM1_CH1 signal
            v1=0x00000001,     ///<Exclusive OR of FTM1_CH1, FTM1_CH0 and XBARA output 42
        };
        namespace ftm1ich1srcValC{
            constexpr MPL::Value<ftm1ich1srcVal,ftm1ich1srcVal::v0> v0{};
            constexpr MPL::Value<ftm1ich1srcVal,ftm1ich1srcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ftm1ich1srcVal> ftm1ich1src{}; 
        ///FlexTimer 0 External Clock Pin Select
        enum class ftm0clkselVal {
            v00=0x00000000,     ///<FTM0 external clock driven by FTM_CLK0 pin
            v01=0x00000001,     ///<FTM0 external clock driven by FTM_CLK1 pin
            v10=0x00000002,     ///<FTM0 external clock driven by FTM_CLK2 pin
        };
        namespace ftm0clkselValC{
            constexpr MPL::Value<ftm0clkselVal,ftm0clkselVal::v00> v00{};
            constexpr MPL::Value<ftm0clkselVal,ftm0clkselVal::v01> v01{};
            constexpr MPL::Value<ftm0clkselVal,ftm0clkselVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,ftm0clkselVal> ftm0clksel{}; 
        ///FlexTimer 1 External Clock Pin Select
        enum class ftm1clkselVal {
            v00=0x00000000,     ///<FTM1 external clock driven by FTM_CLK0 pin
            v01=0x00000001,     ///<FTM1 external clock driven by FTM_CLK1 pin
            v10=0x00000002,     ///<FTM1 external clock driven by FTM_CLK2 pin
        };
        namespace ftm1clkselValC{
            constexpr MPL::Value<ftm1clkselVal,ftm1clkselVal::v00> v00{};
            constexpr MPL::Value<ftm1clkselVal,ftm1clkselVal::v01> v01{};
            constexpr MPL::Value<ftm1clkselVal,ftm1clkselVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,ftm1clkselVal> ftm1clksel{}; 
        ///FlexTimer 3 External Clock Pin Select
        enum class ftm3clkselVal {
            v00=0x00000000,     ///<FTM3 external clock driven by FTM_CLK0 pin
            v01=0x00000001,     ///<FTM3 external clock driven by FTM_CLK1 pin
            v10=0x00000002,     ///<FTM3 external clock driven by FTM_CLK2 pin
        };
        namespace ftm3clkselValC{
            constexpr MPL::Value<ftm3clkselVal,ftm3clkselVal::v00> v00{};
            constexpr MPL::Value<ftm3clkselVal,ftm3clkselVal::v01> v01{};
            constexpr MPL::Value<ftm3clkselVal,ftm3clkselVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,ftm3clkselVal> ftm3clksel{}; 
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0x000f0070,0,unsigned>;
        ///Pincount identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pinid{}; 
        ///Device die number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> dieid{}; 
        ///Device revision number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
        ///Kinetis Series ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> seriesid{}; 
        ///Kinetis Sub-Family ID
        enum class subfamidVal {
            v0000=0x00000000,     ///<KVx0 Subfamily (FlexTimer & MC_ADC)
            v0001=0x00000001,     ///<KVx1 Subfamily (FlexTimer & HS_ADC)
            v0010=0x00000002,     ///<KVx2 Subfamily (Reserved)
            v0011=0x00000003,     ///<KVx3 Subfamily (eFlexPWM & MC_ADC)
            v0100=0x00000004,     ///<KVx4 Subfamily (eFlexPWM & HS_ADC)
            v0101=0x00000005,     ///<KVx5 Subfamily (eFlexPWM with FlexTimer & MC_ADC)
            v0110=0x00000006,     ///<KVx6 Subfamily (eFlexPWM with FlexTimer & HS_ADC)
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> familyid{}; 
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xf0f7f3bd,0,unsigned>;
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
        ///Comparators Clock Gate Control
        enum class cmpVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace cmpValC{
            constexpr MPL::Value<cmpVal,cmpVal::v0> v0{};
            constexpr MPL::Value<cmpVal,cmpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,cmpVal> cmp{}; 
        ///eFlexPWM submodule 0 Clock Gate Control
        enum class eflexpwm0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace eflexpwm0ValC{
            constexpr MPL::Value<eflexpwm0Val,eflexpwm0Val::v0> v0{};
            constexpr MPL::Value<eflexpwm0Val,eflexpwm0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,eflexpwm0Val> eflexpwm0{}; 
        ///eFlexPWM submodule 1 Clock Gate Control
        enum class eflexpwm1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace eflexpwm1ValC{
            constexpr MPL::Value<eflexpwm1Val,eflexpwm1Val::v0> v0{};
            constexpr MPL::Value<eflexpwm1Val,eflexpwm1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,eflexpwm1Val> eflexpwm1{}; 
        ///eFlexPWM submodule 2 Clock Gate Control
        enum class eflexpwm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace eflexpwm2ValC{
            constexpr MPL::Value<eflexpwm2Val,eflexpwm2Val::v0> v0{};
            constexpr MPL::Value<eflexpwm2Val,eflexpwm2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,eflexpwm2Val> eflexpwm2{}; 
        ///eFlexPWM submodule 3 Clock Gate Control
        enum class eflexpwm3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace eflexpwm3ValC{
            constexpr MPL::Value<eflexpwm3Val,eflexpwm3Val::v0> v0{};
            constexpr MPL::Value<eflexpwm3Val,eflexpwm3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,eflexpwm3Val> eflexpwm3{}; 
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0xe1dfc1fe,0,unsigned>;
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
        ///no description available
        enum class encVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace encValC{
            constexpr MPL::Value<encVal,encVal::v0> v0{};
            constexpr MPL::Value<encVal,encVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,encVal> enc{}; 
        ///XBARA Clock Gate Control
        enum class xbaraVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace xbaraValC{
            constexpr MPL::Value<xbaraVal,xbaraVal::v0> v0{};
            constexpr MPL::Value<xbaraVal,xbaraVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,xbaraVal> xbara{}; 
        ///XBARB Clock Gate Control
        enum class xbarbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace xbarbValC{
            constexpr MPL::Value<xbarbVal,xbarbVal::v0> v0{};
            constexpr MPL::Value<xbarbVal,xbarbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,xbarbVal> xbarb{}; 
        ///AOI Clock Gate Control
        enum class aoiVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace aoiValC{
            constexpr MPL::Value<aoiVal,aoiVal::v0> v0{};
            constexpr MPL::Value<aoiVal,aoiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,aoiVal> aoi{}; 
        ///ADC Clock Gate Control
        enum class adcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace adcValC{
            constexpr MPL::Value<adcVal,adcVal::v0> v0{};
            constexpr MPL::Value<adcVal,adcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,adcVal> adc{}; 
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0x7c39ef8c,0,unsigned>;
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
        ///FlexCAN1 Clock Gate Control
        enum class flexcan1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace flexcan1ValC{
            constexpr MPL::Value<flexcan1Val,flexcan1Val::v0> v0{};
            constexpr MPL::Value<flexcan1Val,flexcan1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,flexcan1Val> flexcan1{}; 
        ///FTM3 Clock Gate Control
        enum class ftm3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftm3ValC{
            constexpr MPL::Value<ftm3Val,ftm3Val::v0> v0{};
            constexpr MPL::Value<ftm3Val,ftm3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ftm3Val> ftm3{}; 
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
        ///PDB1 Clock Gate Control
        enum class pdb1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace pdb1ValC{
            constexpr MPL::Value<pdb1Val,pdb1Val::v0> v0{};
            constexpr MPL::Value<pdb1Val,pdb1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,pdb1Val> pdb1{}; 
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
        ///PDB0 Clock Gate Control
        enum class pdb0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace pdb0ValC{
            constexpr MPL::Value<pdb0Val,pdb0Val::v0> v0{};
            constexpr MPL::Value<pdb0Val,pdb0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,pdb0Val> pdb0{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> pfsize{}; 
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
    namespace SimClkdiv4{    ///<System Clock Divider Register 4
        using Addr = Register::Address<0x40048068,0xeffffff0,0,unsigned>;
        ///Trace clock divider fraction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tracefrac{}; 
        ///Trace clock divider divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> tracediv{}; 
        ///Debug Trace Divider Control
        enum class tracedivenVal {
            v0=0x00000000,     ///<Debug trace divider disabled
            v1=0x00000001,     ///<Debug trace divider enabled
        };
        namespace tracedivenValC{
            constexpr MPL::Value<tracedivenVal,tracedivenVal::v0> v0{};
            constexpr MPL::Value<tracedivenVal,tracedivenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tracedivenVal> tracediven{}; 
    }
    namespace SimMisctrl{    ///<Miscellaneous Control Register
        using Addr = Register::Address<0x4004806c,0xfff200ff,0,unsigned>;
        ///CMP Sample/Window Input 0 Source
        enum class cmpwin0srcVal {
            v00=0x00000000,     ///<XBARA output 16.
            v01=0x00000001,     ///<CMP0 Sample/Window input is driven by both PDB0 and PDB1 pluse-out channel 0.
            v10=0x00000002,     ///<PDB0 pluse-out channel 0.
            v11=0x00000003,     ///<PDB1 pluse-out channel 0.
        };
        namespace cmpwin0srcValC{
            constexpr MPL::Value<cmpwin0srcVal,cmpwin0srcVal::v00> v00{};
            constexpr MPL::Value<cmpwin0srcVal,cmpwin0srcVal::v01> v01{};
            constexpr MPL::Value<cmpwin0srcVal,cmpwin0srcVal::v10> v10{};
            constexpr MPL::Value<cmpwin0srcVal,cmpwin0srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,cmpwin0srcVal> cmpwin0src{}; 
        ///CMP Sample/Window Input 1 Source
        enum class cmpwin1srcVal {
            v00=0x00000000,     ///<XBARA output 17.
            v01=0x00000001,     ///<CMP1 Sample/Window input is driven by both PDB0 and PDB1 pluse-out channel 1.
            v10=0x00000002,     ///<PDB0 pluse-out channel 1.
            v11=0x00000003,     ///<PDB1 pluse-out channel 1.
        };
        namespace cmpwin1srcValC{
            constexpr MPL::Value<cmpwin1srcVal,cmpwin1srcVal::v00> v00{};
            constexpr MPL::Value<cmpwin1srcVal,cmpwin1srcVal::v01> v01{};
            constexpr MPL::Value<cmpwin1srcVal,cmpwin1srcVal::v10> v10{};
            constexpr MPL::Value<cmpwin1srcVal,cmpwin1srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,cmpwin1srcVal> cmpwin1src{}; 
        ///CMP Sample/Window Input 2 Source
        enum class cmpwin2srcVal {
            v00=0x00000000,     ///<XBARA output 18.
            v01=0x00000001,     ///<CMP2 Sample/Window input is driven by both PDB0 and PDB1 pluse-out channel 2.
            v10=0x00000002,     ///<PDB0 pluse-out channel 2.
            v11=0x00000003,     ///<PDB1 pluse-out channel 2.
        };
        namespace cmpwin2srcValC{
            constexpr MPL::Value<cmpwin2srcVal,cmpwin2srcVal::v00> v00{};
            constexpr MPL::Value<cmpwin2srcVal,cmpwin2srcVal::v01> v01{};
            constexpr MPL::Value<cmpwin2srcVal,cmpwin2srcVal::v10> v10{};
            constexpr MPL::Value<cmpwin2srcVal,cmpwin2srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,cmpwin2srcVal> cmpwin2src{}; 
        ///CMP Sample/Window Input 3 Source
        enum class cmpwin3srcVal {
            v00=0x00000000,     ///<XBARA output 19.
            v01=0x00000001,     ///<CMP3 Sample/Window input is driven by both PDB0 and PDB1 pluse-out channel 3.
            v10=0x00000002,     ///<PDB0 pluse-out channel 3.
            v11=0x00000003,     ///<PDB1 pluse-out channel 3.
        };
        namespace cmpwin3srcValC{
            constexpr MPL::Value<cmpwin3srcVal,cmpwin3srcVal::v00> v00{};
            constexpr MPL::Value<cmpwin3srcVal,cmpwin3srcVal::v01> v01{};
            constexpr MPL::Value<cmpwin3srcVal,cmpwin3srcVal::v10> v10{};
            constexpr MPL::Value<cmpwin3srcVal,cmpwin3srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,cmpwin3srcVal> cmpwin3src{}; 
        ///EWM_IN Source
        enum class ewminsrcVal {
            v0=0x00000000,     ///<XBARA output 58.
            v1=0x00000001,     ///<EWM_IN pin
        };
        namespace ewminsrcValC{
            constexpr MPL::Value<ewminsrcVal,ewminsrcVal::v0> v0{};
            constexpr MPL::Value<ewminsrcVal,ewminsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ewminsrcVal> ewminsrc{}; 
        ///DAC0 Hardware Trigger Input Source
        enum class dactrigsrcVal {
            v00=0x00000000,     ///<XBARA output 15.
            v01=0x00000001,     ///<DAC0 can be triggered by both PDB0 interval trigger 0 and PDB1 interval trigger 0.
            v10=0x00000002,     ///<PDB0 interval trigger 0
            v11=0x00000003,     ///<PDB1 interval trigger 0
        };
        namespace dactrigsrcValC{
            constexpr MPL::Value<dactrigsrcVal,dactrigsrcVal::v00> v00{};
            constexpr MPL::Value<dactrigsrcVal,dactrigsrcVal::v01> v01{};
            constexpr MPL::Value<dactrigsrcVal,dactrigsrcVal::v10> v10{};
            constexpr MPL::Value<dactrigsrcVal,dactrigsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,dactrigsrcVal> dactrigsrc{}; 
    }
    namespace SimMisctrl2{    ///<Miscellaneous Control Register 2
        using Addr = Register::Address<0x40048070,0xff0cc0ff,0,unsigned>;
        ///Synchronize XBARA's Input PIT Trigger 0 with fast clock
        enum class syncxbarapittrig0Val {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        namespace syncxbarapittrig0ValC{
            constexpr MPL::Value<syncxbarapittrig0Val,syncxbarapittrig0Val::v0> v0{};
            constexpr MPL::Value<syncxbarapittrig0Val,syncxbarapittrig0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,syncxbarapittrig0Val> syncxbarapittrig0{}; 
        ///Synchronize XBARA's Input PIT Trigger 1 with fast clock
        enum class syncxbarapittrig1Val {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        namespace syncxbarapittrig1ValC{
            constexpr MPL::Value<syncxbarapittrig1Val,syncxbarapittrig1Val::v0> v0{};
            constexpr MPL::Value<syncxbarapittrig1Val,syncxbarapittrig1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,syncxbarapittrig1Val> syncxbarapittrig1{}; 
        ///Synchronize XBARA's Input PIT Trigger 2 with fast clock
        enum class syncxbarapittrig2Val {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        namespace syncxbarapittrig2ValC{
            constexpr MPL::Value<syncxbarapittrig2Val,syncxbarapittrig2Val::v0> v0{};
            constexpr MPL::Value<syncxbarapittrig2Val,syncxbarapittrig2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,syncxbarapittrig2Val> syncxbarapittrig2{}; 
        ///Synchronize XBARA's Input PIT Trigger 3 with fast clock
        enum class syncxbarapittrig3Val {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        namespace syncxbarapittrig3ValC{
            constexpr MPL::Value<syncxbarapittrig3Val,syncxbarapittrig3Val::v0> v0{};
            constexpr MPL::Value<syncxbarapittrig3Val,syncxbarapittrig3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,syncxbarapittrig3Val> syncxbarapittrig3{}; 
        ///Synchronize XBARB's Input PIT Trigger 0 with fast clock
        enum class syncxbarbpittrig0Val {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        namespace syncxbarbpittrig0ValC{
            constexpr MPL::Value<syncxbarbpittrig0Val,syncxbarbpittrig0Val::v0> v0{};
            constexpr MPL::Value<syncxbarbpittrig0Val,syncxbarbpittrig0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,syncxbarbpittrig0Val> syncxbarbpittrig0{}; 
        ///Synchronize XBARB's Input PIT Trigger 1 with fast clock
        enum class syncxbarbpittrig1Val {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        namespace syncxbarbpittrig1ValC{
            constexpr MPL::Value<syncxbarbpittrig1Val,syncxbarbpittrig1Val::v0> v0{};
            constexpr MPL::Value<syncxbarbpittrig1Val,syncxbarbpittrig1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,syncxbarbpittrig1Val> syncxbarbpittrig1{}; 
        ///Synchronize XBARA's output for DAC Hardware Trigger with flash/slow clock
        enum class syncdachwtrigVal {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        namespace syncdachwtrigValC{
            constexpr MPL::Value<syncdachwtrigVal,syncdachwtrigVal::v0> v0{};
            constexpr MPL::Value<syncdachwtrigVal,syncdachwtrigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,syncdachwtrigVal> syncdachwtrig{}; 
        ///Synchronize XBARA's output for EWM's ewm_in with flash/slow clock
        enum class syncewminVal {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        namespace syncewminValC{
            constexpr MPL::Value<syncewminVal,syncewminVal::v0> v0{};
            constexpr MPL::Value<syncewminVal,syncewminVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,syncewminVal> syncewmin{}; 
        ///Synchronize XBARA's output for CMP0's Sample/Window Input with flash/slow clock
        enum class synccmp0samplewinVal {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        namespace synccmp0samplewinValC{
            constexpr MPL::Value<synccmp0samplewinVal,synccmp0samplewinVal::v0> v0{};
            constexpr MPL::Value<synccmp0samplewinVal,synccmp0samplewinVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,synccmp0samplewinVal> synccmp0samplewin{}; 
        ///Synchronize XBARA's output for CMP1's Sample/Window Input with flash/slow clock
        enum class synccmp1samplewinVal {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        namespace synccmp1samplewinValC{
            constexpr MPL::Value<synccmp1samplewinVal,synccmp1samplewinVal::v0> v0{};
            constexpr MPL::Value<synccmp1samplewinVal,synccmp1samplewinVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,synccmp1samplewinVal> synccmp1samplewin{}; 
        ///Synchronize XBARA's output for CMP2's Sample/Window Input with flash/slow clock
        enum class synccmp2samplewinVal {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        namespace synccmp2samplewinValC{
            constexpr MPL::Value<synccmp2samplewinVal,synccmp2samplewinVal::v0> v0{};
            constexpr MPL::Value<synccmp2samplewinVal,synccmp2samplewinVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,synccmp2samplewinVal> synccmp2samplewin{}; 
        ///Synchronize XBARA's output for CMP3's Sample/Window Input with flash/slow clock
        enum class synccmp3samplewinVal {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        namespace synccmp3samplewinValC{
            constexpr MPL::Value<synccmp3samplewinVal,synccmp3samplewinVal::v0> v0{};
            constexpr MPL::Value<synccmp3samplewinVal,synccmp3samplewinVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,synccmp3samplewinVal> synccmp3samplewin{}; 
    }
    namespace SimWdogc{    ///<WDOG Control Register
        using Addr = Register::Address<0x40048100,0xfffffffd,0,unsigned>;
        ///WDOG Clock Select
        enum class wdogclksVal {
            v0=0x00000000,     ///<Internal 1 kHz clock is source to WDOG2008
            v1=0x00000001,     ///<MCGIRCLK is source to WDOG2008
        };
        namespace wdogclksValC{
            constexpr MPL::Value<wdogclksVal,wdogclksVal::v0> v0{};
            constexpr MPL::Value<wdogclksVal,wdogclksVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wdogclksVal> wdogclks{}; 
    }
    namespace SimPwrc{    ///<Power Control Register
        using Addr = Register::Address<0x40048104,0xfffefc30,0,unsigned>;
        ///Nanoedge Regulator 2.7V and 1.2V Supply Powerdown Control
        enum class srpdnVal {
            v00=0x00000000,     ///<Nanoedge regulator placed in normal mode.
            v01=0x00000001,     ///<Nanoedge regulator placed in powerdown mode.
            v10=0x00000002,     ///<Nanoedge regulator placed in normal mode and SRPDN is write protected until chip reset.
            v11=0x00000003,     ///<Nanoedge regulator placed in powerdown mode and SRPDN is write protected until chip reset.
        };
        namespace srpdnValC{
            constexpr MPL::Value<srpdnVal,srpdnVal::v00> v00{};
            constexpr MPL::Value<srpdnVal,srpdnVal::v01> v01{};
            constexpr MPL::Value<srpdnVal,srpdnVal::v10> v10{};
            constexpr MPL::Value<srpdnVal,srpdnVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,srpdnVal> srpdn{}; 
        ///Nanoedge Regulator 2.7 V Supply Standby Control
        enum class sr27stdbyVal {
            v00=0x00000000,     ///<Nanoedge regulator 2.7 V placed in normal mode.
            v01=0x00000001,     ///<Nanoedge regulator 2.7 V placed in standby mode.
            v10=0x00000002,     ///<Nanoedge regulator 2.7 V supply placed in normal mode and SR27STDBY is write protected until chip reset.
            v11=0x00000003,     ///<Nanoedge regulator 2.7 V supply placed in standby mode and SR27STDBY is write protected until chip reset.
        };
        namespace sr27stdbyValC{
            constexpr MPL::Value<sr27stdbyVal,sr27stdbyVal::v00> v00{};
            constexpr MPL::Value<sr27stdbyVal,sr27stdbyVal::v01> v01{};
            constexpr MPL::Value<sr27stdbyVal,sr27stdbyVal::v10> v10{};
            constexpr MPL::Value<sr27stdbyVal,sr27stdbyVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,sr27stdbyVal> sr27stdby{}; 
        ///Nanoedge Regulator 1.2 V Supply Standby Control
        enum class sr12stdbyVal {
            v00=0x00000000,     ///<Nanoedge regulator 1.2 V supply placed in normal mode
            v01=0x00000001,     ///<Nanoedge regulator 1.2 V supply placed in standby mode.
            v10=0x00000002,     ///<Nanoedge regulator 1.2 V supply placed in normal mode and SR12STDBY is write protected until chip reset.
            v11=0x00000003,     ///<Nanoedge regulator 1.2 V supply placed in standby mode and SR12STDBY is write protected until chip reset.
        };
        namespace sr12stdbyValC{
            constexpr MPL::Value<sr12stdbyVal,sr12stdbyVal::v00> v00{};
            constexpr MPL::Value<sr12stdbyVal,sr12stdbyVal::v01> v01{};
            constexpr MPL::Value<sr12stdbyVal,sr12stdbyVal::v10> v10{};
            constexpr MPL::Value<sr12stdbyVal,sr12stdbyVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,sr12stdbyVal> sr12stdby{}; 
        ///Nanoedge PMC POWER Dectect Enable
        enum class srpwrdetenVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace srpwrdetenValC{
            constexpr MPL::Value<srpwrdetenVal,srpwrdetenVal::v0> v0{};
            constexpr MPL::Value<srpwrdetenVal,srpwrdetenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,srpwrdetenVal> srpwrdeten{}; 
        ///Nanoedge PMC POWER Ready
        enum class srpwrrdyVal {
            v0=0x00000000,     ///<Not ready
            v1=0x00000001,     ///<Assert PMC power output ready
        };
        namespace srpwrrdyValC{
            constexpr MPL::Value<srpwrrdyVal,srpwrrdyVal::v0> v0{};
            constexpr MPL::Value<srpwrrdyVal,srpwrrdyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srpwrrdyVal> srpwrrdy{}; 
        ///Nanoedge PMC Status
        enum class srpwrokVal {
            v0=0x00000000,     ///<Power supply for nanoedge isn't ready.
            v1=0x00000001,     ///<Power supply for nanoedge is OK.
        };
        namespace srpwrokValC{
            constexpr MPL::Value<srpwrokVal,srpwrokVal::v0> v0{};
            constexpr MPL::Value<srpwrokVal,srpwrokVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srpwrokVal> srpwrok{}; 
    }
    namespace SimAdcopt{    ///<ADC Channel 6/7 Mux Control Register
        using Addr = Register::Address<0x40048108,0xfcff8888,0,unsigned>;
        ///ADCA MUX0 selection for ADCA channel 6
        enum class adcach6selVal {
            v000=0x00000000,     ///<ADCA MUX0's channel a.
            v001=0x00000001,     ///<ADCA MUX0's channel b.
            v010=0x00000002,     ///<ADCA MUX0's channel c.
            v011=0x00000003,     ///<ADCA MUX0's channel d.
            v100=0x00000004,     ///<ADCA MUX0's channel e.
            v110=0x00000006,     ///<ADCA MUX0's channel g.
        };
        namespace adcach6selValC{
            constexpr MPL::Value<adcach6selVal,adcach6selVal::v000> v000{};
            constexpr MPL::Value<adcach6selVal,adcach6selVal::v001> v001{};
            constexpr MPL::Value<adcach6selVal,adcach6selVal::v010> v010{};
            constexpr MPL::Value<adcach6selVal,adcach6selVal::v011> v011{};
            constexpr MPL::Value<adcach6selVal,adcach6selVal::v100> v100{};
            constexpr MPL::Value<adcach6selVal,adcach6selVal::v110> v110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,adcach6selVal> adcach6sel{}; 
        ///ADCA MUX1 selection for ADCA channel 7
        enum class adcach7selVal {
            v000=0x00000000,     ///<ADCA MUX1's channel a.
            v001=0x00000001,     ///<ADCA MUX1's channel b.
            v010=0x00000002,     ///<ADCA MUX1's channel c.
            v100=0x00000004,     ///<ADCA MUX1's channel e.
            v101=0x00000005,     ///<ADCA MUX1's channel f.
            v110=0x00000006,     ///<ADCA MUX1's channel g.
            v111=0x00000007,     ///<PMC 1V
        };
        namespace adcach7selValC{
            constexpr MPL::Value<adcach7selVal,adcach7selVal::v000> v000{};
            constexpr MPL::Value<adcach7selVal,adcach7selVal::v001> v001{};
            constexpr MPL::Value<adcach7selVal,adcach7selVal::v010> v010{};
            constexpr MPL::Value<adcach7selVal,adcach7selVal::v100> v100{};
            constexpr MPL::Value<adcach7selVal,adcach7selVal::v101> v101{};
            constexpr MPL::Value<adcach7selVal,adcach7selVal::v110> v110{};
            constexpr MPL::Value<adcach7selVal,adcach7selVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,adcach7selVal> adcach7sel{}; 
        ///ADCB MUX1 selection for ADCB channel 6
        enum class adcbch6selVal {
            v000=0x00000000,     ///<ADCB MUX0's channel a.
            v001=0x00000001,     ///<ADCB MUX0's channel b.
            v010=0x00000002,     ///<ADCB MUX0's channel c.
            v011=0x00000003,     ///<ADCB MUX0's channel d.
            v100=0x00000004,     ///<ADCB MUX0's channel e.
            v101=0x00000005,     ///<ADCB MUX0's channel f.
            v110=0x00000006,     ///<ADCB MUX0's channel g.
            v111=0x00000007,     ///<PMC 1V.
        };
        namespace adcbch6selValC{
            constexpr MPL::Value<adcbch6selVal,adcbch6selVal::v000> v000{};
            constexpr MPL::Value<adcbch6selVal,adcbch6selVal::v001> v001{};
            constexpr MPL::Value<adcbch6selVal,adcbch6selVal::v010> v010{};
            constexpr MPL::Value<adcbch6selVal,adcbch6selVal::v011> v011{};
            constexpr MPL::Value<adcbch6selVal,adcbch6selVal::v100> v100{};
            constexpr MPL::Value<adcbch6selVal,adcbch6selVal::v101> v101{};
            constexpr MPL::Value<adcbch6selVal,adcbch6selVal::v110> v110{};
            constexpr MPL::Value<adcbch6selVal,adcbch6selVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,adcbch6selVal> adcbch6sel{}; 
        ///ADCB MUX1 selection for ADCB channel 7
        enum class adcbch7selVal {
            v000=0x00000000,     ///<ADCB MUX1's channel a.
            v001=0x00000001,     ///<ADCB MUX1's channel b.
            v010=0x00000002,     ///<ADCB MUX1's channel c.
            v011=0x00000003,     ///<ADCB MUX1's channel d.
            v100=0x00000004,     ///<ADCB MUX1's channel e.
            v101=0x00000005,     ///<ADCB MUX1's channel f.
            v110=0x00000006,     ///<ADCB MUX1's channel g.
        };
        namespace adcbch7selValC{
            constexpr MPL::Value<adcbch7selVal,adcbch7selVal::v000> v000{};
            constexpr MPL::Value<adcbch7selVal,adcbch7selVal::v001> v001{};
            constexpr MPL::Value<adcbch7selVal,adcbch7selVal::v010> v010{};
            constexpr MPL::Value<adcbch7selVal,adcbch7selVal::v011> v011{};
            constexpr MPL::Value<adcbch7selVal,adcbch7selVal::v100> v100{};
            constexpr MPL::Value<adcbch7selVal,adcbch7selVal::v101> v101{};
            constexpr MPL::Value<adcbch7selVal,adcbch7selVal::v110> v110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,adcbch7selVal> adcbch7sel{}; 
        ///Enable ADC low current Mode
        enum class rosbVal {
            v0=0x00000000,     ///<Disable ADC low current mode.
            v1=0x00000001,     ///<Enable ADC low current mode.
        };
        namespace rosbValC{
            constexpr MPL::Value<rosbVal,rosbVal::v0> v0{};
            constexpr MPL::Value<rosbVal,rosbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,rosbVal> rosb{}; 
        ///ADC Clock Status
        enum class adcirclkVal {
            v0=0x00000000,     ///<ADC clock is fast peripherial clock.
            v1=0x00000001,     ///<ADC clock is MCGIRCLK.
        };
        namespace adcirclkValC{
            constexpr MPL::Value<adcirclkVal,adcirclkVal::v0> v0{};
            constexpr MPL::Value<adcirclkVal,adcirclkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,adcirclkVal> adcirclk{}; 
    }
}
