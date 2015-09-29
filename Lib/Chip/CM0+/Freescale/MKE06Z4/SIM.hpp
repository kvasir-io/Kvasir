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
    namespace SimSopt0{    ///<System Options Register 0
        using Addr = Register::Address<0x40048004,0x000020d1,0,unsigned>;
        ///NMI Pin Enable
        enum class nmieVal {
            v0=0x00000000,     ///<PTB4/KBI0_P12/FTM2_CH4/SPI0_MISO/ACMP1_IN2/NMI pin functions as PTB4, KBI0_P12, FTM2_CH4, SPI0_MISO or ACMP1_IN2.
            v1=0x00000001,     ///<PTB4/KBI0_P12/FTM2_CH4/SPI0_MISO/ACMP1_IN2/NMI pin functions as NMI.
        };
        namespace nmieValC{
            constexpr MPL::Value<nmieVal,nmieVal::v0> v0{};
            constexpr MPL::Value<nmieVal,nmieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,nmieVal> nmie{}; 
        ///RESET Pin Enable
        enum class rstpeVal {
            v0=0x00000000,     ///<PTA5/KBI0_P5/IRQ/TCLK0/RESET pin functions as PTA5/KBI0_P5/IRQ/TCLK0.
            v1=0x00000001,     ///<PTA5/KBI0_P5/IRQ/TCLK0/RESET pin functions as RESET.
        };
        namespace rstpeValC{
            constexpr MPL::Value<rstpeVal,rstpeVal::v0> v0{};
            constexpr MPL::Value<rstpeVal,rstpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rstpeVal> rstpe{}; 
        ///Single Wire Debug Port Pin Enable
        enum class swdeVal {
            v0=0x00000000,     ///<PTA4/KBI0_P4/ACMP0_OUT/SWD_DIO as PTA4 or ACMP0_OUT function, PTC4/KBI0_P20/RTC_CLKOUT/FTM1_CH0/ACMP0_IN2/SWD_CLK as PTC4, KBI0_P20, RTC_CLKOUT, FTM1_CH0, OR ACMP0_IN2 function.
            v1=0x00000001,     ///<PTA4/KBI0_P4/ACMP0_OUT/SWD_DIO as SWD_DIO function, PTC4/KBI0_P20/RTC_CLKOUT/FTM1_CH0/ACMP0_IN2/SWD_CLK as SWD_CLK function.
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
        ///ADC Hardware Trigger Source
        enum class adhwtVal {
            v000=0x00000000,     ///<RTC overflow as the ADC hardware trigger
            v001=0x00000001,     ///<FTM0 as the ADC hardware trigger
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
    namespace SimSopt1{    ///<System Options Register
        using Addr = Register::Address<0x40048008,0xffffffc4,0,unsigned>;
        ///I2C0 4-Wire Interface Enable
        enum class i2c04wenVal {
            v0=0x00000000,     ///<I2C0 4-wire interface configuration is disabled.
            v1=0x00000001,     ///<I2C0 4-wire interface configuration is enabled.
        };
        namespace i2c04wenValC{
            constexpr MPL::Value<i2c04wenVal,i2c04wenVal::v0> v0{};
            constexpr MPL::Value<i2c04wenVal,i2c04wenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,i2c04wenVal> i2c04wen{}; 
        ///I2C0 Output Invert
        enum class i2c0oinvVal {
            v0=0x00000000,     ///<Under I2C0 4-wire interface configuration, SDA_OUT and SCL_OUT are not inverted before output
            v1=0x00000001,     ///<Under I2C0 4-wire interface configuration, SDA_OUT and SCL_OUT are inverted before output
        };
        namespace i2c0oinvValC{
            constexpr MPL::Value<i2c0oinvVal,i2c0oinvVal::v0> v0{};
            constexpr MPL::Value<i2c0oinvVal,i2c0oinvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,i2c0oinvVal> i2c0oinv{}; 
        ///PWT ACMP_OUT select
        enum class acpwtsVal {
            v0=0x00000000,     ///<ACMP0_OUT is connectted to PWTIN2.
            v1=0x00000001,     ///<ACMP1_OUT is connectted to PWTIN2.
        };
        namespace acpwtsValC{
            constexpr MPL::Value<acpwtsVal,acpwtsVal::v0> v0{};
            constexpr MPL::Value<acpwtsVal,acpwtsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,acpwtsVal> acpwts{}; 
        ///PWT UART RX select
        enum class uartpwtsVal {
            v00=0x00000000,     ///<UART0 RX is connectted to PWTIN3.
            v01=0x00000001,     ///<UART1 RX is connectted to PWTIN3.
            v10=0x00000002,     ///<UART2 RX is connectted to PWTIN3.
        };
        namespace uartpwtsValC{
            constexpr MPL::Value<uartpwtsVal,uartpwtsVal::v00> v00{};
            constexpr MPL::Value<uartpwtsVal,uartpwtsVal::v01> v01{};
            constexpr MPL::Value<uartpwtsVal,uartpwtsVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,uartpwtsVal> uartpwts{}; 
    }
    namespace SimPinsel0{    ///<Pin Selection Register 0
        using Addr = Register::Address<0x4004800c,0x00fff008,0,unsigned>;
        ///IRQ Port Pin Select
        enum class irqpsVal {
            v000=0x00000000,     ///<IRQ is mapped on PTA5.
            v001=0x00000001,     ///<IRQ is mapped on PTI0.
            v010=0x00000002,     ///<IRQ is mapped on PTI1.
            v011=0x00000003,     ///<IRQ is mapped on PTI2.
            v100=0x00000004,     ///<IRQ is mapped on PTI3.
            v101=0x00000005,     ///<IRQ is mapped on PTI4.
            v110=0x00000006,     ///<IRQ is mapped on PTI5.
            v111=0x00000007,     ///<IRQ is mapped on PTI6.
        };
        namespace irqpsValC{
            constexpr MPL::Value<irqpsVal,irqpsVal::v000> v000{};
            constexpr MPL::Value<irqpsVal,irqpsVal::v001> v001{};
            constexpr MPL::Value<irqpsVal,irqpsVal::v010> v010{};
            constexpr MPL::Value<irqpsVal,irqpsVal::v011> v011{};
            constexpr MPL::Value<irqpsVal,irqpsVal::v100> v100{};
            constexpr MPL::Value<irqpsVal,irqpsVal::v101> v101{};
            constexpr MPL::Value<irqpsVal,irqpsVal::v110> v110{};
            constexpr MPL::Value<irqpsVal,irqpsVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,irqpsVal> irqps{}; 
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
            v0=0x00000000,     ///<SPI0_SCK, SPI0_MOSI, SPI0_MISO, and SPI0_PCS are mapped on PTB2, PTB3, PTB4, and PTB5.
            v1=0x00000001,     ///<SPI0_SCK, SPI0_MOSI, SPI0_MISO, and SPI0_PCS are mapped on PTE0, PTE1, PTE2, and PTE3.
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
        ///FTM1_CH0 Port Pin Select
        enum class ftm1ps0Val {
            v0=0x00000000,     ///<FTM1_CH0 channels are mapped on PTC4.
            v1=0x00000001,     ///<FTM1_CH0 channels are mapped on PTH2.
        };
        namespace ftm1ps0ValC{
            constexpr MPL::Value<ftm1ps0Val,ftm1ps0Val::v0> v0{};
            constexpr MPL::Value<ftm1ps0Val,ftm1ps0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ftm1ps0Val> ftm1ps0{}; 
        ///FTM1_CH1 Port Pin Select
        enum class ftm1ps1Val {
            v0=0x00000000,     ///<FTM1_CH1 channels are mapped on PTC5.
            v1=0x00000001,     ///<FTM1_CH1 channels are mapped on PTE7.
        };
        namespace ftm1ps1ValC{
            constexpr MPL::Value<ftm1ps1Val,ftm1ps1Val::v0> v0{};
            constexpr MPL::Value<ftm1ps1Val,ftm1ps1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ftm1ps1Val> ftm1ps1{}; 
        ///FTM0 TCLK Pin Select
        enum class ftm0clkpsVal {
            v00=0x00000000,     ///<Selects TCLK0 for FTM0 module..
            v01=0x00000001,     ///<Selects TCLK1 for FTM0 module.
            v10=0x00000002,     ///<Selects TCLK2 for FTM0 module.
        };
        namespace ftm0clkpsValC{
            constexpr MPL::Value<ftm0clkpsVal,ftm0clkpsVal::v00> v00{};
            constexpr MPL::Value<ftm0clkpsVal,ftm0clkpsVal::v01> v01{};
            constexpr MPL::Value<ftm0clkpsVal,ftm0clkpsVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,ftm0clkpsVal> ftm0clkps{}; 
        ///FTM1 TCLK Pin Select
        enum class ftm1clkpsVal {
            v00=0x00000000,     ///<Selects TCLK0 for FTM1 module..
            v01=0x00000001,     ///<Selects TCLK1 for FTM1 module.
            v10=0x00000002,     ///<Selects TCLK2 for FTM1 module.
        };
        namespace ftm1clkpsValC{
            constexpr MPL::Value<ftm1clkpsVal,ftm1clkpsVal::v00> v00{};
            constexpr MPL::Value<ftm1clkpsVal,ftm1clkpsVal::v01> v01{};
            constexpr MPL::Value<ftm1clkpsVal,ftm1clkpsVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,ftm1clkpsVal> ftm1clkps{}; 
        ///FTM2 TCLK Pin Select
        enum class ftm2clkpsVal {
            v00=0x00000000,     ///<Selects TCLK0 for FTM2 module..
            v01=0x00000001,     ///<Selects TCLK1 for FTM2 module.
            v10=0x00000002,     ///<Selects TCLK2 for FTM2 module.
        };
        namespace ftm2clkpsValC{
            constexpr MPL::Value<ftm2clkpsVal,ftm2clkpsVal::v00> v00{};
            constexpr MPL::Value<ftm2clkpsVal,ftm2clkpsVal::v01> v01{};
            constexpr MPL::Value<ftm2clkpsVal,ftm2clkpsVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ftm2clkpsVal> ftm2clkps{}; 
        ///PWT TCLK Pin Select
        enum class pwtclkpsVal {
            v00=0x00000000,     ///<Selects TCLK0 for PWT module.
            v01=0x00000001,     ///<Selects TCLK1 for PWT module.
            v10=0x00000002,     ///<Selects TCLK2 for PWT module.
        };
        namespace pwtclkpsValC{
            constexpr MPL::Value<pwtclkpsVal,pwtclkpsVal::v00> v00{};
            constexpr MPL::Value<pwtclkpsVal,pwtclkpsVal::v01> v01{};
            constexpr MPL::Value<pwtclkpsVal,pwtclkpsVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,pwtclkpsVal> pwtclkps{}; 
    }
    namespace SimPinsel1{    ///<Pin Selection Register 1
        using Addr = Register::Address<0x40048010,0xfffe0000,0,unsigned>;
        ///FTM2 Channel 0 Pin Select
        enum class ftm2ps0Val {
            v00=0x00000000,     ///<FTM2 CH0 mapped on PTC0.
            v01=0x00000001,     ///<FTM2 CH0 mapped on PTH0.
            v10=0x00000002,     ///<FTM2 CH0 mapped on PTF0.
        };
        namespace ftm2ps0ValC{
            constexpr MPL::Value<ftm2ps0Val,ftm2ps0Val::v00> v00{};
            constexpr MPL::Value<ftm2ps0Val,ftm2ps0Val::v01> v01{};
            constexpr MPL::Value<ftm2ps0Val,ftm2ps0Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ftm2ps0Val> ftm2ps0{}; 
        ///FTM2 Channel 1 Pin Select
        enum class ftm2ps1Val {
            v00=0x00000000,     ///<FTM2 CH1 mapped on PTC1.
            v01=0x00000001,     ///<FTM2 CH1 mapped on PTH1.
            v10=0x00000002,     ///<FTM2 CH1 mapped on PTF1.
        };
        namespace ftm2ps1ValC{
            constexpr MPL::Value<ftm2ps1Val,ftm2ps1Val::v00> v00{};
            constexpr MPL::Value<ftm2ps1Val,ftm2ps1Val::v01> v01{};
            constexpr MPL::Value<ftm2ps1Val,ftm2ps1Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ftm2ps1Val> ftm2ps1{}; 
        ///FTM2 Channel 2 Pin Select
        enum class ftm2ps2Val {
            v00=0x00000000,     ///<FTM2 CH2 mapped on PTC2.
            v01=0x00000001,     ///<FTM2 CH2 mapped on PTD0.
            v10=0x00000002,     ///<FTM2 CH2 mapped on PTG4.
        };
        namespace ftm2ps2ValC{
            constexpr MPL::Value<ftm2ps2Val,ftm2ps2Val::v00> v00{};
            constexpr MPL::Value<ftm2ps2Val,ftm2ps2Val::v01> v01{};
            constexpr MPL::Value<ftm2ps2Val,ftm2ps2Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ftm2ps2Val> ftm2ps2{}; 
        ///FTM2 Channel 3 Pin Select
        enum class ftm2ps3Val {
            v00=0x00000000,     ///<FTM2 CH3 mapped on PTC3.
            v01=0x00000001,     ///<FTM2 CH3 mapped on PTD1.
            v10=0x00000002,     ///<FTM2 CH3 mapped on PTG5.
        };
        namespace ftm2ps3ValC{
            constexpr MPL::Value<ftm2ps3Val,ftm2ps3Val::v00> v00{};
            constexpr MPL::Value<ftm2ps3Val,ftm2ps3Val::v01> v01{};
            constexpr MPL::Value<ftm2ps3Val,ftm2ps3Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ftm2ps3Val> ftm2ps3{}; 
        ///FTM2 Channel4 Pin Select
        enum class ftm2ps4Val {
            v0=0x00000000,     ///<FTM2 CH4 mapped on PTB4.
            v1=0x00000001,     ///<FTM2 CH4 mapped on PTG6.
        };
        namespace ftm2ps4ValC{
            constexpr MPL::Value<ftm2ps4Val,ftm2ps4Val::v0> v0{};
            constexpr MPL::Value<ftm2ps4Val,ftm2ps4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ftm2ps4Val> ftm2ps4{}; 
        ///FTM2 Channel 5 Pin Select
        enum class ftm2ps5Val {
            v0=0x00000000,     ///<FTM2 CH5 mapped on PTB5.
            v1=0x00000001,     ///<FTM2 CH5 mapped on PTG7.
        };
        namespace ftm2ps5ValC{
            constexpr MPL::Value<ftm2ps5Val,ftm2ps5Val::v0> v0{};
            constexpr MPL::Value<ftm2ps5Val,ftm2ps5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ftm2ps5Val> ftm2ps5{}; 
        ///I2C1 Pin Select
        enum class i2c1psVal {
            v0=0x00000000,     ///<I2C1_SCL on PTE1, I2C1_SDA on PTE0.
            v1=0x00000001,     ///<I2C1_SCL on PTH4, I2C1_SDA on PTH3.
        };
        namespace i2c1psValC{
            constexpr MPL::Value<i2c1psVal,i2c1psVal::v0> v0{};
            constexpr MPL::Value<i2c1psVal,i2c1psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,i2c1psVal> i2c1ps{}; 
        ///SPI1 Pin Select
        enum class spi1psVal {
            v0=0x00000000,     ///<SPI1_SCK, SPI1_MOSI, SPI1_MISO, and SPI1_PCS are mapped on PTD0, PTD1, PTD2, and PTD3.
            v1=0x00000001,     ///<SPI1_SCK, SPI1_MOSI, SPI1_MISO, and SPI1_PCS are mapped on PTG4, PTG5, PTG6, and PTG7.
        };
        namespace spi1psValC{
            constexpr MPL::Value<spi1psVal,spi1psVal::v0> v0{};
            constexpr MPL::Value<spi1psVal,spi1psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,spi1psVal> spi1ps{}; 
        ///UART1 Pin Select
        enum class uart1psVal {
            v0=0x00000000,     ///<UART1_TX on PTC7, UART1_RX on PTC6.
            v1=0x00000001,     ///<UART1_TX on PTF3, UART1_RX on PTF2.
        };
        namespace uart1psValC{
            constexpr MPL::Value<uart1psVal,uart1psVal::v0> v0{};
            constexpr MPL::Value<uart1psVal,uart1psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,uart1psVal> uart1ps{}; 
        ///UART2 Pin Select
        enum class uart2psVal {
            v0=0x00000000,     ///<UART2_TX on PTD7, UART2_RX on PTD6.
            v1=0x00000001,     ///<UART2_TX on PTI1, UART2_RX on PTI0.
        };
        namespace uart2psValC{
            constexpr MPL::Value<uart2psVal,uart2psVal::v0> v0{};
            constexpr MPL::Value<uart2psVal,uart2psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,uart2psVal> uart2ps{}; 
        ///PWTIN0 Pin Select
        enum class pwtin0psVal {
            v0=0x00000000,     ///<PWTIN0 on PTD5.
            v1=0x00000001,     ///<PWTIN0 on PTE2.
        };
        namespace pwtin0psValC{
            constexpr MPL::Value<pwtin0psVal,pwtin0psVal::v0> v0{};
            constexpr MPL::Value<pwtin0psVal,pwtin0psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pwtin0psVal> pwtin0ps{}; 
        ///PWTIN1 Pin Select
        enum class pwtin1psVal {
            v0=0x00000000,     ///<PWTIN1 on PTB0.
            v1=0x00000001,     ///<PWTIN1 on PTH7.
        };
        namespace pwtin1psValC{
            constexpr MPL::Value<pwtin1psVal,pwtin1psVal::v0> v0{};
            constexpr MPL::Value<pwtin1psVal,pwtin1psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pwtin1psVal> pwtin1ps{}; 
        ///MSCAN Pin Select
        enum class mscanpsVal {
            v0=0x00000000,     ///<CAN_TX on PTC7, CAN_RX on PTC6.
            v1=0x00000001,     ///<CAN_TX on PTE7, CAN_RX on PTH2.
        };
        namespace mscanpsValC{
            constexpr MPL::Value<mscanpsVal,mscanpsVal::v0> v0{};
            constexpr MPL::Value<mscanpsVal,mscanpsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,mscanpsVal> mscanps{}; 
    }
    namespace SimScgc{    ///<System Clock Gating Control Register
        using Addr = Register::Address<0x40048014,0x14804b0c,0,unsigned>;
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
        ///MSCAN Clock Gate Control
        enum class mscanVal {
            v0=0x00000000,     ///<Bus clock to the MSCAN module is disabled.
            v1=0x00000001,     ///<Bus clock to the MSCAN module is enabled.
        };
        namespace mscanValC{
            constexpr MPL::Value<mscanVal,mscanVal::v0> v0{};
            constexpr MPL::Value<mscanVal,mscanVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,mscanVal> mscan{}; 
        ///I2C0 Clock Gate Control
        enum class i2c0Val {
            v0=0x00000000,     ///<Bus clock to the I2C0 module is disabled.
            v1=0x00000001,     ///<Bus clock to the I2C0 module is enabled.
        };
        namespace i2c0ValC{
            constexpr MPL::Value<i2c0Val,i2c0Val::v0> v0{};
            constexpr MPL::Value<i2c0Val,i2c0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,i2c0Val> i2c0{}; 
        ///I2C1 Clock Gate Control
        enum class i2c1Val {
            v0=0x00000000,     ///<Bus clock to the I2C1 module is disabled.
            v1=0x00000001,     ///<Bus clock to the I2C1 module is enabled.
        };
        namespace i2c1ValC{
            constexpr MPL::Value<i2c1Val,i2c1Val::v0> v0{};
            constexpr MPL::Value<i2c1Val,i2c1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,i2c1Val> i2c1{}; 
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
        using Addr = Register::Address<0x40048018,0x00000000,0,unsigned>;
        ///Universally Unique Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace SimUuidml{    ///<Universally Unique Identifier Middle Low Register
        using Addr = Register::Address<0x4004801c,0x00000000,0,unsigned>;
        ///Universally Unique Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace SimUuidmh{    ///<Universally Unique Identifier Middle High Register
        using Addr = Register::Address<0x40048020,0xffff0000,0,unsigned>;
        ///Universally Unique Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace SimClkdiv{    ///<Clock Divider Register
        using Addr = Register::Address<0x40048024,0xceefffff,0,unsigned>;
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
