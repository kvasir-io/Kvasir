#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System Integration Module
    namespace SimSrsid{    ///<System Reset Status and ID Register
        using Addr = Register::Address<0x40048000,0x0000d119,0x00000000,unsigned>;
        ///Low Voltage Detect
        enum class LvdVal {
            v0=0x00000000,     ///<Reset is not caused by LVD trip or POR.
            v1=0x00000001,     ///<Reset is caused by LVD trip or POR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LvdVal> lvd{}; 
        namespace LvdValC{
            constexpr Register::FieldValue<decltype(lvd)::Type,LvdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvd)::Type,LvdVal::v1> v1{};
        }
        ///Internal Clock Source Module Reset
        enum class LocVal {
            v0=0x00000000,     ///<Reset is not caused by the ICS module.
            v1=0x00000001,     ///<Reset is caused by the ICS module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LocVal> loc{}; 
        namespace LocValC{
            constexpr Register::FieldValue<decltype(loc)::Type,LocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(loc)::Type,LocVal::v1> v1{};
        }
        ///Watchdog (WDOG)
        enum class WdogVal {
            v0=0x00000000,     ///<Reset is not caused by WDOG timeout.
            v1=0x00000001,     ///<Reset is caused by WDOG timeout.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,WdogVal> wdog{}; 
        namespace WdogValC{
            constexpr Register::FieldValue<decltype(wdog)::Type,WdogVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wdog)::Type,WdogVal::v1> v1{};
        }
        ///External Reset Pin
        enum class PinVal {
            v0=0x00000000,     ///<Reset is not caused by external reset pin.
            v1=0x00000001,     ///<Reset came from external reset pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PinVal> pin{}; 
        namespace PinValC{
            constexpr Register::FieldValue<decltype(pin)::Type,PinVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pin)::Type,PinVal::v1> v1{};
        }
        ///Power-On Reset
        enum class PorVal {
            v0=0x00000000,     ///<Reset not caused by POR.
            v1=0x00000001,     ///<POR caused reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PorVal> por{}; 
        namespace PorValC{
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::v1> v1{};
        }
        ///Core Lockup
        enum class LockupVal {
            v0=0x00000000,     ///<Reset is not caused by core LOCKUP event.
            v1=0x00000001,     ///<Reset is caused by core LOCKUP event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LockupVal> lockup{}; 
        namespace LockupValC{
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::v1> v1{};
        }
        ///Software
        enum class SwVal {
            v0=0x00000000,     ///<Reset is not caused by software setting of SYSRESETREQ bit.
            v1=0x00000001,     ///<Reset caused by software setting of SYSRESETREQ bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SwVal> sw{}; 
        namespace SwValC{
            constexpr Register::FieldValue<decltype(sw)::Type,SwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sw)::Type,SwVal::v1> v1{};
        }
        ///MDM-AP System Reset Request
        enum class MdmapVal {
            v0=0x00000000,     ///<Reset is not caused by host debugger system setting of the System Reset Request bit.
            v1=0x00000001,     ///<Reset is caused by host debugger system setting of the System Reset Request bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,MdmapVal> mdmap{}; 
        namespace MdmapValC{
            constexpr Register::FieldValue<decltype(mdmap)::Type,MdmapVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mdmap)::Type,MdmapVal::v1> v1{};
        }
        ///Stop Mode Acknowledge Error Reset
        enum class SackerrVal {
            v0=0x00000000,     ///<Reset is not caused by peripheral failure to acknowledge attempt to enter Stop mode.
            v1=0x00000001,     ///<Reset is caused by peripheral failure to acknowledge attempt to enter Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SackerrVal> sackerr{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PinidVal> pinid{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> revid{}; 
        ///Kinetis sub-family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> subfamid{}; 
        ///Kinetis family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> famid{}; 
    }
    namespace SimSopt{    ///<System Options Register
        using Addr = Register::Address<0x40048004,0x007000f1,0x00000000,unsigned>;
        ///NMI Pin Enable
        enum class NmieVal {
            v0=0x00000000,     ///<PTB4/FTM2_CH4/SPI0_MISO/NMI/ACMP1_IN2 pin functions as PTB4, FTM2_CH4, SPI0_MISO, or ACMP1_IN2.
            v1=0x00000001,     ///<PTB4/FTM2_CH4/SPI0_MISO/NMI/ACMP1_IN2 pin functions as NMI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NmieVal> nmie{}; 
        namespace NmieValC{
            constexpr Register::FieldValue<decltype(nmie)::Type,NmieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nmie)::Type,NmieVal::v1> v1{};
        }
        ///RESET Pin Enable
        enum class RstpeVal {
            v0=0x00000000,     ///<PTA5/IRQ/FTM0_CLK/RESET pin functions as PTA5, IRQ, or FTM0_CLK.
            v1=0x00000001,     ///<PTA5/IRQ/FTM0_CLK/RESET pin functions as RESET.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RstpeVal> rstpe{}; 
        namespace RstpeValC{
            constexpr Register::FieldValue<decltype(rstpe)::Type,RstpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rstpe)::Type,RstpeVal::v1> v1{};
        }
        ///Single Wire Debug Port Pin Enable
        enum class SwdeVal {
            v0=0x00000000,     ///<PTA4/ACMP0_OUT/SWD_DIO as PTA4 or ACMP0_OUT function, PTC4/RTCO/FTM1_CH0/ACMP0_IN2/SWD_CLK as PTC4, RTCO, FTM1_CH0, or ACMP0_IN2 function.
            v1=0x00000001,     ///<PTA4/ACMP0_OUT/SWD_DIO as SWD_DIO function, PTC4/RTCO/FTM1CH0/ACMP0_IN2/SWD_CLK as SWD_CLK function.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SwdeVal> swde{}; 
        namespace SwdeValC{
            constexpr Register::FieldValue<decltype(swde)::Type,SwdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swde)::Type,SwdeVal::v1> v1{};
        }
        ///ADC Hardware Trigger Source
        enum class AdhwtVal {
            v00=0x00000000,     ///<RTC overflow as the ADC hardware trigger
            v01=0x00000001,     ///<PIT overflow as the ADC hardware trigger
            v10=0x00000002,     ///<FTM2 init trigger with 8-bit programmable delay
            v11=0x00000003,     ///<FTM2 match trigger with 8-bit programmable delay
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,AdhwtVal> adhwt{}; 
        namespace AdhwtValC{
            constexpr Register::FieldValue<decltype(adhwt)::Type,AdhwtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(adhwt)::Type,AdhwtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(adhwt)::Type,AdhwtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(adhwt)::Type,AdhwtVal::v11> v11{};
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
        ///UART0_RX Filter Select
        enum class RxdfeVal {
            v0=0x00000000,     ///<UART0_RX input signal is connected to UART0 module directly.
            v1=0x00000001,     ///<UART0_RX input signal is filtered by ACMP, then injected to UART0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,RxdfeVal> rxdfe{}; 
        namespace RxdfeValC{
            constexpr Register::FieldValue<decltype(rxdfe)::Type,RxdfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxdfe)::Type,RxdfeVal::v1> v1{};
        }
        ///FTM2 Synchronization Select
        enum class FtmsyncVal {
            v0=0x00000000,     ///<No synchronization triggered.
            v1=0x00000001,     ///<Generates a PWM synchronization trigger to the FTM2 modules.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FtmsyncVal> ftmsync{}; 
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
        ///FTM2 Trigger Delay Active
        enum class DlyactVal {
            v0=0x00000000,     ///<The delay is inactive.
            v1=0x00000001,     ///<The delay is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DlyactVal> dlyact{}; 
        namespace DlyactValC{
            constexpr Register::FieldValue<decltype(dlyact)::Type,DlyactVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dlyact)::Type,DlyactVal::v1> v1{};
        }
        ///FTM2 Trigger Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> delay{}; 
    }
    namespace SimPinsel{    ///<Pin Selection Register
        using Addr = Register::Address<0x40048008,0xffff000f,0x00000000,unsigned>;
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
            v0=0x00000000,     ///<SPI0_SCK, SPI0_MOSI, SPI0_MISO, and SPI0_PCS0 are mapped on PTB2, PTB3, PTB4, and PTB5.
            v1=0x00000001,     ///<SPI0_SCK, SPI0_MOSI, SPI0_MISO, and SPI0_PCS0 are mapped on PTE0, PTE1, PTE2, and PTE3.
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
        ///FTM0[0] Port Pin Select
        enum class Ftm0ps0Val {
            v0=0x00000000,     ///<FTM0[0] channels are mapped on PTA0.
            v1=0x00000001,     ///<FTM0[0] channels are mapped on PTB2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ftm0ps0Val> ftm0ps0{}; 
        namespace Ftm0ps0ValC{
            constexpr Register::FieldValue<decltype(ftm0ps0)::Type,Ftm0ps0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0ps0)::Type,Ftm0ps0Val::v1> v1{};
        }
        ///FTM0[1] Port Pin Select
        enum class Ftm0ps1Val {
            v0=0x00000000,     ///<FTM0[1] channels are mapped on PTA1.
            v1=0x00000001,     ///<FTM0[1] channels are mapped on PTB3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ftm0ps1Val> ftm0ps1{}; 
        namespace Ftm0ps1ValC{
            constexpr Register::FieldValue<decltype(ftm0ps1)::Type,Ftm0ps1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0ps1)::Type,Ftm0ps1Val::v1> v1{};
        }
        ///FTM1[0] Port Pin Select
        enum class Ftm1ps0Val {
            v0=0x00000000,     ///<FTM1[0] channels are mapped on PTC4.
            v1=0x00000001,     ///<FTM1[0] channels are mapped on PTH2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ftm1ps0Val> ftm1ps0{}; 
        namespace Ftm1ps0ValC{
            constexpr Register::FieldValue<decltype(ftm1ps0)::Type,Ftm1ps0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1ps0)::Type,Ftm1ps0Val::v1> v1{};
        }
        ///FTM1[1] Port Pin Select
        enum class Ftm1ps1Val {
            v0=0x00000000,     ///<FTM1[1] channels are mapped on PTC5.
            v1=0x00000001,     ///<FTM1[1] channels are mapped on PTE7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ftm1ps1Val> ftm1ps1{}; 
        namespace Ftm1ps1ValC{
            constexpr Register::FieldValue<decltype(ftm1ps1)::Type,Ftm1ps1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1ps1)::Type,Ftm1ps1Val::v1> v1{};
        }
        ///FTM2[0] Port Pin Select
        enum class Ftm2ps0Val {
            v0=0x00000000,     ///<FTM2[0] channels are mapped on PTC0.
            v1=0x00000001,     ///<FTM2[0] channels are mapped on PTH0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ftm2ps0Val> ftm2ps0{}; 
        namespace Ftm2ps0ValC{
            constexpr Register::FieldValue<decltype(ftm2ps0)::Type,Ftm2ps0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2ps0)::Type,Ftm2ps0Val::v1> v1{};
        }
        ///FTM2[1] Port Pin Select
        enum class Ftm2ps1Val {
            v0=0x00000000,     ///<FTM2[1] channels are mapped on PTC1.
            v1=0x00000001,     ///<FTM2[1] channels are mapped on PTH1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ftm2ps1Val> ftm2ps1{}; 
        namespace Ftm2ps1ValC{
            constexpr Register::FieldValue<decltype(ftm2ps1)::Type,Ftm2ps1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2ps1)::Type,Ftm2ps1Val::v1> v1{};
        }
        ///FTM2[2] Port Pin Select
        enum class Ftm2ps2Val {
            v0=0x00000000,     ///<FTM2[2] channels are mapped on PTC2.
            v1=0x00000001,     ///<FTM2[2] channels are mapped on PTD0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ftm2ps2Val> ftm2ps2{}; 
        namespace Ftm2ps2ValC{
            constexpr Register::FieldValue<decltype(ftm2ps2)::Type,Ftm2ps2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2ps2)::Type,Ftm2ps2Val::v1> v1{};
        }
        ///FTM2[3] Port Pin Select
        enum class Ftm2ps3Val {
            v0=0x00000000,     ///<FTM2[3] channels are mapped on PTC3.
            v1=0x00000001,     ///<FTM2[3] channels are mapped on PTD1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ftm2ps3Val> ftm2ps3{}; 
        namespace Ftm2ps3ValC{
            constexpr Register::FieldValue<decltype(ftm2ps3)::Type,Ftm2ps3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2ps3)::Type,Ftm2ps3Val::v1> v1{};
        }
    }
    namespace SimScgc{    ///<System Clock Gating Control Register
        using Addr = Register::Address<0x4004800c,0x1481cb1c,0x00000000,unsigned>;
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
        ///I2C Clock Gate Control
        enum class I2cVal {
            v0=0x00000000,     ///<Bus clock to the IIC module is disabled.
            v1=0x00000001,     ///<Bus clock to the IIC module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,I2cVal> i2c{}; 
        namespace I2cValC{
            constexpr Register::FieldValue<decltype(i2c)::Type,I2cVal::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c)::Type,I2cVal::v1> v1{};
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
        using Addr = Register::Address<0x40048010,0x00000000,0x00000000,unsigned>;
        ///Universally Unique Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> id{}; 
    }
    namespace SimUuidh{    ///<Universally Unique Identifier High Register
        using Addr = Register::Address<0x40048014,0x00000000,0x00000000,unsigned>;
        ///Universally Unique Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> id{}; 
    }
    namespace SimBusdiv{    ///<BUS Clock Divider Register
        using Addr = Register::Address<0x40048018,0xfffffffe,0x00000000,unsigned>;
        ///BUS Clock Divider
        enum class BusdivVal {
            v0=0x00000000,     ///<Bus clock is same as ICSOUTCLK.
            v1=0x00000001,     ///<Bus clock is ICSOUTCLK divided by 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BusdivVal> busdiv{}; 
        namespace BusdivValC{
            constexpr Register::FieldValue<decltype(busdiv)::Type,BusdivVal::v0> v0{};
            constexpr Register::FieldValue<decltype(busdiv)::Type,BusdivVal::v1> v1{};
        }
    }
}
