#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0x1ff70fff,0,unsigned>;
        ///RAM size
        enum class RamsizeVal {
            v0000=0x00000000,     ///<Undefined
            v0001=0x00000001,     ///<Undefined
            v0010=0x00000002,     ///<Undefined
            v0011=0x00000003,     ///<Undefined
            v0100=0x00000004,     ///<Undefined
            v0101=0x00000005,     ///<Undefined
            v0110=0x00000006,     ///<Undefined
            v0111=0x00000007,     ///<Undefined
            v1000=0x00000008,     ///<Undefined
            v1001=0x00000009,     ///<128 KB
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
        }
        ///32 kHz oscillator clock select
        enum class Osc32kselVal {
            v0=0x00000000,     ///<System oscillator (OSC32KCLK)
            v1=0x00000001,     ///<RTC oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Osc32kselVal> osc32ksel{}; 
        namespace Osc32kselValC{
            constexpr Register::FieldValue<decltype(osc32ksel)::Type,Osc32kselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(osc32ksel)::Type,Osc32kselVal::v1> v1{};
        }
        }
        ///USB voltage regulator in standby mode during VLPR or VLPW
        enum class UsbvstbyVal {
            v0=0x00000000,     ///<USB voltage regulator not in standby during VLPR and VLPW modes.
            v1=0x00000001,     ///<USB voltage regulator in standby during VLPR and VLPW modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,UsbvstbyVal> usbvstby{}; 
        namespace UsbvstbyValC{
            constexpr Register::FieldValue<decltype(usbvstby)::Type,UsbvstbyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbvstby)::Type,UsbvstbyVal::v1> v1{};
        }
        }
        ///USB voltage regulator in standby mode during Stop, VLPS, LLS or VLLS
        enum class UsbsstbyVal {
            v0=0x00000000,     ///<USB voltage regulator not in standby during Stop, VLPS, LLS and VLLS modes.
            v1=0x00000001,     ///<USB voltage regulator in standby during Stop, VLPS, LLS and VLLS modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,UsbsstbyVal> usbsstby{}; 
        namespace UsbsstbyValC{
            constexpr Register::FieldValue<decltype(usbsstby)::Type,UsbsstbyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbsstby)::Type,UsbsstbyVal::v1> v1{};
        }
        }
        ///USB voltage regulator enable
        enum class UsbregenVal {
            v0=0x00000000,     ///<USB voltage regulator is disabled.
            v1=0x00000001,     ///<USB voltage regulator is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,UsbregenVal> usbregen{}; 
        namespace UsbregenValC{
            constexpr Register::FieldValue<decltype(usbregen)::Type,UsbregenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbregen)::Type,UsbregenVal::v1> v1{};
        }
        }
    }
    namespace SimSopt1cfg{    ///<SOPT1 Configuration Register
        using Addr = Register::Address<0x40047004,0xf8ffffff,0,unsigned>;
        ///USB voltage regulator enable write enable
        enum class UrweVal {
            v0=0x00000000,     ///<SOPT1[USBREGEN] cannot be written.
            v1=0x00000001,     ///<SOPT1[USBREGEN] can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,UrweVal> urwe{}; 
        namespace UrweValC{
            constexpr Register::FieldValue<decltype(urwe)::Type,UrweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(urwe)::Type,UrweVal::v1> v1{};
        }
        }
        ///USB voltage regulator VLP standby write enable
        enum class UvsweVal {
            v0=0x00000000,     ///<SOPT1[USBVSTBY] cannot be written.
            v1=0x00000001,     ///<SOPT1[USBVSTBY] can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,UvsweVal> uvswe{}; 
        namespace UvsweValC{
            constexpr Register::FieldValue<decltype(uvswe)::Type,UvsweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uvswe)::Type,UvsweVal::v1> v1{};
        }
        }
        ///USB voltage regulator stop standby write enable
        enum class UssweVal {
            v0=0x00000000,     ///<SOPT1[USBSSTBY] cannot be written.
            v1=0x00000001,     ///<SOPT1[USBSSTBY] can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,UssweVal> usswe{}; 
        namespace UssweValC{
            constexpr Register::FieldValue<decltype(usswe)::Type,UssweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usswe)::Type,UssweVal::v1> v1{};
        }
        }
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0x0f086403,0,unsigned>;
        ///USB HS clock source select
        enum class UsbhsrcVal {
            v00=0x00000000,     ///<Bus clock
            v01=0x00000001,     ///<MCGPLL0CLK
            v10=0x00000002,     ///<MCGPLL1CLK
            v11=0x00000003,     ///<OSC0ERCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,UsbhsrcVal> usbhsrc{}; 
        namespace UsbhsrcValC{
            constexpr Register::FieldValue<decltype(usbhsrc)::Type,UsbhsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(usbhsrc)::Type,UsbhsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(usbhsrc)::Type,UsbhsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(usbhsrc)::Type,UsbhsrcVal::v11> v11{};
        }
        }
        ///RTC clock out select
        enum class RtcclkoutselVal {
            v0=0x00000000,     ///<RTC 1 Hz clock drives RTC CLKOUT.
            v1=0x00000001,     ///<RTC 32 kHz oscillator drives RTC CLKOUT.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RtcclkoutselVal> rtcclkoutsel{}; 
        namespace RtcclkoutselValC{
            constexpr Register::FieldValue<decltype(rtcclkoutsel)::Type,RtcclkoutselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtcclkoutsel)::Type,RtcclkoutselVal::v1> v1{};
        }
        }
        ///Clock out select
        enum class ClkoutselVal {
            v000=0x00000000,     ///<FlexBus clock (reset value)
            v010=0x00000002,     ///<Flash ungated clock
            v011=0x00000003,     ///<LPO clock (1 kHz)
            v100=0x00000004,     ///<MCGIRCLK
            v101=0x00000005,     ///<RTC 32 kHz clock
            v110=0x00000006,     ///<OSC0ERCLK
            v111=0x00000007,     ///<OSC1ERCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,ClkoutselVal> clkoutsel{}; 
        namespace ClkoutselValC{
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v000> v000{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v110> v110{};
            constexpr Register::FieldValue<decltype(clkoutsel)::Type,ClkoutselVal::v111> v111{};
        }
        }
        ///Flexbus security level
        enum class FbslVal {
            v00=0x00000000,     ///<All off-chip accesses (op code and data) via the FlexBus and DDR controller are disallowed.
            v10=0x00000002,     ///<Off-chip op code accesses are disallowed. Data accesses are allowed.
            v11=0x00000003,     ///<Off-chip op code accesses and data accesses are allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,FbslVal> fbsl{}; 
        namespace FbslValC{
            constexpr Register::FieldValue<decltype(fbsl)::Type,FbslVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fbsl)::Type,FbslVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fbsl)::Type,FbslVal::v11> v11{};
        }
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
        }
        ///Debug trace clock select
        enum class TraceclkselVal {
            v0=0x00000000,     ///<MCGCLKOUT
            v1=0x00000001,     ///<Core/system clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,TraceclkselVal> traceclksel{}; 
        namespace TraceclkselValC{
            constexpr Register::FieldValue<decltype(traceclksel)::Type,TraceclkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(traceclksel)::Type,TraceclkselVal::v1> v1{};
        }
        }
        ///NFC Flash clock select
        enum class NfcclkselVal {
            v0=0x00000000,     ///<Clock divider NFC clock
            v1=0x00000001,     ///<EXTAL1 clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,NfcclkselVal> nfcClksel{}; 
        namespace NfcclkselValC{
            constexpr Register::FieldValue<decltype(nfcClksel)::Type,NfcclkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nfcClksel)::Type,NfcclkselVal::v1> v1{};
        }
        }
        ///PLL/FLL clock select
        enum class PllfllselVal {
            v00=0x00000000,     ///<MCGFLLCLK
            v01=0x00000001,     ///<MCGPLL0CLK
            v10=0x00000002,     ///<MCGPLL1CLK
            v11=0x00000003,     ///<System Platform clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PllfllselVal> pllfllsel{}; 
        namespace PllfllselValC{
            constexpr Register::FieldValue<decltype(pllfllsel)::Type,PllfllselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pllfllsel)::Type,PllfllselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pllfllsel)::Type,PllfllselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pllfllsel)::Type,PllfllselVal::v11> v11{};
        }
        }
        ///USB FS clock select
        enum class UsbfclkselVal {
            v0=0x00000000,     ///<External bypass clock (PTE26)
            v1=0x00000001,     ///<Clock divider USB FS clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UsbfclkselVal> usbfClksel{}; 
        namespace UsbfclkselValC{
            constexpr Register::FieldValue<decltype(usbfClksel)::Type,UsbfclkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbfClksel)::Type,UsbfclkselVal::v1> v1{};
        }
        }
        ///Ethernet timestamp clock source select
        enum class TimesrcVal {
            v00=0x00000000,     ///<System platform clock
            v01=0x00000001,     ///<MCGPLLCLK/MCGFLLCLK selected by PLLFLLSEL[1:0]
            v10=0x00000002,     ///<OSC0ERCLK
            v11=0x00000003,     ///<External bypass clock (PTE26)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TimesrcVal> timesrc{}; 
        namespace TimesrcValC{
            constexpr Register::FieldValue<decltype(timesrc)::Type,TimesrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(timesrc)::Type,TimesrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(timesrc)::Type,TimesrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(timesrc)::Type,TimesrcVal::v11> v11{};
        }
        }
        ///USB FS clock source select
        enum class UsbfsrcVal {
            v00=0x00000000,     ///<MCGPLLCLK/MCGFLLCLK selected by PLLFLLSEL[1:0]
            v01=0x00000001,     ///<MCGPLL0CLK
            v10=0x00000002,     ///<MCGPLL1CLK
            v11=0x00000003,     ///<OSC0ERCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,UsbfsrcVal> usbfsrc{}; 
        namespace UsbfsrcValC{
            constexpr Register::FieldValue<decltype(usbfsrc)::Type,UsbfsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(usbfsrc)::Type,UsbfsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(usbfsrc)::Type,UsbfsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(usbfsrc)::Type,UsbfsrcVal::v11> v11{};
        }
        }
        ///ESDHC perclk source select
        enum class EsdhcsrcVal {
            v00=0x00000000,     ///<Core/system clock
            v01=0x00000001,     ///<MCGPLLCLK/MCGFLLCLK selected by PLLFLLSEL[1:0]
            v10=0x00000002,     ///<OSC0ERCLK
            v11=0x00000003,     ///<External bypass clock (PTD11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,EsdhcsrcVal> esdhcsrc{}; 
        namespace EsdhcsrcValC{
            constexpr Register::FieldValue<decltype(esdhcsrc)::Type,EsdhcsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(esdhcsrc)::Type,EsdhcsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(esdhcsrc)::Type,EsdhcsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(esdhcsrc)::Type,EsdhcsrcVal::v11> v11{};
        }
        }
        ///NFC Flash clock source select
        enum class NfcsrcVal {
            v00=0x00000000,     ///<Bus clock
            v01=0x00000001,     ///<MCGPLL0CLK
            v10=0x00000002,     ///<MCGPLL1CLK
            v11=0x00000003,     ///<OSC0ERCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,NfcsrcVal> nfcsrc{}; 
        namespace NfcsrcValC{
            constexpr Register::FieldValue<decltype(nfcsrc)::Type,NfcsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(nfcsrc)::Type,NfcsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(nfcsrc)::Type,NfcsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(nfcsrc)::Type,NfcsrcVal::v11> v11{};
        }
        }
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0x00c3eee0,0,unsigned>;
        ///FlexTimer 0 Fault 0 Select
        enum class Ftm0flt0Val {
            v0=0x00000000,     ///<FTM0_FLT0 drives FTM 0 fault 0.
            v1=0x00000001,     ///<CMP0 OUT drives FTM 0 fault 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ftm0flt0Val> ftm0flt0{}; 
        namespace Ftm0flt0ValC{
            constexpr Register::FieldValue<decltype(ftm0flt0)::Type,Ftm0flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt0)::Type,Ftm0flt0Val::v1> v1{};
        }
        }
        ///FlexTimer 0 Fault 1 Select
        enum class Ftm0flt1Val {
            v0=0x00000000,     ///<FTM0_FLT1 drives FTM 0 fault 1.
            v1=0x00000001,     ///<CMP1 OUT drives FTM 0 fault 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ftm0flt1Val> ftm0flt1{}; 
        namespace Ftm0flt1ValC{
            constexpr Register::FieldValue<decltype(ftm0flt1)::Type,Ftm0flt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt1)::Type,Ftm0flt1Val::v1> v1{};
        }
        }
        ///FlexTimer 0 Fault 2 Select
        enum class Ftm0flt2Val {
            v0=0x00000000,     ///<FTM0_FLT2 drives FTM 0 fault 2.
            v1=0x00000001,     ///<CMP2 OUT drives FTM 0 fault 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ftm0flt2Val> ftm0flt2{}; 
        namespace Ftm0flt2ValC{
            constexpr Register::FieldValue<decltype(ftm0flt2)::Type,Ftm0flt2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt2)::Type,Ftm0flt2Val::v1> v1{};
        }
        }
        ///FlexTimer 0 Fault 3 Select.
        enum class Ftm0flt3Val {
            v0=0x00000000,     ///<FTM0_FLT3 drives FTM 0 fault 3.
            v1=0x00000001,     ///<CMP0 OUT drives FTM 0 fault 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ftm0flt3Val> ftm0flt3{}; 
        namespace Ftm0flt3ValC{
            constexpr Register::FieldValue<decltype(ftm0flt3)::Type,Ftm0flt3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt3)::Type,Ftm0flt3Val::v1> v1{};
        }
        }
        ///FlexTimer 1 Fault 0 Select
        enum class Ftm1flt0Val {
            v0=0x00000000,     ///<FTM1_FLT0 drives FTM 1 fault 0.
            v1=0x00000001,     ///<CMP0 OUT drives FTM 1 fault 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ftm1flt0Val> ftm1flt0{}; 
        namespace Ftm1flt0ValC{
            constexpr Register::FieldValue<decltype(ftm1flt0)::Type,Ftm1flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1flt0)::Type,Ftm1flt0Val::v1> v1{};
        }
        }
        ///FlexTimer 2 Fault 0 Select
        enum class Ftm2flt0Val {
            v0=0x00000000,     ///<FTM2_FLT0 drives FTM 2 fault 0.
            v1=0x00000001,     ///<CMP0 OUT drives FTM 2 fault 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ftm2flt0Val> ftm2flt0{}; 
        namespace Ftm2flt0ValC{
            constexpr Register::FieldValue<decltype(ftm2flt0)::Type,Ftm2flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2flt0)::Type,Ftm2flt0Val::v1> v1{};
        }
        }
        ///FlexTimer 3 Fault 0 Select.
        enum class Ftm3flt0Val {
            v0=0x00000000,     ///<FTM3_FLT0 drives FTM 2 fault 0.
            v1=0x00000001,     ///<CMP0 OUT drives FTM 2 fault 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ftm3flt0Val> ftm3flt0{}; 
        namespace Ftm3flt0ValC{
            constexpr Register::FieldValue<decltype(ftm3flt0)::Type,Ftm3flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3flt0)::Type,Ftm3flt0Val::v1> v1{};
        }
        }
        ///FlexTimer 1 channel 0 input capture source select
        enum class Ftm1ch0srcVal {
            v00=0x00000000,     ///<FTM1_CH0 pin
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<USB SOF trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Ftm1ch0srcVal> ftm1ch0src{}; 
        namespace Ftm1ch0srcValC{
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v11> v11{};
        }
        }
        ///FlexTimer 2 channel 0 input capture source select
        enum class Ftm2ch0srcVal {
            v00=0x00000000,     ///<FTM2_CH0 pin
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Ftm2ch0srcVal> ftm2ch0src{}; 
        namespace Ftm2ch0srcValC{
            constexpr Register::FieldValue<decltype(ftm2ch0src)::Type,Ftm2ch0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm2ch0src)::Type,Ftm2ch0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm2ch0src)::Type,Ftm2ch0srcVal::v10> v10{};
        }
        }
        ///FlexTimer 0 external clock pin select
        enum class Ftm0clkselVal {
            v0=0x00000000,     ///<FTM0 external clock driven by FTM CLKIN0 pin
            v1=0x00000001,     ///<FTM0 external clock driven by FTM CLKIN1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm0clkselVal> ftm0clksel{}; 
        namespace Ftm0clkselValC{
            constexpr Register::FieldValue<decltype(ftm0clksel)::Type,Ftm0clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0clksel)::Type,Ftm0clkselVal::v1> v1{};
        }
        }
        ///FlexTimer 1 external clock pin select
        enum class Ftm1clkselVal {
            v0=0x00000000,     ///<FTM1 external clock driven by FTM CLKIN0 pin.
            v1=0x00000001,     ///<FTM1 external clock driven by FTM CLKIN1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ftm1clkselVal> ftm1clksel{}; 
        namespace Ftm1clkselValC{
            constexpr Register::FieldValue<decltype(ftm1clksel)::Type,Ftm1clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1clksel)::Type,Ftm1clkselVal::v1> v1{};
        }
        }
        ///FlexTimer 2 external clock pin select
        enum class Ftm2clkselVal {
            v0=0x00000000,     ///<FTM2 external clock driven by FTM CLKIN0 pin.
            v1=0x00000001,     ///<FTM2 external clock driven by FTM CLKIN1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ftm2clkselVal> ftm2clksel{}; 
        namespace Ftm2clkselValC{
            constexpr Register::FieldValue<decltype(ftm2clksel)::Type,Ftm2clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2clksel)::Type,Ftm2clkselVal::v1> v1{};
        }
        }
        ///FlexTimer 3 external clock pin select
        enum class Ftm3clkselVal {
            v0=0x00000000,     ///<FTM3 external clock driven by FTM CLKIN0 pin.
            v1=0x00000001,     ///<FTM3 external clock driven by FTM CLKIN1 pin .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ftm3clkselVal> ftm3clksel{}; 
        namespace Ftm3clkselValC{
            constexpr Register::FieldValue<decltype(ftm3clksel)::Type,Ftm3clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3clksel)::Type,Ftm3clkselVal::v1> v1{};
        }
        }
        ///FlexTimer 0 hardware trigger 0 source select
        enum class Ftm0trg0srcVal {
            v0=0x00000000,     ///<CMP0 OUT drives FTM0 hardware trigger 0.
            v1=0x00000001,     ///<FTM1 channel match trigger drives FTM0 hardware trigger 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ftm0trg0srcVal> ftm0trg0src{}; 
        namespace Ftm0trg0srcValC{
            constexpr Register::FieldValue<decltype(ftm0trg0src)::Type,Ftm0trg0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0trg0src)::Type,Ftm0trg0srcVal::v1> v1{};
        }
        }
        ///FlexTimer 0 hardware trigger 1 source select
        enum class Ftm0trg1srcVal {
            v0=0x00000000,     ///<PDB output trigger 1 drives FTM0 hardware trigger 1.
            v1=0x00000001,     ///<FTM2 channel match trigger drives FTM0 hardware trigger 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ftm0trg1srcVal> ftm0trg1src{}; 
        namespace Ftm0trg1srcValC{
            constexpr Register::FieldValue<decltype(ftm0trg1src)::Type,Ftm0trg1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0trg1src)::Type,Ftm0trg1srcVal::v1> v1{};
        }
        }
        ///FlexTimer 3 hardware trigger 0 source select
        enum class Ftm3trg0srcVal {
            v0=0x00000000,     ///<CMP3 OUT drives FTM3 hardware trigger 0.
            v1=0x00000001,     ///<FTM1 channel match trigger drives FTM3 hardware trigger 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ftm3trg0srcVal> ftm3trg0src{}; 
        namespace Ftm3trg0srcValC{
            constexpr Register::FieldValue<decltype(ftm3trg0src)::Type,Ftm3trg0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3trg0src)::Type,Ftm3trg0srcVal::v1> v1{};
        }
        }
        ///FlexTimer 3 hardware trigger 1 source select
        enum class Ftm3trg1srcVal {
            v0=0x00000000,     ///<PDB output trigger 3 drives FTM3 hardware trigger 1.
            v1=0x00000001,     ///<FTM2 channel match trigger drives FTM3 hardware trigger 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ftm3trg1srcVal> ftm3trg1src{}; 
        namespace Ftm3trg1srcValC{
            constexpr Register::FieldValue<decltype(ftm3trg1src)::Type,Ftm3trg1srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3trg1src)::Type,Ftm3trg1srcVal::v1> v1{};
        }
        }
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xffffff00,0,unsigned>;
        ///UART0 transmit data source select
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
        ///UART0 receive data source select
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
        ///UART1 transmit data source select
        enum class Uart1txsrcVal {
            v00=0x00000000,     ///<UART1_TX pin
            v01=0x00000001,     ///<UART1_TX pin modulated with FTM1 channel 0 Output
            v10=0x00000002,     ///<UART1_TX pin modulated with FTM2 channel 0 Output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Uart1txsrcVal> uart1txsrc{}; 
        namespace Uart1txsrcValC{
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v10> v10{};
        }
        }
        ///UART1 receive data source select
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
    namespace SimSopt6{    ///<System Options Register 6
        using Addr = Register::Address<0x40048014,0xfff00000,0,unsigned>;
        ///MCC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcc{}; 
        ///PCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pcr{}; 
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0x60606060,0,unsigned>;
        ///ADC0 trigger select
        enum class Adc0trgselVal {
            v0000=0x00000000,     ///<External trigger
            v0001=0x00000001,     ///<High speed comparator 0 asynchronous interrupt
            v0010=0x00000002,     ///<High speed comparator 1 asynchronous interrupt
            v0011=0x00000003,     ///<High speed comparator 2 asynchronous interrupt
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<Low-power timer trigger
            v1111=0x0000000f,     ///<High speed comparator 3 asynchronous interrupt
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
        }
        ///ADC0 pre-trigger select
        enum class Adc0pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A selected for ADC0.
            v1=0x00000001,     ///<Pre-trigger B selected for ADC0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adc0pretrgselVal> adc0pretrgsel{}; 
        namespace Adc0pretrgselValC{
            constexpr Register::FieldValue<decltype(adc0pretrgsel)::Type,Adc0pretrgselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0pretrgsel)::Type,Adc0pretrgselVal::v1> v1{};
        }
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
        ///ADC1 trigger select
        enum class Adc1trgselVal {
            v0000=0x00000000,     ///<External trigger
            v0001=0x00000001,     ///<High speed comparator 0 asynchronous interrupt
            v0010=0x00000002,     ///<High speed comparator 1 asynchronous interrupt
            v0011=0x00000003,     ///<High speed comparator 2 asynchronous interrupt
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<Low-power timer trigger
            v1111=0x0000000f,     ///<High speed comparator 3 asynchronous interrupt
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
        }
        ///ADC1 alternate trigger enable
        enum class Adc1alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC1.
            v1=0x00000001,     ///<Alternate trigger selected for ADC1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Adc1alttrgenVal> adc1alttrgen{}; 
        namespace Adc1alttrgenValC{
            constexpr Register::FieldValue<decltype(adc1alttrgen)::Type,Adc1alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1alttrgen)::Type,Adc1alttrgenVal::v1> v1{};
        }
        }
        ///ADC2 trigger select
        enum class Adc2trgselVal {
            v0000=0x00000000,     ///<External trigger
            v0001=0x00000001,     ///<High speed comparator 0 asynchronous interrupt
            v0010=0x00000002,     ///<High speed comparator 1 asynchronous interrupt
            v0011=0x00000003,     ///<High speed comparator 2 asynchronous interrupt
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<Low-power timer trigger
            v1111=0x0000000f,     ///<High speed comparator 3 asynchronous interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,Adc2trgselVal> adc2trgsel{}; 
        namespace Adc2trgselValC{
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1111> v1111{};
        }
        }
        ///ADC2 pre-trigger select
        enum class Adc2pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A selected for ADC2.
            v1=0x00000001,     ///<Pre-trigger B selected for ADC2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Adc2pretrgselVal> adc2pretrgsel{}; 
        namespace Adc2pretrgselValC{
            constexpr Register::FieldValue<decltype(adc2pretrgsel)::Type,Adc2pretrgselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc2pretrgsel)::Type,Adc2pretrgselVal::v1> v1{};
        }
        }
        ///ADC2 alternate trigger enable
        enum class Adc2alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC2.
            v1=0x00000001,     ///<Alternate trigger selected for ADC2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Adc2alttrgenVal> adc2alttrgen{}; 
        namespace Adc2alttrgenValC{
            constexpr Register::FieldValue<decltype(adc2alttrgen)::Type,Adc2alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc2alttrgen)::Type,Adc2alttrgenVal::v1> v1{};
        }
        }
        ///ADC3 trigger select
        enum class Adc3trgselVal {
            v0000=0x00000000,     ///<External trigger
            v0001=0x00000001,     ///<High speed comparator 0 asynchronous interrupt
            v0010=0x00000002,     ///<High speed comparator 1 asynchronous interrupt
            v0011=0x00000003,     ///<High speed comparator 2 asynchronous interrupt
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<Low-power timer trigger
            v1111=0x0000000f,     ///<High speed comparator 3 asynchronous interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,Adc3trgselVal> adc3trgsel{}; 
        namespace Adc3trgselValC{
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1111> v1111{};
        }
        }
        ///ADC3 pre-trigger select
        enum class Adc3pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A selected for ADC3.
            v1=0x00000001,     ///<Pre-trigger B selected for ADC3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Adc3pretrgselVal> adc3pretrgsel{}; 
        namespace Adc3pretrgselValC{
            constexpr Register::FieldValue<decltype(adc3pretrgsel)::Type,Adc3pretrgselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc3pretrgsel)::Type,Adc3pretrgselVal::v1> v1{};
        }
        }
        ///ADC3 alternate trigger enable
        enum class Adc3alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC3.
            v1=0x00000001,     ///<Alternate trigger selected for ADC3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Adc3alttrgenVal> adc3alttrgen{}; 
        namespace Adc3alttrgenValC{
            constexpr Register::FieldValue<decltype(adc3alttrgen)::Type,Adc3alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc3alttrgen)::Type,Adc3alttrgenVal::v1> v1{};
        }
        }
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0xffff0f80,0,unsigned>;
        ///Pincount identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pinid{}; 
        ///Kinetis family identification
        enum class FamidVal {
            v000=0x00000000,     ///<K10
            v001=0x00000001,     ///<K20
            v010=0x00000002,     ///<K61
            v100=0x00000004,     ///<K60
            v101=0x00000005,     ///<K70
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,FamidVal> famid{}; 
        namespace FamidValC{
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v000> v000{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v001> v001{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v010> v010{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v100> v100{};
            constexpr Register::FieldValue<decltype(famid)::Type,FamidVal::v101> v101{};
        }
        }
        ///Device revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
    }
    namespace SimScgc1{    ///<System Clock Gating Control Register 1
        using Addr = Register::Address<0x40048028,0xfffff3df,0,unsigned>;
        ///OSC1 clock gate control
        enum class Osc1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Osc1Val> osc1{}; 
        namespace Osc1ValC{
            constexpr Register::FieldValue<decltype(osc1)::Type,Osc1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(osc1)::Type,Osc1Val::v1> v1{};
        }
        }
        ///UART4 clock gate control
        enum class Uart4Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Uart4Val> uart4{}; 
        namespace Uart4ValC{
            constexpr Register::FieldValue<decltype(uart4)::Type,Uart4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart4)::Type,Uart4Val::v1> v1{};
        }
        }
        ///UART5 clock gate control
        enum class Uart5Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Uart5Val> uart5{}; 
        namespace Uart5ValC{
            constexpr Register::FieldValue<decltype(uart5)::Type,Uart5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart5)::Type,Uart5Val::v1> v1{};
        }
        }
    }
    namespace SimScgc2{    ///<System Clock Gating Control Register 2
        using Addr = Register::Address<0x4004802c,0xffffcffe,0,unsigned>;
        ///ENET clock gate control
        enum class EnetVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnetVal> enet{}; 
        namespace EnetValC{
            constexpr Register::FieldValue<decltype(enet)::Type,EnetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enet)::Type,EnetVal::v1> v1{};
        }
        }
        ///12BDAC0 clock gate control
        enum class Dac0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Dac0Val> dac0{}; 
        namespace Dac0ValC{
            constexpr Register::FieldValue<decltype(dac0)::Type,Dac0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dac0)::Type,Dac0Val::v1> v1{};
        }
        }
        ///12BDAC1 clock gate control
        enum class Dac1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dac1Val> dac1{}; 
        namespace Dac1ValC{
            constexpr Register::FieldValue<decltype(dac1)::Type,Dac1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dac1)::Type,Dac1Val::v1> v1{};
        }
        }
    }
    namespace SimScgc3{    ///<System Clock Gating Control Register 3
        using Addr = Register::Address<0x40048030,0xe4fd2eee,0,unsigned>;
        ///RNGA clock gate control
        enum class RngaVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RngaVal> rnga{}; 
        namespace RngaValC{
            constexpr Register::FieldValue<decltype(rnga)::Type,RngaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rnga)::Type,RngaVal::v1> v1{};
        }
        }
        ///FlexCAN1 clock gate control
        enum class Flexcan1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Flexcan1Val> flexcan1{}; 
        namespace Flexcan1ValC{
            constexpr Register::FieldValue<decltype(flexcan1)::Type,Flexcan1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(flexcan1)::Type,Flexcan1Val::v1> v1{};
        }
        }
        ///NFC clock gate control
        enum class NfcVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,NfcVal> nfc{}; 
        namespace NfcValC{
            constexpr Register::FieldValue<decltype(nfc)::Type,NfcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nfc)::Type,NfcVal::v1> v1{};
        }
        }
        ///DSPI2 clock gate control
        enum class Dspi2Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Dspi2Val> dspi2{}; 
        namespace Dspi2ValC{
            constexpr Register::FieldValue<decltype(dspi2)::Type,Dspi2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dspi2)::Type,Dspi2Val::v1> v1{};
        }
        }
        ///DDR clock gate control
        enum class DdrVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,DdrVal> ddr{}; 
        namespace DdrValC{
            constexpr Register::FieldValue<decltype(ddr)::Type,DdrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ddr)::Type,DdrVal::v1> v1{};
        }
        }
        ///SAI1 clock gate control
        enum class Sai1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Sai1Val> sai1{}; 
        namespace Sai1ValC{
            constexpr Register::FieldValue<decltype(sai1)::Type,Sai1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sai1)::Type,Sai1Val::v1> v1{};
        }
        }
        ///ESDHC clock gate control
        enum class EsdhcVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,EsdhcVal> esdhc{}; 
        namespace EsdhcValC{
            constexpr Register::FieldValue<decltype(esdhc)::Type,EsdhcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esdhc)::Type,EsdhcVal::v1> v1{};
        }
        }
        ///FTM2 clock gate control
        enum class Ftm2Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm2Val> ftm2{}; 
        namespace Ftm2ValC{
            constexpr Register::FieldValue<decltype(ftm2)::Type,Ftm2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2)::Type,Ftm2Val::v1> v1{};
        }
        }
        ///FTM3 clock gate control
        enum class Ftm3Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ftm3Val> ftm3{}; 
        namespace Ftm3ValC{
            constexpr Register::FieldValue<decltype(ftm3)::Type,Ftm3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3)::Type,Ftm3Val::v1> v1{};
        }
        }
        ///ADC1 clock gate control
        enum class Adc1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Adc1Val> adc1{}; 
        namespace Adc1ValC{
            constexpr Register::FieldValue<decltype(adc1)::Type,Adc1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1)::Type,Adc1Val::v1> v1{};
        }
        }
        ///ADC3 clock gate control
        enum class Adc3Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Adc3Val> adc3{}; 
        namespace Adc3ValC{
            constexpr Register::FieldValue<decltype(adc3)::Type,Adc3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc3)::Type,Adc3Val::v1> v1{};
        }
        }
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xefe3c339,0,unsigned>;
        ///EWM clock gate control
        enum class EwmVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EwmVal> ewm{}; 
        namespace EwmValC{
            constexpr Register::FieldValue<decltype(ewm)::Type,EwmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ewm)::Type,EwmVal::v1> v1{};
        }
        }
        ///CMT clock gate control
        enum class CmtVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CmtVal> cmt{}; 
        namespace CmtValC{
            constexpr Register::FieldValue<decltype(cmt)::Type,CmtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmt)::Type,CmtVal::v1> v1{};
        }
        }
        ///IIC0 clock gate control
        enum class Iic0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Iic0Val> iic0{}; 
        namespace Iic0ValC{
            constexpr Register::FieldValue<decltype(iic0)::Type,Iic0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(iic0)::Type,Iic0Val::v1> v1{};
        }
        }
        ///IIC1 clock gate control
        enum class Iic1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Iic1Val> iic1{}; 
        namespace Iic1ValC{
            constexpr Register::FieldValue<decltype(iic1)::Type,Iic1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(iic1)::Type,Iic1Val::v1> v1{};
        }
        }
        ///UART0 clock gate control
        enum class Uart0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Uart0Val> uart0{}; 
        namespace Uart0ValC{
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::v1> v1{};
        }
        }
        ///UART1 clock gate control
        enum class Uart1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Uart1Val> uart1{}; 
        namespace Uart1ValC{
            constexpr Register::FieldValue<decltype(uart1)::Type,Uart1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1)::Type,Uart1Val::v1> v1{};
        }
        }
        ///UART2 clock gate control
        enum class Uart2Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Uart2Val> uart2{}; 
        namespace Uart2ValC{
            constexpr Register::FieldValue<decltype(uart2)::Type,Uart2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart2)::Type,Uart2Val::v1> v1{};
        }
        }
        ///UART3 clock gate control
        enum class Uart3Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Uart3Val> uart3{}; 
        namespace Uart3ValC{
            constexpr Register::FieldValue<decltype(uart3)::Type,Uart3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart3)::Type,Uart3Val::v1> v1{};
        }
        }
        ///USB FS clock gate control
        enum class UsbfsVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UsbfsVal> usbfs{}; 
        namespace UsbfsValC{
            constexpr Register::FieldValue<decltype(usbfs)::Type,UsbfsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbfs)::Type,UsbfsVal::v1> v1{};
        }
        }
        ///Comparator clock gate control
        enum class CmpVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,CmpVal> cmp{}; 
        namespace CmpValC{
            constexpr Register::FieldValue<decltype(cmp)::Type,CmpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmp)::Type,CmpVal::v1> v1{};
        }
        }
        ///VREF clock gate control
        enum class VrefVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,VrefVal> vref{}; 
        namespace VrefValC{
            constexpr Register::FieldValue<decltype(vref)::Type,VrefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vref)::Type,VrefVal::v1> v1{};
        }
        }
        ///LLWU Clock Gate Control
        enum class LlwuVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,LlwuVal> llwu{}; 
        namespace LlwuValC{
            constexpr Register::FieldValue<decltype(llwu)::Type,LlwuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(llwu)::Type,LlwuVal::v1> v1{};
        }
        }
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0xffff81d0,0,unsigned>;
        ///LPTMR clock gate control
        enum class LptimerVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LptimerVal> lptimer{}; 
        namespace LptimerValC{
            constexpr Register::FieldValue<decltype(lptimer)::Type,LptimerVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lptimer)::Type,LptimerVal::v1> v1{};
        }
        }
        ///Register File Clock Gate Control
        enum class RegfileVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RegfileVal> regfile{}; 
        namespace RegfileValC{
            constexpr Register::FieldValue<decltype(regfile)::Type,RegfileVal::v0> v0{};
            constexpr Register::FieldValue<decltype(regfile)::Type,RegfileVal::v1> v1{};
        }
        }
        ///Dryice clock gate control
        enum class DryiceVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DryiceVal> dryice{}; 
        namespace DryiceValC{
            constexpr Register::FieldValue<decltype(dryice)::Type,DryiceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dryice)::Type,DryiceVal::v1> v1{};
        }
        }
        ///Dryice secure storage clock gate control
        enum class DryicesecregVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DryicesecregVal> dryicesecreg{}; 
        namespace DryicesecregValC{
            constexpr Register::FieldValue<decltype(dryicesecreg)::Type,DryicesecregVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dryicesecreg)::Type,DryicesecregVal::v1> v1{};
        }
        }
        ///TSI clock gate control
        enum class TsiVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TsiVal> tsi{}; 
        namespace TsiValC{
            constexpr Register::FieldValue<decltype(tsi)::Type,TsiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsi)::Type,TsiVal::v1> v1{};
        }
        }
        ///PORTA clock gate control
        enum class PortaVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,PortaVal> porta{}; 
        namespace PortaValC{
            constexpr Register::FieldValue<decltype(porta)::Type,PortaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porta)::Type,PortaVal::v1> v1{};
        }
        }
        ///PORTB clock gate control
        enum class PortbVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,PortbVal> portb{}; 
        namespace PortbValC{
            constexpr Register::FieldValue<decltype(portb)::Type,PortbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portb)::Type,PortbVal::v1> v1{};
        }
        }
        ///PORTC clock gate control
        enum class PortcVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,PortcVal> portc{}; 
        namespace PortcValC{
            constexpr Register::FieldValue<decltype(portc)::Type,PortcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portc)::Type,PortcVal::v1> v1{};
        }
        }
        ///PORTD clock gate control
        enum class PortdVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,PortdVal> portd{}; 
        namespace PortdValC{
            constexpr Register::FieldValue<decltype(portd)::Type,PortdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portd)::Type,PortdVal::v1> v1{};
        }
        }
        ///PORTE clock gate control
        enum class PorteVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,PorteVal> porte{}; 
        namespace PorteValC{
            constexpr Register::FieldValue<decltype(porte)::Type,PorteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porte)::Type,PorteVal::v1> v1{};
        }
        }
        ///PORTF clock gate control
        enum class PortfVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,PortfVal> portf{}; 
        namespace PortfValC{
            constexpr Register::FieldValue<decltype(portf)::Type,PortfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portf)::Type,PortfVal::v1> v1{};
        }
        }
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0xc40b4fe9,0,unsigned>;
        ///DMAMUX0 clock gate control
        enum class Dmamux0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Dmamux0Val> dmamux0{}; 
        namespace Dmamux0ValC{
            constexpr Register::FieldValue<decltype(dmamux0)::Type,Dmamux0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dmamux0)::Type,Dmamux0Val::v1> v1{};
        }
        }
        ///DMAMUX1 clock gate control
        enum class Dmamux1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Dmamux1Val> dmamux1{}; 
        namespace Dmamux1ValC{
            constexpr Register::FieldValue<decltype(dmamux1)::Type,Dmamux1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dmamux1)::Type,Dmamux1Val::v1> v1{};
        }
        }
        ///FlexCAN0 clock gate control
        enum class Flexcan0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Flexcan0Val> flexcan0{}; 
        namespace Flexcan0ValC{
            constexpr Register::FieldValue<decltype(flexcan0)::Type,Flexcan0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(flexcan0)::Type,Flexcan0Val::v1> v1{};
        }
        }
        ///DSPI0 clock gate control
        enum class Dspi0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Dspi0Val> dspi0{}; 
        namespace Dspi0ValC{
            constexpr Register::FieldValue<decltype(dspi0)::Type,Dspi0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dspi0)::Type,Dspi0Val::v1> v1{};
        }
        }
        ///DSPI1 clock gate control
        enum class Dspi1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dspi1Val> dspi1{}; 
        namespace Dspi1ValC{
            constexpr Register::FieldValue<decltype(dspi1)::Type,Dspi1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dspi1)::Type,Dspi1Val::v1> v1{};
        }
        }
        ///SAI0 clock gate control
        enum class Sai0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Sai0Val> sai0{}; 
        namespace Sai0ValC{
            constexpr Register::FieldValue<decltype(sai0)::Type,Sai0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sai0)::Type,Sai0Val::v1> v1{};
        }
        }
        ///CRC clock gate control
        enum class CrcVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CrcVal> crc{}; 
        namespace CrcValC{
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v1> v1{};
        }
        }
        ///USBHS clock gate control
        enum class UsbhsVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,UsbhsVal> usbhs{}; 
        namespace UsbhsValC{
            constexpr Register::FieldValue<decltype(usbhs)::Type,UsbhsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbhs)::Type,UsbhsVal::v1> v1{};
        }
        }
        ///USB DCD clock gate control
        enum class UsbdcdVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,UsbdcdVal> usbdcd{}; 
        namespace UsbdcdValC{
            constexpr Register::FieldValue<decltype(usbdcd)::Type,UsbdcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbdcd)::Type,UsbdcdVal::v1> v1{};
        }
        }
        ///PDB clock gate control
        enum class PdbVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,PdbVal> pdb{}; 
        namespace PdbValC{
            constexpr Register::FieldValue<decltype(pdb)::Type,PdbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdb)::Type,PdbVal::v1> v1{};
        }
        }
        ///PIT clock gate control
        enum class PitVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,PitVal> pit{}; 
        namespace PitValC{
            constexpr Register::FieldValue<decltype(pit)::Type,PitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pit)::Type,PitVal::v1> v1{};
        }
        }
        ///FTM0 clock gate control
        enum class Ftm0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm0Val> ftm0{}; 
        namespace Ftm0ValC{
            constexpr Register::FieldValue<decltype(ftm0)::Type,Ftm0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0)::Type,Ftm0Val::v1> v1{};
        }
        }
        ///FTM1 clock gate control
        enum class Ftm1Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ftm1Val> ftm1{}; 
        namespace Ftm1ValC{
            constexpr Register::FieldValue<decltype(ftm1)::Type,Ftm1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1)::Type,Ftm1Val::v1> v1{};
        }
        }
        ///ADC0 clock gate control
        enum class Adc0Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Adc0Val> adc0{}; 
        namespace Adc0ValC{
            constexpr Register::FieldValue<decltype(adc0)::Type,Adc0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0)::Type,Adc0Val::v1> v1{};
        }
        }
        ///ADC2 clock gate control
        enum class Adc2Val {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Adc2Val> adc2{}; 
        namespace Adc2ValC{
            constexpr Register::FieldValue<decltype(adc2)::Type,Adc2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc2)::Type,Adc2Val::v1> v1{};
        }
        }
        ///RTC clock gate control
        enum class RtcVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,RtcVal> rtc{}; 
        namespace RtcValC{
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::v1> v1{};
        }
        }
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x40048040,0xfffffff8,0,unsigned>;
        ///FlexBus controller clock gate control
        enum class FlexbusVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FlexbusVal> flexbus{}; 
        namespace FlexbusValC{
            constexpr Register::FieldValue<decltype(flexbus)::Type,FlexbusVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flexbus)::Type,FlexbusVal::v1> v1{};
        }
        }
        ///DMA controller clock gate control
        enum class DmaVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v1> v1{};
        }
        }
        ///MPU clock gate control
        enum class MpuVal {
            v0=0x00000000,     ///<Clock is disabled.
            v1=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MpuVal> mpu{}; 
        namespace MpuValC{
            constexpr Register::FieldValue<decltype(mpu)::Type,MpuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mpu)::Type,MpuVal::v1> v1{};
        }
        }
    }
    namespace SimClkdiv1{    ///<System Clock Divider Register 1
        using Addr = Register::Address<0x40048044,0x0000ffff,0,unsigned>;
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
    namespace SimClkdiv2{    ///<System Clock Divider Register 2
        using Addr = Register::Address<0x40048048,0xfffff0f0,0,unsigned>;
        ///USB FS clock divider fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbfsfrac{}; 
        ///USB FS clock divider divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> usbfsdiv{}; 
        ///USB HS clock divider fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> usbhsfrac{}; 
        ///USB HS clock divider divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> usbhsdiv{}; 
    }
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4004804c,0x00f0f0fe,0,unsigned>;
        ///Disable FTFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ftfdis{}; 
        ///FlexNVM partition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> depart{}; 
        ///EEPROM size
        enum class EesizeVal {
            v0000=0x00000000,     ///<16 KB
            v0001=0x00000001,     ///<8 KB
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,EesizeVal> eesize{}; 
        namespace EesizeValC{
            constexpr Register::FieldValue<decltype(eesize)::Type,EesizeVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(eesize)::Type,EesizeVal::v0001> v0001{};
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
        }
        ///Program flash size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> pfsize{}; 
        ///FlexNVM size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> nvmsize{}; 
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0xc0c0ffff,0,unsigned>;
        ///Max address block 2 or 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> maxaddr23{}; 
        ///Max address block 0 or 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> maxaddr01{}; 
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
        using Addr = Register::Address<0x40048068,0x00fffff0,0,unsigned>;
        ///Trace clock divider fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tracefrac{}; 
        ///Trace clock divider divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> tracediv{}; 
        ///NFC clock divider fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> nfcfrac{}; 
        ///NFC clock divider divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> nfcdiv{}; 
    }
    namespace SimMcr{    ///<Misc Control Register
        using Addr = Register::Address<0x4004806c,0x1ffffc10,0,unsigned>;
        ///DDR self refresh enable
        enum class DdrsrenVal {
            v0=0x00000000,     ///<DDR is not set to self refresh mode.
            v1=0x00000001,     ///<DDR is set in self refresh mode. Check DDRS to make sure DDR is in self refresh mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DdrsrenVal> ddrsren{}; 
        namespace DdrsrenValC{
            constexpr Register::FieldValue<decltype(ddrsren)::Type,DdrsrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ddrsren)::Type,DdrsrenVal::v1> v1{};
        }
        }
        ///DDR Self Refresh Status
        enum class DdrsVal {
            v0=0x00000000,     ///<DDR is not set to self refresh mode.
            v1=0x00000001,     ///<Sets DDR in self refresh mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DdrsVal> ddrs{}; 
        namespace DdrsValC{
            constexpr Register::FieldValue<decltype(ddrs)::Type,DdrsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ddrs)::Type,DdrsVal::v1> v1{};
        }
        }
        ///Pin enable for all DDR I/O
        enum class DdrpenVal {
            v0=0x00000000,     ///<All DDR I/O pins are disabled
            v1=0x00000001,     ///<All DDR I/O pins are enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DdrpenVal> ddrpen{}; 
        namespace DdrpenValC{
            constexpr Register::FieldValue<decltype(ddrpen)::Type,DdrpenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ddrpen)::Type,DdrpenVal::v1> v1{};
        }
        }
        ///DDR_DQS analog circuit disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ddrdqsdis{}; 
        ///DDR configuration select
        enum class DdrcfgVal {
            v000=0x00000000,     ///<LPDDR Half Strength
            v001=0x00000001,     ///<LPDDR Full Strength
            v010=0x00000002,     ///<DDR2 Half Strength
            v011=0x00000003,     ///<DDR1
            v110=0x00000006,     ///<DDR2 Full Strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,DdrcfgVal> ddrcfg{}; 
        namespace DdrcfgValC{
            constexpr Register::FieldValue<decltype(ddrcfg)::Type,DdrcfgVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ddrcfg)::Type,DdrcfgVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ddrcfg)::Type,DdrcfgVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ddrcfg)::Type,DdrcfgVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ddrcfg)::Type,DdrcfgVal::v110> v110{};
        }
        }
        ///DDR RCR Special Reset Enable
        enum class RcrrstenVal {
            v0=0x00000000,     ///<No soft reset to DDR RCR
            v1=0x00000001,     ///<Soft reset to DDR RCR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RcrrstenVal> rcrrsten{}; 
        namespace RcrrstenValC{
            constexpr Register::FieldValue<decltype(rcrrsten)::Type,RcrrstenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rcrrsten)::Type,RcrrstenVal::v1> v1{};
        }
        }
        ///DDR RCR Reset Status
        enum class RcrrstVal {
            v0=0x00000000,     ///<DDR RCR is not in reset status
            v1=0x00000001,     ///<DDR RCR is in reset status
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RcrrstVal> rcrrst{}; 
        namespace RcrrstValC{
            constexpr Register::FieldValue<decltype(rcrrst)::Type,RcrrstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rcrrst)::Type,RcrrstVal::v1> v1{};
        }
        }
        ///PDB Loop Mode
        enum class PdbloopVal {
            v0=0x00000000,     ///<Provides two seperated minor loop, loop for ADC0/1 and loop for ADC2/3D
            v1=0x00000001,     ///<Provides a loop to involve ADC0, ADC1, ADC2 and ADC3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,PdbloopVal> pdbloop{}; 
        namespace PdbloopValC{
            constexpr Register::FieldValue<decltype(pdbloop)::Type,PdbloopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdbloop)::Type,PdbloopVal::v1> v1{};
        }
        }
        ///60 MHz ULPI clock (ULPI_CLK) output enable
        enum class UlpiclkobeVal {
            v0=0x00000000,     ///<Internal generated 60MHz ULPI clock is not output to the ULPI_CLK pin.
            v1=0x00000001,     ///<Interanl generated 60MHz ULPI clock provide clock for external ULPI phy.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,UlpiclkobeVal> ulpiclkobe{}; 
        namespace UlpiclkobeValC{
            constexpr Register::FieldValue<decltype(ulpiclkobe)::Type,UlpiclkobeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ulpiclkobe)::Type,UlpiclkobeVal::v1> v1{};
        }
        }
        ///Trace clock disable.
        enum class TraceclkdisVal {
            v0=0x00000000,     ///<Enables trace clock.
            v1=0x00000001,     ///<Disable trace clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TraceclkdisVal> traceclkdis{}; 
        namespace TraceclkdisValC{
            constexpr Register::FieldValue<decltype(traceclkdis)::Type,TraceclkdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(traceclkdis)::Type,TraceclkdisVal::v1> v1{};
        }
        }
    }
}
