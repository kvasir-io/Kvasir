#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0xfff30fff,0,unsigned>;
        ///RAM size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ramsize{}; 
        ///32K oscillator clock select
        enum class Osc32kselVal {
            v00=0x00000000,     ///<System oscillator (OSC32KCLK)
            v11=0x00000003,     ///<LPO 1 kHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Osc32kselVal> osc32ksel{}; 
        namespace Osc32kselValC{
            constexpr Register::FieldValue<decltype(osc32ksel)::Type,Osc32kselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(osc32ksel)::Type,Osc32kselVal::v11> v11{};
        }
        }
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0x7fffef1f,0,unsigned>;
        ///CLKOUT select
        enum class ClkoutselVal {
            v010=0x00000002,     ///<Flash clock
            v011=0x00000003,     ///<LPO clock (1 kHz)
            v100=0x00000004,     ///<MCGIRCLK
            v101=0x00000005,     ///<OSCERCLK_UNDIV
            v110=0x00000006,     ///<OSCERCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,ClkoutselVal> clkoutsel{}; 
        namespace ClkoutselValC{
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v110> v110{};
        }
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
        }
        ///Nanoedge clock(PWM 2x clock) select
        enum class Nanoedgeclk2xselVal {
            v0=0x00000000,     ///<MCGPLLCLK
            v1=0x00000001,     ///<MCGPLLCLK2X
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Nanoedgeclk2xselVal> nanoedgeclk2xsel{}; 
        namespace Nanoedgeclk2xselValC{
            constexpr Register::FieldValue<decltype(nanoedgeclk2xsel)::Type,Nanoedgeclk2xselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nanoedgeclk2xsel)::Type,Nanoedgeclk2xselVal::v1> v1{};
        }
        }
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0x8fa8efe0,0,unsigned>;
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
        }
        ///no description available
        enum class Ftm0flt3Val {
            v0=0x00000000,     ///<FTM0_FLT3 pin
            v1=0x00000001,     ///<XBARA output 49
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ftm0flt3Val> ftm0flt3{}; 
        namespace Ftm0flt3ValC{
            constexpr Register::FieldValue<decltype(ftm0flt3)::Type,Ftm0flt3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt3)::Type,Ftm0flt3Val::v1> v1{};
        }
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
        }
        ///FTM3 Fault 0 Select
        enum class Ftm3flt0Val {
            v0=0x00000000,     ///<FTM3_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ftm3flt0Val> ftm3flt0{}; 
        namespace Ftm3flt0ValC{
            constexpr Register::FieldValue<decltype(ftm3flt0)::Type,Ftm3flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3flt0)::Type,Ftm3flt0Val::v1> v1{};
        }
        }
        ///FlexTimer 0 Hardware Trigger 0 Source Select
        enum class Ftm0trg0srcVal {
            v0=0x00000000,     ///<CMP0 output drives FTM0 hardware trigger 0
            v1=0x00000001,     ///<FTM1 channel match drives FTM0 hardware trigger 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ftm0trg0srcVal> ftm0trg0src{}; 
        namespace Ftm0trg0srcValC{
            constexpr Register::FieldValue<decltype(ftm0trg0src)::Type,Ftm0trg0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0trg0src)::Type,Ftm0trg0srcVal::v1> v1{};
        }
        }
        ///FlexTimer 0 Hardware Trigger 1 Source Select
        enum class Ftm0trg1srcVal {
            v0=0x00000000,     ///<PDB0 output trigger drives FTM0 hardware trigger 1
            v1=0x00000001,     ///<FTM1 channel match drives FTM0 hardware trigger 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ftm0trg1srcVal> ftm0trg1src{}; 
        namespace Ftm0trg1srcValC{
            constexpr Register::FieldValue<decltype(ftm0trg1src)::Type,Ftm0trg1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0trg1src)::Type,Ftm0trg1srcVal::v1> v1{};
        }
        }
        ///FlexTimer 0 Hardware Trigger 2 Source Select
        enum class Ftm0trg2srcVal {
            v0=0x00000000,     ///<FTM0_FLT0 pin drives FTM0 hardware trigger 2
            v1=0x00000001,     ///<XBARA output 34 drives FTM0 hardware trigger 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ftm0trg2srcVal> ftm0trg2src{}; 
        namespace Ftm0trg2srcValC{
            constexpr Register::FieldValue<decltype(ftm0trg2src)::Type,Ftm0trg2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0trg2src)::Type,Ftm0trg2srcVal::v1> v1{};
        }
        }
        ///FlexTimer 1 Hardware Trigger 0 Source Select
        enum class Ftm1trg0srcVal {
            v0=0x00000000,     ///<CMP0 output drives FTM1 hardware trigger 0
            v1=0x00000001,     ///<FTM0 channel match drives FTM1 hardware trigger 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ftm1trg0srcVal> ftm1trg0src{}; 
        namespace Ftm1trg0srcValC{
            constexpr Register::FieldValue<decltype(ftm1trg0src)::Type,Ftm1trg0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1trg0src)::Type,Ftm1trg0srcVal::v1> v1{};
        }
        }
        ///FlexTimer 1 Hardware Trigger 2 Source Select
        enum class Ftm1trg2srcVal {
            v0=0x00000000,     ///<FTM1_FLT0 pin drives FTM1 hardware trigger 2
            v1=0x00000001,     ///<XBARA output 35 drives FTM1 hardware trigger 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ftm1trg2srcVal> ftm1trg2src{}; 
        namespace Ftm1trg2srcValC{
            constexpr Register::FieldValue<decltype(ftm1trg2src)::Type,Ftm1trg2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1trg2src)::Type,Ftm1trg2srcVal::v1> v1{};
        }
        }
        ///FlexTimer 3 Hardware Trigger 0 Source Select
        enum class Ftm3trg0srcVal {
            v0=0x00000000,     ///<CMP0 output drives FTM3 hardware trigger 0
            v1=0x00000001,     ///<FTM1 channel match drives FTM3 hardware trigger 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ftm3trg0srcVal> ftm3trg0src{}; 
        namespace Ftm3trg0srcValC{
            constexpr Register::FieldValue<decltype(ftm3trg0src)::Type,Ftm3trg0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3trg0src)::Type,Ftm3trg0srcVal::v1> v1{};
        }
        }
        ///FlexTimer 3 Hardware Trigger 1 Source Select
        enum class Ftm3trg1srcVal {
            v0=0x00000000,     ///<PDB1 output trigger drives FTM3 hardware trigger 1
            v1=0x00000001,     ///<FTM1 channel match drives FTM3 hardware trigger 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ftm3trg1srcVal> ftm3trg1src{}; 
        namespace Ftm3trg1srcValC{
            constexpr Register::FieldValue<decltype(ftm3trg1src)::Type,Ftm3trg1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3trg1src)::Type,Ftm3trg1srcVal::v1> v1{};
        }
        }
        ///FlexTimer 3 Hardware Trigger 2 Source Select
        enum class Ftm3trg2srcVal {
            v0=0x00000000,     ///<FTM3_FLT0 pin drives FTM3 hardware trigger 2
            v1=0x00000001,     ///<XBARA output 37 drives FTM3 hardware trigger 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ftm3trg2srcVal> ftm3trg2src{}; 
        namespace Ftm3trg2srcValC{
            constexpr Register::FieldValue<decltype(ftm3trg2src)::Type,Ftm3trg2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3trg2src)::Type,Ftm3trg2srcVal::v1> v1{};
        }
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
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xffff3030,0,unsigned>;
        ///ADCA trigger select
        enum class AdcatrgselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,AdcatrgselVal> adcatrgsel{}; 
        namespace AdcatrgselValC{
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adcatrgsel)::Type,AdcatrgselVal::v1110> v1110{};
        }
        }
        ///ADCA alternate trigger enable
        enum class AdcaalttrgenVal {
            v00=0x00000000,     ///<XBARA output 12.
            v01=0x00000001,     ///<PDB0 trigger selected for ADCA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,AdcaalttrgenVal> adcaalttrgen{}; 
        namespace AdcaalttrgenValC{
            constexpr Register::FieldValue<decltype(adcaalttrgen)::Type,AdcaalttrgenVal::v00> v00{};
            constexpr Register::FieldValue<decltype(adcaalttrgen)::Type,AdcaalttrgenVal::v01> v01{};
        }
        }
        ///ADCB trigger select
        enum class AdcbtrgselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,AdcbtrgselVal> adcbtrgsel{}; 
        namespace AdcbtrgselValC{
            constexpr Register::FieldValue<decltype(adcbtrgsel)::Type,AdcbtrgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adcbtrgsel)::Type,AdcbtrgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adcbtrgsel)::Type,AdcbtrgselVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(adcbtrgsel)::Type,AdcbtrgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adcbtrgsel)::Type,AdcbtrgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adcbtrgsel)::Type,AdcbtrgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adcbtrgsel)::Type,AdcbtrgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adcbtrgsel)::Type,AdcbtrgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adcbtrgsel)::Type,AdcbtrgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adcbtrgsel)::Type,AdcbtrgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(adcbtrgsel)::Type,AdcbtrgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adcbtrgsel)::Type,AdcbtrgselVal::v1110> v1110{};
        }
        }
        ///ADCB alternate trigger enable
        enum class AdcbalttrgenVal {
            v00=0x00000000,     ///<XBARA output 13.
            v01=0x00000001,     ///<PDB1 trigger selected for ADCB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,AdcbalttrgenVal> adcbalttrgen{}; 
        namespace AdcbalttrgenValC{
            constexpr Register::FieldValue<decltype(adcbalttrgen)::Type,AdcbalttrgenVal::v00> v00{};
            constexpr Register::FieldValue<decltype(adcbalttrgen)::Type,AdcbalttrgenVal::v01> v01{};
        }
        }
    }
    namespace SimSopt8{    ///<System Options Register 8
        using Addr = Register::Address<0x4004801c,0x0000fcf4,0,unsigned>;
        ///FTM0 Hardware Trigger 0 Software Synchronization
        enum class Ftm0syncbitVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM0, software must clear this bit to allow other trigger sources to assert.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ftm0syncbitVal> ftm0syncbit{}; 
        namespace Ftm0syncbitValC{
            constexpr Register::FieldValue<decltype(ftm0syncbit)::Type,Ftm0syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0syncbit)::Type,Ftm0syncbitVal::v1> v1{};
        }
        }
        ///FTM1 Hardware Trigger 0 Software Synchronization
        enum class Ftm1syncbitVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM1, software must clear this bit to allow other trigger sources to assert.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ftm1syncbitVal> ftm1syncbit{}; 
        namespace Ftm1syncbitValC{
            constexpr Register::FieldValue<decltype(ftm1syncbit)::Type,Ftm1syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1syncbit)::Type,Ftm1syncbitVal::v1> v1{};
        }
        }
        ///FTM3 Hardware Trigger 0 Software Synchronization
        enum class Ftm3syncbitVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Write 1 to assert the TRIG0 input to FTM3, software must clear this bit to allow other trigger sources to assert.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ftm3syncbitVal> ftm3syncbit{}; 
        namespace Ftm3syncbitValC{
            constexpr Register::FieldValue<decltype(ftm3syncbit)::Type,Ftm3syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3syncbit)::Type,Ftm3syncbitVal::v1> v1{};
        }
        }
        ///Carrier frequency selection for FTM0 output channel
        enum class Ftm0cfselVal {
            v0=0x00000000,     ///<FTM1 channel 1 output provides the carrier signal for FTM0 Timer Modulation mode.
            v1=0x00000001,     ///<LPTMR0 prescaler output provides the carrier signal for FTM0 Timer Modulation mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ftm0cfselVal> ftm0cfsel{}; 
        namespace Ftm0cfselValC{
            constexpr Register::FieldValue<decltype(ftm0cfsel)::Type,Ftm0cfselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0cfsel)::Type,Ftm0cfselVal::v1> v1{};
        }
        }
        ///Carrier frequency selection for FTM3 output channel
        enum class Ftm3cfselVal {
            v0=0x00000000,     ///<FTM1 channel 1 output provides the carrier signal for FTM3 Timer Modulation mode.
            v1=0x00000001,     ///<LPTMR0 prescaler output provides the carrier signal for FTM3 Timer Modulation mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ftm3cfselVal> ftm3cfsel{}; 
        namespace Ftm3cfselValC{
            constexpr Register::FieldValue<decltype(ftm3cfsel)::Type,Ftm3cfselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3cfsel)::Type,Ftm3cfselVal::v1> v1{};
        }
        }
        ///FTM0 channel 0 output source
        enum class Ftm0och0srcVal {
            v0=0x00000000,     ///<FTM0_CH0 pin is output of FTM0 channel 0 output
            v1=0x00000001,     ///<FTM0_CH0 pin is output of FTM0 channel 0 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ftm0och0srcVal> ftm0och0src{}; 
        namespace Ftm0och0srcValC{
            constexpr Register::FieldValue<decltype(ftm0och0src)::Type,Ftm0och0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och0src)::Type,Ftm0och0srcVal::v1> v1{};
        }
        }
        ///FTM0 channel 1 output source
        enum class Ftm0och1srcVal {
            v0=0x00000000,     ///<FTM0_CH1 pin is output of FTM0 channel 1 output
            v1=0x00000001,     ///<FTM0_CH1 pin is output of FTM0 channel 1 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ftm0och1srcVal> ftm0och1src{}; 
        namespace Ftm0och1srcValC{
            constexpr Register::FieldValue<decltype(ftm0och1src)::Type,Ftm0och1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och1src)::Type,Ftm0och1srcVal::v1> v1{};
        }
        }
        ///FTM0 channel 2 output source
        enum class Ftm0och2srcVal {
            v0=0x00000000,     ///<FTM0_CH2 pin is output of FTM0 channel 2 output
            v1=0x00000001,     ///<FTM0_CH2 pin is output of FTM0 channel 2 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ftm0och2srcVal> ftm0och2src{}; 
        namespace Ftm0och2srcValC{
            constexpr Register::FieldValue<decltype(ftm0och2src)::Type,Ftm0och2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och2src)::Type,Ftm0och2srcVal::v1> v1{};
        }
        }
        ///FTM0 channel 3 output source
        enum class Ftm0och3srcVal {
            v0=0x00000000,     ///<FTM0_CH3 pin is output of FTM0 channel 3 output
            v1=0x00000001,     ///<FTM0_CH3 pin is output of FTM0 channel 3 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ftm0och3srcVal> ftm0och3src{}; 
        namespace Ftm0och3srcValC{
            constexpr Register::FieldValue<decltype(ftm0och3src)::Type,Ftm0och3srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och3src)::Type,Ftm0och3srcVal::v1> v1{};
        }
        }
        ///FTM0 channel 4 output source
        enum class Ftm0och4srcVal {
            v0=0x00000000,     ///<FTM0_CH4 pin is output of FTM0 channel 4 output
            v1=0x00000001,     ///<FTM0_CH4 pin is output of FTM0 channel 4 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ftm0och4srcVal> ftm0och4src{}; 
        namespace Ftm0och4srcValC{
            constexpr Register::FieldValue<decltype(ftm0och4src)::Type,Ftm0och4srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och4src)::Type,Ftm0och4srcVal::v1> v1{};
        }
        }
        ///FTM0 channel 5 output source
        enum class Ftm0och5srcVal {
            v0=0x00000000,     ///<FTM0_CH5 pin is output of FTM0 channel 5 output
            v1=0x00000001,     ///<FTM0_CH5 pin is output of FTM0 channel 5 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ftm0och5srcVal> ftm0och5src{}; 
        namespace Ftm0och5srcValC{
            constexpr Register::FieldValue<decltype(ftm0och5src)::Type,Ftm0och5srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och5src)::Type,Ftm0och5srcVal::v1> v1{};
        }
        }
        ///FTM0 channel 6 output source
        enum class Ftm0och6srcVal {
            v0=0x00000000,     ///<FTM0_CH6 pin is output of FTM0 channel 6 output
            v1=0x00000001,     ///<FTM0_CH6 pin is output of FTM0 channel 6 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ftm0och6srcVal> ftm0och6src{}; 
        namespace Ftm0och6srcValC{
            constexpr Register::FieldValue<decltype(ftm0och6src)::Type,Ftm0och6srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och6src)::Type,Ftm0och6srcVal::v1> v1{};
        }
        }
        ///FTM0 channel 7 output source
        enum class Ftm0och7srcVal {
            v0=0x00000000,     ///<FTM0_CH7 pin is output of FTM0 channel 7 output
            v1=0x00000001,     ///<FTM0_CH7 pin is output of FTM0 channel 7 output, modulated by carrier frequency clock, as per FTM0CFSEL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ftm0och7srcVal> ftm0och7src{}; 
        namespace Ftm0och7srcValC{
            constexpr Register::FieldValue<decltype(ftm0och7src)::Type,Ftm0och7srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och7src)::Type,Ftm0och7srcVal::v1> v1{};
        }
        }
        ///FTM3 channel 0 output source
        enum class Ftm3och0srcVal {
            v0=0x00000000,     ///<FTM3_CH0 pin is output of FTM3 channel 0 output
            v1=0x00000001,     ///<FTM3_CH0 pin is output of FTM3 channel 0 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm3och0srcVal> ftm3och0src{}; 
        namespace Ftm3och0srcValC{
            constexpr Register::FieldValue<decltype(ftm3och0src)::Type,Ftm3och0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och0src)::Type,Ftm3och0srcVal::v1> v1{};
        }
        }
        ///FTM3 channel 1 output source
        enum class Ftm3och1srcVal {
            v0=0x00000000,     ///<FTM3_CH1 pin is output of FTM3 channel 1 output
            v1=0x00000001,     ///<FTM3_CH1 pin is output of FTM3 channel 1 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ftm3och1srcVal> ftm3och1src{}; 
        namespace Ftm3och1srcValC{
            constexpr Register::FieldValue<decltype(ftm3och1src)::Type,Ftm3och1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och1src)::Type,Ftm3och1srcVal::v1> v1{};
        }
        }
        ///FTM3 channel 2 output source
        enum class Ftm3och2srcVal {
            v0=0x00000000,     ///<FTM3_CH2 pin is output of FTM3 channel 2 output
            v1=0x00000001,     ///<FTM3_CH2 pin is output of FTM3 channel 2 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ftm3och2srcVal> ftm3och2src{}; 
        namespace Ftm3och2srcValC{
            constexpr Register::FieldValue<decltype(ftm3och2src)::Type,Ftm3och2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och2src)::Type,Ftm3och2srcVal::v1> v1{};
        }
        }
        ///FTM3 channel 3 output source
        enum class Ftm3och3srcVal {
            v0=0x00000000,     ///<FTM3_CH3 pin is output of FTM3 channel 3 output
            v1=0x00000001,     ///<FTM3_CH3 pin is output of FTM3 channel 3 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ftm3och3srcVal> ftm3och3src{}; 
        namespace Ftm3och3srcValC{
            constexpr Register::FieldValue<decltype(ftm3och3src)::Type,Ftm3och3srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och3src)::Type,Ftm3och3srcVal::v1> v1{};
        }
        }
        ///FTM3 channel 4 output source
        enum class Ftm3och4srcVal {
            v0=0x00000000,     ///<FTM3_CH4 pin is output of FTM3 channel 4 output
            v1=0x00000001,     ///<FTM3_CH4 pin is output of FTM3 channel 4 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ftm3och4srcVal> ftm3och4src{}; 
        namespace Ftm3och4srcValC{
            constexpr Register::FieldValue<decltype(ftm3och4src)::Type,Ftm3och4srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och4src)::Type,Ftm3och4srcVal::v1> v1{};
        }
        }
        ///FTM3 channel 5 output source
        enum class Ftm3och5srcVal {
            v0=0x00000000,     ///<FTM3_CH5 pin is output of FTM3 channel 5 output
            v1=0x00000001,     ///<FTM3_CH5 pin is output of FTM3 channel 5 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ftm3och5srcVal> ftm3och5src{}; 
        namespace Ftm3och5srcValC{
            constexpr Register::FieldValue<decltype(ftm3och5src)::Type,Ftm3och5srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och5src)::Type,Ftm3och5srcVal::v1> v1{};
        }
        }
        ///FTM3 channel 6 output source
        enum class Ftm3och6srcVal {
            v0=0x00000000,     ///<FTM3_CH6 pin is output of FTM3 channel 6 output
            v1=0x00000001,     ///<FTM3_CH6 pin is output of FTM3 channel 6 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ftm3och6srcVal> ftm3och6src{}; 
        namespace Ftm3och6srcValC{
            constexpr Register::FieldValue<decltype(ftm3och6src)::Type,Ftm3och6srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och6src)::Type,Ftm3och6srcVal::v1> v1{};
        }
        }
        ///FTM3 channel 7 output source
        enum class Ftm3och7srcVal {
            v0=0x00000000,     ///<FTM3_CH7 pin is output of FTM3 channel 7 output
            v1=0x00000001,     ///<FTM3_CH7 pin is output of FTM3 channel 7 output modulated by carrier frequency clock, as per FTM3CFSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ftm3och7srcVal> ftm3och7src{}; 
        namespace Ftm3och7srcValC{
            constexpr Register::FieldValue<decltype(ftm3och7src)::Type,Ftm3och7srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3och7src)::Type,Ftm3och7srcVal::v1> v1{};
        }
        }
    }
    namespace SimSopt9{    ///<System Options Register 9
        using Addr = Register::Address<0x40048020,0x30ffff8f,0,unsigned>;
        ///FTM1 channel 0 input capture source select
        enum class Ftm1ich0srcVal {
            v00=0x00000000,     ///<FTM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Ftm1ich0srcVal> ftm1ich0src{}; 
        namespace Ftm1ich0srcValC{
            constexpr Register::FieldValue<decltype(ftm1ich0src)::Type,Ftm1ich0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm1ich0src)::Type,Ftm1ich0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm1ich0src)::Type,Ftm1ich0srcVal::v10> v10{};
        }
        }
        ///FTM1 channel 0 input capture source select
        enum class Ftm1ich1srcVal {
            v0=0x00000000,     ///<FTM1_CH1 signal
            v1=0x00000001,     ///<Exclusive OR of FTM1_CH1, FTM1_CH0 and XBARA output 42
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ftm1ich1srcVal> ftm1ich1src{}; 
        namespace Ftm1ich1srcValC{
            constexpr Register::FieldValue<decltype(ftm1ich1src)::Type,Ftm1ich1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1ich1src)::Type,Ftm1ich1srcVal::v1> v1{};
        }
        }
        ///FlexTimer 0 External Clock Pin Select
        enum class Ftm0clkselVal {
            v00=0x00000000,     ///<FTM0 external clock driven by FTM_CLK0 pin
            v01=0x00000001,     ///<FTM0 external clock driven by FTM_CLK1 pin
            v10=0x00000002,     ///<FTM0 external clock driven by FTM_CLK2 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Ftm0clkselVal> ftm0clksel{}; 
        namespace Ftm0clkselValC{
            constexpr Register::FieldValue<decltype(ftm0clksel)::Type,Ftm0clkselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm0clksel)::Type,Ftm0clkselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm0clksel)::Type,Ftm0clkselVal::v10> v10{};
        }
        }
        ///FlexTimer 1 External Clock Pin Select
        enum class Ftm1clkselVal {
            v00=0x00000000,     ///<FTM1 external clock driven by FTM_CLK0 pin
            v01=0x00000001,     ///<FTM1 external clock driven by FTM_CLK1 pin
            v10=0x00000002,     ///<FTM1 external clock driven by FTM_CLK2 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Ftm1clkselVal> ftm1clksel{}; 
        namespace Ftm1clkselValC{
            constexpr Register::FieldValue<decltype(ftm1clksel)::Type,Ftm1clkselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm1clksel)::Type,Ftm1clkselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm1clksel)::Type,Ftm1clkselVal::v10> v10{};
        }
        }
        ///FlexTimer 3 External Clock Pin Select
        enum class Ftm3clkselVal {
            v00=0x00000000,     ///<FTM3 external clock driven by FTM_CLK0 pin
            v01=0x00000001,     ///<FTM3 external clock driven by FTM_CLK1 pin
            v10=0x00000002,     ///<FTM3 external clock driven by FTM_CLK2 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,Ftm3clkselVal> ftm3clksel{}; 
        namespace Ftm3clkselValC{
            constexpr Register::FieldValue<decltype(ftm3clksel)::Type,Ftm3clkselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm3clksel)::Type,Ftm3clkselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm3clksel)::Type,Ftm3clkselVal::v10> v10{};
        }
        }
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0x000f0070,0,unsigned>;
        ///Pincount identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pinid{}; 
        ///Device die number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> dieid{}; 
        ///Device revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
        ///Kinetis Series ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> seriesid{}; 
        ///Kinetis Sub-Family ID
        enum class SubfamidVal {
            v0000=0x00000000,     ///<KVx0 Subfamily (FlexTimer & MC_ADC)
            v0001=0x00000001,     ///<KVx1 Subfamily (FlexTimer & HS_ADC)
            v0010=0x00000002,     ///<KVx2 Subfamily (Reserved)
            v0011=0x00000003,     ///<KVx3 Subfamily (eFlexPWM & MC_ADC)
            v0100=0x00000004,     ///<KVx4 Subfamily (eFlexPWM & HS_ADC)
            v0101=0x00000005,     ///<KVx5 Subfamily (eFlexPWM with FlexTimer & MC_ADC)
            v0110=0x00000006,     ///<KVx6 Subfamily (eFlexPWM with FlexTimer & HS_ADC)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,SubfamidVal> subfamid{}; 
        namespace SubfamidValC{
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(subfamid)::Type,SubfamidVal::v0110> v0110{};
        }
        }
        ///Kinetis Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> familyid{}; 
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xf0f7f3bd,0,unsigned>;
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
        }
        ///Comparators Clock Gate Control
        enum class CmpVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,CmpVal> cmp{}; 
        namespace CmpValC{
            constexpr Register::FieldValue<decltype(cmp)::Type,CmpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmp)::Type,CmpVal::v1> v1{};
        }
        }
        ///eFlexPWM submodule 0 Clock Gate Control
        enum class Eflexpwm0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Eflexpwm0Val> eflexpwm0{}; 
        namespace Eflexpwm0ValC{
            constexpr Register::FieldValue<decltype(eflexpwm0)::Type,Eflexpwm0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eflexpwm0)::Type,Eflexpwm0Val::v1> v1{};
        }
        }
        ///eFlexPWM submodule 1 Clock Gate Control
        enum class Eflexpwm1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Eflexpwm1Val> eflexpwm1{}; 
        namespace Eflexpwm1ValC{
            constexpr Register::FieldValue<decltype(eflexpwm1)::Type,Eflexpwm1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eflexpwm1)::Type,Eflexpwm1Val::v1> v1{};
        }
        }
        ///eFlexPWM submodule 2 Clock Gate Control
        enum class Eflexpwm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Eflexpwm2Val> eflexpwm2{}; 
        namespace Eflexpwm2ValC{
            constexpr Register::FieldValue<decltype(eflexpwm2)::Type,Eflexpwm2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eflexpwm2)::Type,Eflexpwm2Val::v1> v1{};
        }
        }
        ///eFlexPWM submodule 3 Clock Gate Control
        enum class Eflexpwm3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Eflexpwm3Val> eflexpwm3{}; 
        namespace Eflexpwm3ValC{
            constexpr Register::FieldValue<decltype(eflexpwm3)::Type,Eflexpwm3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eflexpwm3)::Type,Eflexpwm3Val::v1> v1{};
        }
        }
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0xe1dfc1fe,0,unsigned>;
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
        ///no description available
        enum class EncVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,EncVal> enc{}; 
        namespace EncValC{
            constexpr Register::FieldValue<decltype(enc)::Type,EncVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enc)::Type,EncVal::v1> v1{};
        }
        }
        ///XBARA Clock Gate Control
        enum class XbaraVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,XbaraVal> xbara{}; 
        namespace XbaraValC{
            constexpr Register::FieldValue<decltype(xbara)::Type,XbaraVal::v0> v0{};
            constexpr Register::FieldValue<decltype(xbara)::Type,XbaraVal::v1> v1{};
        }
        }
        ///XBARB Clock Gate Control
        enum class XbarbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,XbarbVal> xbarb{}; 
        namespace XbarbValC{
            constexpr Register::FieldValue<decltype(xbarb)::Type,XbarbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(xbarb)::Type,XbarbVal::v1> v1{};
        }
        }
        ///AOI Clock Gate Control
        enum class AoiVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,AoiVal> aoi{}; 
        namespace AoiValC{
            constexpr Register::FieldValue<decltype(aoi)::Type,AoiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aoi)::Type,AoiVal::v1> v1{};
        }
        }
        ///ADC Clock Gate Control
        enum class AdcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,AdcVal> adc{}; 
        namespace AdcValC{
            constexpr Register::FieldValue<decltype(adc)::Type,AdcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc)::Type,AdcVal::v1> v1{};
        }
        }
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0x7c39ef8c,0,unsigned>;
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
        }
        ///FlexCAN0 Clock Gate Control
        enum class Flexcan0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Flexcan0Val> flexcan0{}; 
        namespace Flexcan0ValC{
            constexpr Register::FieldValue<decltype(flexcan0)::Type,Flexcan0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(flexcan0)::Type,Flexcan0Val::v1> v1{};
        }
        }
        ///FlexCAN1 Clock Gate Control
        enum class Flexcan1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Flexcan1Val> flexcan1{}; 
        namespace Flexcan1ValC{
            constexpr Register::FieldValue<decltype(flexcan1)::Type,Flexcan1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(flexcan1)::Type,Flexcan1Val::v1> v1{};
        }
        }
        ///FTM3 Clock Gate Control
        enum class Ftm3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ftm3Val> ftm3{}; 
        namespace Ftm3ValC{
            constexpr Register::FieldValue<decltype(ftm3)::Type,Ftm3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3)::Type,Ftm3Val::v1> v1{};
        }
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
        }
        ///PDB1 Clock Gate Control
        enum class Pdb1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Pdb1Val> pdb1{}; 
        namespace Pdb1ValC{
            constexpr Register::FieldValue<decltype(pdb1)::Type,Pdb1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pdb1)::Type,Pdb1Val::v1> v1{};
        }
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
        }
        ///PDB0 Clock Gate Control
        enum class Pdb0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Pdb0Val> pdb0{}; 
        namespace Pdb0ValC{
            constexpr Register::FieldValue<decltype(pdb0)::Type,Pdb0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pdb0)::Type,Pdb0Val::v1> v1{};
        }
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
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x40048040,0xfffffeff,0,unsigned>;
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
    }
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4004804c,0xf0fffffc,0,unsigned>;
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
        }
        ///Program flash size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> pfsize{}; 
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0x80ffffff,0,unsigned>;
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
    namespace SimClkdiv4{    ///<System Clock Divider Register 4
        using Addr = Register::Address<0x40048068,0xeffffff0,0,unsigned>;
        ///Trace clock divider fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tracefrac{}; 
        ///Trace clock divider divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> tracediv{}; 
        ///Debug Trace Divider Control
        enum class TracedivenVal {
            v0=0x00000000,     ///<Debug trace divider disabled
            v1=0x00000001,     ///<Debug trace divider enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,TracedivenVal> tracediven{}; 
        namespace TracedivenValC{
            constexpr Register::FieldValue<decltype(tracediven)::Type,TracedivenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tracediven)::Type,TracedivenVal::v1> v1{};
        }
        }
    }
    namespace SimMisctrl{    ///<Miscellaneous Control Register
        using Addr = Register::Address<0x4004806c,0xfff200ff,0,unsigned>;
        ///CMP Sample/Window Input 0 Source
        enum class Cmpwin0srcVal {
            v00=0x00000000,     ///<XBARA output 16.
            v01=0x00000001,     ///<CMP0 Sample/Window input is driven by both PDB0 and PDB1 pluse-out channel 0.
            v10=0x00000002,     ///<PDB0 pluse-out channel 0.
            v11=0x00000003,     ///<PDB1 pluse-out channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Cmpwin0srcVal> cmpwin0src{}; 
        namespace Cmpwin0srcValC{
            constexpr Register::FieldValue<decltype(cmpwin0src)::Type,Cmpwin0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cmpwin0src)::Type,Cmpwin0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cmpwin0src)::Type,Cmpwin0srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cmpwin0src)::Type,Cmpwin0srcVal::v11> v11{};
        }
        }
        ///CMP Sample/Window Input 1 Source
        enum class Cmpwin1srcVal {
            v00=0x00000000,     ///<XBARA output 17.
            v01=0x00000001,     ///<CMP1 Sample/Window input is driven by both PDB0 and PDB1 pluse-out channel 1.
            v10=0x00000002,     ///<PDB0 pluse-out channel 1.
            v11=0x00000003,     ///<PDB1 pluse-out channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Cmpwin1srcVal> cmpwin1src{}; 
        namespace Cmpwin1srcValC{
            constexpr Register::FieldValue<decltype(cmpwin1src)::Type,Cmpwin1srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cmpwin1src)::Type,Cmpwin1srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cmpwin1src)::Type,Cmpwin1srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cmpwin1src)::Type,Cmpwin1srcVal::v11> v11{};
        }
        }
        ///CMP Sample/Window Input 2 Source
        enum class Cmpwin2srcVal {
            v00=0x00000000,     ///<XBARA output 18.
            v01=0x00000001,     ///<CMP2 Sample/Window input is driven by both PDB0 and PDB1 pluse-out channel 2.
            v10=0x00000002,     ///<PDB0 pluse-out channel 2.
            v11=0x00000003,     ///<PDB1 pluse-out channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Cmpwin2srcVal> cmpwin2src{}; 
        namespace Cmpwin2srcValC{
            constexpr Register::FieldValue<decltype(cmpwin2src)::Type,Cmpwin2srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cmpwin2src)::Type,Cmpwin2srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cmpwin2src)::Type,Cmpwin2srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cmpwin2src)::Type,Cmpwin2srcVal::v11> v11{};
        }
        }
        ///CMP Sample/Window Input 3 Source
        enum class Cmpwin3srcVal {
            v00=0x00000000,     ///<XBARA output 19.
            v01=0x00000001,     ///<CMP3 Sample/Window input is driven by both PDB0 and PDB1 pluse-out channel 3.
            v10=0x00000002,     ///<PDB0 pluse-out channel 3.
            v11=0x00000003,     ///<PDB1 pluse-out channel 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Cmpwin3srcVal> cmpwin3src{}; 
        namespace Cmpwin3srcValC{
            constexpr Register::FieldValue<decltype(cmpwin3src)::Type,Cmpwin3srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cmpwin3src)::Type,Cmpwin3srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cmpwin3src)::Type,Cmpwin3srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cmpwin3src)::Type,Cmpwin3srcVal::v11> v11{};
        }
        }
        ///EWM_IN Source
        enum class EwminsrcVal {
            v0=0x00000000,     ///<XBARA output 58.
            v1=0x00000001,     ///<EWM_IN pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,EwminsrcVal> ewminsrc{}; 
        namespace EwminsrcValC{
            constexpr Register::FieldValue<decltype(ewminsrc)::Type,EwminsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ewminsrc)::Type,EwminsrcVal::v1> v1{};
        }
        }
        ///DAC0 Hardware Trigger Input Source
        enum class DactrigsrcVal {
            v00=0x00000000,     ///<XBARA output 15.
            v01=0x00000001,     ///<DAC0 can be triggered by both PDB0 interval trigger 0 and PDB1 interval trigger 0.
            v10=0x00000002,     ///<PDB0 interval trigger 0
            v11=0x00000003,     ///<PDB1 interval trigger 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,DactrigsrcVal> dactrigsrc{}; 
        namespace DactrigsrcValC{
            constexpr Register::FieldValue<decltype(dactrigsrc)::Type,DactrigsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dactrigsrc)::Type,DactrigsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(dactrigsrc)::Type,DactrigsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dactrigsrc)::Type,DactrigsrcVal::v11> v11{};
        }
        }
    }
    namespace SimMisctrl2{    ///<Miscellaneous Control Register 2
        using Addr = Register::Address<0x40048070,0xff0cc0ff,0,unsigned>;
        ///Synchronize XBARA's Input PIT Trigger 0 with fast clock
        enum class Syncxbarapittrig0Val {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Syncxbarapittrig0Val> syncxbarapittrig0{}; 
        namespace Syncxbarapittrig0ValC{
            constexpr Register::FieldValue<decltype(syncxbarapittrig0)::Type,Syncxbarapittrig0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(syncxbarapittrig0)::Type,Syncxbarapittrig0Val::v1> v1{};
        }
        }
        ///Synchronize XBARA's Input PIT Trigger 1 with fast clock
        enum class Syncxbarapittrig1Val {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Syncxbarapittrig1Val> syncxbarapittrig1{}; 
        namespace Syncxbarapittrig1ValC{
            constexpr Register::FieldValue<decltype(syncxbarapittrig1)::Type,Syncxbarapittrig1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(syncxbarapittrig1)::Type,Syncxbarapittrig1Val::v1> v1{};
        }
        }
        ///Synchronize XBARA's Input PIT Trigger 2 with fast clock
        enum class Syncxbarapittrig2Val {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Syncxbarapittrig2Val> syncxbarapittrig2{}; 
        namespace Syncxbarapittrig2ValC{
            constexpr Register::FieldValue<decltype(syncxbarapittrig2)::Type,Syncxbarapittrig2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(syncxbarapittrig2)::Type,Syncxbarapittrig2Val::v1> v1{};
        }
        }
        ///Synchronize XBARA's Input PIT Trigger 3 with fast clock
        enum class Syncxbarapittrig3Val {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Syncxbarapittrig3Val> syncxbarapittrig3{}; 
        namespace Syncxbarapittrig3ValC{
            constexpr Register::FieldValue<decltype(syncxbarapittrig3)::Type,Syncxbarapittrig3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(syncxbarapittrig3)::Type,Syncxbarapittrig3Val::v1> v1{};
        }
        }
        ///Synchronize XBARB's Input PIT Trigger 0 with fast clock
        enum class Syncxbarbpittrig0Val {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Syncxbarbpittrig0Val> syncxbarbpittrig0{}; 
        namespace Syncxbarbpittrig0ValC{
            constexpr Register::FieldValue<decltype(syncxbarbpittrig0)::Type,Syncxbarbpittrig0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(syncxbarbpittrig0)::Type,Syncxbarbpittrig0Val::v1> v1{};
        }
        }
        ///Synchronize XBARB's Input PIT Trigger 1 with fast clock
        enum class Syncxbarbpittrig1Val {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Syncxbarbpittrig1Val> syncxbarbpittrig1{}; 
        namespace Syncxbarbpittrig1ValC{
            constexpr Register::FieldValue<decltype(syncxbarbpittrig1)::Type,Syncxbarbpittrig1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(syncxbarbpittrig1)::Type,Syncxbarbpittrig1Val::v1> v1{};
        }
        }
        ///Synchronize XBARA's output for DAC Hardware Trigger with flash/slow clock
        enum class SyncdachwtrigVal {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SyncdachwtrigVal> syncdachwtrig{}; 
        namespace SyncdachwtrigValC{
            constexpr Register::FieldValue<decltype(syncdachwtrig)::Type,SyncdachwtrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(syncdachwtrig)::Type,SyncdachwtrigVal::v1> v1{};
        }
        }
        ///Synchronize XBARA's output for EWM's ewm_in with flash/slow clock
        enum class SyncewminVal {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,SyncewminVal> syncewmin{}; 
        namespace SyncewminValC{
            constexpr Register::FieldValue<decltype(syncewmin)::Type,SyncewminVal::v0> v0{};
            constexpr Register::FieldValue<decltype(syncewmin)::Type,SyncewminVal::v1> v1{};
        }
        }
        ///Synchronize XBARA's output for CMP0's Sample/Window Input with flash/slow clock
        enum class Synccmp0samplewinVal {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Synccmp0samplewinVal> synccmp0samplewin{}; 
        namespace Synccmp0samplewinValC{
            constexpr Register::FieldValue<decltype(synccmp0samplewin)::Type,Synccmp0samplewinVal::v0> v0{};
            constexpr Register::FieldValue<decltype(synccmp0samplewin)::Type,Synccmp0samplewinVal::v1> v1{};
        }
        }
        ///Synchronize XBARA's output for CMP1's Sample/Window Input with flash/slow clock
        enum class Synccmp1samplewinVal {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Synccmp1samplewinVal> synccmp1samplewin{}; 
        namespace Synccmp1samplewinValC{
            constexpr Register::FieldValue<decltype(synccmp1samplewin)::Type,Synccmp1samplewinVal::v0> v0{};
            constexpr Register::FieldValue<decltype(synccmp1samplewin)::Type,Synccmp1samplewinVal::v1> v1{};
        }
        }
        ///Synchronize XBARA's output for CMP2's Sample/Window Input with flash/slow clock
        enum class Synccmp2samplewinVal {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Synccmp2samplewinVal> synccmp2samplewin{}; 
        namespace Synccmp2samplewinValC{
            constexpr Register::FieldValue<decltype(synccmp2samplewin)::Type,Synccmp2samplewinVal::v0> v0{};
            constexpr Register::FieldValue<decltype(synccmp2samplewin)::Type,Synccmp2samplewinVal::v1> v1{};
        }
        }
        ///Synchronize XBARA's output for CMP3's Sample/Window Input with flash/slow clock
        enum class Synccmp3samplewinVal {
            v0=0x00000000,     ///<Disable, bypass synchronizer.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Synccmp3samplewinVal> synccmp3samplewin{}; 
        namespace Synccmp3samplewinValC{
            constexpr Register::FieldValue<decltype(synccmp3samplewin)::Type,Synccmp3samplewinVal::v0> v0{};
            constexpr Register::FieldValue<decltype(synccmp3samplewin)::Type,Synccmp3samplewinVal::v1> v1{};
        }
        }
    }
    namespace SimWdogc{    ///<WDOG Control Register
        using Addr = Register::Address<0x40048100,0xfffffffd,0,unsigned>;
        ///WDOG Clock Select
        enum class WdogclksVal {
            v0=0x00000000,     ///<Internal 1 kHz clock is source to WDOG2008
            v1=0x00000001,     ///<MCGIRCLK is source to WDOG2008
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WdogclksVal> wdogclks{}; 
        namespace WdogclksValC{
            constexpr Register::FieldValue<decltype(wdogclks)::Type,WdogclksVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wdogclks)::Type,WdogclksVal::v1> v1{};
        }
        }
    }
    namespace SimPwrc{    ///<Power Control Register
        using Addr = Register::Address<0x40048104,0xfffefc30,0,unsigned>;
        ///Nanoedge Regulator 2.7V and 1.2V Supply Powerdown Control
        enum class SrpdnVal {
            v00=0x00000000,     ///<Nanoedge regulator placed in normal mode.
            v01=0x00000001,     ///<Nanoedge regulator placed in powerdown mode.
            v10=0x00000002,     ///<Nanoedge regulator placed in normal mode and SRPDN is write protected until chip reset.
            v11=0x00000003,     ///<Nanoedge regulator placed in powerdown mode and SRPDN is write protected until chip reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrpdnVal> srpdn{}; 
        namespace SrpdnValC{
            constexpr Register::FieldValue<decltype(srpdn)::Type,SrpdnVal::v00> v00{};
            constexpr Register::FieldValue<decltype(srpdn)::Type,SrpdnVal::v01> v01{};
            constexpr Register::FieldValue<decltype(srpdn)::Type,SrpdnVal::v10> v10{};
            constexpr Register::FieldValue<decltype(srpdn)::Type,SrpdnVal::v11> v11{};
        }
        }
        ///Nanoedge Regulator 2.7 V Supply Standby Control
        enum class Sr27stdbyVal {
            v00=0x00000000,     ///<Nanoedge regulator 2.7 V placed in normal mode.
            v01=0x00000001,     ///<Nanoedge regulator 2.7 V placed in standby mode.
            v10=0x00000002,     ///<Nanoedge regulator 2.7 V supply placed in normal mode and SR27STDBY is write protected until chip reset.
            v11=0x00000003,     ///<Nanoedge regulator 2.7 V supply placed in standby mode and SR27STDBY is write protected until chip reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Sr27stdbyVal> sr27stdby{}; 
        namespace Sr27stdbyValC{
            constexpr Register::FieldValue<decltype(sr27stdby)::Type,Sr27stdbyVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sr27stdby)::Type,Sr27stdbyVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sr27stdby)::Type,Sr27stdbyVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sr27stdby)::Type,Sr27stdbyVal::v11> v11{};
        }
        }
        ///Nanoedge Regulator 1.2 V Supply Standby Control
        enum class Sr12stdbyVal {
            v00=0x00000000,     ///<Nanoedge regulator 1.2 V supply placed in normal mode
            v01=0x00000001,     ///<Nanoedge regulator 1.2 V supply placed in standby mode.
            v10=0x00000002,     ///<Nanoedge regulator 1.2 V supply placed in normal mode and SR12STDBY is write protected until chip reset.
            v11=0x00000003,     ///<Nanoedge regulator 1.2 V supply placed in standby mode and SR12STDBY is write protected until chip reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Sr12stdbyVal> sr12stdby{}; 
        namespace Sr12stdbyValC{
            constexpr Register::FieldValue<decltype(sr12stdby)::Type,Sr12stdbyVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sr12stdby)::Type,Sr12stdbyVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sr12stdby)::Type,Sr12stdbyVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sr12stdby)::Type,Sr12stdbyVal::v11> v11{};
        }
        }
        ///Nanoedge PMC POWER Dectect Enable
        enum class SrpwrdetenVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrpwrdetenVal> srpwrdeten{}; 
        namespace SrpwrdetenValC{
            constexpr Register::FieldValue<decltype(srpwrdeten)::Type,SrpwrdetenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srpwrdeten)::Type,SrpwrdetenVal::v1> v1{};
        }
        }
        ///Nanoedge PMC POWER Ready
        enum class SrpwrrdyVal {
            v0=0x00000000,     ///<Not ready
            v1=0x00000001,     ///<Assert PMC power output ready
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SrpwrrdyVal> srpwrrdy{}; 
        namespace SrpwrrdyValC{
            constexpr Register::FieldValue<decltype(srpwrrdy)::Type,SrpwrrdyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srpwrrdy)::Type,SrpwrrdyVal::v1> v1{};
        }
        }
        ///Nanoedge PMC Status
        enum class SrpwrokVal {
            v0=0x00000000,     ///<Power supply for nanoedge isn't ready.
            v1=0x00000001,     ///<Power supply for nanoedge is OK.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrpwrokVal> srpwrok{}; 
        namespace SrpwrokValC{
            constexpr Register::FieldValue<decltype(srpwrok)::Type,SrpwrokVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srpwrok)::Type,SrpwrokVal::v1> v1{};
        }
        }
    }
    namespace SimAdcopt{    ///<ADC Channel 6/7 Mux Control Register
        using Addr = Register::Address<0x40048108,0xfcff8888,0,unsigned>;
        ///ADCA MUX0 selection for ADCA channel 6
        enum class Adcach6selVal {
            v000=0x00000000,     ///<ADCA MUX0's channel a.
            v001=0x00000001,     ///<ADCA MUX0's channel b.
            v010=0x00000002,     ///<ADCA MUX0's channel c.
            v011=0x00000003,     ///<ADCA MUX0's channel d.
            v100=0x00000004,     ///<ADCA MUX0's channel e.
            v110=0x00000006,     ///<ADCA MUX0's channel g.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,Adcach6selVal> adcach6sel{}; 
        namespace Adcach6selValC{
            constexpr Register::FieldValue<decltype(adcach6sel)::Type,Adcach6selVal::v000> v000{};
            constexpr Register::FieldValue<decltype(adcach6sel)::Type,Adcach6selVal::v001> v001{};
            constexpr Register::FieldValue<decltype(adcach6sel)::Type,Adcach6selVal::v010> v010{};
            constexpr Register::FieldValue<decltype(adcach6sel)::Type,Adcach6selVal::v011> v011{};
            constexpr Register::FieldValue<decltype(adcach6sel)::Type,Adcach6selVal::v100> v100{};
            constexpr Register::FieldValue<decltype(adcach6sel)::Type,Adcach6selVal::v110> v110{};
        }
        }
        ///ADCA MUX1 selection for ADCA channel 7
        enum class Adcach7selVal {
            v000=0x00000000,     ///<ADCA MUX1's channel a.
            v001=0x00000001,     ///<ADCA MUX1's channel b.
            v010=0x00000002,     ///<ADCA MUX1's channel c.
            v100=0x00000004,     ///<ADCA MUX1's channel e.
            v101=0x00000005,     ///<ADCA MUX1's channel f.
            v110=0x00000006,     ///<ADCA MUX1's channel g.
            v111=0x00000007,     ///<PMC 1V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,Adcach7selVal> adcach7sel{}; 
        namespace Adcach7selValC{
            constexpr Register::FieldValue<decltype(adcach7sel)::Type,Adcach7selVal::v000> v000{};
            constexpr Register::FieldValue<decltype(adcach7sel)::Type,Adcach7selVal::v001> v001{};
            constexpr Register::FieldValue<decltype(adcach7sel)::Type,Adcach7selVal::v010> v010{};
            constexpr Register::FieldValue<decltype(adcach7sel)::Type,Adcach7selVal::v100> v100{};
            constexpr Register::FieldValue<decltype(adcach7sel)::Type,Adcach7selVal::v101> v101{};
            constexpr Register::FieldValue<decltype(adcach7sel)::Type,Adcach7selVal::v110> v110{};
            constexpr Register::FieldValue<decltype(adcach7sel)::Type,Adcach7selVal::v111> v111{};
        }
        }
        ///ADCB MUX1 selection for ADCB channel 6
        enum class Adcbch6selVal {
            v000=0x00000000,     ///<ADCB MUX0's channel a.
            v001=0x00000001,     ///<ADCB MUX0's channel b.
            v010=0x00000002,     ///<ADCB MUX0's channel c.
            v011=0x00000003,     ///<ADCB MUX0's channel d.
            v100=0x00000004,     ///<ADCB MUX0's channel e.
            v101=0x00000005,     ///<ADCB MUX0's channel f.
            v110=0x00000006,     ///<ADCB MUX0's channel g.
            v111=0x00000007,     ///<PMC 1V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Adcbch6selVal> adcbch6sel{}; 
        namespace Adcbch6selValC{
            constexpr Register::FieldValue<decltype(adcbch6sel)::Type,Adcbch6selVal::v000> v000{};
            constexpr Register::FieldValue<decltype(adcbch6sel)::Type,Adcbch6selVal::v001> v001{};
            constexpr Register::FieldValue<decltype(adcbch6sel)::Type,Adcbch6selVal::v010> v010{};
            constexpr Register::FieldValue<decltype(adcbch6sel)::Type,Adcbch6selVal::v011> v011{};
            constexpr Register::FieldValue<decltype(adcbch6sel)::Type,Adcbch6selVal::v100> v100{};
            constexpr Register::FieldValue<decltype(adcbch6sel)::Type,Adcbch6selVal::v101> v101{};
            constexpr Register::FieldValue<decltype(adcbch6sel)::Type,Adcbch6selVal::v110> v110{};
            constexpr Register::FieldValue<decltype(adcbch6sel)::Type,Adcbch6selVal::v111> v111{};
        }
        }
        ///ADCB MUX1 selection for ADCB channel 7
        enum class Adcbch7selVal {
            v000=0x00000000,     ///<ADCB MUX1's channel a.
            v001=0x00000001,     ///<ADCB MUX1's channel b.
            v010=0x00000002,     ///<ADCB MUX1's channel c.
            v011=0x00000003,     ///<ADCB MUX1's channel d.
            v100=0x00000004,     ///<ADCB MUX1's channel e.
            v101=0x00000005,     ///<ADCB MUX1's channel f.
            v110=0x00000006,     ///<ADCB MUX1's channel g.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,Adcbch7selVal> adcbch7sel{}; 
        namespace Adcbch7selValC{
            constexpr Register::FieldValue<decltype(adcbch7sel)::Type,Adcbch7selVal::v000> v000{};
            constexpr Register::FieldValue<decltype(adcbch7sel)::Type,Adcbch7selVal::v001> v001{};
            constexpr Register::FieldValue<decltype(adcbch7sel)::Type,Adcbch7selVal::v010> v010{};
            constexpr Register::FieldValue<decltype(adcbch7sel)::Type,Adcbch7selVal::v011> v011{};
            constexpr Register::FieldValue<decltype(adcbch7sel)::Type,Adcbch7selVal::v100> v100{};
            constexpr Register::FieldValue<decltype(adcbch7sel)::Type,Adcbch7selVal::v101> v101{};
            constexpr Register::FieldValue<decltype(adcbch7sel)::Type,Adcbch7selVal::v110> v110{};
        }
        }
        ///Enable ADC low current Mode
        enum class RosbVal {
            v0=0x00000000,     ///<Disable ADC low current mode.
            v1=0x00000001,     ///<Enable ADC low current mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,RosbVal> rosb{}; 
        namespace RosbValC{
            constexpr Register::FieldValue<decltype(rosb)::Type,RosbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rosb)::Type,RosbVal::v1> v1{};
        }
        }
        ///ADC Clock Status
        enum class AdcirclkVal {
            v0=0x00000000,     ///<ADC clock is fast peripherial clock.
            v1=0x00000001,     ///<ADC clock is MCGIRCLK.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,AdcirclkVal> adcirclk{}; 
        namespace AdcirclkValC{
            constexpr Register::FieldValue<decltype(adcirclk)::Type,AdcirclkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adcirclk)::Type,AdcirclkVal::v1> v1{};
        }
        }
    }
}
