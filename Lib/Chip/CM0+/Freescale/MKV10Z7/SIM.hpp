#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0xfff3ffff,0,unsigned>;
        ///32K Oscillator Clock Select
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
        using Addr = Register::Address<0x40048004,0xfcffff1f,0,unsigned>;
        ///CLKOUT Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> clkoutsel{}; 
        ///FTM Fixed Frequency Clock Select
        enum class FtmffclkselVal {
            v00=0x00000000,     ///<MCGFFCLK
            v01=0x00000001,     ///<MCGIRCLK
            v10=0x00000002,     ///<OSCERCLK
            v11=0x00000003,     ///<MCGFFCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,FtmffclkselVal> ftmffclksel{}; 
        namespace FtmffclkselValC{
            constexpr Register::FieldValue<decltype(ftmffclksel)::Type,FtmffclkselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftmffclksel)::Type,FtmffclkselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftmffclksel)::Type,FtmffclkselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ftmffclksel)::Type,FtmffclkselVal::v11> v11{};
        }
        }
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0xc0830070,0,unsigned>;
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
        ///FTM1 Fault 0 Select
        enum class Ftm1flt0Val {
            v0=0x00000000,     ///<FTM1_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ftm1flt0Val> ftm1flt0{}; 
        namespace Ftm1flt0ValC{
            constexpr Register::FieldValue<decltype(ftm1flt0)::Type,Ftm1flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1flt0)::Type,Ftm1flt0Val::v1> v1{};
        }
        }
        ///FTM2 Fault 0 Select
        enum class Ftm2flt0Val {
            v0=0x00000000,     ///<FTM2_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ftm2flt0Val> ftm2flt0{}; 
        namespace Ftm2flt0ValC{
            constexpr Register::FieldValue<decltype(ftm2flt0)::Type,Ftm2flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2flt0)::Type,Ftm2flt0Val::v1> v1{};
        }
        }
        ///FlexTimer 0 Hardware Trigger 0 Source Select
        enum class Ftm0trg0srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM0 hardware trigger 0
            v1=0x00000001,     ///<FTM1 channel match drives FTM0 hardware trigger 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ftm0trg0srcVal> ftm0trg0src{}; 
        namespace Ftm0trg0srcValC{
            constexpr Register::FieldValue<decltype(ftm0trg0src)::Type,Ftm0trg0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0trg0src)::Type,Ftm0trg0srcVal::v1> v1{};
        }
        }
        ///FlexTimer 0 Hardware Trigger 1 Source Select
        enum class Ftm0trg1srcVal {
            v0=0x00000000,     ///<PDB channel 1 trigger drives FTM0 hardware trigger 1
            v1=0x00000001,     ///<FTM2 channel match drives FTM0 hardware trigger 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ftm0trg1srcVal> ftm0trg1src{}; 
        namespace Ftm0trg1srcValC{
            constexpr Register::FieldValue<decltype(ftm0trg1src)::Type,Ftm0trg1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0trg1src)::Type,Ftm0trg1srcVal::v1> v1{};
        }
        }
        ///FlexTimer 0 Hardware Trigger 2 Source Select
        enum class Ftm0trg2srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM0 hardware trigger 2
            v1=0x00000001,     ///<HSCMP1 output drives FTM0 hardware trigger 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ftm0trg2srcVal> ftm0trg2src{}; 
        namespace Ftm0trg2srcValC{
            constexpr Register::FieldValue<decltype(ftm0trg2src)::Type,Ftm0trg2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0trg2src)::Type,Ftm0trg2srcVal::v1> v1{};
        }
        }
        ///FlexTimer 1 Hardware Trigger 0 Source Select
        enum class Ftm1trg0srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM1 hardware trigger 0
            v1=0x00000001,     ///<FTM0 channel match drives FTM1 hardware trigger 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ftm1trg0srcVal> ftm1trg0src{}; 
        namespace Ftm1trg0srcValC{
            constexpr Register::FieldValue<decltype(ftm1trg0src)::Type,Ftm1trg0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1trg0src)::Type,Ftm1trg0srcVal::v1> v1{};
        }
        }
        ///FlexTimer 1 Hardware Trigger 1 Source Select
        enum class Ftm1trg1srcVal {
            v0=0x00000000,     ///<PDB channel 1 trigger drives FTM1 hardware trigger 1
            v1=0x00000001,     ///<FTM2 channel match drives FTM1 hardware trigger 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ftm1trg1srcVal> ftm1trg1src{}; 
        namespace Ftm1trg1srcValC{
            constexpr Register::FieldValue<decltype(ftm1trg1src)::Type,Ftm1trg1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1trg1src)::Type,Ftm1trg1srcVal::v1> v1{};
        }
        }
        ///FlexTimer 1 Hardware Trigger 2 Source Select
        enum class Ftm1trg2srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM1 hardware trigger 2
            v1=0x00000001,     ///<HSCMP1 output drives FTM1 hardware trigger 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ftm1trg2srcVal> ftm1trg2src{}; 
        namespace Ftm1trg2srcValC{
            constexpr Register::FieldValue<decltype(ftm1trg2src)::Type,Ftm1trg2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1trg2src)::Type,Ftm1trg2srcVal::v1> v1{};
        }
        }
        ///FlexTimer 2 Hardware Trigger 0 Source Select
        enum class Ftm2trg0srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM2 hardware trigger 0
            v1=0x00000001,     ///<FTM0 channel match drives FTM2 hardware trigger 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ftm2trg0srcVal> ftm2trg0src{}; 
        namespace Ftm2trg0srcValC{
            constexpr Register::FieldValue<decltype(ftm2trg0src)::Type,Ftm2trg0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2trg0src)::Type,Ftm2trg0srcVal::v1> v1{};
        }
        }
        ///FlexTimer 2 Hardware Trigger 1 Source Select
        enum class Ftm2trg1srcVal {
            v0=0x00000000,     ///<PDB output trigger 1 drives FTM2 hardware trigger 1
            v1=0x00000001,     ///<FTM1 channel match drives FTM2 hardware trigger 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ftm2trg1srcVal> ftm2trg1src{}; 
        namespace Ftm2trg1srcValC{
            constexpr Register::FieldValue<decltype(ftm2trg1src)::Type,Ftm2trg1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2trg1src)::Type,Ftm2trg1srcVal::v1> v1{};
        }
        }
        ///FlexTimer 2 Hardware Trigger 2 Source Select
        enum class Ftm2trg2srcVal {
            v0=0x00000000,     ///<HSCMP0 output drives FTM2 hardware trigger 2
            v1=0x00000001,     ///<HSCMP1 output drives FTM2 hardware trigger 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ftm2trg2srcVal> ftm2trg2src{}; 
        namespace Ftm2trg2srcValC{
            constexpr Register::FieldValue<decltype(ftm2trg2src)::Type,Ftm2trg2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2trg2src)::Type,Ftm2trg2srcVal::v1> v1{};
        }
        }
        ///FTM1 Channel 0 Input Capture Source Select
        enum class Ftm1ich0srcVal {
            v00=0x00000000,     ///<FTM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Ftm1ich0srcVal> ftm1ich0src{}; 
        namespace Ftm1ich0srcValC{
            constexpr Register::FieldValue<decltype(ftm1ich0src)::Type,Ftm1ich0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm1ich0src)::Type,Ftm1ich0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm1ich0src)::Type,Ftm1ich0srcVal::v10> v10{};
        }
        }
        ///FTM2 Channel 0 Input Capture Source Select
        enum class Ftm2ich0srcVal {
            v00=0x00000000,     ///<FTM2_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Ftm2ich0srcVal> ftm2ich0src{}; 
        namespace Ftm2ich0srcValC{
            constexpr Register::FieldValue<decltype(ftm2ich0src)::Type,Ftm2ich0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm2ich0src)::Type,Ftm2ich0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm2ich0src)::Type,Ftm2ich0srcVal::v10> v10{};
        }
        }
        ///FTM2 Channel 1 Input Capture Source Select
        enum class Ftm2ich1srcVal {
            v0=0x00000000,     ///<FTM2_CH1 pin is fed to FTM2 CH1
            v1=0x00000001,     ///<FTM2_CH1 pin XOR FTM2_CH0 pin XOR FTM1_CH1 pin is fed to FTM2 CH1 If this field is set, then the three input pins feed FTM2 channel 1 input capture. In this case, FTM1 channel 1 cannot be used for input capture of FTM1, as it has no pin. FTM1 channel1 can be used for Output Compare mode of FTM1, though without an output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ftm2ich1srcVal> ftm2ich1src{}; 
        namespace Ftm2ich1srcValC{
            constexpr Register::FieldValue<decltype(ftm2ich1src)::Type,Ftm2ich1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2ich1src)::Type,Ftm2ich1srcVal::v1> v1{};
        }
        }
        ///FTM0 External Clock Pin Select
        enum class Ftm0clkselVal {
            v00=0x00000000,     ///<FTM0 external clock driven by FTM_CLKIN0 pin
            v01=0x00000001,     ///<FTM0 external clock driven by FTM_CLKIN1 pin
            v10=0x00000002,     ///<FTM0 external clock driven by FTM_CLKIN2 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Ftm0clkselVal> ftm0clksel{}; 
        namespace Ftm0clkselValC{
            constexpr Register::FieldValue<decltype(ftm0clksel)::Type,Ftm0clkselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm0clksel)::Type,Ftm0clkselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm0clksel)::Type,Ftm0clkselVal::v10> v10{};
        }
        }
        ///FTM1 External Clock Pin Select
        enum class Ftm1clkselVal {
            v00=0x00000000,     ///<FTM1 external clock driven by FTM_CLKIN0 pin
            v01=0x00000001,     ///<FTM1 external clock driven by FTM_CLKIN1 pin
            v10=0x00000002,     ///<FTM1 external clock driven by FTM_CLKIN2 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Ftm1clkselVal> ftm1clksel{}; 
        namespace Ftm1clkselValC{
            constexpr Register::FieldValue<decltype(ftm1clksel)::Type,Ftm1clkselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm1clksel)::Type,Ftm1clkselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm1clksel)::Type,Ftm1clkselVal::v10> v10{};
        }
        }
        ///FTM2 External Clock Pin Select
        enum class Ftm2clkselVal {
            v00=0x00000000,     ///<FTM2 external clock driven by FTM_CLKIN0 pin
            v01=0x00000001,     ///<FTM2 external clock driven by FTM_CLKIN1 pin
            v10=0x00000002,     ///<FTM2 external clock driven by FTM_CLKIN2 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,Ftm2clkselVal> ftm2clksel{}; 
        namespace Ftm2clkselValC{
            constexpr Register::FieldValue<decltype(ftm2clksel)::Type,Ftm2clkselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm2clksel)::Type,Ftm2clkselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm2clksel)::Type,Ftm2clkselVal::v10> v10{};
        }
        }
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xfffcff00,0,unsigned>;
        ///UART 0 Transmit Data Source Select
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
        }
        ///UART 0 Receive Data Source Select
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
        ///UART 1 Transmit Data Source Select
        enum class Uart1txsrcVal {
            v00=0x00000000,     ///<UART1_TX pin
            v01=0x00000001,     ///<UART1_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART1_TX pin modulated with FTM2 channel 0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Uart1txsrcVal> uart1txsrc{}; 
        namespace Uart1txsrcValC{
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v10> v10{};
        }
        }
        ///UART 1 Receive Data Source Select
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
        ///UART0 Open Drain Enable
        enum class Uart0odeVal {
            v0=0x00000000,     ///<Open drain is disabled on UART0
            v1=0x00000001,     ///<Open drain is enabled on UART0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Uart0odeVal> uart0ode{}; 
        namespace Uart0odeValC{
            constexpr Register::FieldValue<decltype(uart0ode)::Type,Uart0odeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0ode)::Type,Uart0odeVal::v1> v1{};
        }
        }
        ///UART1 Open Drain Enable
        enum class Uart1odeVal {
            v0=0x00000000,     ///<Open drain is disabled on UART1
            v1=0x00000001,     ///<Open drain is enabled on UART1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Uart1odeVal> uart1ode{}; 
        namespace Uart1odeValC{
            constexpr Register::FieldValue<decltype(uart1ode)::Type,Uart1odeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1ode)::Type,Uart1odeVal::v1> v1{};
        }
        }
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xf0ff6060,0,unsigned>;
        ///ADC0 Trigger Select
        enum class Adc0trgselVal {
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
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1110> v1110{};
        }
        }
        ///ADC0 Pre-trigger Select
        enum class Adc0pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A for ADC0. Clearing this field will result in ADHWTSA=1 and ADHWTSB=0.
            v1=0x00000001,     ///<Pre-trigger B for ADC0. Setting this bit will result in ADHWTSA=0 and ADHWTSB=1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adc0pretrgselVal> adc0pretrgsel{}; 
        namespace Adc0pretrgselValC{
            constexpr Register::FieldValue<decltype(adc0pretrgsel)::Type,Adc0pretrgselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0pretrgsel)::Type,Adc0pretrgselVal::v1> v1{};
        }
        }
        ///ADC0 Alternate Trigger Enable
        enum class Adc0alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC0
            v1=0x00000001,     ///<Alternate trigger selected for ADC0 as defined by ADC0TRGSEL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Adc0alttrgenVal> adc0alttrgen{}; 
        namespace Adc0alttrgenValC{
            constexpr Register::FieldValue<decltype(adc0alttrgen)::Type,Adc0alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0alttrgen)::Type,Adc0alttrgenVal::v1> v1{};
        }
        }
        ///ADC1 Trigger Select
        enum class Adc1trgselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Adc1trgselVal> adc1trgsel{}; 
        namespace Adc1trgselValC{
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1110> v1110{};
        }
        }
        ///ADC1 Pre-trigger Select
        enum class Adc1pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A for ADC1. Clearing this field will result in ADHWTSA=1 and ADHWTSB=0.
            v1=0x00000001,     ///<Pre-trigger B for ADC1. Setting this bit will result in ADHWTSA=0 and ADHWTSB=1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Adc1pretrgselVal> adc1pretrgsel{}; 
        namespace Adc1pretrgselValC{
            constexpr Register::FieldValue<decltype(adc1pretrgsel)::Type,Adc1pretrgselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1pretrgsel)::Type,Adc1pretrgselVal::v1> v1{};
        }
        }
        ///ADC1 Alternate Trigger Enable
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
        ///ADC0 ALT Clock Source Select
        enum class Adc0altclksrcVal {
            v00=0x00000000,     ///<OUTDIV5 output
            v01=0x00000001,     ///<MCGIRCLK
            v10=0x00000002,     ///<OSCERCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Adc0altclksrcVal> adc0altclksrc{}; 
        namespace Adc0altclksrcValC{
            constexpr Register::FieldValue<decltype(adc0altclksrc)::Type,Adc0altclksrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(adc0altclksrc)::Type,Adc0altclksrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(adc0altclksrc)::Type,Adc0altclksrcVal::v10> v10{};
        }
        }
        ///ADC1 ALT Clock Source Select
        enum class Adc1altclksrcVal {
            v00=0x00000000,     ///<OUTDIV5 output
            v01=0x00000001,     ///<MCGIRCLK
            v10=0x00000002,     ///<OSCERCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Adc1altclksrcVal> adc1altclksrc{}; 
        namespace Adc1altclksrcValC{
            constexpr Register::FieldValue<decltype(adc1altclksrc)::Type,Adc1altclksrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(adc1altclksrc)::Type,Adc1altclksrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(adc1altclksrc)::Type,Adc1altclksrcVal::v10> v10{};
        }
        }
    }
    namespace SimSopt8{    ///<System Options Register 8
        using Addr = Register::Address<0x4004801c,0xff00fef8,0,unsigned>;
        ///FlexTimer 0 Hardware Trigger 0 configure by software
        enum class Ftm0syncbitVal {
            v0=0x00000000,     ///<No effect to FTM0; this allow the hardware trigger options to function as expected. See SOPT4[FTM0TRG0SRC].
            v1=0x00000001,     ///<If TRIG0 enabled, this refreshes the FTM0CNTIN and all buffered registers of the FTM0 (must write 0 first then write 1); this masks the hardware trigger.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ftm0syncbitVal> ftm0syncbit{}; 
        namespace Ftm0syncbitValC{
            constexpr Register::FieldValue<decltype(ftm0syncbit)::Type,Ftm0syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0syncbit)::Type,Ftm0syncbitVal::v1> v1{};
        }
        }
        ///FlexTimer 1 Hardware Trigger 0 configure by software
        enum class Ftm1syncbitVal {
            v0=0x00000000,     ///<No effect to FTM1; this allows the hardware trigger options to function as expected. See SOPT4[FTM1TRG0SRC].
            v1=0x00000001,     ///<If TRIG0 enabled, this refreshes the FTM1CNTIN and all buffered registers of the FTM1 (must write 0 first then write 1); this masks the hardware trigger.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ftm1syncbitVal> ftm1syncbit{}; 
        namespace Ftm1syncbitValC{
            constexpr Register::FieldValue<decltype(ftm1syncbit)::Type,Ftm1syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1syncbit)::Type,Ftm1syncbitVal::v1> v1{};
        }
        }
        ///FlexTimer 2 Hardware Trigger 0 configure by software
        enum class Ftm2syncbitVal {
            v0=0x00000000,     ///<No effect to FTM2; this allows the hardware trigger options to function as expected. See SOPT4[FTM2TRG0SRC].
            v1=0x00000001,     ///<If TRIG0 is enabled, this refreshes the FTM2CNTIN and all buffered registers of the FTM2 (must write 0 first then write 1); this masks the hardware trigger.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ftm2syncbitVal> ftm2syncbit{}; 
        namespace Ftm2syncbitValC{
            constexpr Register::FieldValue<decltype(ftm2syncbit)::Type,Ftm2syncbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2syncbit)::Type,Ftm2syncbitVal::v1> v1{};
        }
        }
        ///Carrier frequency selection for FTM0/2 output channel
        enum class CarrierselectVal {
            v0=0x00000000,     ///<FTM1_CH1 output provides the carrier signal for Timer Modulation mode
            v1=0x00000001,     ///<LPTMR0 prescaler output provides the carrier signal for Timer Modulation mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CarrierselectVal> carrierSelect{}; 
        namespace CarrierselectValC{
            constexpr Register::FieldValue<decltype(carrierSelect)::Type,CarrierselectVal::v0> v0{};
            constexpr Register::FieldValue<decltype(carrierSelect)::Type,CarrierselectVal::v1> v1{};
        }
        }
        ///FTM0 channel 0 output PWM/OCMP mode source select
        enum class Ftm0och0srcVal {
            v0=0x00000000,     ///<FTM0CH0 pin is the output of FTM0 channel 0 PWM/OCMP
            v1=0x00000001,     ///<FTM0CH0 pin is the output of FTM0 channel 0 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ftm0och0srcVal> ftm0och0src{}; 
        namespace Ftm0och0srcValC{
            constexpr Register::FieldValue<decltype(ftm0och0src)::Type,Ftm0och0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och0src)::Type,Ftm0och0srcVal::v1> v1{};
        }
        }
        ///FTM0 channel 1 output PWM/OCMP mode source select
        enum class Ftm0och1srcVal {
            v0=0x00000000,     ///<FTM0CH1 pin is the output of FTM0 channel 1 PWM/OCMP
            v1=0x00000001,     ///<FTM0CH1 pin is the output of FTM0 channel 1 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ftm0och1srcVal> ftm0och1src{}; 
        namespace Ftm0och1srcValC{
            constexpr Register::FieldValue<decltype(ftm0och1src)::Type,Ftm0och1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och1src)::Type,Ftm0och1srcVal::v1> v1{};
        }
        }
        ///FTM0 channel 2 output PWM/OCMP mode source select
        enum class Ftm0och2srcVal {
            v0=0x00000000,     ///<FTM0CH2 pin is the output of FTM0 channel 2 PWM/OCMP
            v1=0x00000001,     ///<FTM0CH2 pin is the output of FTM0 channel 2 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ftm0och2srcVal> ftm0och2src{}; 
        namespace Ftm0och2srcValC{
            constexpr Register::FieldValue<decltype(ftm0och2src)::Type,Ftm0och2srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och2src)::Type,Ftm0och2srcVal::v1> v1{};
        }
        }
        ///FTM0 channel 3 output PWM/OCMP mode source select
        enum class Ftm0och3srcVal {
            v0=0x00000000,     ///<FTM0CH3 pin is the output of FTM0 channel 3 PWM/OCMP
            v1=0x00000001,     ///<FTM0CH3 pin is the output of FTM0 channel 3 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ftm0och3srcVal> ftm0och3src{}; 
        namespace Ftm0och3srcValC{
            constexpr Register::FieldValue<decltype(ftm0och3src)::Type,Ftm0och3srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och3src)::Type,Ftm0och3srcVal::v1> v1{};
        }
        }
        ///FTM0 channel 4 output PWM/OCMP mode source select
        enum class Ftm0och4srcVal {
            v0=0x00000000,     ///<FTM0CH4 pin is the output of FTM0 channel 4 PWM/OCMP
            v1=0x00000001,     ///<FTM0CH4 pin is the output of FTM0 channel 4 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ftm0och4srcVal> ftm0och4src{}; 
        namespace Ftm0och4srcValC{
            constexpr Register::FieldValue<decltype(ftm0och4src)::Type,Ftm0och4srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och4src)::Type,Ftm0och4srcVal::v1> v1{};
        }
        }
        ///FTM0 channel 5 output PWM/OCMP mode source select
        enum class Ftm0och5srcVal {
            v0=0x00000000,     ///<FTM0CH5 pin is the output of FTM0 channel 5 PWM/OCMP
            v1=0x00000001,     ///<FTM0CH5 pin is the output of FTM0 channel 5 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ftm0och5srcVal> ftm0och5src{}; 
        namespace Ftm0och5srcValC{
            constexpr Register::FieldValue<decltype(ftm0och5src)::Type,Ftm0och5srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0och5src)::Type,Ftm0och5srcVal::v1> v1{};
        }
        }
        ///FTM2 channel 0 output PWM/OCMP mode source select
        enum class Ftm2och0srcVal {
            v0=0x00000000,     ///<FTM2CH0 pin is the output of FTM2 channel 0 PWM/OCMP
            v1=0x00000001,     ///<FTM2CH0 pin is the output of FTM2 channel 0 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ftm2och0srcVal> ftm2och0src{}; 
        namespace Ftm2och0srcValC{
            constexpr Register::FieldValue<decltype(ftm2och0src)::Type,Ftm2och0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2och0src)::Type,Ftm2och0srcVal::v1> v1{};
        }
        }
        ///FTM2 channel 1 output PWM/OCMP mode source select
        enum class Ftm2och1srcVal {
            v0=0x00000000,     ///<FTM2CH1 pin is the output of FTM2 channel 1 PWM/OCMP
            v1=0x00000001,     ///<FTM2CH1 pin is the output of FTM2 channel 1 PWM/OCMP modulating the carrier frequency, as per CARRIER_SELECT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ftm2och1srcVal> ftm2och1src{}; 
        namespace Ftm2och1srcValC{
            constexpr Register::FieldValue<decltype(ftm2och1src)::Type,Ftm2och1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2och1src)::Type,Ftm2och1srcVal::v1> v1{};
        }
        }
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0x00000070,0,unsigned>;
        ///Pincount identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pinid{}; 
        ///Device die number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> dieid{}; 
        ///Device revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
        ///System SRAM Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> sramsize{}; 
        ///Series ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> serierid{}; 
        ///V Sub-family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> subfamid{}; 
        ///V-Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> famid{}; 
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xfff7f3bd,0,unsigned>;
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
        }
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0xffffc1fe,0,unsigned>;
        ///Low Power Timer Clock Gate Control
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
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0x60bbeffc,0,unsigned>;
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
        ///FTM2 Clock Gate Control
        enum class Ftm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ftm2Val> ftm2{}; 
        namespace Ftm2ValC{
            constexpr Register::FieldValue<decltype(ftm2)::Type,Ftm2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2)::Type,Ftm2Val::v1> v1{};
        }
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
        }
        ///ADC1 Clock Gate Control
        enum class Adc1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Adc1Val> adc1{}; 
        namespace Adc1ValC{
            constexpr Register::FieldValue<decltype(adc1)::Type,Adc1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1)::Type,Adc1Val::v1> v1{};
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
        using Addr = Register::Address<0x40048044,0x0ff80fff,0,unsigned>;
        ///Clock 5 Output Divider Value
        enum class Outdiv5Val {
            v000=0x00000000,     ///<Divide-by-1
            v001=0x00000001,     ///<Divide-by-2
            v010=0x00000002,     ///<Divide-by-3
            v011=0x00000003,     ///<Divide-by-4
            v100=0x00000004,     ///<Divide-by-5
            v101=0x00000005,     ///<Divide-by-6
            v110=0x00000006,     ///<Divide-by-7
            v111=0x00000007,     ///<Divide-by-8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,Outdiv5Val> outdiv5{}; 
        namespace Outdiv5ValC{
            constexpr Register::FieldValue<decltype(outdiv5)::Type,Outdiv5Val::v000> v000{};
            constexpr Register::FieldValue<decltype(outdiv5)::Type,Outdiv5Val::v001> v001{};
            constexpr Register::FieldValue<decltype(outdiv5)::Type,Outdiv5Val::v010> v010{};
            constexpr Register::FieldValue<decltype(outdiv5)::Type,Outdiv5Val::v011> v011{};
            constexpr Register::FieldValue<decltype(outdiv5)::Type,Outdiv5Val::v100> v100{};
            constexpr Register::FieldValue<decltype(outdiv5)::Type,Outdiv5Val::v101> v101{};
            constexpr Register::FieldValue<decltype(outdiv5)::Type,Outdiv5Val::v110> v110{};
            constexpr Register::FieldValue<decltype(outdiv5)::Type,Outdiv5Val::v111> v111{};
        }
        }
        ///OUTDIV5 Divider Control
        enum class Outdiv5enVal {
            v0=0x00000000,     ///<OUTDIV5 disabled
            v1=0x00000001,     ///<OUTDIV5 enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Outdiv5enVal> outdiv5en{}; 
        namespace Outdiv5enValC{
            constexpr Register::FieldValue<decltype(outdiv5en)::Type,Outdiv5enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(outdiv5en)::Type,Outdiv5enVal::v1> v1{};
        }
        }
        ///Clock 4 Output Divider Value
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
        }
        ///Clock 1 Output Divider Value
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
            v0=0x00000000,     ///<Flash remains enabled during Doze mode
            v1=0x00000001,     ///<Flash is disabled for the duration of Doze mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FlashdozeVal> flashdoze{}; 
        namespace FlashdozeValC{
            constexpr Register::FieldValue<decltype(flashdoze)::Type,FlashdozeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flashdoze)::Type,FlashdozeVal::v1> v1{};
        }
        }
        ///Program Flash Size
        enum class PfsizeVal {
            v0000=0x00000000,     ///<8 KB of program flash memory, 0.25 KB protection region
            v0001=0x00000001,     ///<16 KB of program flash memory, 0.5 KB protection region
            v0011=0x00000003,     ///<32 KB of program flash memory, 1 KB protection region
            v0101=0x00000005,     ///<64 KB of program flash memory, 2 KB protection region
            v0111=0x00000007,     ///<128 KB of program flash memory, 4 KB protection region
            v1001=0x00000009,     ///<256 KB of program flash memory, 4 KB protection region
            v1111=0x0000000f,     ///<32 KB of program flash memory, 1 KB protection region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,PfsizeVal> pfsize{}; 
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
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0x80ffffff,0,unsigned>;
        ///Max address block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> maxaddr{}; 
    }
    namespace SimUidmh{    ///<Unique Identification Register Mid-High
        using Addr = Register::Address<0x40048058,0xffff0000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> uid{}; 
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
    namespace SimWdogctrl{    ///<WDOG Control Register
        using Addr = Register::Address<0x40048100,0xfffffffd,0,unsigned>;
        ///WDOG Clock Select
        enum class WdogclksVal {
            v0=0x00000000,     ///<Internal 1 kHz clock is source to WDOG
            v1=0x00000001,     ///<MCGIRCLK is source to WDOG
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WdogclksVal> wdogclks{}; 
        namespace WdogclksValC{
            constexpr Register::FieldValue<decltype(wdogclks)::Type,WdogclksVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wdogclks)::Type,WdogclksVal::v1> v1{};
        }
        }
    }
}
