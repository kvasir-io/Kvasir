#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x4003e000,0xfff30fff,0,unsigned>;
        ///Returns the size of the system RAM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> sramsize{}; 
        ///32K oscillator clock select
        enum class osc32kselVal {
            v00=0x00000000,     ///<OSC32KCLK
            v01=0x00000001,     ///<ERCLK32K
            v10=0x00000002,     ///<MCGIRCLK
            v11=0x00000003,     ///<LPO
        };
        namespace osc32kselValC{
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v00> v00{};
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v01> v01{};
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v10> v10{};
            constexpr MPL::Value<osc32kselVal,osc32kselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,osc32kselVal> osc32ksel{}; 
    }
    namespace SimSopt1Cfg{    ///<SOPT1 Configuration Register
        using Addr = Register::Address<0x4003e004,0xfffffc80,0,unsigned>;
        ///LP timer Channel1 Select
        enum class lptmr1selVal {
            v00=0x00000000,     ///<Pad PTE4
            v01=0x00000001,     ///<Pad PTF4
            v10=0x00000002,     ///<Pad PTG1
        };
        namespace lptmr1selValC{
            constexpr MPL::Value<lptmr1selVal,lptmr1selVal::v00> v00{};
            constexpr MPL::Value<lptmr1selVal,lptmr1selVal::v01> v01{};
            constexpr MPL::Value<lptmr1selVal,lptmr1selVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,lptmr1selVal> lptmr1sel{}; 
        ///LP timer Channel2 Select
        enum class lptmr2selVal {
            v00=0x00000000,     ///<Pad PTD6
            v01=0x00000001,     ///<Pad PTF3
            v10=0x00000002,     ///<Pad PTG5
        };
        namespace lptmr2selValC{
            constexpr MPL::Value<lptmr2selVal,lptmr2selVal::v00> v00{};
            constexpr MPL::Value<lptmr2selVal,lptmr2selVal::v01> v01{};
            constexpr MPL::Value<lptmr2selVal,lptmr2selVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,lptmr2selVal> lptmr2sel{}; 
        ///LP timer Channel3 Select
        enum class lptmr3selVal {
            v00=0x00000000,     ///<Pad PTD5
            v01=0x00000001,     ///<Pad PTG0
            v10=0x00000002,     ///<Pad PTG6
        };
        namespace lptmr3selValC{
            constexpr MPL::Value<lptmr3selVal,lptmr3selVal::v00> v00{};
            constexpr MPL::Value<lptmr3selVal,lptmr3selVal::v01> v01{};
            constexpr MPL::Value<lptmr3selVal,lptmr3selVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,lptmr3selVal> lptmr3sel{}; 
        ///Comparator output selection for LPTMR channel0
        enum class cmpolptmr0selVal {
            v0=0x00000000,     ///<CMP[1] output selected as LPTMR input[0]
            v1=0x00000001,     ///<CMP[0] output selected as LPTMR input[0]
        };
        namespace cmpolptmr0selValC{
            constexpr MPL::Value<cmpolptmr0selVal,cmpolptmr0selVal::v0> v0{};
            constexpr MPL::Value<cmpolptmr0selVal,cmpolptmr0selVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cmpolptmr0selVal> cmpolptmr0sel{}; 
        ///no description available
        enum class ramsbdisVal {
            v0=0x00000000,     ///<Source bias of System SRAM enabled during VLPR and VLPW modes.
            v1=0x00000001,     ///<Source bias of System SRAM disabled during VLPR and VLPW modes.
        };
        namespace ramsbdisValC{
            constexpr MPL::Value<ramsbdisVal,ramsbdisVal::v0> v0{};
            constexpr MPL::Value<ramsbdisVal,ramsbdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ramsbdisVal> ramsbdis{}; 
        ///RAM Bitline Precharge Enable
        enum class rambpenVal {
            v0=0x00000000,     ///<Bitline precharge of system SRAM disabled during VLPR and VLPW modes.
            v1=0x00000001,     ///<Bitline precharge of system SRAM enabled during VLPR and VLPW modes.
        };
        namespace rambpenValC{
            constexpr MPL::Value<rambpenVal,rambpenVal::v0> v0{};
            constexpr MPL::Value<rambpenVal,rambpenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rambpenVal> rambpen{}; 
    }
    namespace SimCtrlReg{    ///<System Control Register
        using Addr = Register::Address<0x4003f004,0xffffff00,0,unsigned>;
        ///NMI Disable
        enum class nmidisVal {
            v0=0x00000000,     ///<NMI enabled
            v1=0x00000001,     ///<NMI disabled
        };
        namespace nmidisValC{
            constexpr MPL::Value<nmidisVal,nmidisVal::v0> v0{};
            constexpr MPL::Value<nmidisVal,nmidisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,nmidisVal> nmidis{}; 
        ///PLL VLP Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pllVlpEn{}; 
        ///PTC2 HighDrive Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ptc2HdEn{}; 
        ///SAR ADC Trigger Clk Select
        enum class sarTrgClkSelVal {
            v00=0x00000000,     ///<Bus Clock (During Low Power Modes such as stop, the Bus clock is not available for conversion and should not be selected in case a conversion needs to be performed while in stop)
            v01=0x00000001,     ///<ADC asynchronous Clock
            v10=0x00000002,     ///<ERCLK32K
            v11=0x00000003,     ///<OSCCLK
        };
        namespace sarTrgClkSelValC{
            constexpr MPL::Value<sarTrgClkSelVal,sarTrgClkSelVal::v00> v00{};
            constexpr MPL::Value<sarTrgClkSelVal,sarTrgClkSelVal::v01> v01{};
            constexpr MPL::Value<sarTrgClkSelVal,sarTrgClkSelVal::v10> v10{};
            constexpr MPL::Value<sarTrgClkSelVal,sarTrgClkSelVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,sarTrgClkSelVal> sarTrgClkSel{}; 
        ///Clock out Select
        enum class clkoutselVal {
            v000=0x00000000,     ///<Disabled
            v001=0x00000001,     ///<Gated Core Clk
            v010=0x00000002,     ///<Bus/Flash Clk
            v011=0x00000003,     ///<LPO clock from PMC
            v100=0x00000004,     ///<IRC clock from MCG
            v101=0x00000005,     ///<Muxed 32Khz source (please refer SOPT1[19:18] for possible options)
            v110=0x00000006,     ///<MHz Oscillator external reference clock
            v111=0x00000007,     ///<PLL clock output from MCG
        };
        namespace clkoutselValC{
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v000> v000{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v001> v001{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v010> v010{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v011> v011{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v100> v100{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v101> v101{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v110> v110{};
            constexpr MPL::Value<clkoutselVal,clkoutselVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,clkoutselVal> clkoutsel{}; 
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x4003f024,0x00000000,0,unsigned>;
        ///Pincount identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pinid{}; 
        ///Die ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dieid{}; 
        ///Revision ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> revid{}; 
        ///SRAM Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> sramsize{}; 
        ///Attribute ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> attr{}; 
        ///Series ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> seriesid{}; 
        ///Sub-Family ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> subfamid{}; 
        ///Metering family ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> famid{}; 
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x4003f034,0xff93422d,0,unsigned>;
        ///External Watchdog Monitor Clock gate control
        enum class ewmVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ewmValC{
            constexpr MPL::Value<ewmVal,ewmVal::v0> v0{};
            constexpr MPL::Value<ewmVal,ewmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ewmVal> ewm{}; 
        ///MCG clock gate control.
        enum class mcgVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace mcgValC{
            constexpr MPL::Value<mcgVal,mcgVal::v0> v0{};
            constexpr MPL::Value<mcgVal,mcgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mcgVal> mcg{}; 
        ///Oscillator (Mhz) Clock Gate Control
        enum class oscVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace oscValC{
            constexpr MPL::Value<oscVal,oscVal::v0> v0{};
            constexpr MPL::Value<oscVal,oscVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,oscVal> osc{}; 
        ///I2C0 Clock Gate Control
        enum class i2c0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace i2c0ValC{
            constexpr MPL::Value<i2c0Val,i2c0Val::v0> v0{};
            constexpr MPL::Value<i2c0Val,i2c0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,i2c0Val> i2c0{}; 
        ///I2C1 Clock Gate Control
        enum class i2c1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace i2c1ValC{
            constexpr MPL::Value<i2c1Val,i2c1Val::v0> v0{};
            constexpr MPL::Value<i2c1Val,i2c1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,i2c1Val> i2c1{}; 
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
        ///UART3 Clock Gate Control
        enum class uart3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace uart3ValC{
            constexpr MPL::Value<uart3Val,uart3Val::v0> v0{};
            constexpr MPL::Value<uart3Val,uart3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,uart3Val> uart3{}; 
        ///VREF Clock Gate Control
        enum class vrefVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace vrefValC{
            constexpr MPL::Value<vrefVal,vrefVal::v0> v0{};
            constexpr MPL::Value<vrefVal,vrefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,vrefVal> vref{}; 
        ///High Speed Comparator0 Clock Gate Control.
        enum class cmp0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace cmp0ValC{
            constexpr MPL::Value<cmp0Val,cmp0Val::v0> v0{};
            constexpr MPL::Value<cmp0Val,cmp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,cmp0Val> cmp0{}; 
        ///High Speed Comparator1 Clock Gate Control.
        enum class cmp1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace cmp1ValC{
            constexpr MPL::Value<cmp1Val,cmp1Val::v0> v0{};
            constexpr MPL::Value<cmp1Val,cmp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,cmp1Val> cmp1{}; 
        ///SPI0 Clock Gate Control
        enum class spi0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace spi0ValC{
            constexpr MPL::Value<spi0Val,spi0Val::v0> v0{};
            constexpr MPL::Value<spi0Val,spi0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,spi0Val> spi0{}; 
        ///SPI1 Clock Gate Control
        enum class spi1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace spi1ValC{
            constexpr MPL::Value<spi1Val,spi1Val::v0> v0{};
            constexpr MPL::Value<spi1Val,spi1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,spi1Val> spi1{}; 
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x4003f038,0xf8548037,0,unsigned>;
        ///Segmented LCD Clock Gate Control
        enum class slcdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace slcdValC{
            constexpr MPL::Value<slcdVal,slcdVal::v0> v0{};
            constexpr MPL::Value<slcdVal,slcdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,slcdVal> slcd{}; 
        ///PCTLA Clock Gate Control
        enum class portaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portaValC{
            constexpr MPL::Value<portaVal,portaVal::v0> v0{};
            constexpr MPL::Value<portaVal,portaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,portaVal> porta{}; 
        ///PCTLB Clock Gate Control
        enum class portbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portbValC{
            constexpr MPL::Value<portbVal,portbVal::v0> v0{};
            constexpr MPL::Value<portbVal,portbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,portbVal> portb{}; 
        ///PCTLC Clock Gate Control
        enum class portcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portcValC{
            constexpr MPL::Value<portcVal,portcVal::v0> v0{};
            constexpr MPL::Value<portcVal,portcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,portcVal> portc{}; 
        ///PCTLD Clock Gate Control
        enum class portdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portdValC{
            constexpr MPL::Value<portdVal,portdVal::v0> v0{};
            constexpr MPL::Value<portdVal,portdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,portdVal> portd{}; 
        ///PCTLE Clock Gate Control
        enum class porteVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace porteValC{
            constexpr MPL::Value<porteVal,porteVal::v0> v0{};
            constexpr MPL::Value<porteVal,porteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,porteVal> porte{}; 
        ///PCTLF Clock Gate Control
        enum class portfVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portfValC{
            constexpr MPL::Value<portfVal,portfVal::v0> v0{};
            constexpr MPL::Value<portfVal,portfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,portfVal> portf{}; 
        ///PCTLG Clock Gate Control
        enum class portgVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portgValC{
            constexpr MPL::Value<portgVal,portgVal::v0> v0{};
            constexpr MPL::Value<portgVal,portgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,portgVal> portg{}; 
        ///PCTLH Clock Gate Control
        enum class porthVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace porthValC{
            constexpr MPL::Value<porthVal,porthVal::v0> v0{};
            constexpr MPL::Value<porthVal,porthVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,porthVal> porth{}; 
        ///PCTLI Clock Gate Control
        enum class portiVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portiValC{
            constexpr MPL::Value<portiVal,portiVal::v0> v0{};
            constexpr MPL::Value<portiVal,portiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,portiVal> porti{}; 
        ///IRTC Clock Gate Control
        enum class irtcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace irtcValC{
            constexpr MPL::Value<irtcVal,irtcVal::v0> v0{};
            constexpr MPL::Value<irtcVal,irtcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,irtcVal> irtc{}; 
        ///IRTC_REG_FILE Clock Gate Control
        enum class irtcregfileVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace irtcregfileValC{
            constexpr MPL::Value<irtcregfileVal,irtcregfileVal::v0> v0{};
            constexpr MPL::Value<irtcregfileVal,irtcregfileVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,irtcregfileVal> irtcregfile{}; 
        ///Watchdog Clock Gate Control
        enum class wdogVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace wdogValC{
            constexpr MPL::Value<wdogVal,wdogVal::v0> v0{};
            constexpr MPL::Value<wdogVal,wdogVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,wdogVal> wdog{}; 
        ///Peripheral Crossbar Clock Gate Control
        enum class xbarVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace xbarValC{
            constexpr MPL::Value<xbarVal,xbarVal::v0> v0{};
            constexpr MPL::Value<xbarVal,xbarVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,xbarVal> xbar{}; 
        ///Quadtimer0 Clock Gate Control
        enum class tmr0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace tmr0ValC{
            constexpr MPL::Value<tmr0Val,tmr0Val::v0> v0{};
            constexpr MPL::Value<tmr0Val,tmr0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,tmr0Val> tmr0{}; 
        ///Quadtimer1 Clock Gate Control
        enum class tmr1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace tmr1ValC{
            constexpr MPL::Value<tmr1Val,tmr1Val::v0> v0{};
            constexpr MPL::Value<tmr1Val,tmr1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tmr1Val> tmr1{}; 
        ///Quadtimer2 Clock Gate Control
        enum class tmr2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace tmr2ValC{
            constexpr MPL::Value<tmr2Val,tmr2Val::v0> v0{};
            constexpr MPL::Value<tmr2Val,tmr2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,tmr2Val> tmr2{}; 
        ///Quadtimer3 Clock Gate Control
        enum class tmr3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace tmr3ValC{
            constexpr MPL::Value<tmr3Val,tmr3Val::v0> v0{};
            constexpr MPL::Value<tmr3Val,tmr3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,tmr3Val> tmr3{}; 
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4003f03c,0x2fee95e0,0,unsigned>;
        ///FTFA Clock Gate Control
        enum class ftfaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftfaValC{
            constexpr MPL::Value<ftfaVal,ftfaVal::v0> v0{};
            constexpr MPL::Value<ftfaVal,ftfaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ftfaVal> ftfa{}; 
        ///DMA MUX0 Clock Gate Control
        enum class dmamux0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace dmamux0ValC{
            constexpr MPL::Value<dmamux0Val,dmamux0Val::v0> v0{};
            constexpr MPL::Value<dmamux0Val,dmamux0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dmamux0Val> dmamux0{}; 
        ///DMA MUX1 Clock Gate Control
        enum class dmamux1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace dmamux1ValC{
            constexpr MPL::Value<dmamux1Val,dmamux1Val::v0> v0{};
            constexpr MPL::Value<dmamux1Val,dmamux1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dmamux1Val> dmamux1{}; 
        ///DMA MUX2 Clock Gate Control
        enum class dmamux2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace dmamux2ValC{
            constexpr MPL::Value<dmamux2Val,dmamux2Val::v0> v0{};
            constexpr MPL::Value<dmamux2Val,dmamux2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dmamux2Val> dmamux2{}; 
        ///DMA MUX3 Clock Gate Control
        enum class dmamux3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace dmamux3ValC{
            constexpr MPL::Value<dmamux3Val,dmamux3Val::v0> v0{};
            constexpr MPL::Value<dmamux3Val,dmamux3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dmamux3Val> dmamux3{}; 
        ///RNGA Clock Gate Control
        enum class rngaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace rngaValC{
            constexpr MPL::Value<rngaVal,rngaVal::v0> v0{};
            constexpr MPL::Value<rngaVal,rngaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rngaVal> rnga{}; 
        ///SAR ADC Clock Gate Control
        enum class adcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace adcValC{
            constexpr MPL::Value<adcVal,adcVal::v0> v0{};
            constexpr MPL::Value<adcVal,adcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,adcVal> adc{}; 
        ///PIT0 Clock Gate Control
        enum class pit0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace pit0ValC{
            constexpr MPL::Value<pit0Val,pit0Val::v0> v0{};
            constexpr MPL::Value<pit0Val,pit0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pit0Val> pit0{}; 
        ///PIT1 Clock Gate Control
        enum class pit1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace pit1ValC{
            constexpr MPL::Value<pit1Val,pit1Val::v0> v0{};
            constexpr MPL::Value<pit1Val,pit1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pit1Val> pit1{}; 
        ///AFE Clock Gate Control
        enum class afeVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace afeValC{
            constexpr MPL::Value<afeVal,afeVal::v0> v0{};
            constexpr MPL::Value<afeVal,afeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,afeVal> afe{}; 
        ///Programmable CRC Clock Gate Control
        enum class crcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace crcValC{
            constexpr MPL::Value<crcVal,crcVal::v0> v0{};
            constexpr MPL::Value<crcVal,crcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,crcVal> crc{}; 
        ///LPTMR Clock Gate Control
        enum class lptmrVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace lptmrValC{
            constexpr MPL::Value<lptmrVal,lptmrVal::v0> v0{};
            constexpr MPL::Value<lptmrVal,lptmrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,lptmrVal> lptmr{}; 
        ///SIM_LP Clock Gate Control
        enum class simLpVal {
            v1=0x00000001,     ///<Clock is enabled
            v0=0x00000000,     ///<Clock is disabled
        };
        namespace simLpValC{
            constexpr MPL::Value<simLpVal,simLpVal::v1> v1{};
            constexpr MPL::Value<simLpVal,simLpVal::v0> v0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,simLpVal> simLp{}; 
        ///SIM_HP Clock Gate Control
        enum class simHpVal {
            v1=0x00000001,     ///<Clock is always enabled to SIM
        };
        namespace simHpValC{
            constexpr MPL::Value<simHpVal,simHpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,simHpVal> simHp{}; 
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x4003f040,0xfffffffc,0,unsigned>;
        ///MPU Clock Gate control.
        enum class mpuVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace mpuValC{
            constexpr MPL::Value<mpuVal,mpuVal::v0> v0{};
            constexpr MPL::Value<mpuVal,mpuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,mpuVal> mpu{}; 
        ///DMA Clock Gate control.
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
        using Addr = Register::Address<0x4003f044,0x07ffffff,0,unsigned>;
        ///System Clock Mode
        enum class sysclkmodeVal {
            v0=0x00000000,     ///<1:1:1
            v1=0x00000001,     ///<2:1:1
        };
        namespace sysclkmodeValC{
            constexpr MPL::Value<sysclkmodeVal,sysclkmodeVal::v0> v0{};
            constexpr MPL::Value<sysclkmodeVal,sysclkmodeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,sysclkmodeVal> sysclkmode{}; 
        ///System Clock divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> sysdiv{}; 
    }
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4003f04c,0xf0fffffc,0,unsigned>;
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
        using Addr = Register::Address<0x4003f050,0x80ffffff,0,unsigned>;
        ///Max address block
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> maxaddr{}; 
    }
    namespace SimUid0{    ///<Unique Identification Register 0
        using Addr = Register::Address<0x4003f054,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimUid1{    ///<Unique Identification Register 1
        using Addr = Register::Address<0x4003f058,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimUid2{    ///<Unique Identification Register 2
        using Addr = Register::Address<0x4003f05c,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimUid3{    ///<Unique Identification Register 3
        using Addr = Register::Address<0x4003f060,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimMiscCtl{    ///<Miscellaneous Control Register
        using Addr = Register::Address<0x4003f06c,0x00000000,0,unsigned>;
        ///XBAR AFE Modulator Output Select
        enum class xbarafemodoutselVal {
            v00=0x00000000,     ///<Sigma Delta Modulator 0 data output
            v01=0x00000001,     ///<Sigma Delta Modulator 1 data output
            v10=0x00000002,     ///<Sigma Delta Modulator 2 data output
            v11=0x00000003,     ///<Sigma Delta Modulator 3 data output
        };
        namespace xbarafemodoutselValC{
            constexpr MPL::Value<xbarafemodoutselVal,xbarafemodoutselVal::v00> v00{};
            constexpr MPL::Value<xbarafemodoutselVal,xbarafemodoutselVal::v01> v01{};
            constexpr MPL::Value<xbarafemodoutselVal,xbarafemodoutselVal::v10> v10{};
            constexpr MPL::Value<xbarafemodoutselVal,xbarafemodoutselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,xbarafemodoutselVal> xbarafemodoutsel{}; 
        ///DMA Done select
        enum class dmadoneselVal {
            v00=0x00000000,     ///<DMA0
            v01=0x00000001,     ///<DMA1
            v10=0x00000002,     ///<DMA2
            v11=0x00000003,     ///<DMA3
        };
        namespace dmadoneselValC{
            constexpr MPL::Value<dmadoneselVal,dmadoneselVal::v00> v00{};
            constexpr MPL::Value<dmadoneselVal,dmadoneselVal::v01> v01{};
            constexpr MPL::Value<dmadoneselVal,dmadoneselVal::v10> v10{};
            constexpr MPL::Value<dmadoneselVal,dmadoneselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,dmadoneselVal> dmadonesel{}; 
        ///AFE Clock Source Select
        enum class afeclkselVal {
            v00=0x00000000,     ///<MCG PLL Clock selected
            v01=0x00000001,     ///<MCG FLL Clock selected
            v10=0x00000002,     ///<OSC Clock selected
            v11=0x00000003,     ///<Disabled
        };
        namespace afeclkselValC{
            constexpr MPL::Value<afeclkselVal,afeclkselVal::v00> v00{};
            constexpr MPL::Value<afeclkselVal,afeclkselVal::v01> v01{};
            constexpr MPL::Value<afeclkselVal,afeclkselVal::v10> v10{};
            constexpr MPL::Value<afeclkselVal,afeclkselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,afeclkselVal> afeclksel{}; 
        ///AFE Clock Pad Direction
        enum class afeclkpaddirVal {
            v0=0x00000000,     ///<AFE CLK PAD is input
            v1=0x00000001,     ///<AFE CLK PAD is output
        };
        namespace afeclkpaddirValC{
            constexpr MPL::Value<afeclkpaddirVal,afeclkpaddirVal::v0> v0{};
            constexpr MPL::Value<afeclkpaddirVal,afeclkpaddirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,afeclkpaddirVal> afeclkpaddir{}; 
        ///UART Modulation Type
        enum class uartmodtypeVal {
            v0=0x00000000,     ///<TypeA (ORed) Modulation selected for IRDA
            v1=0x00000001,     ///<TypeB (ANDed) Modulation selected for IRDA
        };
        namespace uartmodtypeValC{
            constexpr MPL::Value<uartmodtypeVal,uartmodtypeVal::v0> v0{};
            constexpr MPL::Value<uartmodtypeVal,uartmodtypeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,uartmodtypeVal> uartmodtype{}; 
        ///UART0 IRDA Select
        enum class uart0irselVal {
            v0=0x00000000,     ///<Pad RX input (PTD[0] or PTF[3], as selected in Pinmux control) selected for RX input of UART0 and UART0 TX signal is not used for modulation
            v1=0x00000001,     ///<UART0 selected for IRDA modulation. UART0 TX modulated by XBAR_OUT[14] and UART0 RX input connected to XBAR_OUT[13]
        };
        namespace uart0irselValC{
            constexpr MPL::Value<uart0irselVal,uart0irselVal::v0> v0{};
            constexpr MPL::Value<uart0irselVal,uart0irselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,uart0irselVal> uart0irsel{}; 
        ///UART1 IRDA Select
        enum class uart1irselVal {
            v0=0x00000000,     ///<Pad RX input (PTD[2] or PTI[0], as selected in Pinmux control) selected for RX input of UART1 and UART1 TX signal is not used for modulation
            v1=0x00000001,     ///<UART1 selected for IRDA modulation. UART1 TX modulated by XBAR_OUT[14] and UART1 RX input connected to XBAR_OUT[13]
        };
        namespace uart1irselValC{
            constexpr MPL::Value<uart1irselVal,uart1irselVal::v0> v0{};
            constexpr MPL::Value<uart1irselVal,uart1irselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,uart1irselVal> uart1irsel{}; 
        ///UART2 IRDA Select
        enum class uart2irselVal {
            v0=0x00000000,     ///<Pad RX input PTE[6] selected for RX input of UART2 and UART2 TX signal is not used for modulation
            v1=0x00000001,     ///<UART2 selected for IRDA modulation. UART2 TX modulated by XBAR_OUT[14] and UART2 RX input connected to XBAR_OUT[13].
        };
        namespace uart2irselValC{
            constexpr MPL::Value<uart2irselVal,uart2irselVal::v0> v0{};
            constexpr MPL::Value<uart2irselVal,uart2irselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,uart2irselVal> uart2irsel{}; 
        ///UART3 IRDA Select
        enum class uart3irselVal {
            v0=0x00000000,     ///<Pad RX input (PTC[3] or PTD[7], as selected in Pinmux control) selected for RX input of UART3 and UART3 TX signal is not used for modulation
            v1=0x00000001,     ///<UART3 selected for IRDA modulation. UART3 TX modulated by XBAR_OUT[14] and UART3 RX input connected to XBAR_OUT[13].
        };
        namespace uart3irselValC{
            constexpr MPL::Value<uart3irselVal,uart3irselVal::v0> v0{};
            constexpr MPL::Value<uart3irselVal,uart3irselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,uart3irselVal> uart3irsel{}; 
        ///XBAR PIT Output select
        enum class xbarpitoutselVal {
            v00=0x00000000,     ///<PIT0[0] (default)
            v01=0x00000001,     ///<PIT0[1]
            v10=0x00000002,     ///<PIT1[0]
            v11=0x00000003,     ///<PIT1[1]
        };
        namespace xbarpitoutselValC{
            constexpr MPL::Value<xbarpitoutselVal,xbarpitoutselVal::v00> v00{};
            constexpr MPL::Value<xbarpitoutselVal,xbarpitoutselVal::v01> v01{};
            constexpr MPL::Value<xbarpitoutselVal,xbarpitoutselVal::v10> v10{};
            constexpr MPL::Value<xbarpitoutselVal,xbarpitoutselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,xbarpitoutselVal> xbarpitoutsel{}; 
        ///External Watchdog Monitor Input Select
        enum class ewminselVal {
            v0=0x00000000,     ///<Input from PAD (PTE[2] or PTE[4] as selected from Pinmux control )
            v1=0x00000001,     ///<Peripheral Crossbar (XBAR) Output[32]
        };
        namespace ewminselValC{
            constexpr MPL::Value<ewminselVal,ewminselVal::v0> v0{};
            constexpr MPL::Value<ewminselVal,ewminselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ewminselVal> ewminsel{}; 
        ///Timer CH0 PLL clock select
        enum class tmr0pllclkselVal {
            v0=0x00000000,     ///<Selects Bus Clock as source for the Timer CH0
            v1=0x00000001,     ///<Selects the PLL_AFE clock as the source for Timer CH0. The PLL_AFE clock source is itself selected using the MISC_CTL[5:4]
        };
        namespace tmr0pllclkselValC{
            constexpr MPL::Value<tmr0pllclkselVal,tmr0pllclkselVal::v0> v0{};
            constexpr MPL::Value<tmr0pllclkselVal,tmr0pllclkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,tmr0pllclkselVal> tmr0pllclksel{}; 
        ///Quadtimer Channel0 Secondary Count Source Select
        enum class tmr0scsselVal {
            v0=0x00000000,     ///<Pad PTF1 or PTD5, depending upon PCTL configuration.
            v1=0x00000001,     ///<Peripheral Crossbar (XBAR) Output[5]
        };
        namespace tmr0scsselValC{
            constexpr MPL::Value<tmr0scsselVal,tmr0scsselVal::v0> v0{};
            constexpr MPL::Value<tmr0scsselVal,tmr0scsselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tmr0scsselVal> tmr0scssel{}; 
        ///Quadtimer Channel1 Secondary Count Source Select
        enum class tmr1scsselVal {
            v0=0x00000000,     ///<Pad PTG0 or PTC6, depending upon PCTL configuration.
            v1=0x00000001,     ///<Peripheral Crossbar (XBAR) Output[6]
        };
        namespace tmr1scsselValC{
            constexpr MPL::Value<tmr1scsselVal,tmr1scsselVal::v0> v0{};
            constexpr MPL::Value<tmr1scsselVal,tmr1scsselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,tmr1scsselVal> tmr1scssel{}; 
        ///Quadtimer Channel2 Secondary Count Source Select
        enum class tmr2scsselVal {
            v0=0x00000000,     ///<Pad PTF7 or PTF0, depending upon PCTL configuration.
            v1=0x00000001,     ///<Peripheral Crossbar (XBAR) Output[7]
        };
        namespace tmr2scsselValC{
            constexpr MPL::Value<tmr2scsselVal,tmr2scsselVal::v0> v0{};
            constexpr MPL::Value<tmr2scsselVal,tmr2scsselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,tmr2scsselVal> tmr2scssel{}; 
        ///Quadtimer Channel3 Secondary Count Source Select
        enum class tmr3scsselVal {
            v0=0x00000000,     ///<Pad PTE5 or PTD1, depending upon PCTL configuration.
            v1=0x00000001,     ///<Peripheral Crossbar (XBAR) Output[8]
        };
        namespace tmr3scsselValC{
            constexpr MPL::Value<tmr3scsselVal,tmr3scsselVal::v0> v0{};
            constexpr MPL::Value<tmr3scsselVal,tmr3scsselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,tmr3scsselVal> tmr3scssel{}; 
        ///Quadtimer Channel0 Primary Count Source Select
        enum class tmr0pcsselVal {
            v00=0x00000000,     ///<Bus Clock
            v01=0x00000001,     ///<Peripheral Crossbar Output [9]
            v10=0x00000002,     ///<Peripheral Crossbar Output [10]
            v11=0x00000003,     ///<Disabled
        };
        namespace tmr0pcsselValC{
            constexpr MPL::Value<tmr0pcsselVal,tmr0pcsselVal::v00> v00{};
            constexpr MPL::Value<tmr0pcsselVal,tmr0pcsselVal::v01> v01{};
            constexpr MPL::Value<tmr0pcsselVal,tmr0pcsselVal::v10> v10{};
            constexpr MPL::Value<tmr0pcsselVal,tmr0pcsselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,tmr0pcsselVal> tmr0pcssel{}; 
        ///Quadtimer Channel1 Primary Count Source Select
        enum class tmr1pcsselVal {
            v00=0x00000000,     ///<Bus Clock
            v01=0x00000001,     ///<Peripheral Crossbar Output [9]
            v10=0x00000002,     ///<Peripheral Crossbar Output [10]
            v11=0x00000003,     ///<Disabled
        };
        namespace tmr1pcsselValC{
            constexpr MPL::Value<tmr1pcsselVal,tmr1pcsselVal::v00> v00{};
            constexpr MPL::Value<tmr1pcsselVal,tmr1pcsselVal::v01> v01{};
            constexpr MPL::Value<tmr1pcsselVal,tmr1pcsselVal::v10> v10{};
            constexpr MPL::Value<tmr1pcsselVal,tmr1pcsselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,tmr1pcsselVal> tmr1pcssel{}; 
        ///Quadtimer Channel2 Primary Count Source Select
        enum class tmr2pcsselVal {
            v00=0x00000000,     ///<Bus Clock
            v01=0x00000001,     ///<Peripheral Crossbar Output [9]
            v10=0x00000002,     ///<Peripheral Crossbar Output [10]
            v11=0x00000003,     ///<Disabled
        };
        namespace tmr2pcsselValC{
            constexpr MPL::Value<tmr2pcsselVal,tmr2pcsselVal::v00> v00{};
            constexpr MPL::Value<tmr2pcsselVal,tmr2pcsselVal::v01> v01{};
            constexpr MPL::Value<tmr2pcsselVal,tmr2pcsselVal::v10> v10{};
            constexpr MPL::Value<tmr2pcsselVal,tmr2pcsselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,tmr2pcsselVal> tmr2pcssel{}; 
        ///Quadtimer Channel3 Primary Count Source Select
        enum class tmr3pcsselVal {
            v00=0x00000000,     ///<Bus Clock
            v01=0x00000001,     ///<Peripheral Crossbar Output [9]
            v10=0x00000002,     ///<Peripheral Crossbar Output [10]
            v11=0x00000003,     ///<Disabled
        };
        namespace tmr3pcsselValC{
            constexpr MPL::Value<tmr3pcsselVal,tmr3pcsselVal::v00> v00{};
            constexpr MPL::Value<tmr3pcsselVal,tmr3pcsselVal::v01> v01{};
            constexpr MPL::Value<tmr3pcsselVal,tmr3pcsselVal::v10> v10{};
            constexpr MPL::Value<tmr3pcsselVal,tmr3pcsselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,tmr3pcsselVal> tmr3pcssel{}; 
        ///RTC Clock select
        enum class rtcclkselVal {
            v0=0x00000000,     ///<RTC OSC_32K clock selected
            v1=0x00000001,     ///<32K IRC Clock selected
        };
        namespace rtcclkselValC{
            constexpr MPL::Value<rtcclkselVal,rtcclkselVal::v0> v0{};
            constexpr MPL::Value<rtcclkselVal,rtcclkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,rtcclkselVal> rtcclksel{}; 
        ///VrefBuffer Output Enable
        enum class vrefbufoutenVal {
            v0=0x00000000,     ///<Buffer does not drive PAD
            v1=0x00000001,     ///<Buffer drives selected voltage (selected by vref_buffer_sel) on pad
        };
        namespace vrefbufoutenValC{
            constexpr MPL::Value<vrefbufoutenVal,vrefbufoutenVal::v0> v0{};
            constexpr MPL::Value<vrefbufoutenVal,vrefbufoutenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,vrefbufoutenVal> vrefbufouten{}; 
        ///VrefBuffer Input Select
        enum class vrefbufinselVal {
            v0=0x00000000,     ///<Internal Reference selected as Buffer Input
            v1=0x00000001,     ///<External Reference selected as Buffer Input
        };
        namespace vrefbufinselValC{
            constexpr MPL::Value<vrefbufinselVal,vrefbufinselVal::v0> v0{};
            constexpr MPL::Value<vrefbufinselVal,vrefbufinselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,vrefbufinselVal> vrefbufinsel{}; 
        ///VrefBuffer Power Down
        enum class vrefbufpdVal {
            v0=0x00000000,     ///<Buffer Enabled
            v1=0x00000001,     ///<Buffer Powered Down
        };
        namespace vrefbufpdValC{
            constexpr MPL::Value<vrefbufpdVal,vrefbufpdVal::v0> v0{};
            constexpr MPL::Value<vrefbufpdVal,vrefbufpdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,vrefbufpdVal> vrefbufpd{}; 
    }
}
