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
        using Addr = Register::Address<0x40048004,0x007000f1,0,unsigned>;
        ///NMI Pin Enable
        enum class nmieVal {
            v0=0x00000000,     ///<PTB4/FTM2_CH4/SPI0_MISO/NMI/ACMP1_IN2 pin functions as PTB4, FTM2_CH4, SPI0_MISO, or ACMP1_IN2.
            v1=0x00000001,     ///<PTB4/FTM2_CH4/SPI0_MISO/NMI/ACMP1_IN2 pin functions as NMI.
        };
        namespace nmieValC{
            constexpr MPL::Value<nmieVal,nmieVal::v0> v0{};
            constexpr MPL::Value<nmieVal,nmieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,nmieVal> nmie{}; 
        ///RESET Pin Enable
        enum class rstpeVal {
            v0=0x00000000,     ///<PTA5/IRQ/FTM0_CLK/RESET pin functions as PTA5, IRQ, or FTM0_CLK.
            v1=0x00000001,     ///<PTA5/IRQ/FTM0_CLK/RESET pin functions as RESET.
        };
        namespace rstpeValC{
            constexpr MPL::Value<rstpeVal,rstpeVal::v0> v0{};
            constexpr MPL::Value<rstpeVal,rstpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rstpeVal> rstpe{}; 
        ///Single Wire Debug Port Pin Enable
        enum class swdeVal {
            v0=0x00000000,     ///<PTA4/ACMP0_OUT/SWD_DIO as PTA4 or ACMP0_OUT function, PTC4/RTCO/FTM1_CH0/ACMP0_IN2/SWD_CLK as PTC4, RTCO, FTM1_CH0, or ACMP0_IN2 function.
            v1=0x00000001,     ///<PTA4/ACMP0_OUT/SWD_DIO as SWD_DIO function, PTC4/RTCO/FTM1CH0/ACMP0_IN2/SWD_CLK as SWD_CLK function.
        };
        namespace swdeValC{
            constexpr MPL::Value<swdeVal,swdeVal::v0> v0{};
            constexpr MPL::Value<swdeVal,swdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,swdeVal> swde{}; 
        ///ADC Hardware Trigger Source
        enum class adhwtVal {
            v00=0x00000000,     ///<RTC overflow as the ADC hardware trigger
            v01=0x00000001,     ///<PIT overflow as the ADC hardware trigger
            v10=0x00000002,     ///<FTM2 init trigger with 8-bit programmable delay
            v11=0x00000003,     ///<FTM2 match trigger with 8-bit programmable delay
        };
        namespace adhwtValC{
            constexpr MPL::Value<adhwtVal,adhwtVal::v00> v00{};
            constexpr MPL::Value<adhwtVal,adhwtVal::v01> v01{};
            constexpr MPL::Value<adhwtVal,adhwtVal::v10> v10{};
            constexpr MPL::Value<adhwtVal,adhwtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,adhwtVal> adhwt{}; 
        ///Real-Time Counter Capture
        enum class rtccVal {
            v0=0x00000000,     ///<RTC overflow is not connected to FTM1 input channel 1.
            v1=0x00000001,     ///<RTC overflow is connected to FTM1 input channel 1.
        };
        namespace rtccValC{
            constexpr MPL::Value<rtccVal,rtccVal::v0> v0{};
            constexpr MPL::Value<rtccVal,rtccVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rtccVal> rtcc{}; 
        ///Analog Comparator to Input Capture Enable
        enum class acicVal {
            v0=0x00000000,     ///<ACMP0 output is not connected to FTM1 input channel 0.
            v1=0x00000001,     ///<ACMP0 output is connected to FTM1 input channel 0.
        };
        namespace acicValC{
            constexpr MPL::Value<acicVal,acicVal::v0> v0{};
            constexpr MPL::Value<acicVal,acicVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,acicVal> acic{}; 
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
        ///UART0_RX Filter Select
        enum class rxdfeVal {
            v0=0x00000000,     ///<UART0_RX input signal is connected to UART0 module directly.
            v1=0x00000001,     ///<UART0_RX input signal is filtered by ACMP, then injected to UART0.
        };
        namespace rxdfeValC{
            constexpr MPL::Value<rxdfeVal,rxdfeVal::v0> v0{};
            constexpr MPL::Value<rxdfeVal,rxdfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,rxdfeVal> rxdfe{}; 
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
            v0=0x00000000,     ///<Bus clock output is disabled on PTH2.
            v1=0x00000001,     ///<Bus clock output is enabled on PTH2.
        };
        namespace clkoeValC{
            constexpr MPL::Value<clkoeVal,clkoeVal::v0> v0{};
            constexpr MPL::Value<clkoeVal,clkoeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,clkoeVal> clkoe{}; 
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
        using Addr = Register::Address<0x40048008,0xffff000f,0,unsigned>;
        ///RTCO Pin Select
        enum class rtcpsVal {
            v0=0x00000000,     ///<RTCO is mapped on PTC4.
            v1=0x00000001,     ///<RTCO is mapped on PTC5.
        };
        namespace rtcpsValC{
            constexpr MPL::Value<rtcpsVal,rtcpsVal::v0> v0{};
            constexpr MPL::Value<rtcpsVal,rtcpsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rtcpsVal> rtcps{}; 
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
            v0=0x00000000,     ///<SPI0_SCK, SPI0_MOSI, SPI0_MISO, and SPI0_PCS0 are mapped on PTB2, PTB3, PTB4, and PTB5.
            v1=0x00000001,     ///<SPI0_SCK, SPI0_MOSI, SPI0_MISO, and SPI0_PCS0 are mapped on PTE0, PTE1, PTE2, and PTE3.
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
        ///FTM0[0] Port Pin Select
        enum class ftm0ps0Val {
            v0=0x00000000,     ///<FTM0[0] channels are mapped on PTA0.
            v1=0x00000001,     ///<FTM0[0] channels are mapped on PTB2.
        };
        namespace ftm0ps0ValC{
            constexpr MPL::Value<ftm0ps0Val,ftm0ps0Val::v0> v0{};
            constexpr MPL::Value<ftm0ps0Val,ftm0ps0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ftm0ps0Val> ftm0ps0{}; 
        ///FTM0[1] Port Pin Select
        enum class ftm0ps1Val {
            v0=0x00000000,     ///<FTM0[1] channels are mapped on PTA1.
            v1=0x00000001,     ///<FTM0[1] channels are mapped on PTB3.
        };
        namespace ftm0ps1ValC{
            constexpr MPL::Value<ftm0ps1Val,ftm0ps1Val::v0> v0{};
            constexpr MPL::Value<ftm0ps1Val,ftm0ps1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ftm0ps1Val> ftm0ps1{}; 
        ///FTM1[0] Port Pin Select
        enum class ftm1ps0Val {
            v0=0x00000000,     ///<FTM1[0] channels are mapped on PTC4.
            v1=0x00000001,     ///<FTM1[0] channels are mapped on PTH2.
        };
        namespace ftm1ps0ValC{
            constexpr MPL::Value<ftm1ps0Val,ftm1ps0Val::v0> v0{};
            constexpr MPL::Value<ftm1ps0Val,ftm1ps0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ftm1ps0Val> ftm1ps0{}; 
        ///FTM1[1] Port Pin Select
        enum class ftm1ps1Val {
            v0=0x00000000,     ///<FTM1[1] channels are mapped on PTC5.
            v1=0x00000001,     ///<FTM1[1] channels are mapped on PTE7.
        };
        namespace ftm1ps1ValC{
            constexpr MPL::Value<ftm1ps1Val,ftm1ps1Val::v0> v0{};
            constexpr MPL::Value<ftm1ps1Val,ftm1ps1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ftm1ps1Val> ftm1ps1{}; 
        ///FTM2[0] Port Pin Select
        enum class ftm2ps0Val {
            v0=0x00000000,     ///<FTM2[0] channels are mapped on PTC0.
            v1=0x00000001,     ///<FTM2[0] channels are mapped on PTH0.
        };
        namespace ftm2ps0ValC{
            constexpr MPL::Value<ftm2ps0Val,ftm2ps0Val::v0> v0{};
            constexpr MPL::Value<ftm2ps0Val,ftm2ps0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ftm2ps0Val> ftm2ps0{}; 
        ///FTM2[1] Port Pin Select
        enum class ftm2ps1Val {
            v0=0x00000000,     ///<FTM2[1] channels are mapped on PTC1.
            v1=0x00000001,     ///<FTM2[1] channels are mapped on PTH1.
        };
        namespace ftm2ps1ValC{
            constexpr MPL::Value<ftm2ps1Val,ftm2ps1Val::v0> v0{};
            constexpr MPL::Value<ftm2ps1Val,ftm2ps1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ftm2ps1Val> ftm2ps1{}; 
        ///FTM2[2] Port Pin Select
        enum class ftm2ps2Val {
            v0=0x00000000,     ///<FTM2[2] channels are mapped on PTC2.
            v1=0x00000001,     ///<FTM2[2] channels are mapped on PTD0.
        };
        namespace ftm2ps2ValC{
            constexpr MPL::Value<ftm2ps2Val,ftm2ps2Val::v0> v0{};
            constexpr MPL::Value<ftm2ps2Val,ftm2ps2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ftm2ps2Val> ftm2ps2{}; 
        ///FTM2[3] Port Pin Select
        enum class ftm2ps3Val {
            v0=0x00000000,     ///<FTM2[3] channels are mapped on PTC3.
            v1=0x00000001,     ///<FTM2[3] channels are mapped on PTD1.
        };
        namespace ftm2ps3ValC{
            constexpr MPL::Value<ftm2ps3Val,ftm2ps3Val::v0> v0{};
            constexpr MPL::Value<ftm2ps3Val,ftm2ps3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ftm2ps3Val> ftm2ps3{}; 
    }
    namespace SimScgc{    ///<System Clock Gating Control Register
        using Addr = Register::Address<0x4004800c,0x1481cb1c,0,unsigned>;
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
        ///FTM1 Clock Gate Control
        enum class ftm1Val {
            v0=0x00000000,     ///<Bus clock to the FTM1 module is disabled.
            v1=0x00000001,     ///<Bus clock to the FTM1 module is enabled.
        };
        namespace ftm1ValC{
            constexpr MPL::Value<ftm1Val,ftm1Val::v0> v0{};
            constexpr MPL::Value<ftm1Val,ftm1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ftm1Val> ftm1{}; 
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
        ///SPI1 Clock Gate Control
        enum class spi1Val {
            v0=0x00000000,     ///<Bus clock to the SPI1 module is disabled.
            v1=0x00000001,     ///<Bus clock to the SPI1 module is enabled.
        };
        namespace spi1ValC{
            constexpr MPL::Value<spi1Val,spi1Val::v0> v0{};
            constexpr MPL::Value<spi1Val,spi1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,spi1Val> spi1{}; 
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
        ///UART1 Clock Gate Control
        enum class uart1Val {
            v0=0x00000000,     ///<Bus clock to the UART1 module is disabled.
            v1=0x00000001,     ///<Bus clock to the UART1 module is enabled.
        };
        namespace uart1ValC{
            constexpr MPL::Value<uart1Val,uart1Val::v0> v0{};
            constexpr MPL::Value<uart1Val,uart1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,uart1Val> uart1{}; 
        ///UART2 Clock Gate Control
        enum class uart2Val {
            v0=0x00000000,     ///<Bus clock to the UART2 module is disabled.
            v1=0x00000001,     ///<Bus clock to the UART2 module is enabled.
        };
        namespace uart2ValC{
            constexpr MPL::Value<uart2Val,uart2Val::v0> v0{};
            constexpr MPL::Value<uart2Val,uart2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,uart2Val> uart2{}; 
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
    namespace SimUuidh{    ///<Universally Unique Identifier High Register
        using Addr = Register::Address<0x40048014,0x00000000,0,unsigned>;
        ///Universally Unique Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace SimBusdiv{    ///<BUS Clock Divider Register
        using Addr = Register::Address<0x40048018,0xfffffffe,0,unsigned>;
        ///BUS Clock Divider
        enum class busdivVal {
            v0=0x00000000,     ///<Bus clock is same as ICSOUTCLK.
            v1=0x00000001,     ///<Bus clock is ICSOUTCLK divided by 2.
        };
        namespace busdivValC{
            constexpr MPL::Value<busdivVal,busdivVal::v0> v0{};
            constexpr MPL::Value<busdivVal,busdivVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,busdivVal> busdiv{}; 
    }
}
