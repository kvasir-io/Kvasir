#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortcPcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b000,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b004,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b008,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b00c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b010,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b014,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b018,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b01c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b020,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b024,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b028,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b02c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b030,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b034,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b038,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b03c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b040,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b044,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b048,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b04c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b050,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b054,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b058,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b05c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b060,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b064,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b068,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b06c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b070,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b074,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b078,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b07c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
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
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
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
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Flag is disabled.
            v0001=0x00000001,     ///<Flag and DMA request on rising edge.
            v0010=0x00000002,     ///<Flag and DMA request on falling edge.
            v0011=0x00000003,     ///<Flag and DMA request on either edge.
            v1000=0x00000008,     ///<Flag and Interrupt when logic 0.
            v1001=0x00000009,     ///<Flag and Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Flag and Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Flag and Interrupt on either edge.
            v1100=0x0000000c,     ///<Flag and Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortcGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x4004b080,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        namespace GpwdValC{
        }
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
        namespace GpweValC{
        }
    }
    namespace PortcGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x4004b084,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        namespace GpwdValC{
        }
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
        namespace GpweValC{
        }
    }
    namespace PortcIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x4004b0a0,0x00000000,0,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
        namespace IsfValC{
        }
    }
}
