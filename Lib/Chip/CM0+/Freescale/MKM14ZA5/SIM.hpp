#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x4003e000,0xfff30fff,0,unsigned>;
        ///Returns the size of the system RAM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> sramsize{}; 
        namespace SramsizeValC{
        }
        ///32K oscillator clock select
        enum class Osc32kselVal {
            v00=0x00000000,     ///<OSC32KCLK
            v01=0x00000001,     ///<ERCLK32K
            v10=0x00000002,     ///<MCGIRCLK
            v11=0x00000003,     ///<LPO
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Osc32kselVal> osc32ksel{}; 
        namespace Osc32kselValC{
            constexpr Register::FieldValue<decltype(osc32ksel),Osc32kselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(osc32ksel),Osc32kselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(osc32ksel),Osc32kselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(osc32ksel),Osc32kselVal::v11> v11{};
        }
    }
    namespace SimSopt1Cfg{    ///<SOPT1 Configuration Register
        using Addr = Register::Address<0x4003e004,0xfffffc80,0,unsigned>;
        ///LP timer Channel1 Select
        enum class Lptmr1selVal {
            v00=0x00000000,     ///<Pad PTE4
            v01=0x00000001,     ///<Pad PTF4
            v10=0x00000002,     ///<Pad PTG1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Lptmr1selVal> lptmr1sel{}; 
        namespace Lptmr1selValC{
            constexpr Register::FieldValue<decltype(lptmr1sel),Lptmr1selVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lptmr1sel),Lptmr1selVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lptmr1sel),Lptmr1selVal::v10> v10{};
        }
        ///LP timer Channel2 Select
        enum class Lptmr2selVal {
            v00=0x00000000,     ///<Pad PTD6
            v01=0x00000001,     ///<Pad PTF3
            v10=0x00000002,     ///<Pad PTG5
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Lptmr2selVal> lptmr2sel{}; 
        namespace Lptmr2selValC{
            constexpr Register::FieldValue<decltype(lptmr2sel),Lptmr2selVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lptmr2sel),Lptmr2selVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lptmr2sel),Lptmr2selVal::v10> v10{};
        }
        ///LP timer Channel3 Select
        enum class Lptmr3selVal {
            v00=0x00000000,     ///<Pad PTD5
            v01=0x00000001,     ///<Pad PTG0
            v10=0x00000002,     ///<Pad PTG6
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Lptmr3selVal> lptmr3sel{}; 
        namespace Lptmr3selValC{
            constexpr Register::FieldValue<decltype(lptmr3sel),Lptmr3selVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lptmr3sel),Lptmr3selVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lptmr3sel),Lptmr3selVal::v10> v10{};
        }
        ///Comparator output selection for LPTMR channel0
        enum class Cmpolptmr0selVal {
            v0=0x00000000,     ///<CMP[1] output selected as LPTMR input[0]
            v1=0x00000001,     ///<CMP[0] output selected as LPTMR input[0]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Cmpolptmr0selVal> cmpolptmr0sel{}; 
        namespace Cmpolptmr0selValC{
            constexpr Register::FieldValue<decltype(cmpolptmr0sel),Cmpolptmr0selVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmpolptmr0sel),Cmpolptmr0selVal::v1> v1{};
        }
        ///no description available
        enum class RamsbdisVal {
            v0=0x00000000,     ///<Source bias of System SRAM enabled during VLPR and VLPW modes.
            v1=0x00000001,     ///<Source bias of System SRAM disabled during VLPR and VLPW modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RamsbdisVal> ramsbdis{}; 
        namespace RamsbdisValC{
            constexpr Register::FieldValue<decltype(ramsbdis),RamsbdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ramsbdis),RamsbdisVal::v1> v1{};
        }
        ///RAM Bitline Precharge Enable
        enum class RambpenVal {
            v0=0x00000000,     ///<Bitline precharge of system SRAM disabled during VLPR and VLPW modes.
            v1=0x00000001,     ///<Bitline precharge of system SRAM enabled during VLPR and VLPW modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RambpenVal> rambpen{}; 
        namespace RambpenValC{
            constexpr Register::FieldValue<decltype(rambpen),RambpenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rambpen),RambpenVal::v1> v1{};
        }
    }
    namespace SimCtrlReg{    ///<System Control Register
        using Addr = Register::Address<0x4003f004,0xffffff00,0,unsigned>;
        ///NMI Disable
        enum class NmidisVal {
            v0=0x00000000,     ///<NMI enabled
            v1=0x00000001,     ///<NMI disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,NmidisVal> nmidis{}; 
        namespace NmidisValC{
            constexpr Register::FieldValue<decltype(nmidis),NmidisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nmidis),NmidisVal::v1> v1{};
        }
        ///PLL VLP Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pllVlpEn{}; 
        namespace PllvlpenValC{
        }
        ///PTC2 HighDrive Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ptc2HdEn{}; 
        namespace Ptc2hdenValC{
        }
        ///SAR ADC Trigger Clk Select
        enum class SartrgclkselVal {
            v00=0x00000000,     ///<Bus Clock (During Low Power Modes such as stop, the Bus clock is not available for conversion and should not be selected in case a conversion needs to be performed while in stop)
            v01=0x00000001,     ///<ADC asynchronous Clock
            v10=0x00000002,     ///<ERCLK32K
            v11=0x00000003,     ///<OSCCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,SartrgclkselVal> sarTrgClkSel{}; 
        namespace SartrgclkselValC{
            constexpr Register::FieldValue<decltype(sarTrgClkSel),SartrgclkselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sarTrgClkSel),SartrgclkselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sarTrgClkSel),SartrgclkselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sarTrgClkSel),SartrgclkselVal::v11> v11{};
        }
        ///Clock out Select
        enum class ClkoutselVal {
            v000=0x00000000,     ///<Disabled
            v001=0x00000001,     ///<Gated Core Clk
            v010=0x00000002,     ///<Bus/Flash Clk
            v011=0x00000003,     ///<LPO clock from PMC
            v100=0x00000004,     ///<IRC clock from MCG
            v101=0x00000005,     ///<Muxed 32Khz source (please refer SOPT1[19:18] for possible options)
            v110=0x00000006,     ///<MHz Oscillator external reference clock
            v111=0x00000007,     ///<PLL clock output from MCG
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,ClkoutselVal> clkoutsel{}; 
        namespace ClkoutselValC{
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v000> v000{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v001> v001{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v110> v110{};
            constexpr Register::FieldValue<decltype(clkoutsel),ClkoutselVal::v111> v111{};
        }
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x4003f024,0x00000000,0,unsigned>;
        ///Pincount identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pinid{}; 
        namespace PinidValC{
        }
        ///Die ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dieid{}; 
        namespace DieidValC{
        }
        ///Revision ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> revid{}; 
        namespace RevidValC{
        }
        ///SRAM Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> sramsize{}; 
        namespace SramsizeValC{
        }
        ///Attribute ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> attr{}; 
        namespace AttrValC{
        }
        ///Series ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> seriesid{}; 
        namespace SeriesidValC{
        }
        ///Sub-Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> subfamid{}; 
        namespace SubfamidValC{
        }
        ///Metering family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> famid{}; 
        namespace FamidValC{
        }
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x4003f034,0xff93422d,0,unsigned>;
        ///External Watchdog Monitor Clock gate control
        enum class EwmVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EwmVal> ewm{}; 
        namespace EwmValC{
            constexpr Register::FieldValue<decltype(ewm),EwmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ewm),EwmVal::v1> v1{};
        }
        ///MCG clock gate control.
        enum class McgVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,McgVal> mcg{}; 
        namespace McgValC{
            constexpr Register::FieldValue<decltype(mcg),McgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mcg),McgVal::v1> v1{};
        }
        ///Oscillator (Mhz) Clock Gate Control
        enum class OscVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OscVal> osc{}; 
        namespace OscValC{
            constexpr Register::FieldValue<decltype(osc),OscVal::v0> v0{};
            constexpr Register::FieldValue<decltype(osc),OscVal::v1> v1{};
        }
        ///I2C0 Clock Gate Control
        enum class I2c0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,I2c0Val> i2c0{}; 
        namespace I2c0ValC{
            constexpr Register::FieldValue<decltype(i2c0),I2c0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c0),I2c0Val::v1> v1{};
        }
        ///I2C1 Clock Gate Control
        enum class I2c1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,I2c1Val> i2c1{}; 
        namespace I2c1ValC{
            constexpr Register::FieldValue<decltype(i2c1),I2c1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c1),I2c1Val::v1> v1{};
        }
        ///UART0 Clock Gate Control
        enum class Uart0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Uart0Val> uart0{}; 
        namespace Uart0ValC{
            constexpr Register::FieldValue<decltype(uart0),Uart0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0),Uart0Val::v1> v1{};
        }
        ///UART1 Clock Gate Control
        enum class Uart1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Uart1Val> uart1{}; 
        namespace Uart1ValC{
            constexpr Register::FieldValue<decltype(uart1),Uart1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1),Uart1Val::v1> v1{};
        }
        ///UART2 Clock Gate Control
        enum class Uart2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Uart2Val> uart2{}; 
        namespace Uart2ValC{
            constexpr Register::FieldValue<decltype(uart2),Uart2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart2),Uart2Val::v1> v1{};
        }
        ///UART3 Clock Gate Control
        enum class Uart3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Uart3Val> uart3{}; 
        namespace Uart3ValC{
            constexpr Register::FieldValue<decltype(uart3),Uart3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart3),Uart3Val::v1> v1{};
        }
        ///VREF Clock Gate Control
        enum class VrefVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,VrefVal> vref{}; 
        namespace VrefValC{
            constexpr Register::FieldValue<decltype(vref),VrefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vref),VrefVal::v1> v1{};
        }
        ///High Speed Comparator0 Clock Gate Control.
        enum class Cmp0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Cmp0Val> cmp0{}; 
        namespace Cmp0ValC{
            constexpr Register::FieldValue<decltype(cmp0),Cmp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(cmp0),Cmp0Val::v1> v1{};
        }
        ///High Speed Comparator1 Clock Gate Control.
        enum class Cmp1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Cmp1Val> cmp1{}; 
        namespace Cmp1ValC{
            constexpr Register::FieldValue<decltype(cmp1),Cmp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(cmp1),Cmp1Val::v1> v1{};
        }
        ///SPI0 Clock Gate Control
        enum class Spi0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Spi0Val> spi0{}; 
        namespace Spi0ValC{
            constexpr Register::FieldValue<decltype(spi0),Spi0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi0),Spi0Val::v1> v1{};
        }
        ///SPI1 Clock Gate Control
        enum class Spi1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Spi1Val> spi1{}; 
        namespace Spi1ValC{
            constexpr Register::FieldValue<decltype(spi1),Spi1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi1),Spi1Val::v1> v1{};
        }
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x4003f038,0xf8548037,0,unsigned>;
        ///Segmented LCD Clock Gate Control
        enum class SlcdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SlcdVal> slcd{}; 
        namespace SlcdValC{
            constexpr Register::FieldValue<decltype(slcd),SlcdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slcd),SlcdVal::v1> v1{};
        }
        ///PCTLA Clock Gate Control
        enum class PortaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PortaVal> porta{}; 
        namespace PortaValC{
            constexpr Register::FieldValue<decltype(porta),PortaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porta),PortaVal::v1> v1{};
        }
        ///PCTLB Clock Gate Control
        enum class PortbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PortbVal> portb{}; 
        namespace PortbValC{
            constexpr Register::FieldValue<decltype(portb),PortbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portb),PortbVal::v1> v1{};
        }
        ///PCTLC Clock Gate Control
        enum class PortcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,PortcVal> portc{}; 
        namespace PortcValC{
            constexpr Register::FieldValue<decltype(portc),PortcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portc),PortcVal::v1> v1{};
        }
        ///PCTLD Clock Gate Control
        enum class PortdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,PortdVal> portd{}; 
        namespace PortdValC{
            constexpr Register::FieldValue<decltype(portd),PortdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portd),PortdVal::v1> v1{};
        }
        ///PCTLE Clock Gate Control
        enum class PorteVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,PorteVal> porte{}; 
        namespace PorteValC{
            constexpr Register::FieldValue<decltype(porte),PorteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porte),PorteVal::v1> v1{};
        }
        ///PCTLF Clock Gate Control
        enum class PortfVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,PortfVal> portf{}; 
        namespace PortfValC{
            constexpr Register::FieldValue<decltype(portf),PortfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portf),PortfVal::v1> v1{};
        }
        ///PCTLG Clock Gate Control
        enum class PortgVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,PortgVal> portg{}; 
        namespace PortgValC{
            constexpr Register::FieldValue<decltype(portg),PortgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portg),PortgVal::v1> v1{};
        }
        ///PCTLH Clock Gate Control
        enum class PorthVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,PorthVal> porth{}; 
        namespace PorthValC{
            constexpr Register::FieldValue<decltype(porth),PorthVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porth),PorthVal::v1> v1{};
        }
        ///PCTLI Clock Gate Control
        enum class PortiVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,PortiVal> porti{}; 
        namespace PortiValC{
            constexpr Register::FieldValue<decltype(porti),PortiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porti),PortiVal::v1> v1{};
        }
        ///IRTC Clock Gate Control
        enum class IrtcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,IrtcVal> irtc{}; 
        namespace IrtcValC{
            constexpr Register::FieldValue<decltype(irtc),IrtcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irtc),IrtcVal::v1> v1{};
        }
        ///IRTC_REG_FILE Clock Gate Control
        enum class IrtcregfileVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,IrtcregfileVal> irtcregfile{}; 
        namespace IrtcregfileValC{
            constexpr Register::FieldValue<decltype(irtcregfile),IrtcregfileVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irtcregfile),IrtcregfileVal::v1> v1{};
        }
        ///Watchdog Clock Gate Control
        enum class WdogVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,WdogVal> wdog{}; 
        namespace WdogValC{
            constexpr Register::FieldValue<decltype(wdog),WdogVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wdog),WdogVal::v1> v1{};
        }
        ///Peripheral Crossbar Clock Gate Control
        enum class XbarVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,XbarVal> xbar{}; 
        namespace XbarValC{
            constexpr Register::FieldValue<decltype(xbar),XbarVal::v0> v0{};
            constexpr Register::FieldValue<decltype(xbar),XbarVal::v1> v1{};
        }
        ///Quadtimer0 Clock Gate Control
        enum class Tmr0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Tmr0Val> tmr0{}; 
        namespace Tmr0ValC{
            constexpr Register::FieldValue<decltype(tmr0),Tmr0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tmr0),Tmr0Val::v1> v1{};
        }
        ///Quadtimer1 Clock Gate Control
        enum class Tmr1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tmr1Val> tmr1{}; 
        namespace Tmr1ValC{
            constexpr Register::FieldValue<decltype(tmr1),Tmr1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tmr1),Tmr1Val::v1> v1{};
        }
        ///Quadtimer2 Clock Gate Control
        enum class Tmr2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Tmr2Val> tmr2{}; 
        namespace Tmr2ValC{
            constexpr Register::FieldValue<decltype(tmr2),Tmr2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tmr2),Tmr2Val::v1> v1{};
        }
        ///Quadtimer3 Clock Gate Control
        enum class Tmr3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Tmr3Val> tmr3{}; 
        namespace Tmr3ValC{
            constexpr Register::FieldValue<decltype(tmr3),Tmr3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tmr3),Tmr3Val::v1> v1{};
        }
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4003f03c,0x2fee95e0,0,unsigned>;
        ///FTFA Clock Gate Control
        enum class FtfaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FtfaVal> ftfa{}; 
        namespace FtfaValC{
            constexpr Register::FieldValue<decltype(ftfa),FtfaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftfa),FtfaVal::v1> v1{};
        }
        ///DMA MUX0 Clock Gate Control
        enum class Dmamux0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Dmamux0Val> dmamux0{}; 
        namespace Dmamux0ValC{
            constexpr Register::FieldValue<decltype(dmamux0),Dmamux0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dmamux0),Dmamux0Val::v1> v1{};
        }
        ///DMA MUX1 Clock Gate Control
        enum class Dmamux1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Dmamux1Val> dmamux1{}; 
        namespace Dmamux1ValC{
            constexpr Register::FieldValue<decltype(dmamux1),Dmamux1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dmamux1),Dmamux1Val::v1> v1{};
        }
        ///DMA MUX2 Clock Gate Control
        enum class Dmamux2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Dmamux2Val> dmamux2{}; 
        namespace Dmamux2ValC{
            constexpr Register::FieldValue<decltype(dmamux2),Dmamux2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dmamux2),Dmamux2Val::v1> v1{};
        }
        ///DMA MUX3 Clock Gate Control
        enum class Dmamux3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Dmamux3Val> dmamux3{}; 
        namespace Dmamux3ValC{
            constexpr Register::FieldValue<decltype(dmamux3),Dmamux3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dmamux3),Dmamux3Val::v1> v1{};
        }
        ///RNGA Clock Gate Control
        enum class RngaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RngaVal> rnga{}; 
        namespace RngaValC{
            constexpr Register::FieldValue<decltype(rnga),RngaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rnga),RngaVal::v1> v1{};
        }
        ///SAR ADC Clock Gate Control
        enum class AdcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AdcVal> adc{}; 
        namespace AdcValC{
            constexpr Register::FieldValue<decltype(adc),AdcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc),AdcVal::v1> v1{};
        }
        ///PIT0 Clock Gate Control
        enum class Pit0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pit0Val> pit0{}; 
        namespace Pit0ValC{
            constexpr Register::FieldValue<decltype(pit0),Pit0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pit0),Pit0Val::v1> v1{};
        }
        ///PIT1 Clock Gate Control
        enum class Pit1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pit1Val> pit1{}; 
        namespace Pit1ValC{
            constexpr Register::FieldValue<decltype(pit1),Pit1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pit1),Pit1Val::v1> v1{};
        }
        ///AFE Clock Gate Control
        enum class AfeVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,AfeVal> afe{}; 
        namespace AfeValC{
            constexpr Register::FieldValue<decltype(afe),AfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(afe),AfeVal::v1> v1{};
        }
        ///Programmable CRC Clock Gate Control
        enum class CrcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,CrcVal> crc{}; 
        namespace CrcValC{
            constexpr Register::FieldValue<decltype(crc),CrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crc),CrcVal::v1> v1{};
        }
        ///LPTMR Clock Gate Control
        enum class LptmrVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,LptmrVal> lptmr{}; 
        namespace LptmrValC{
            constexpr Register::FieldValue<decltype(lptmr),LptmrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lptmr),LptmrVal::v1> v1{};
        }
        ///SIM_LP Clock Gate Control
        enum class SimlpVal {
            v1=0x00000001,     ///<Clock is enabled
            v0=0x00000000,     ///<Clock is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,SimlpVal> simLp{}; 
        namespace SimlpValC{
            constexpr Register::FieldValue<decltype(simLp),SimlpVal::v1> v1{};
            constexpr Register::FieldValue<decltype(simLp),SimlpVal::v0> v0{};
        }
        ///SIM_HP Clock Gate Control
        enum class SimhpVal {
            v1=0x00000001,     ///<Clock is always enabled to SIM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SimhpVal> simHp{}; 
        namespace SimhpValC{
            constexpr Register::FieldValue<decltype(simHp),SimhpVal::v1> v1{};
        }
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x4003f040,0xfffffffc,0,unsigned>;
        ///MPU Clock Gate control.
        enum class MpuVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MpuVal> mpu{}; 
        namespace MpuValC{
            constexpr Register::FieldValue<decltype(mpu),MpuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mpu),MpuVal::v1> v1{};
        }
        ///DMA Clock Gate control.
        enum class DmaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma),DmaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dma),DmaVal::v1> v1{};
        }
    }
    namespace SimClkdiv1{    ///<System Clock Divider Register 1
        using Addr = Register::Address<0x4003f044,0x07ffffff,0,unsigned>;
        ///System Clock Mode
        enum class SysclkmodeVal {
            v0=0x00000000,     ///<1:1:1
            v1=0x00000001,     ///<2:1:1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,SysclkmodeVal> sysclkmode{}; 
        namespace SysclkmodeValC{
            constexpr Register::FieldValue<decltype(sysclkmode),SysclkmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sysclkmode),SysclkmodeVal::v1> v1{};
        }
        ///System Clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> sysdiv{}; 
        namespace SysdivValC{
        }
    }
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4003f04c,0xf0fffffc,0,unsigned>;
        ///Flash Disable
        enum class FlashdisVal {
            v0=0x00000000,     ///<Flash is enabled
            v1=0x00000001,     ///<Flash is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FlashdisVal> flashdis{}; 
        namespace FlashdisValC{
            constexpr Register::FieldValue<decltype(flashdis),FlashdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flashdis),FlashdisVal::v1> v1{};
        }
        ///Flash Doze
        enum class FlashdozeVal {
            v0=0x00000000,     ///<Flash remains enabled during Wait mode
            v1=0x00000001,     ///<Flash is disabled for the duration of Wait mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FlashdozeVal> flashdoze{}; 
        namespace FlashdozeValC{
            constexpr Register::FieldValue<decltype(flashdoze),FlashdozeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flashdoze),FlashdozeVal::v1> v1{};
        }
        ///Program flash size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> pfsize{}; 
        namespace PfsizeValC{
        }
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x4003f050,0x80ffffff,0,unsigned>;
        ///Max address block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> maxaddr{}; 
        namespace MaxaddrValC{
        }
    }
    namespace SimUid0{    ///<Unique Identification Register 0
        using Addr = Register::Address<0x4003f054,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
    namespace SimUid1{    ///<Unique Identification Register 1
        using Addr = Register::Address<0x4003f058,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
    namespace SimUid2{    ///<Unique Identification Register 2
        using Addr = Register::Address<0x4003f05c,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
    namespace SimUid3{    ///<Unique Identification Register 3
        using Addr = Register::Address<0x4003f060,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
    namespace SimMiscCtl{    ///<Miscellaneous Control Register
        using Addr = Register::Address<0x4003f06c,0x00000000,0,unsigned>;
        ///XBAR AFE Modulator Output Select
        enum class XbarafemodoutselVal {
            v00=0x00000000,     ///<Sigma Delta Modulator 0 data output
            v01=0x00000001,     ///<Sigma Delta Modulator 1 data output
            v10=0x00000002,     ///<Sigma Delta Modulator 2 data output
            v11=0x00000003,     ///<Sigma Delta Modulator 3 data output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,XbarafemodoutselVal> xbarafemodoutsel{}; 
        namespace XbarafemodoutselValC{
            constexpr Register::FieldValue<decltype(xbarafemodoutsel),XbarafemodoutselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(xbarafemodoutsel),XbarafemodoutselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(xbarafemodoutsel),XbarafemodoutselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(xbarafemodoutsel),XbarafemodoutselVal::v11> v11{};
        }
        ///DMA Done select
        enum class DmadoneselVal {
            v00=0x00000000,     ///<DMA0
            v01=0x00000001,     ///<DMA1
            v10=0x00000002,     ///<DMA2
            v11=0x00000003,     ///<DMA3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,DmadoneselVal> dmadonesel{}; 
        namespace DmadoneselValC{
            constexpr Register::FieldValue<decltype(dmadonesel),DmadoneselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dmadonesel),DmadoneselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(dmadonesel),DmadoneselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dmadonesel),DmadoneselVal::v11> v11{};
        }
        ///AFE Clock Source Select
        enum class AfeclkselVal {
            v00=0x00000000,     ///<MCG PLL Clock selected
            v01=0x00000001,     ///<MCG FLL Clock selected
            v10=0x00000002,     ///<OSC Clock selected
            v11=0x00000003,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,AfeclkselVal> afeclksel{}; 
        namespace AfeclkselValC{
            constexpr Register::FieldValue<decltype(afeclksel),AfeclkselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(afeclksel),AfeclkselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(afeclksel),AfeclkselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(afeclksel),AfeclkselVal::v11> v11{};
        }
        ///AFE Clock Pad Direction
        enum class AfeclkpaddirVal {
            v0=0x00000000,     ///<AFE CLK PAD is input
            v1=0x00000001,     ///<AFE CLK PAD is output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AfeclkpaddirVal> afeclkpaddir{}; 
        namespace AfeclkpaddirValC{
            constexpr Register::FieldValue<decltype(afeclkpaddir),AfeclkpaddirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(afeclkpaddir),AfeclkpaddirVal::v1> v1{};
        }
        ///UART Modulation Type
        enum class UartmodtypeVal {
            v0=0x00000000,     ///<TypeA (ORed) Modulation selected for IRDA
            v1=0x00000001,     ///<TypeB (ANDed) Modulation selected for IRDA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,UartmodtypeVal> uartmodtype{}; 
        namespace UartmodtypeValC{
            constexpr Register::FieldValue<decltype(uartmodtype),UartmodtypeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uartmodtype),UartmodtypeVal::v1> v1{};
        }
        ///UART0 IRDA Select
        enum class Uart0irselVal {
            v0=0x00000000,     ///<Pad RX input (PTD[0] or PTF[3], as selected in Pinmux control) selected for RX input of UART0 and UART0 TX signal is not used for modulation
            v1=0x00000001,     ///<UART0 selected for IRDA modulation. UART0 TX modulated by XBAR_OUT[14] and UART0 RX input connected to XBAR_OUT[13]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Uart0irselVal> uart0irsel{}; 
        namespace Uart0irselValC{
            constexpr Register::FieldValue<decltype(uart0irsel),Uart0irselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0irsel),Uart0irselVal::v1> v1{};
        }
        ///UART1 IRDA Select
        enum class Uart1irselVal {
            v0=0x00000000,     ///<Pad RX input (PTD[2] or PTI[0], as selected in Pinmux control) selected for RX input of UART1 and UART1 TX signal is not used for modulation
            v1=0x00000001,     ///<UART1 selected for IRDA modulation. UART1 TX modulated by XBAR_OUT[14] and UART1 RX input connected to XBAR_OUT[13]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Uart1irselVal> uart1irsel{}; 
        namespace Uart1irselValC{
            constexpr Register::FieldValue<decltype(uart1irsel),Uart1irselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1irsel),Uart1irselVal::v1> v1{};
        }
        ///UART2 IRDA Select
        enum class Uart2irselVal {
            v0=0x00000000,     ///<Pad RX input PTE[6] selected for RX input of UART2 and UART2 TX signal is not used for modulation
            v1=0x00000001,     ///<UART2 selected for IRDA modulation. UART2 TX modulated by XBAR_OUT[14] and UART2 RX input connected to XBAR_OUT[13].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Uart2irselVal> uart2irsel{}; 
        namespace Uart2irselValC{
            constexpr Register::FieldValue<decltype(uart2irsel),Uart2irselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart2irsel),Uart2irselVal::v1> v1{};
        }
        ///UART3 IRDA Select
        enum class Uart3irselVal {
            v0=0x00000000,     ///<Pad RX input (PTC[3] or PTD[7], as selected in Pinmux control) selected for RX input of UART3 and UART3 TX signal is not used for modulation
            v1=0x00000001,     ///<UART3 selected for IRDA modulation. UART3 TX modulated by XBAR_OUT[14] and UART3 RX input connected to XBAR_OUT[13].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Uart3irselVal> uart3irsel{}; 
        namespace Uart3irselValC{
            constexpr Register::FieldValue<decltype(uart3irsel),Uart3irselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart3irsel),Uart3irselVal::v1> v1{};
        }
        ///XBAR PIT Output select
        enum class XbarpitoutselVal {
            v00=0x00000000,     ///<PIT0[0] (default)
            v01=0x00000001,     ///<PIT0[1]
            v10=0x00000002,     ///<PIT1[0]
            v11=0x00000003,     ///<PIT1[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,XbarpitoutselVal> xbarpitoutsel{}; 
        namespace XbarpitoutselValC{
            constexpr Register::FieldValue<decltype(xbarpitoutsel),XbarpitoutselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(xbarpitoutsel),XbarpitoutselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(xbarpitoutsel),XbarpitoutselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(xbarpitoutsel),XbarpitoutselVal::v11> v11{};
        }
        ///External Watchdog Monitor Input Select
        enum class EwminselVal {
            v0=0x00000000,     ///<Input from PAD (PTE[2] or PTE[4] as selected from Pinmux control )
            v1=0x00000001,     ///<Peripheral Crossbar (XBAR) Output[32]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,EwminselVal> ewminsel{}; 
        namespace EwminselValC{
            constexpr Register::FieldValue<decltype(ewminsel),EwminselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ewminsel),EwminselVal::v1> v1{};
        }
        ///Timer CH0 PLL clock select
        enum class Tmr0pllclkselVal {
            v0=0x00000000,     ///<Selects Bus Clock as source for the Timer CH0
            v1=0x00000001,     ///<Selects the PLL_AFE clock as the source for Timer CH0. The PLL_AFE clock source is itself selected using the MISC_CTL[5:4]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Tmr0pllclkselVal> tmr0pllclksel{}; 
        namespace Tmr0pllclkselValC{
            constexpr Register::FieldValue<decltype(tmr0pllclksel),Tmr0pllclkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tmr0pllclksel),Tmr0pllclkselVal::v1> v1{};
        }
        ///Quadtimer Channel0 Secondary Count Source Select
        enum class Tmr0scsselVal {
            v0=0x00000000,     ///<Pad PTF1 or PTD5, depending upon PCTL configuration.
            v1=0x00000001,     ///<Peripheral Crossbar (XBAR) Output[5]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tmr0scsselVal> tmr0scssel{}; 
        namespace Tmr0scsselValC{
            constexpr Register::FieldValue<decltype(tmr0scssel),Tmr0scsselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tmr0scssel),Tmr0scsselVal::v1> v1{};
        }
        ///Quadtimer Channel1 Secondary Count Source Select
        enum class Tmr1scsselVal {
            v0=0x00000000,     ///<Pad PTG0 or PTC6, depending upon PCTL configuration.
            v1=0x00000001,     ///<Peripheral Crossbar (XBAR) Output[6]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Tmr1scsselVal> tmr1scssel{}; 
        namespace Tmr1scsselValC{
            constexpr Register::FieldValue<decltype(tmr1scssel),Tmr1scsselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tmr1scssel),Tmr1scsselVal::v1> v1{};
        }
        ///Quadtimer Channel2 Secondary Count Source Select
        enum class Tmr2scsselVal {
            v0=0x00000000,     ///<Pad PTF7 or PTF0, depending upon PCTL configuration.
            v1=0x00000001,     ///<Peripheral Crossbar (XBAR) Output[7]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Tmr2scsselVal> tmr2scssel{}; 
        namespace Tmr2scsselValC{
            constexpr Register::FieldValue<decltype(tmr2scssel),Tmr2scsselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tmr2scssel),Tmr2scsselVal::v1> v1{};
        }
        ///Quadtimer Channel3 Secondary Count Source Select
        enum class Tmr3scsselVal {
            v0=0x00000000,     ///<Pad PTE5 or PTD1, depending upon PCTL configuration.
            v1=0x00000001,     ///<Peripheral Crossbar (XBAR) Output[8]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Tmr3scsselVal> tmr3scssel{}; 
        namespace Tmr3scsselValC{
            constexpr Register::FieldValue<decltype(tmr3scssel),Tmr3scsselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tmr3scssel),Tmr3scsselVal::v1> v1{};
        }
        ///Quadtimer Channel0 Primary Count Source Select
        enum class Tmr0pcsselVal {
            v00=0x00000000,     ///<Bus Clock
            v01=0x00000001,     ///<Peripheral Crossbar Output [9]
            v10=0x00000002,     ///<Peripheral Crossbar Output [10]
            v11=0x00000003,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Tmr0pcsselVal> tmr0pcssel{}; 
        namespace Tmr0pcsselValC{
            constexpr Register::FieldValue<decltype(tmr0pcssel),Tmr0pcsselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tmr0pcssel),Tmr0pcsselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tmr0pcssel),Tmr0pcsselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tmr0pcssel),Tmr0pcsselVal::v11> v11{};
        }
        ///Quadtimer Channel1 Primary Count Source Select
        enum class Tmr1pcsselVal {
            v00=0x00000000,     ///<Bus Clock
            v01=0x00000001,     ///<Peripheral Crossbar Output [9]
            v10=0x00000002,     ///<Peripheral Crossbar Output [10]
            v11=0x00000003,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,Tmr1pcsselVal> tmr1pcssel{}; 
        namespace Tmr1pcsselValC{
            constexpr Register::FieldValue<decltype(tmr1pcssel),Tmr1pcsselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tmr1pcssel),Tmr1pcsselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tmr1pcssel),Tmr1pcsselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tmr1pcssel),Tmr1pcsselVal::v11> v11{};
        }
        ///Quadtimer Channel2 Primary Count Source Select
        enum class Tmr2pcsselVal {
            v00=0x00000000,     ///<Bus Clock
            v01=0x00000001,     ///<Peripheral Crossbar Output [9]
            v10=0x00000002,     ///<Peripheral Crossbar Output [10]
            v11=0x00000003,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Tmr2pcsselVal> tmr2pcssel{}; 
        namespace Tmr2pcsselValC{
            constexpr Register::FieldValue<decltype(tmr2pcssel),Tmr2pcsselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tmr2pcssel),Tmr2pcsselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tmr2pcssel),Tmr2pcsselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tmr2pcssel),Tmr2pcsselVal::v11> v11{};
        }
        ///Quadtimer Channel3 Primary Count Source Select
        enum class Tmr3pcsselVal {
            v00=0x00000000,     ///<Bus Clock
            v01=0x00000001,     ///<Peripheral Crossbar Output [9]
            v10=0x00000002,     ///<Peripheral Crossbar Output [10]
            v11=0x00000003,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Tmr3pcsselVal> tmr3pcssel{}; 
        namespace Tmr3pcsselValC{
            constexpr Register::FieldValue<decltype(tmr3pcssel),Tmr3pcsselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tmr3pcssel),Tmr3pcsselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tmr3pcssel),Tmr3pcsselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tmr3pcssel),Tmr3pcsselVal::v11> v11{};
        }
        ///RTC Clock select
        enum class RtcclkselVal {
            v0=0x00000000,     ///<RTC OSC_32K clock selected
            v1=0x00000001,     ///<32K IRC Clock selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,RtcclkselVal> rtcclksel{}; 
        namespace RtcclkselValC{
            constexpr Register::FieldValue<decltype(rtcclksel),RtcclkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtcclksel),RtcclkselVal::v1> v1{};
        }
        ///VrefBuffer Output Enable
        enum class VrefbufoutenVal {
            v0=0x00000000,     ///<Buffer does not drive PAD
            v1=0x00000001,     ///<Buffer drives selected voltage (selected by vref_buffer_sel) on pad
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,VrefbufoutenVal> vrefbufouten{}; 
        namespace VrefbufoutenValC{
            constexpr Register::FieldValue<decltype(vrefbufouten),VrefbufoutenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vrefbufouten),VrefbufoutenVal::v1> v1{};
        }
        ///VrefBuffer Input Select
        enum class VrefbufinselVal {
            v0=0x00000000,     ///<Internal Reference selected as Buffer Input
            v1=0x00000001,     ///<External Reference selected as Buffer Input
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,VrefbufinselVal> vrefbufinsel{}; 
        namespace VrefbufinselValC{
            constexpr Register::FieldValue<decltype(vrefbufinsel),VrefbufinselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vrefbufinsel),VrefbufinselVal::v1> v1{};
        }
        ///VrefBuffer Power Down
        enum class VrefbufpdVal {
            v0=0x00000000,     ///<Buffer Enabled
            v1=0x00000001,     ///<Buffer Powered Down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,VrefbufpdVal> vrefbufpd{}; 
        namespace VrefbufpdValC{
            constexpr Register::FieldValue<decltype(vrefbufpd),VrefbufpdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vrefbufpd),VrefbufpdVal::v1> v1{};
        }
    }
}
