#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSrsid{    ///<System Reset Status and ID Register
        using Addr = Register::Address<0x40048000,0x0000d119,0,unsigned>;
        ///Low Voltage Detect
        enum class LvdVal {
            v0=0x00000000,     ///<Reset is not caused by LVD trip or POR.
            v1=0x00000001,     ///<Reset is caused by LVD trip or POR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LvdVal> lvd{}; 
        namespace LvdValC{
            constexpr Register::FieldValue<decltype(lvd)::Type,LvdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvd)::Type,LvdVal::v1> v1{};
        }
        ///Internal Clock Source Module Reset
        enum class LocVal {
            v0=0x00000000,     ///<Reset is not caused by the ICS module.
            v1=0x00000001,     ///<Reset is caused by the ICS module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,LocVal> loc{}; 
        namespace LocValC{
            constexpr Register::FieldValue<decltype(loc)::Type,LocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(loc)::Type,LocVal::v1> v1{};
        }
        ///Watchdog (WDOG)
        enum class WdogVal {
            v0=0x00000000,     ///<Reset is not caused by WDOG timeout.
            v1=0x00000001,     ///<Reset is caused by WDOG timeout.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,WdogVal> wdog{}; 
        namespace WdogValC{
            constexpr Register::FieldValue<decltype(wdog)::Type,WdogVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wdog)::Type,WdogVal::v1> v1{};
        }
        ///External Reset Pin
        enum class PinVal {
            v0=0x00000000,     ///<Reset is not caused by external reset pin.
            v1=0x00000001,     ///<Reset came from external reset pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PinVal> pin{}; 
        namespace PinValC{
            constexpr Register::FieldValue<decltype(pin)::Type,PinVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pin)::Type,PinVal::v1> v1{};
        }
        ///Power-On Reset
        enum class PorVal {
            v0=0x00000000,     ///<Reset not caused by POR.
            v1=0x00000001,     ///<POR caused reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PorVal> por{}; 
        namespace PorValC{
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::v1> v1{};
        }
        ///Core Lockup
        enum class LockupVal {
            v0=0x00000000,     ///<Reset is not caused by core LOCKUP event.
            v1=0x00000001,     ///<Reset is caused by core LOCKUP event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,LockupVal> lockup{}; 
        namespace LockupValC{
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::v1> v1{};
        }
        ///Software
        enum class SwVal {
            v0=0x00000000,     ///<Reset is not caused by software setting of SYSRESETREQ bit.
            v1=0x00000001,     ///<Reset caused by software setting of SYSRESETREQ bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,SwVal> sw{}; 
        namespace SwValC{
            constexpr Register::FieldValue<decltype(sw)::Type,SwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sw)::Type,SwVal::v1> v1{};
        }
        ///MDM-AP System Reset Request
        enum class MdmapVal {
            v0=0x00000000,     ///<Reset is not caused by host debugger system setting of the System Reset Request bit.
            v1=0x00000001,     ///<Reset is caused by host debugger system setting of the System Reset Request bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,MdmapVal> mdmap{}; 
        namespace MdmapValC{
            constexpr Register::FieldValue<decltype(mdmap)::Type,MdmapVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mdmap)::Type,MdmapVal::v1> v1{};
        }
        ///Stop Mode Acknowledge Error Reset
        enum class SackerrVal {
            v0=0x00000000,     ///<Reset is not caused by peripheral failure to acknowledge attempt to enter Stop mode.
            v1=0x00000001,     ///<Reset is caused by peripheral failure to acknowledge attempt to enter Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,SackerrVal> sackerr{}; 
        namespace SackerrValC{
            constexpr Register::FieldValue<decltype(sackerr)::Type,SackerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sackerr)::Type,SackerrVal::v1> v1{};
        }
        ///Device Pin ID
        enum class PinidVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,PinidVal> pinid{}; 
        namespace PinidValC{
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(pinid)::Type,PinidVal::v1010> v1010{};
        }
        ///Device Revision Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> revid{}; 
        ///Kinetis sub-family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> subfamid{}; 
        ///Kinetis family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> famid{}; 
    }
    namespace SimSopt0{    ///<System Options Register 0
        using Addr = Register::Address<0x40048004,0x000020d1,0,unsigned>;
        ///NMI Pin Enable
        enum class NmieVal {
            v0=0x00000000,     ///<PTB4/KBI0_P12/FTM2_CH4/SPI0_MISO/ACMP1_IN2/NMI pin functions as PTB4, KBI0_P12, FTM2_CH4, SPI0_MISO or ACMP1_IN2.
            v1=0x00000001,     ///<PTB4/KBI0_P12/FTM2_CH4/SPI0_MISO/ACMP1_IN2/NMI pin functions as NMI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NmieVal> nmie{}; 
        namespace NmieValC{
            constexpr Register::FieldValue<decltype(nmie)::Type,NmieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nmie)::Type,NmieVal::v1> v1{};
        }
        ///RESET Pin Enable
        enum class RstpeVal {
            v0=0x00000000,     ///<PTA5/KBI0_P5/IRQ/TCLK0/RESET pin functions as PTA5/KBI0_P5/IRQ/TCLK0.
            v1=0x00000001,     ///<PTA5/KBI0_P5/IRQ/TCLK0/RESET pin functions as RESET.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RstpeVal> rstpe{}; 
        namespace RstpeValC{
            constexpr Register::FieldValue<decltype(rstpe)::Type,RstpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rstpe)::Type,RstpeVal::v1> v1{};
        }
        ///Single Wire Debug Port Pin Enable
        enum class SwdeVal {
            v0=0x00000000,     ///<PTA4/KBI0_P4/ACMP0_OUT/SWD_DIO as PTA4 or ACMP0_OUT function, PTC4/KBI0_P20/RTC_CLKOUT/FTM1_CH0/ACMP0_IN2/SWD_CLK as PTC4, KBI0_P20, RTC_CLKOUT, FTM1_CH0, OR ACMP0_IN2 function.
            v1=0x00000001,     ///<PTA4/KBI0_P4/ACMP0_OUT/SWD_DIO as SWD_DIO function, PTC4/KBI0_P20/RTC_CLKOUT/FTM1_CH0/ACMP0_IN2/SWD_CLK as SWD_CLK function.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SwdeVal> swde{}; 
        namespace SwdeValC{
            constexpr Register::FieldValue<decltype(swde)::Type,SwdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swde)::Type,SwdeVal::v1> v1{};
        }
        ///ACMP Trigger FTM2 selection
        enum class ActrgVal {
            v0=0x00000000,     ///<ACMP0 out
            v1=0x00000001,     ///<ACMP1 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ActrgVal> actrg{}; 
        namespace ActrgValC{
            constexpr Register::FieldValue<decltype(actrg)::Type,ActrgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(actrg)::Type,ActrgVal::v1> v1{};
        }
        ///UART0 RxD Filter Select
        enum class RxdfeVal {
            v00=0x00000000,     ///<RXD0 input signal is connected to UART0 module directly.
            v01=0x00000001,     ///<RXD0 input signal is filtered by ACMP0, then injected to UART0.
            v10=0x00000002,     ///<RXD0 input signal is filtered by ACMP1, then injected to UART0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,RxdfeVal> rxdfe{}; 
        namespace RxdfeValC{
            constexpr Register::FieldValue<decltype(rxdfe)::Type,RxdfeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rxdfe)::Type,RxdfeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rxdfe)::Type,RxdfeVal::v10> v10{};
        }
        ///Real-Time Counter Capture
        enum class RtccVal {
            v0=0x00000000,     ///<RTC overflow is not connected to FTM1 input channel 1.
            v1=0x00000001,     ///<RTC overflow is connected to FTM1 input channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RtccVal> rtcc{}; 
        namespace RtccValC{
            constexpr Register::FieldValue<decltype(rtcc)::Type,RtccVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtcc)::Type,RtccVal::v1> v1{};
        }
        ///Analog Comparator to Input Capture Enable
        enum class AcicVal {
            v0=0x00000000,     ///<ACMP0 output is not connected to FTM1 input channel 0.
            v1=0x00000001,     ///<ACMP0 output is connected to FTM1 input channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AcicVal> acic{}; 
        namespace AcicValC{
            constexpr Register::FieldValue<decltype(acic)::Type,AcicVal::v0> v0{};
            constexpr Register::FieldValue<decltype(acic)::Type,AcicVal::v1> v1{};
        }
        ///UART0_RX Capture Select
        enum class RxdceVal {
            v0=0x00000000,     ///<UART0_RX input signal is connected to the UART0 module only.
            v1=0x00000001,     ///<UART0_RX input signal is connected to the UART0 module and FTM0 channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,RxdceVal> rxdce{}; 
        namespace RxdceValC{
            constexpr Register::FieldValue<decltype(rxdce)::Type,RxdceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxdce)::Type,RxdceVal::v1> v1{};
        }
        ///FTM2 Synchronization Select
        enum class FtmsyncVal {
            v0=0x00000000,     ///<No synchronization triggered.
            v1=0x00000001,     ///<Generates a PWM synchronization trigger to the FTM2 modules.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,FtmsyncVal> ftmsync{}; 
        namespace FtmsyncValC{
            constexpr Register::FieldValue<decltype(ftmsync)::Type,FtmsyncVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftmsync)::Type,FtmsyncVal::v1> v1{};
        }
        ///UART0_TX Modulation Select
        enum class TxdmeVal {
            v0=0x00000000,     ///<UART0_TX output is connected to pinout directly.
            v1=0x00000001,     ///<UART0_TX output is modulated by FTM0 channel 0 before mapped to pinout.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,TxdmeVal> txdme{}; 
        namespace TxdmeValC{
            constexpr Register::FieldValue<decltype(txdme)::Type,TxdmeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txdme)::Type,TxdmeVal::v1> v1{};
        }
        ///BUS Clock Output select
        enum class BusrefVal {
            v000=0x00000000,     ///<Bus
            v001=0x00000001,     ///<Bus divided by 2
            v010=0x00000002,     ///<Bus divided by 4
            v011=0x00000003,     ///<Bus divided by 8
            v100=0x00000004,     ///<Bus divided by 16
            v101=0x00000005,     ///<Bus divided by 32
            v110=0x00000006,     ///<Bus divided by 64
            v111=0x00000007,     ///<Bus divided by 128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,BusrefVal> busref{}; 
        namespace BusrefValC{
            constexpr Register::FieldValue<decltype(busref)::Type,BusrefVal::v000> v000{};
            constexpr Register::FieldValue<decltype(busref)::Type,BusrefVal::v001> v001{};
            constexpr Register::FieldValue<decltype(busref)::Type,BusrefVal::v010> v010{};
            constexpr Register::FieldValue<decltype(busref)::Type,BusrefVal::v011> v011{};
            constexpr Register::FieldValue<decltype(busref)::Type,BusrefVal::v100> v100{};
            constexpr Register::FieldValue<decltype(busref)::Type,BusrefVal::v101> v101{};
            constexpr Register::FieldValue<decltype(busref)::Type,BusrefVal::v110> v110{};
            constexpr Register::FieldValue<decltype(busref)::Type,BusrefVal::v111> v111{};
        }
        ///Bus Clock Output Enable
        enum class ClkoeVal {
            v0=0x00000000,     ///<Bus clock output is disabled on PTH2.
            v1=0x00000001,     ///<Bus clock output is enabled on PTH2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ClkoeVal> clkoe{}; 
        namespace ClkoeValC{
            constexpr Register::FieldValue<decltype(clkoe)::Type,ClkoeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clkoe)::Type,ClkoeVal::v1> v1{};
        }
        ///ADC Hardware Trigger Source
        enum class AdhwtVal {
            v000=0x00000000,     ///<RTC overflow as the ADC hardware trigger
            v001=0x00000001,     ///<FTM0 as the ADC hardware trigger
            v010=0x00000002,     ///<FTM2 init trigger with 8-bit programmable counter delay
            v011=0x00000003,     ///<FTM2 match trigger with 8-bit programmable counter delay
            v100=0x00000004,     ///<PIT channel0 overflow as the ADC hardware trigger
            v101=0x00000005,     ///<PIT channel1 overflow as the ADC hardware trigger
            v110=0x00000006,     ///<ACMP0 out as the ADC hardware trigger.
            v111=0x00000007,     ///<ACMP1 out as the ADC hardware trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,AdhwtVal> adhwt{}; 
        namespace AdhwtValC{
            constexpr Register::FieldValue<decltype(adhwt)::Type,AdhwtVal::v000> v000{};
            constexpr Register::FieldValue<decltype(adhwt)::Type,AdhwtVal::v001> v001{};
            constexpr Register::FieldValue<decltype(adhwt)::Type,AdhwtVal::v010> v010{};
            constexpr Register::FieldValue<decltype(adhwt)::Type,AdhwtVal::v011> v011{};
            constexpr Register::FieldValue<decltype(adhwt)::Type,AdhwtVal::v100> v100{};
            constexpr Register::FieldValue<decltype(adhwt)::Type,AdhwtVal::v101> v101{};
            constexpr Register::FieldValue<decltype(adhwt)::Type,AdhwtVal::v110> v110{};
            constexpr Register::FieldValue<decltype(adhwt)::Type,AdhwtVal::v111> v111{};
        }
        ///FTM2 Trigger Delay Active
        enum class DlyactVal {
            v0=0x00000000,     ///<The delay is inactive.
            v1=0x00000001,     ///<The delay is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,DlyactVal> dlyact{}; 
        namespace DlyactValC{
            constexpr Register::FieldValue<decltype(dlyact)::Type,DlyactVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dlyact)::Type,DlyactVal::v1> v1{};
        }
        ///FTM2 Trigger Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> delay{}; 
    }
    namespace SimSopt1{    ///<System Options Register
        using Addr = Register::Address<0x40048008,0xffffffc4,0,unsigned>;
        ///I2C0 4-Wire Interface Enable
        enum class I2c04wenVal {
            v0=0x00000000,     ///<I2C0 4-wire interface configuration is disabled.
            v1=0x00000001,     ///<I2C0 4-wire interface configuration is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,I2c04wenVal> i2c04wen{}; 
        namespace I2c04wenValC{
            constexpr Register::FieldValue<decltype(i2c04wen)::Type,I2c04wenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c04wen)::Type,I2c04wenVal::v1> v1{};
        }
        ///I2C0 Output Invert
        enum class I2c0oinvVal {
            v0=0x00000000,     ///<Under I2C0 4-wire interface configuration, SDA_OUT and SCL_OUT are not inverted before output
            v1=0x00000001,     ///<Under I2C0 4-wire interface configuration, SDA_OUT and SCL_OUT are inverted before output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,I2c0oinvVal> i2c0oinv{}; 
        namespace I2c0oinvValC{
            constexpr Register::FieldValue<decltype(i2c0oinv)::Type,I2c0oinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c0oinv)::Type,I2c0oinvVal::v1> v1{};
        }
        ///PWT ACMP_OUT select
        enum class AcpwtsVal {
            v0=0x00000000,     ///<ACMP0_OUT is connectted to PWTIN2.
            v1=0x00000001,     ///<ACMP1_OUT is connectted to PWTIN2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AcpwtsVal> acpwts{}; 
        namespace AcpwtsValC{
            constexpr Register::FieldValue<decltype(acpwts)::Type,AcpwtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(acpwts)::Type,AcpwtsVal::v1> v1{};
        }
        ///PWT UART RX select
        enum class UartpwtsVal {
            v00=0x00000000,     ///<UART0 RX is connectted to PWTIN3.
            v01=0x00000001,     ///<UART1 RX is connectted to PWTIN3.
            v10=0x00000002,     ///<UART2 RX is connectted to PWTIN3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,UartpwtsVal> uartpwts{}; 
        namespace UartpwtsValC{
            constexpr Register::FieldValue<decltype(uartpwts)::Type,UartpwtsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uartpwts)::Type,UartpwtsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uartpwts)::Type,UartpwtsVal::v10> v10{};
        }
    }
    namespace SimPinsel0{    ///<Pin Selection Register 0
        using Addr = Register::Address<0x4004800c,0x00fff008,0,unsigned>;
        ///IRQ Port Pin Select
        enum class IrqpsVal {
            v000=0x00000000,     ///<IRQ is mapped on PTA5.
            v001=0x00000001,     ///<IRQ is mapped on PTI0.
            v010=0x00000002,     ///<IRQ is mapped on PTI1.
            v011=0x00000003,     ///<IRQ is mapped on PTI2.
            v100=0x00000004,     ///<IRQ is mapped on PTI3.
            v101=0x00000005,     ///<IRQ is mapped on PTI4.
            v110=0x00000006,     ///<IRQ is mapped on PTI5.
            v111=0x00000007,     ///<IRQ is mapped on PTI6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,IrqpsVal> irqps{}; 
        namespace IrqpsValC{
            constexpr Register::FieldValue<decltype(irqps)::Type,IrqpsVal::v000> v000{};
            constexpr Register::FieldValue<decltype(irqps)::Type,IrqpsVal::v001> v001{};
            constexpr Register::FieldValue<decltype(irqps)::Type,IrqpsVal::v010> v010{};
            constexpr Register::FieldValue<decltype(irqps)::Type,IrqpsVal::v011> v011{};
            constexpr Register::FieldValue<decltype(irqps)::Type,IrqpsVal::v100> v100{};
            constexpr Register::FieldValue<decltype(irqps)::Type,IrqpsVal::v101> v101{};
            constexpr Register::FieldValue<decltype(irqps)::Type,IrqpsVal::v110> v110{};
            constexpr Register::FieldValue<decltype(irqps)::Type,IrqpsVal::v111> v111{};
        }
        ///RTCO Pin Select
        enum class RtcpsVal {
            v0=0x00000000,     ///<RTCO is mapped on PTC4.
            v1=0x00000001,     ///<RTCO is mapped on PTC5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RtcpsVal> rtcps{}; 
        namespace RtcpsValC{
            constexpr Register::FieldValue<decltype(rtcps)::Type,RtcpsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtcps)::Type,RtcpsVal::v1> v1{};
        }
        ///I2C0 Port Pin Select
        enum class I2c0psVal {
            v0=0x00000000,     ///<I2C0_SCL and I2C0_SDA are mapped on PTA3 and PTA2, respectively.
            v1=0x00000001,     ///<I2C0_SCL and I2C0_SDA are mapped on PTB7 and PTB6, respectively.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2c0psVal> i2c0ps{}; 
        namespace I2c0psValC{
            constexpr Register::FieldValue<decltype(i2c0ps)::Type,I2c0psVal::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c0ps)::Type,I2c0psVal::v1> v1{};
        }
        ///SPI0 Pin Select
        enum class Spi0psVal {
            v0=0x00000000,     ///<SPI0_SCK, SPI0_MOSI, SPI0_MISO, and SPI0_PCS are mapped on PTB2, PTB3, PTB4, and PTB5.
            v1=0x00000001,     ///<SPI0_SCK, SPI0_MOSI, SPI0_MISO, and SPI0_PCS are mapped on PTE0, PTE1, PTE2, and PTE3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Spi0psVal> spi0ps{}; 
        namespace Spi0psValC{
            constexpr Register::FieldValue<decltype(spi0ps)::Type,Spi0psVal::v0> v0{};
            constexpr Register::FieldValue<decltype(spi0ps)::Type,Spi0psVal::v1> v1{};
        }
        ///UART0 Pin Select
        enum class Uart0psVal {
            v0=0x00000000,     ///<UART0_RX and UART0_TX are mapped on PTB0 and PTB1.
            v1=0x00000001,     ///<UART0_RX and UART0_TX are mapped on PTA2 and PTA3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Uart0psVal> uart0ps{}; 
        namespace Uart0psValC{
            constexpr Register::FieldValue<decltype(uart0ps)::Type,Uart0psVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0ps)::Type,Uart0psVal::v1> v1{};
        }
        ///FTM0_CH0 Port Pin Select
        enum class Ftm0ps0Val {
            v0=0x00000000,     ///<FTM0_CH0 channels are mapped on PTA0.
            v1=0x00000001,     ///<FTM0_CH0 channels are mapped on PTB2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ftm0ps0Val> ftm0ps0{}; 
        namespace Ftm0ps0ValC{
            constexpr Register::FieldValue<decltype(ftm0ps0)::Type,Ftm0ps0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0ps0)::Type,Ftm0ps0Val::v1> v1{};
        }
        ///FTM0_CH1 Port Pin Select
        enum class Ftm0ps1Val {
            v0=0x00000000,     ///<FTM0_CH1 channels are mapped on PTA1.
            v1=0x00000001,     ///<FTM0_CH1 channels are mapped on PTB3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ftm0ps1Val> ftm0ps1{}; 
        namespace Ftm0ps1ValC{
            constexpr Register::FieldValue<decltype(ftm0ps1)::Type,Ftm0ps1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0ps1)::Type,Ftm0ps1Val::v1> v1{};
        }
        ///FTM1_CH0 Port Pin Select
        enum class Ftm1ps0Val {
            v0=0x00000000,     ///<FTM1_CH0 channels are mapped on PTC4.
            v1=0x00000001,     ///<FTM1_CH0 channels are mapped on PTH2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ftm1ps0Val> ftm1ps0{}; 
        namespace Ftm1ps0ValC{
            constexpr Register::FieldValue<decltype(ftm1ps0)::Type,Ftm1ps0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1ps0)::Type,Ftm1ps0Val::v1> v1{};
        }
        ///FTM1_CH1 Port Pin Select
        enum class Ftm1ps1Val {
            v0=0x00000000,     ///<FTM1_CH1 channels are mapped on PTC5.
            v1=0x00000001,     ///<FTM1_CH1 channels are mapped on PTE7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ftm1ps1Val> ftm1ps1{}; 
        namespace Ftm1ps1ValC{
            constexpr Register::FieldValue<decltype(ftm1ps1)::Type,Ftm1ps1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1ps1)::Type,Ftm1ps1Val::v1> v1{};
        }
        ///FTM0 TCLK Pin Select
        enum class Ftm0clkpsVal {
            v00=0x00000000,     ///<Selects TCLK0 for FTM0 module..
            v01=0x00000001,     ///<Selects TCLK1 for FTM0 module.
            v10=0x00000002,     ///<Selects TCLK2 for FTM0 module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Ftm0clkpsVal> ftm0clkps{}; 
        namespace Ftm0clkpsValC{
            constexpr Register::FieldValue<decltype(ftm0clkps)::Type,Ftm0clkpsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm0clkps)::Type,Ftm0clkpsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm0clkps)::Type,Ftm0clkpsVal::v10> v10{};
        }
        ///FTM1 TCLK Pin Select
        enum class Ftm1clkpsVal {
            v00=0x00000000,     ///<Selects TCLK0 for FTM1 module..
            v01=0x00000001,     ///<Selects TCLK1 for FTM1 module.
            v10=0x00000002,     ///<Selects TCLK2 for FTM1 module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Ftm1clkpsVal> ftm1clkps{}; 
        namespace Ftm1clkpsValC{
            constexpr Register::FieldValue<decltype(ftm1clkps)::Type,Ftm1clkpsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm1clkps)::Type,Ftm1clkpsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm1clkps)::Type,Ftm1clkpsVal::v10> v10{};
        }
        ///FTM2 TCLK Pin Select
        enum class Ftm2clkpsVal {
            v00=0x00000000,     ///<Selects TCLK0 for FTM2 module..
            v01=0x00000001,     ///<Selects TCLK1 for FTM2 module.
            v10=0x00000002,     ///<Selects TCLK2 for FTM2 module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,Ftm2clkpsVal> ftm2clkps{}; 
        namespace Ftm2clkpsValC{
            constexpr Register::FieldValue<decltype(ftm2clkps)::Type,Ftm2clkpsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm2clkps)::Type,Ftm2clkpsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm2clkps)::Type,Ftm2clkpsVal::v10> v10{};
        }
        ///PWT TCLK Pin Select
        enum class PwtclkpsVal {
            v00=0x00000000,     ///<Selects TCLK0 for PWT module.
            v01=0x00000001,     ///<Selects TCLK1 for PWT module.
            v10=0x00000002,     ///<Selects TCLK2 for PWT module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,PwtclkpsVal> pwtclkps{}; 
        namespace PwtclkpsValC{
            constexpr Register::FieldValue<decltype(pwtclkps)::Type,PwtclkpsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pwtclkps)::Type,PwtclkpsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pwtclkps)::Type,PwtclkpsVal::v10> v10{};
        }
    }
    namespace SimPinsel1{    ///<Pin Selection Register 1
        using Addr = Register::Address<0x40048010,0xfffe0000,0,unsigned>;
        ///FTM2 Channel 0 Pin Select
        enum class Ftm2ps0Val {
            v00=0x00000000,     ///<FTM2 CH0 mapped on PTC0.
            v01=0x00000001,     ///<FTM2 CH0 mapped on PTH0.
            v10=0x00000002,     ///<FTM2 CH0 mapped on PTF0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Ftm2ps0Val> ftm2ps0{}; 
        namespace Ftm2ps0ValC{
            constexpr Register::FieldValue<decltype(ftm2ps0)::Type,Ftm2ps0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm2ps0)::Type,Ftm2ps0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm2ps0)::Type,Ftm2ps0Val::v10> v10{};
        }
        ///FTM2 Channel 1 Pin Select
        enum class Ftm2ps1Val {
            v00=0x00000000,     ///<FTM2 CH1 mapped on PTC1.
            v01=0x00000001,     ///<FTM2 CH1 mapped on PTH1.
            v10=0x00000002,     ///<FTM2 CH1 mapped on PTF1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Ftm2ps1Val> ftm2ps1{}; 
        namespace Ftm2ps1ValC{
            constexpr Register::FieldValue<decltype(ftm2ps1)::Type,Ftm2ps1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm2ps1)::Type,Ftm2ps1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm2ps1)::Type,Ftm2ps1Val::v10> v10{};
        }
        ///FTM2 Channel 2 Pin Select
        enum class Ftm2ps2Val {
            v00=0x00000000,     ///<FTM2 CH2 mapped on PTC2.
            v01=0x00000001,     ///<FTM2 CH2 mapped on PTD0.
            v10=0x00000002,     ///<FTM2 CH2 mapped on PTG4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Ftm2ps2Val> ftm2ps2{}; 
        namespace Ftm2ps2ValC{
            constexpr Register::FieldValue<decltype(ftm2ps2)::Type,Ftm2ps2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm2ps2)::Type,Ftm2ps2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm2ps2)::Type,Ftm2ps2Val::v10> v10{};
        }
        ///FTM2 Channel 3 Pin Select
        enum class Ftm2ps3Val {
            v00=0x00000000,     ///<FTM2 CH3 mapped on PTC3.
            v01=0x00000001,     ///<FTM2 CH3 mapped on PTD1.
            v10=0x00000002,     ///<FTM2 CH3 mapped on PTG5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Ftm2ps3Val> ftm2ps3{}; 
        namespace Ftm2ps3ValC{
            constexpr Register::FieldValue<decltype(ftm2ps3)::Type,Ftm2ps3Val::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm2ps3)::Type,Ftm2ps3Val::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm2ps3)::Type,Ftm2ps3Val::v10> v10{};
        }
        ///FTM2 Channel4 Pin Select
        enum class Ftm2ps4Val {
            v0=0x00000000,     ///<FTM2 CH4 mapped on PTB4.
            v1=0x00000001,     ///<FTM2 CH4 mapped on PTG6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ftm2ps4Val> ftm2ps4{}; 
        namespace Ftm2ps4ValC{
            constexpr Register::FieldValue<decltype(ftm2ps4)::Type,Ftm2ps4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2ps4)::Type,Ftm2ps4Val::v1> v1{};
        }
        ///FTM2 Channel 5 Pin Select
        enum class Ftm2ps5Val {
            v0=0x00000000,     ///<FTM2 CH5 mapped on PTB5.
            v1=0x00000001,     ///<FTM2 CH5 mapped on PTG7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ftm2ps5Val> ftm2ps5{}; 
        namespace Ftm2ps5ValC{
            constexpr Register::FieldValue<decltype(ftm2ps5)::Type,Ftm2ps5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2ps5)::Type,Ftm2ps5Val::v1> v1{};
        }
        ///I2C1 Pin Select
        enum class I2c1psVal {
            v0=0x00000000,     ///<I2C1_SCL on PTE1, I2C1_SDA on PTE0.
            v1=0x00000001,     ///<I2C1_SCL on PTH4, I2C1_SDA on PTH3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,I2c1psVal> i2c1ps{}; 
        namespace I2c1psValC{
            constexpr Register::FieldValue<decltype(i2c1ps)::Type,I2c1psVal::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c1ps)::Type,I2c1psVal::v1> v1{};
        }
        ///SPI1 Pin Select
        enum class Spi1psVal {
            v0=0x00000000,     ///<SPI1_SCK, SPI1_MOSI, SPI1_MISO, and SPI1_PCS are mapped on PTD0, PTD1, PTD2, and PTD3.
            v1=0x00000001,     ///<SPI1_SCK, SPI1_MOSI, SPI1_MISO, and SPI1_PCS are mapped on PTG4, PTG5, PTG6, and PTG7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Spi1psVal> spi1ps{}; 
        namespace Spi1psValC{
            constexpr Register::FieldValue<decltype(spi1ps)::Type,Spi1psVal::v0> v0{};
            constexpr Register::FieldValue<decltype(spi1ps)::Type,Spi1psVal::v1> v1{};
        }
        ///UART1 Pin Select
        enum class Uart1psVal {
            v0=0x00000000,     ///<UART1_TX on PTC7, UART1_RX on PTC6.
            v1=0x00000001,     ///<UART1_TX on PTF3, UART1_RX on PTF2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Uart1psVal> uart1ps{}; 
        namespace Uart1psValC{
            constexpr Register::FieldValue<decltype(uart1ps)::Type,Uart1psVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1ps)::Type,Uart1psVal::v1> v1{};
        }
        ///UART2 Pin Select
        enum class Uart2psVal {
            v0=0x00000000,     ///<UART2_TX on PTD7, UART2_RX on PTD6.
            v1=0x00000001,     ///<UART2_TX on PTI1, UART2_RX on PTI0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Uart2psVal> uart2ps{}; 
        namespace Uart2psValC{
            constexpr Register::FieldValue<decltype(uart2ps)::Type,Uart2psVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart2ps)::Type,Uart2psVal::v1> v1{};
        }
        ///PWTIN0 Pin Select
        enum class Pwtin0psVal {
            v0=0x00000000,     ///<PWTIN0 on PTD5.
            v1=0x00000001,     ///<PWTIN0 on PTE2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pwtin0psVal> pwtin0ps{}; 
        namespace Pwtin0psValC{
            constexpr Register::FieldValue<decltype(pwtin0ps)::Type,Pwtin0psVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pwtin0ps)::Type,Pwtin0psVal::v1> v1{};
        }
        ///PWTIN1 Pin Select
        enum class Pwtin1psVal {
            v0=0x00000000,     ///<PWTIN1 on PTB0.
            v1=0x00000001,     ///<PWTIN1 on PTH7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pwtin1psVal> pwtin1ps{}; 
        namespace Pwtin1psValC{
            constexpr Register::FieldValue<decltype(pwtin1ps)::Type,Pwtin1psVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pwtin1ps)::Type,Pwtin1psVal::v1> v1{};
        }
        ///MSCAN Pin Select
        enum class MscanpsVal {
            v0=0x00000000,     ///<CAN_TX on PTC7, CAN_RX on PTC6.
            v1=0x00000001,     ///<CAN_TX on PTE7, CAN_RX on PTH2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,MscanpsVal> mscanps{}; 
        namespace MscanpsValC{
            constexpr Register::FieldValue<decltype(mscanps)::Type,MscanpsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mscanps)::Type,MscanpsVal::v1> v1{};
        }
    }
    namespace SimScgc{    ///<System Clock Gating Control Register
        using Addr = Register::Address<0x40048014,0x14804b0c,0,unsigned>;
        ///RTC Clock Gate Control
        enum class RtcVal {
            v0=0x00000000,     ///<Bus clock to the RTC module is disabled.
            v1=0x00000001,     ///<Bus clock to the RTC module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RtcVal> rtc{}; 
        namespace RtcValC{
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::v1> v1{};
        }
        ///PIT Clock Gate Control
        enum class PitVal {
            v0=0x00000000,     ///<Bus clock to the PIT module is disabled.
            v1=0x00000001,     ///<Bus clock to the PIT module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PitVal> pit{}; 
        namespace PitValC{
            constexpr Register::FieldValue<decltype(pit)::Type,PitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pit)::Type,PitVal::v1> v1{};
        }
        ///PWT Clock Gate Control
        enum class PwtVal {
            v0=0x00000000,     ///<Timer clock to the PWT module is disabled.
            v1=0x00000001,     ///<Timer clock to the PWT module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PwtVal> pwt{}; 
        namespace PwtValC{
            constexpr Register::FieldValue<decltype(pwt)::Type,PwtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pwt)::Type,PwtVal::v1> v1{};
        }
        ///FTM0 Clock Gate Control
        enum class Ftm0Val {
            v0=0x00000000,     ///<Bus clock to the FTM0 module is disabled.
            v1=0x00000001,     ///<Bus clock to the FTM0 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ftm0Val> ftm0{}; 
        namespace Ftm0ValC{
            constexpr Register::FieldValue<decltype(ftm0)::Type,Ftm0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0)::Type,Ftm0Val::v1> v1{};
        }
        ///FTM1 Clock Gate Control
        enum class Ftm1Val {
            v0=0x00000000,     ///<Bus clock to the FTM1 module is disabled.
            v1=0x00000001,     ///<Bus clock to the FTM1 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ftm1Val> ftm1{}; 
        namespace Ftm1ValC{
            constexpr Register::FieldValue<decltype(ftm1)::Type,Ftm1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1)::Type,Ftm1Val::v1> v1{};
        }
        ///FTM2 Clock Gate Control
        enum class Ftm2Val {
            v0=0x00000000,     ///<Bus clock to the FTM2 module is disabled.
            v1=0x00000001,     ///<Bus clock to the FTM2 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ftm2Val> ftm2{}; 
        namespace Ftm2ValC{
            constexpr Register::FieldValue<decltype(ftm2)::Type,Ftm2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2)::Type,Ftm2Val::v1> v1{};
        }
        ///CRC Clock Gate Control
        enum class CrcVal {
            v0=0x00000000,     ///<Bus clock to the CRC module is disabled.
            v1=0x00000001,     ///<Bus clock to the CRC module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,CrcVal> crc{}; 
        namespace CrcValC{
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v1> v1{};
        }
        ///Flash Clock Gate Control
        enum class FlashVal {
            v0=0x00000000,     ///<Bus clock to the flash module is disabled.
            v1=0x00000001,     ///<Bus clock to the flash module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,FlashVal> flash{}; 
        namespace FlashValC{
            constexpr Register::FieldValue<decltype(flash)::Type,FlashVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flash)::Type,FlashVal::v1> v1{};
        }
        ///SWD (single wire debugger) Clock Gate Control
        enum class SwdVal {
            v0=0x00000000,     ///<Bus clock to the SWD module is disabled.
            v1=0x00000001,     ///<Bus clock to the SWD module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,SwdVal> swd{}; 
        namespace SwdValC{
            constexpr Register::FieldValue<decltype(swd)::Type,SwdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swd)::Type,SwdVal::v1> v1{};
        }
        ///MSCAN Clock Gate Control
        enum class MscanVal {
            v0=0x00000000,     ///<Bus clock to the MSCAN module is disabled.
            v1=0x00000001,     ///<Bus clock to the MSCAN module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MscanVal> mscan{}; 
        namespace MscanValC{
            constexpr Register::FieldValue<decltype(mscan)::Type,MscanVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mscan)::Type,MscanVal::v1> v1{};
        }
        ///I2C0 Clock Gate Control
        enum class I2c0Val {
            v0=0x00000000,     ///<Bus clock to the I2C0 module is disabled.
            v1=0x00000001,     ///<Bus clock to the I2C0 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,I2c0Val> i2c0{}; 
        namespace I2c0ValC{
            constexpr Register::FieldValue<decltype(i2c0)::Type,I2c0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c0)::Type,I2c0Val::v1> v1{};
        }
        ///I2C1 Clock Gate Control
        enum class I2c1Val {
            v0=0x00000000,     ///<Bus clock to the I2C1 module is disabled.
            v1=0x00000001,     ///<Bus clock to the I2C1 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,I2c1Val> i2c1{}; 
        namespace I2c1ValC{
            constexpr Register::FieldValue<decltype(i2c1)::Type,I2c1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c1)::Type,I2c1Val::v1> v1{};
        }
        ///SPI0 Clock Gate Control
        enum class Spi0Val {
            v0=0x00000000,     ///<Bus clock to the SPI0 module is disabled.
            v1=0x00000001,     ///<Bus clock to the SPI0 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Spi0Val> spi0{}; 
        namespace Spi0ValC{
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::v1> v1{};
        }
        ///SPI1 Clock Gate Control
        enum class Spi1Val {
            v0=0x00000000,     ///<Bus clock to the SPI1 module is disabled.
            v1=0x00000001,     ///<Bus clock to the SPI1 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Spi1Val> spi1{}; 
        namespace Spi1ValC{
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::v1> v1{};
        }
        ///UART0 Clock Gate Control
        enum class Uart0Val {
            v0=0x00000000,     ///<Bus clock to the UART0 module is disabled.
            v1=0x00000001,     ///<Bus clock to the UART0 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Uart0Val> uart0{}; 
        namespace Uart0ValC{
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::v1> v1{};
        }
        ///UART1 Clock Gate Control
        enum class Uart1Val {
            v0=0x00000000,     ///<Bus clock to the UART1 module is disabled.
            v1=0x00000001,     ///<Bus clock to the UART1 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Uart1Val> uart1{}; 
        namespace Uart1ValC{
            constexpr Register::FieldValue<decltype(uart1)::Type,Uart1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1)::Type,Uart1Val::v1> v1{};
        }
        ///UART2 Clock Gate Control
        enum class Uart2Val {
            v0=0x00000000,     ///<Bus clock to the UART2 module is disabled.
            v1=0x00000001,     ///<Bus clock to the UART2 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Uart2Val> uart2{}; 
        namespace Uart2ValC{
            constexpr Register::FieldValue<decltype(uart2)::Type,Uart2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart2)::Type,Uart2Val::v1> v1{};
        }
        ///KBI0 Clock Gate Control
        enum class Kbi0Val {
            v0=0x00000000,     ///<Bus clock to the KBI0 module is disabled.
            v1=0x00000001,     ///<Bus clock to the KBI0 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Kbi0Val> kbi0{}; 
        namespace Kbi0ValC{
            constexpr Register::FieldValue<decltype(kbi0)::Type,Kbi0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(kbi0)::Type,Kbi0Val::v1> v1{};
        }
        ///KBI1 Clock Gate Control
        enum class Kbi1Val {
            v0=0x00000000,     ///<Bus clock to the KBI1 module is disabled.
            v1=0x00000001,     ///<Bus clock to the KBI1 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Kbi1Val> kbi1{}; 
        namespace Kbi1ValC{
            constexpr Register::FieldValue<decltype(kbi1)::Type,Kbi1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(kbi1)::Type,Kbi1Val::v1> v1{};
        }
        ///IRQ Clock Gate Control
        enum class IrqVal {
            v0=0x00000000,     ///<Bus clock to the IRQ module is disabled.
            v1=0x00000001,     ///<Bus clock to the IRQ module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,IrqVal> irq{}; 
        namespace IrqValC{
            constexpr Register::FieldValue<decltype(irq)::Type,IrqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irq)::Type,IrqVal::v1> v1{};
        }
        ///ADC Clock Gate Control
        enum class AdcVal {
            v0=0x00000000,     ///<Bus clock to the ADC module is disabled.
            v1=0x00000001,     ///<Bus clock to the ADC module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,AdcVal> adc{}; 
        namespace AdcValC{
            constexpr Register::FieldValue<decltype(adc)::Type,AdcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc)::Type,AdcVal::v1> v1{};
        }
        ///ACMP0 Clock Gate Control
        enum class Acmp0Val {
            v0=0x00000000,     ///<Bus clock to the ACMP0 module is disabled.
            v1=0x00000001,     ///<Bus clock to the ACMP0 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Acmp0Val> acmp0{}; 
        namespace Acmp0ValC{
            constexpr Register::FieldValue<decltype(acmp0)::Type,Acmp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(acmp0)::Type,Acmp0Val::v1> v1{};
        }
        ///ACMP1 Clock Gate Control
        enum class Acmp1Val {
            v0=0x00000000,     ///<Bus clock to the ACMP1 module is disabled.
            v1=0x00000001,     ///<Bus clock to the ACMP1 module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Acmp1Val> acmp1{}; 
        namespace Acmp1ValC{
            constexpr Register::FieldValue<decltype(acmp1)::Type,Acmp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(acmp1)::Type,Acmp1Val::v1> v1{};
        }
    }
    namespace SimUuidl{    ///<Universally Unique Identifier Low Register
        using Addr = Register::Address<0x40048018,0x00000000,0,unsigned>;
        ///Universally Unique Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace SimUuidml{    ///<Universally Unique Identifier Middle Low Register
        using Addr = Register::Address<0x4004801c,0x00000000,0,unsigned>;
        ///Universally Unique Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace SimUuidmh{    ///<Universally Unique Identifier Middle High Register
        using Addr = Register::Address<0x40048020,0xffff0000,0,unsigned>;
        ///Universally Unique Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace SimClkdiv{    ///<Clock Divider Register
        using Addr = Register::Address<0x40048024,0xceefffff,0,unsigned>;
        ///Clock 3 output divider value
        enum class Outdiv3Val {
            v0=0x00000000,     ///<Same as ICSOUTCLK.
            v1=0x00000001,     ///<ICSOUTCLK divides by 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Outdiv3Val> outdiv3{}; 
        namespace Outdiv3ValC{
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v1> v1{};
        }
        ///Clock 2 output divider value
        enum class Outdiv2Val {
            v0=0x00000000,     ///<Not divided from divider1.
            v1=0x00000001,     ///<Divide by 2 from divider1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Outdiv2Val> outdiv2{}; 
        namespace Outdiv2ValC{
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v1> v1{};
        }
        ///Clock 1 output divider value
        enum class Outdiv1Val {
            v00=0x00000000,     ///<Same as ICSOUTCLK.
            v01=0x00000001,     ///<ICSOUTCLK divides by 2.
            v10=0x00000002,     ///<ICSOUTCLK divides by 3.
            v11=0x00000003,     ///<ICSOUTCLK divides by 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,Outdiv1Val> outdiv1{}; 
        namespace Outdiv1ValC{
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v11> v11{};
        }
    }
}
