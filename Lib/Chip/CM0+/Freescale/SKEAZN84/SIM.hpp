#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSrsid{    ///<System Reset Status and ID Register
        using Addr = Register::Address<0x40048000,0x0000d119,0,unsigned>;
        ///Low Voltage Detect
        enum class lvdVal {
            v0=0x00000000,     ///<Reset is not caused by LVD trip or POR.
            v1=0x00000001,     ///<Reset is caused by LVD trip or POR.
        };
        namespace lvdValC{
            constexpr MPL::Value<lvdVal,lvdVal::v0> v0{};
            constexpr MPL::Value<lvdVal,lvdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lvdVal> lvd{}; 
        ///Internal Clock Source Module Reset
        enum class locVal {
            v0=0x00000000,     ///<Reset is not caused by the ICS module.
            v1=0x00000001,     ///<Reset is caused by the ICS module.
        };
        namespace locValC{
            constexpr MPL::Value<locVal,locVal::v0> v0{};
            constexpr MPL::Value<locVal,locVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,locVal> loc{}; 
        ///Watchdog (WDOG)
        enum class wdogVal {
            v0=0x00000000,     ///<Reset is not caused by WDOG timeout.
            v1=0x00000001,     ///<Reset is caused by WDOG timeout.
        };
        namespace wdogValC{
            constexpr MPL::Value<wdogVal,wdogVal::v0> v0{};
            constexpr MPL::Value<wdogVal,wdogVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wdogVal> wdog{}; 
        ///External Reset Pin
        enum class pinVal {
            v0=0x00000000,     ///<Reset is not caused by external reset pin.
            v1=0x00000001,     ///<Reset came from external reset pin.
        };
        namespace pinValC{
            constexpr MPL::Value<pinVal,pinVal::v0> v0{};
            constexpr MPL::Value<pinVal,pinVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pinVal> pin{}; 
        ///Power-On Reset
        enum class porVal {
            v0=0x00000000,     ///<Reset not caused by POR.
            v1=0x00000001,     ///<POR caused reset.
        };
        namespace porValC{
            constexpr MPL::Value<porVal,porVal::v0> v0{};
            constexpr MPL::Value<porVal,porVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,porVal> por{}; 
        ///Core Lockup
        enum class lockupVal {
            v0=0x00000000,     ///<Reset is not caused by core LOCKUP event.
            v1=0x00000001,     ///<Reset is caused by core LOCKUP event.
        };
        namespace lockupValC{
            constexpr MPL::Value<lockupVal,lockupVal::v0> v0{};
            constexpr MPL::Value<lockupVal,lockupVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,lockupVal> lockup{}; 
        ///Software
        enum class swVal {
            v0=0x00000000,     ///<Reset is not caused by software setting of SYSRESETREQ bit.
            v1=0x00000001,     ///<Reset caused by software setting of SYSRESETREQ bit
        };
        namespace swValC{
            constexpr MPL::Value<swVal,swVal::v0> v0{};
            constexpr MPL::Value<swVal,swVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,swVal> sw{}; 
        ///MDM-AP System Reset Request
        enum class mdmapVal {
            v0=0x00000000,     ///<Reset is not caused by host debugger system setting of the System Reset Request bit.
            v1=0x00000001,     ///<Reset is caused by host debugger system setting of the System Reset Request bit.
        };
        namespace mdmapValC{
            constexpr MPL::Value<mdmapVal,mdmapVal::v0> v0{};
            constexpr MPL::Value<mdmapVal,mdmapVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,mdmapVal> mdmap{}; 
        ///Stop Mode Acknowledge Error Reset
        enum class sackerrVal {
            v0=0x00000000,     ///<Reset is not caused by peripheral failure to acknowledge attempt to enter Stop mode.
            v1=0x00000001,     ///<Reset is caused by peripheral failure to acknowledge attempt to enter Stop mode.
        };
        namespace sackerrValC{
            constexpr MPL::Value<sackerrVal,sackerrVal::v0> v0{};
            constexpr MPL::Value<sackerrVal,sackerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,sackerrVal> sackerr{}; 
        ///Device Pin ID
        enum class pinidVal {
            v0000=0x00000000,     ///<8-pin
            v0001=0x00000001,     ///<16-pin
            v0010=0x00000002,     ///<20-pin
            v0011=0x00000003,     ///<24-pin
            v0100=0x00000004,     ///<32-pin
            v0101=0x00000005,     ///<44-pin
            v0110=0x00000006,     ///<48-pin
            v0111=0x00000007,     ///<64-pin
            v1000=0x00000008,     ///<80-pin
            v1010=0x0000000a,     ///<100-pin
        };
        namespace pinidValC{
            constexpr MPL::Value<pinidVal,pinidVal::v0000> v0000{};
            constexpr MPL::Value<pinidVal,pinidVal::v0001> v0001{};
            constexpr MPL::Value<pinidVal,pinidVal::v0010> v0010{};
            constexpr MPL::Value<pinidVal,pinidVal::v0011> v0011{};
            constexpr MPL::Value<pinidVal,pinidVal::v0100> v0100{};
            constexpr MPL::Value<pinidVal,pinidVal::v0101> v0101{};
            constexpr MPL::Value<pinidVal,pinidVal::v0110> v0110{};
            constexpr MPL::Value<pinidVal,pinidVal::v0111> v0111{};
            constexpr MPL::Value<pinidVal,pinidVal::v1000> v1000{};
            constexpr MPL::Value<pinidVal,pinidVal::v1010> v1010{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,pinidVal> pinid{}; 
        ///Device Revision Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> revid{}; 
        ///Kinetis sub-family ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> subfamid{}; 
        ///Kinetis family ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> famid{}; 
    }
    namespace SimSopt{    ///<System Options Register
        using Addr = Register::Address<0x40048004,0x00002c11,0,unsigned>;
        ///NMI Pin Enable
        enum class nmieVal {
            v0=0x00000000,     ///<PTB4/KBI1_P6/FTM2_CH4/SPI0_MISO/ACMP1_IN2/NMI pin functions as PTB4, KBI1_P6, FTM2_CH4, SPI0_MISO or ACMP1_IN2.
            v1=0x00000001,     ///<PTB4/KBI1_P6/FTM2_CH4/SPI0_MISO/ACMP1_IN2/NMI pin functions as NMI.
        };
        namespace nmieValC{
            constexpr MPL::Value<nmieVal,nmieVal::v0> v0{};
            constexpr MPL::Value<nmieVal,nmieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,nmieVal> nmie{}; 
        ///RESET Pin Enable
        enum class rstpeVal {
            v0=0x00000000,     ///<PTA5/IRQ/TCLK1/RESET pin functions as PTA5, IRQ, or TCLK1.
            v1=0x00000001,     ///<PTA5/IRQ/TCLK1/RESET pin functions as RESET.
        };
        namespace rstpeValC{
            constexpr MPL::Value<rstpeVal,rstpeVal::v0> v0{};
            constexpr MPL::Value<rstpeVal,rstpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rstpeVal> rstpe{}; 
        ///Single Wire Debug Port Pin Enable
        enum class swdeVal {
            v0=0x00000000,     ///<PTA4/ACMP0_OUT/SWD_DIO as PTA4 or ACMP0_OUT function, PTA0/KBI0_P0/FTM0_CH0/RTCO/ACMP0_IN2/ADC0_SE0/SWD_CLK as PTA0, KBI0_P0, FTM0_CH0, RTCO, ACMP0_IN2 or ADC0_SE0 function.
            v1=0x00000001,     ///<PTA4/ACMP0_OUT/SWD_DIO as SWD_DIO function, PTA0/KBI0_P0/FTM0_CH0/RTCO/ACMP0_IN2/ADC0_SE0/SWD_CLK as SWD_CLK function.
        };
        namespace swdeValC{
            constexpr MPL::Value<swdeVal,swdeVal::v0> v0{};
            constexpr MPL::Value<swdeVal,swdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,swdeVal> swde{}; 
        ///ACMP Trigger FTM2 selection
        enum class actrgVal {
            v0=0x00000000,     ///<ACMP0 out
            v1=0x00000001,     ///<ACMP1 out
        };
        namespace actrgValC{
            constexpr MPL::Value<actrgVal,actrgVal::v0> v0{};
            constexpr MPL::Value<actrgVal,actrgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,actrgVal> actrg{}; 
        ///FTM0CH0 Input Capture Source
        enum class ftmicVal {
            v00=0x00000000,     ///<FTM0_CH0 pin
            v01=0x00000001,     ///<ACMP0 OUT
            v10=0x00000002,     ///<ACMP1 OUT
            v11=0x00000003,     ///<RTC overflow
        };
        namespace ftmicValC{
            constexpr MPL::Value<ftmicVal,ftmicVal::v00> v00{};
            constexpr MPL::Value<ftmicVal,ftmicVal::v01> v01{};
            constexpr MPL::Value<ftmicVal,ftmicVal::v10> v10{};
            constexpr MPL::Value<ftmicVal,ftmicVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ftmicVal> ftmic{}; 
        ///UART0 RxD Filter Select
        enum class rxdfeVal {
            v00=0x00000000,     ///<RXD0 input signal is connected to UART0 module directly.
            v01=0x00000001,     ///<RXD0 input signal is filtered by ACMP0, then injected to UART0.
            v10=0x00000002,     ///<RXD0 input signal is filtered by ACMP1, then injected to UART0.
        };
        namespace rxdfeValC{
            constexpr MPL::Value<rxdfeVal,rxdfeVal::v00> v00{};
            constexpr MPL::Value<rxdfeVal,rxdfeVal::v01> v01{};
            constexpr MPL::Value<rxdfeVal,rxdfeVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,rxdfeVal> rxdfe{}; 
        ///UART0_RX Capture Select
        enum class rxdceVal {
            v0=0x00000000,     ///<UART0_RX input signal is connected to the UART0 module only.
            v1=0x00000001,     ///<UART0_RX input signal is connected to the UART0 module and FTM0 channel 1.
        };
        namespace rxdceValC{
            constexpr MPL::Value<rxdceVal,rxdceVal::v0> v0{};
            constexpr MPL::Value<rxdceVal,rxdceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rxdceVal> rxdce{}; 
        ///FTM2 Synchronization Select
        enum class ftmsyncVal {
            v0=0x00000000,     ///<No synchronization triggered.
            v1=0x00000001,     ///<Generates a PWM synchronization trigger to the FTM2 modules.
        };
        namespace ftmsyncValC{
            constexpr MPL::Value<ftmsyncVal,ftmsyncVal::v0> v0{};
            constexpr MPL::Value<ftmsyncVal,ftmsyncVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ftmsyncVal> ftmsync{}; 
        ///UART0_TX Modulation Select
        enum class txdmeVal {
            v0=0x00000000,     ///<UART0_TX output is connected to pinout directly.
            v1=0x00000001,     ///<UART0_TX output is modulated by FTM0 channel 0 before mapped to pinout.
        };
        namespace txdmeValC{
            constexpr MPL::Value<txdmeVal,txdmeVal::v0> v0{};
            constexpr MPL::Value<txdmeVal,txdmeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,txdmeVal> txdme{}; 
        ///BUS Clock Output select
        enum class busrefVal {
            v000=0x00000000,     ///<Bus
            v001=0x00000001,     ///<Bus divided by 2
            v010=0x00000002,     ///<Bus divided by 4
            v011=0x00000003,     ///<Bus divided by 8
            v100=0x00000004,     ///<Bus divided by 16
            v101=0x00000005,     ///<Bus divided by 32
            v110=0x00000006,     ///<Bus divided by 64
            v111=0x00000007,     ///<Bus divided by 128
        };
        namespace busrefValC{
            constexpr MPL::Value<busrefVal,busrefVal::v000> v000{};
            constexpr MPL::Value<busrefVal,busrefVal::v001> v001{};
            constexpr MPL::Value<busrefVal,busrefVal::v010> v010{};
            constexpr MPL::Value<busrefVal,busrefVal::v011> v011{};
            constexpr MPL::Value<busrefVal,busrefVal::v100> v100{};
            constexpr MPL::Value<busrefVal,busrefVal::v101> v101{};
            constexpr MPL::Value<busrefVal,busrefVal::v110> v110{};
            constexpr MPL::Value<busrefVal,busrefVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,busrefVal> busref{}; 
        ///Bus Clock Output Enable
        enum class clkoeVal {
            v0=0x00000000,     ///<Bus clock output is disabled on .
            v1=0x00000001,     ///<Bus clock output is enabled on .
        };
        namespace clkoeValC{
            constexpr MPL::Value<clkoeVal,clkoeVal::v0> v0{};
            constexpr MPL::Value<clkoeVal,clkoeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,clkoeVal> clkoe{}; 
        ///ADC Hardware Trigger Source
        enum class adhwtVal {
            v000=0x00000000,     ///<RTC overflow as the ADC hardware trigger
            v001=0x00000001,     ///<FTM0 init trigger as the ADC hardware trigger
            v010=0x00000002,     ///<FTM2 init trigger with 8-bit programmable counter delay
            v011=0x00000003,     ///<FTM2 match trigger with 8-bit programmable counter delay
            v100=0x00000004,     ///<PIT channel0 overflow as the ADC hardware trigger
            v101=0x00000005,     ///<PIT channel1 overflow as the ADC hardware trigger
            v110=0x00000006,     ///<ACMP0 out as the ADC hardware trigger.
            v111=0x00000007,     ///<ACMP1 out as the ADC hardware trigger
        };
        namespace adhwtValC{
            constexpr MPL::Value<adhwtVal,adhwtVal::v000> v000{};
            constexpr MPL::Value<adhwtVal,adhwtVal::v001> v001{};
            constexpr MPL::Value<adhwtVal,adhwtVal::v010> v010{};
            constexpr MPL::Value<adhwtVal,adhwtVal::v011> v011{};
            constexpr MPL::Value<adhwtVal,adhwtVal::v100> v100{};
            constexpr MPL::Value<adhwtVal,adhwtVal::v101> v101{};
            constexpr MPL::Value<adhwtVal,adhwtVal::v110> v110{};
            constexpr MPL::Value<adhwtVal,adhwtVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,adhwtVal> adhwt{}; 
        ///FTM2 Trigger Delay Active
        enum class dlyactVal {
            v0=0x00000000,     ///<The delay is inactive.
            v1=0x00000001,     ///<The delay is active.
        };
        namespace dlyactValC{
            constexpr MPL::Value<dlyactVal,dlyactVal::v0> v0{};
            constexpr MPL::Value<dlyactVal,dlyactVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,dlyactVal> dlyact{}; 
        ///FTM2 Trigger Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> delay{}; 
    }
    namespace SimPinsel{    ///<Pin Selection Register
        using Addr = Register::Address<0x40048008,0x2fff3c1f,0,unsigned>;
        ///I2C0 Port Pin Select
        enum class i2c0psVal {
            v0=0x00000000,     ///<I2C0_SCL and I2C0_SDA are mapped on PTA3 and PTA2, respectively.
            v1=0x00000001,     ///<I2C0_SCL and I2C0_SDA are mapped on PTB7 and PTB6, respectively.
        };
        namespace i2c0psValC{
            constexpr MPL::Value<i2c0psVal,i2c0psVal::v0> v0{};
            constexpr MPL::Value<i2c0psVal,i2c0psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,i2c0psVal> i2c0ps{}; 
        ///SPI0 Pin Select
        enum class spi0psVal {
            v0=0x00000000,     ///<SPI0_SCK, SPI0_MOSI, SPI0_MISO, and SPI0_PCS are mapped on PTB2, PTB3, PTB4, and PTB5.
            v1=0x00000001,     ///<SPI0_SCK, SPI0_MOSI, SPI0_MISO, and SPI0_PCS are mapped on PTA6, PTA7, PTB1, and PTB0.
        };
        namespace spi0psValC{
            constexpr MPL::Value<spi0psVal,spi0psVal::v0> v0{};
            constexpr MPL::Value<spi0psVal,spi0psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,spi0psVal> spi0ps{}; 
        ///UART0 Pin Select
        enum class uart0psVal {
            v0=0x00000000,     ///<UART0_RX and UART0_TX are mapped on PTB0 and PTB1.
            v1=0x00000001,     ///<UART0_RX and UART0_TX are mapped on PTA2 and PTA3.
        };
        namespace uart0psValC{
            constexpr MPL::Value<uart0psVal,uart0psVal::v0> v0{};
            constexpr MPL::Value<uart0psVal,uart0psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,uart0psVal> uart0ps{}; 
        ///FTM0_CH0 Port Pin Select
        enum class ftm0ps0Val {
            v0=0x00000000,     ///<FTM0_CH0 channels are mapped on PTA0.
            v1=0x00000001,     ///<FTM0_CH0 channels are mapped on PTB2.
        };
        namespace ftm0ps0ValC{
            constexpr MPL::Value<ftm0ps0Val,ftm0ps0Val::v0> v0{};
            constexpr MPL::Value<ftm0ps0Val,ftm0ps0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ftm0ps0Val> ftm0ps0{}; 
        ///FTM0_CH1 Port Pin Select
        enum class ftm0ps1Val {
            v0=0x00000000,     ///<FTM0_CH1 channels are mapped on PTA1.
            v1=0x00000001,     ///<FTM0_CH1 channels are mapped on PTB3.
        };
        namespace ftm0ps1ValC{
            constexpr MPL::Value<ftm0ps1Val,ftm0ps1Val::v0> v0{};
            constexpr MPL::Value<ftm0ps1Val,ftm0ps1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ftm0ps1Val> ftm0ps1{}; 
        ///FTM2_CH2 Port Pin Select
        enum class ftm2ps2Val {
            v0=0x00000000,     ///<FTM2_CH2 channels are mapped on PTC2.
            v1=0x00000001,     ///<FTM2_CH2 channels are mapped on PTC4.
        };
        namespace ftm2ps2ValC{
            constexpr MPL::Value<ftm2ps2Val,ftm2ps2Val::v0> v0{};
            constexpr MPL::Value<ftm2ps2Val,ftm2ps2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ftm2ps2Val> ftm2ps2{}; 
        ///FTM2_CH3 Port Pin Select
        enum class ftm2ps3Val {
            v0=0x00000000,     ///<FTM2_CH3 channels are mapped on PTC3.
            v1=0x00000001,     ///<FTM2_CH3 channels are mapped on PTC5.
        };
        namespace ftm2ps3ValC{
            constexpr MPL::Value<ftm2ps3Val,ftm2ps3Val::v0> v0{};
            constexpr MPL::Value<ftm2ps3Val,ftm2ps3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ftm2ps3Val> ftm2ps3{}; 
        ///FTM0 TCLK Pin Select
        enum class ftm0clkpsVal {
            v0=0x00000000,     ///<Selects TCLK1 for FTM0 module.
            v1=0x00000001,     ///<Selects TCLK2 for FTM0 module.
        };
        namespace ftm0clkpsValC{
            constexpr MPL::Value<ftm0clkpsVal,ftm0clkpsVal::v0> v0{};
            constexpr MPL::Value<ftm0clkpsVal,ftm0clkpsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ftm0clkpsVal> ftm0clkps{}; 
        ///FTM2 TCLK Pin Select
        enum class ftm2clkpsVal {
            v0=0x00000000,     ///<Selects TCLK1 for FTM2 module.
            v1=0x00000001,     ///<Selects TCLK2 for FTM2 module.
        };
        namespace ftm2clkpsValC{
            constexpr MPL::Value<ftm2clkpsVal,ftm2clkpsVal::v0> v0{};
            constexpr MPL::Value<ftm2clkpsVal,ftm2clkpsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ftm2clkpsVal> ftm2clkps{}; 
        ///PWT TCLK Pin Select
        enum class pwtclkpsVal {
            v0=0x00000000,     ///<Selects TCLK1 for PWT module.
            v1=0x00000001,     ///<Selects TCLK2 for PWT module.
        };
        namespace pwtclkpsValC{
            constexpr MPL::Value<pwtclkpsVal,pwtclkpsVal::v0> v0{};
            constexpr MPL::Value<pwtclkpsVal,pwtclkpsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,pwtclkpsVal> pwtclkps{}; 
    }
    namespace SimScgc{    ///<System Clock Gating Control Register
        using Addr = Register::Address<0x4004800c,0x14e9cb4c,0,unsigned>;
        ///RTC Clock Gate Control
        enum class rtcVal {
            v0=0x00000000,     ///<Bus clock to the RTC module is disabled.
            v1=0x00000001,     ///<Bus clock to the RTC module is enabled.
        };
        namespace rtcValC{
            constexpr MPL::Value<rtcVal,rtcVal::v0> v0{};
            constexpr MPL::Value<rtcVal,rtcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rtcVal> rtc{}; 
        ///PIT Clock Gate Control
        enum class pitVal {
            v0=0x00000000,     ///<Bus clock to the PIT module is disabled.
            v1=0x00000001,     ///<Bus clock to the PIT module is enabled.
        };
        namespace pitValC{
            constexpr MPL::Value<pitVal,pitVal::v0> v0{};
            constexpr MPL::Value<pitVal,pitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pitVal> pit{}; 
        ///PWT Clock Gate Control
        enum class pwtVal {
            v0=0x00000000,     ///<Timer clock to the PWT module is disabled.
            v1=0x00000001,     ///<Timer clock to the PWT module is enabled.
        };
        namespace pwtValC{
            constexpr MPL::Value<pwtVal,pwtVal::v0> v0{};
            constexpr MPL::Value<pwtVal,pwtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pwtVal> pwt{}; 
        ///FTM0 Clock Gate Control
        enum class ftm0Val {
            v0=0x00000000,     ///<Bus clock to the FTM0 module is disabled.
            v1=0x00000001,     ///<Bus clock to the FTM0 module is enabled.
        };
        namespace ftm0ValC{
            constexpr MPL::Value<ftm0Val,ftm0Val::v0> v0{};
            constexpr MPL::Value<ftm0Val,ftm0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ftm0Val> ftm0{}; 
        ///FTM2 Clock Gate Control
        enum class ftm2Val {
            v0=0x00000000,     ///<Bus clock to the FTM2 module is disabled.
            v1=0x00000001,     ///<Bus clock to the FTM2 module is enabled.
        };
        namespace ftm2ValC{
            constexpr MPL::Value<ftm2Val,ftm2Val::v0> v0{};
            constexpr MPL::Value<ftm2Val,ftm2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ftm2Val> ftm2{}; 
        ///CRC Clock Gate Control
        enum class crcVal {
            v0=0x00000000,     ///<Bus clock to the CRC module is disabled.
            v1=0x00000001,     ///<Bus clock to the CRC module is enabled.
        };
        namespace crcValC{
            constexpr MPL::Value<crcVal,crcVal::v0> v0{};
            constexpr MPL::Value<crcVal,crcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,crcVal> crc{}; 
        ///Flash Clock Gate Control
        enum class flashVal {
            v0=0x00000000,     ///<Bus clock to the flash module is disabled.
            v1=0x00000001,     ///<Bus clock to the flash module is enabled.
        };
        namespace flashValC{
            constexpr MPL::Value<flashVal,flashVal::v0> v0{};
            constexpr MPL::Value<flashVal,flashVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,flashVal> flash{}; 
        ///SWD (single wire debugger) Clock Gate Control
        enum class swdVal {
            v0=0x00000000,     ///<Bus clock to the SWD module is disabled.
            v1=0x00000001,     ///<Bus clock to the SWD module is enabled.
        };
        namespace swdValC{
            constexpr MPL::Value<swdVal,swdVal::v0> v0{};
            constexpr MPL::Value<swdVal,swdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,swdVal> swd{}; 
        ///I2C Clock Gate Control
        enum class i2cVal {
            v0=0x00000000,     ///<Bus clock to the IIC module is disabled.
            v1=0x00000001,     ///<Bus clock to the IIC module is enabled.
        };
        namespace i2cValC{
            constexpr MPL::Value<i2cVal,i2cVal::v0> v0{};
            constexpr MPL::Value<i2cVal,i2cVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,i2cVal> i2c{}; 
        ///SPI0 Clock Gate Control
        enum class spi0Val {
            v0=0x00000000,     ///<Bus clock to the SPI0 module is disabled.
            v1=0x00000001,     ///<Bus clock to the SPI0 module is enabled.
        };
        namespace spi0ValC{
            constexpr MPL::Value<spi0Val,spi0Val::v0> v0{};
            constexpr MPL::Value<spi0Val,spi0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,spi0Val> spi0{}; 
        ///UART0 Clock Gate Control
        enum class uart0Val {
            v0=0x00000000,     ///<Bus clock to the UART0 module is disabled.
            v1=0x00000001,     ///<Bus clock to the UART0 module is enabled.
        };
        namespace uart0ValC{
            constexpr MPL::Value<uart0Val,uart0Val::v0> v0{};
            constexpr MPL::Value<uart0Val,uart0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,uart0Val> uart0{}; 
        ///KBI0 Clock Gate Control
        enum class kbi0Val {
            v0=0x00000000,     ///<Bus clock to the KBI0 module is disabled.
            v1=0x00000001,     ///<Bus clock to the KBI0 module is enabled.
        };
        namespace kbi0ValC{
            constexpr MPL::Value<kbi0Val,kbi0Val::v0> v0{};
            constexpr MPL::Value<kbi0Val,kbi0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,kbi0Val> kbi0{}; 
        ///KBI1 Clock Gate Control
        enum class kbi1Val {
            v0=0x00000000,     ///<Bus clock to the KBI1 module is disabled.
            v1=0x00000001,     ///<Bus clock to the KBI1 module is enabled.
        };
        namespace kbi1ValC{
            constexpr MPL::Value<kbi1Val,kbi1Val::v0> v0{};
            constexpr MPL::Value<kbi1Val,kbi1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,kbi1Val> kbi1{}; 
        ///IRQ Clock Gate Control
        enum class irqVal {
            v0=0x00000000,     ///<Bus clock to the IRQ module is disabled.
            v1=0x00000001,     ///<Bus clock to the IRQ module is enabled.
        };
        namespace irqValC{
            constexpr MPL::Value<irqVal,irqVal::v0> v0{};
            constexpr MPL::Value<irqVal,irqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,irqVal> irq{}; 
        ///ADC Clock Gate Control
        enum class adcVal {
            v0=0x00000000,     ///<Bus clock to the ADC module is disabled.
            v1=0x00000001,     ///<Bus clock to the ADC module is enabled.
        };
        namespace adcValC{
            constexpr MPL::Value<adcVal,adcVal::v0> v0{};
            constexpr MPL::Value<adcVal,adcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,adcVal> adc{}; 
        ///ACMP0 Clock Gate Control
        enum class acmp0Val {
            v0=0x00000000,     ///<Bus clock to the ACMP0 module is disabled.
            v1=0x00000001,     ///<Bus clock to the ACMP0 module is enabled.
        };
        namespace acmp0ValC{
            constexpr MPL::Value<acmp0Val,acmp0Val::v0> v0{};
            constexpr MPL::Value<acmp0Val,acmp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,acmp0Val> acmp0{}; 
        ///ACMP1 Clock Gate Control
        enum class acmp1Val {
            v0=0x00000000,     ///<Bus clock to the ACMP1 module is disabled.
            v1=0x00000001,     ///<Bus clock to the ACMP1 module is enabled.
        };
        namespace acmp1ValC{
            constexpr MPL::Value<acmp1Val,acmp1Val::v0> v0{};
            constexpr MPL::Value<acmp1Val,acmp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,acmp1Val> acmp1{}; 
    }
    namespace SimUuidl{    ///<Universally Unique Identifier Low Register
        using Addr = Register::Address<0x40048010,0x00000000,0,unsigned>;
        ///Universally Unique Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace SimUuidml{    ///<Universally Unique Identifier Middle Low Register
        using Addr = Register::Address<0x40048014,0x00000000,0,unsigned>;
        ///Universally Unique Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace SimUuidmh{    ///<Universally Unique Identifier Middle High Register
        using Addr = Register::Address<0x40048018,0xffff0000,0,unsigned>;
        ///Universally Unique Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace SimClkdiv{    ///<Clock Divider Register
        using Addr = Register::Address<0x4004801c,0xceefffff,0,unsigned>;
        ///Clock 3 output divider value
        enum class outdiv3Val {
            v0=0x00000000,     ///<Same as ICSOUTCLK.
            v1=0x00000001,     ///<ICSOUTCLK divides by 2.
        };
        namespace outdiv3ValC{
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v0> v0{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outdiv3Val> outdiv3{}; 
        ///Clock 2 output divider value
        enum class outdiv2Val {
            v0=0x00000000,     ///<Not divided from divider1.
            v1=0x00000001,     ///<Divide by 2 from divider1.
        };
        namespace outdiv2ValC{
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v0> v0{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,outdiv2Val> outdiv2{}; 
        ///Clock 1 output divider value
        enum class outdiv1Val {
            v00=0x00000000,     ///<Same as ICSOUTCLK.
            v01=0x00000001,     ///<ICSOUTCLK divides by 2.
            v10=0x00000002,     ///<ICSOUTCLK divides by 3.
            v11=0x00000003,     ///<ICSOUTCLK divides by 4.
        };
        namespace outdiv1ValC{
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v00> v00{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v01> v01{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v10> v10{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,outdiv1Val> outdiv1{}; 
    }
}
