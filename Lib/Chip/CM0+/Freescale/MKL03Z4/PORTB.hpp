#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortbPcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a000,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a004,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a008,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a00c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a010,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a014,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a018,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a01c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a020,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a024,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a028,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a02c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a030,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a034,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a038,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a03c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a040,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a044,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a048,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a04c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a050,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a054,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a058,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a05c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a060,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a064,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a068,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a06c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a070,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a074,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a078,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a07c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt request disabled.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. The flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x4004a080,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
    }
    namespace PortbGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x4004a084,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
    }
    namespace PortbIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x4004a0a0,0x00000000,0,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
    }
}
