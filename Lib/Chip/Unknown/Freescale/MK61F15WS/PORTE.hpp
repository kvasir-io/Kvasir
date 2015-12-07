#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortePcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d000,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d004,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d008,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d00c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d010,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d014,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d018,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d01c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d020,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d024,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d028,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d02c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d030,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d034,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d038,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d03c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d040,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d044,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d048,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d04c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d050,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d054,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d058,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d05c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d060,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d064,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d068,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d06c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d070,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d074,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d078,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d07c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PorteGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x4004d080,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        namespace GpwdValC{
        }
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
        namespace GpweValC{
        }
    }
    namespace PorteGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x4004d084,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        namespace GpwdValC{
        }
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
        namespace GpweValC{
        }
    }
    namespace PorteIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x4004d0a0,0x00000000,0,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
        namespace IsfValC{
        }
    }
    namespace PorteDfer{    ///<Digital Filter Enable Register
        using Addr = Register::Address<0x4004d0c0,0x00000000,0,unsigned>;
        ///Digital Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dfe{}; 
        namespace DfeValC{
        }
    }
    namespace PorteDfcr{    ///<Digital Filter Clock Register
        using Addr = Register::Address<0x4004d0c4,0xfffffffe,0,unsigned>;
        ///Clock Source
        enum class CsVal {
            v0=0x00000000,     ///<Digital Filters are clocked by the bus clock.
            v1=0x00000001,     ///<Digital Filters are clocked by the 1 kHz LPO clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CsVal> cs{}; 
        namespace CsValC{
            constexpr Register::FieldValue<decltype(cs),CsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cs),CsVal::v1> v1{};
        }
    }
    namespace PorteDfwr{    ///<Digital Filter Width Register
        using Addr = Register::Address<0x4004d0c8,0xffffffe0,0,unsigned>;
        ///Filter Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> filt{}; 
        namespace FiltValC{
        }
    }
}
