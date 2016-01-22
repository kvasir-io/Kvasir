#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortdPcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c000,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr0::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr0::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr0::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr0::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr0::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr0::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr0::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr0::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr0::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr0::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr0::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr0::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr0::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr0::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr0::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr0::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr0::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr0::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr0::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr0::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr0::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr0::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr0::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr0::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr0::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr0::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr0::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr0::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr0::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c004,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr1::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr1::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr1::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr1::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr1::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr1::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr1::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr1::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr1::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr1::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr1::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr1::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr1::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr1::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr1::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr1::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr1::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr1::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr1::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr1::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr1::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr1::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr1::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr1::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr1::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr1::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr1::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr1::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr1::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c008,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr2::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr2::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr2::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr2::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr2::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr2::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr2::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr2::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr2::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr2::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr2::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr2::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr2::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr2::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr2::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr2::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr2::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr2::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr2::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr2::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr2::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr2::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr2::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr2::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr2::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr2::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr2::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr2::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr2::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c00c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr3::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr3::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr3::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr3::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr3::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr3::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr3::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr3::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr3::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr3::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr3::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr3::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr3::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr3::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr3::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr3::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr3::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr3::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr3::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr3::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr3::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr3::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr3::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr3::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr3::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr3::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr3::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr3::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr3::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c010,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr4::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr4::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr4::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr4::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr4::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr4::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr4::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr4::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr4::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr4::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            disabled=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            spi1Ss=0x00000002,     ///<Alternative 2 (chip-specific).
            uart2Rx=0x00000003,     ///<Alternative 3 (chip-specific).
            tpm0ch4=0x00000004,     ///<Alternative 4 (chip-specific).
            fxioD4=0x00000006,     ///<Alternative 6 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortdPcr4::mux)::Type,MuxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(PortdPcr4::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortdPcr4::mux)::Type,MuxVal::spi1Ss> spi1Ss{};
            constexpr Register::FieldValue<decltype(PortdPcr4::mux)::Type,MuxVal::uart2Rx> uart2Rx{};
            constexpr Register::FieldValue<decltype(PortdPcr4::mux)::Type,MuxVal::tpm0ch4> tpm0ch4{};
            constexpr Register::FieldValue<decltype(PortdPcr4::mux)::Type,MuxVal::fxioD4> fxioD4{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr4::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr4::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr4::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr4::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr4::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr4::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr4::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr4::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr4::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr4::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr4::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c014,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr5::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr5::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr5::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr5::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr5::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr5::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr5::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr5::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr5::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr5::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr5::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr5::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr5::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr5::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr5::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr5::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr5::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr5::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr5::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr5::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr5::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr5::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr5::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr5::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr5::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr5::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr5::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr5::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr5::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c018,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr6::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr6::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr6::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr6::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr6::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr6::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr6::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr6::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr6::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr6::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr6::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr6::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr6::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr6::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr6::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr6::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr6::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr6::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr6::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr6::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr6::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr6::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr6::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr6::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr6::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr6::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr6::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr6::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr6::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c01c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr7::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr7::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr7::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr7::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr7::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr7::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr7::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr7::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr7::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr7::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr7::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr7::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr7::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr7::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr7::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr7::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr7::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr7::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr7::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr7::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr7::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr7::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr7::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr7::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr7::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr7::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr7::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr7::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr7::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c020,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr8::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr8::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr8::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr8::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr8::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr8::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr8::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr8::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr8::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr8::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr8::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr8::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr8::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr8::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr8::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr8::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr8::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr8::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr8::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr8::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr8::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr8::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr8::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr8::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr8::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr8::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr8::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr8::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr8::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c024,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr9::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr9::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr9::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr9::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr9::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr9::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr9::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr9::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr9::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr9::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr9::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr9::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr9::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr9::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr9::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr9::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr9::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr9::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr9::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr9::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr9::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr9::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr9::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr9::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr9::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr9::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr9::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr9::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr9::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c028,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr10::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr10::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr10::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr10::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr10::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr10::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr10::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr10::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr10::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr10::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr10::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr10::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr10::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr10::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr10::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr10::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr10::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr10::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr10::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr10::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr10::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr10::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr10::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr10::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr10::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr10::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr10::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr10::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr10::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c02c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr11::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr11::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr11::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr11::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr11::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr11::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr11::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr11::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr11::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr11::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr11::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr11::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr11::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr11::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr11::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr11::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr11::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr11::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr11::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr11::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr11::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr11::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr11::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr11::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr11::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr11::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr11::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr11::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr11::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c030,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr12::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr12::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr12::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr12::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr12::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr12::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr12::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr12::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr12::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr12::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr12::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr12::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr12::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr12::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr12::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr12::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr12::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr12::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr12::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr12::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr12::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr12::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr12::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr12::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr12::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr12::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr12::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr12::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr12::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c034,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr13::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr13::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr13::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr13::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr13::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr13::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr13::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr13::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr13::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr13::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr13::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr13::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr13::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr13::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr13::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr13::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr13::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr13::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr13::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr13::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr13::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr13::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr13::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr13::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr13::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr13::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr13::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr13::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr13::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c038,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr14::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr14::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr14::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr14::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr14::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr14::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr14::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr14::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr14::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr14::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr14::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr14::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr14::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr14::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr14::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr14::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr14::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr14::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr14::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr14::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr14::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr14::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr14::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr14::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr14::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr14::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr14::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr14::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr14::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c03c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr15::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr15::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr15::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr15::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr15::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr15::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr15::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr15::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr15::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr15::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr15::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr15::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr15::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr15::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr15::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr15::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr15::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr15::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr15::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr15::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr15::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr15::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr15::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr15::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr15::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr15::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr15::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr15::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr15::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c040,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr16::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr16::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr16::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr16::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr16::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr16::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr16::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr16::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr16::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr16::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr16::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr16::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr16::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr16::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr16::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr16::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr16::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr16::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr16::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr16::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr16::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr16::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr16::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr16::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr16::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr16::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr16::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr16::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr16::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c044,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr17::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr17::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr17::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr17::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr17::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr17::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr17::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr17::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr17::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr17::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr17::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr17::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr17::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr17::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr17::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr17::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr17::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr17::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr17::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr17::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr17::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr17::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr17::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr17::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr17::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr17::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr17::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr17::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr17::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c048,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr18::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr18::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr18::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr18::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr18::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr18::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr18::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr18::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr18::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr18::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr18::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr18::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr18::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr18::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr18::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr18::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr18::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr18::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr18::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr18::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr18::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr18::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr18::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr18::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr18::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr18::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr18::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr18::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr18::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c04c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr19::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr19::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr19::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr19::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr19::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr19::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr19::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr19::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr19::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr19::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr19::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr19::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr19::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr19::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr19::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr19::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr19::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr19::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr19::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr19::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr19::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr19::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr19::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr19::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr19::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr19::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr19::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr19::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr19::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c050,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr20::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr20::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr20::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr20::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr20::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr20::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr20::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr20::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr20::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr20::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr20::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr20::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr20::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr20::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr20::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr20::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr20::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr20::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr20::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr20::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr20::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr20::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr20::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr20::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr20::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr20::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr20::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr20::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr20::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c054,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr21::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr21::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr21::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr21::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr21::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr21::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr21::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr21::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr21::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr21::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr21::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr21::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr21::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr21::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr21::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr21::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr21::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr21::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr21::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr21::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr21::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr21::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr21::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr21::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr21::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr21::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr21::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr21::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr21::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c058,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr22::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr22::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr22::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr22::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr22::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr22::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr22::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr22::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr22::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr22::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr22::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr22::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr22::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr22::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr22::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr22::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr22::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr22::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr22::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr22::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr22::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr22::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr22::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr22::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr22::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr22::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr22::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr22::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr22::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c05c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr23::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr23::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr23::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr23::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr23::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr23::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr23::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr23::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr23::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr23::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr23::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr23::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr23::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr23::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr23::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr23::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr23::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr23::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr23::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr23::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr23::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr23::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr23::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr23::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr23::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr23::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr23::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr23::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr23::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c060,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr24::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr24::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr24::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr24::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr24::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr24::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr24::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr24::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr24::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr24::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr24::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr24::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr24::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr24::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr24::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr24::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr24::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr24::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr24::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr24::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr24::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr24::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr24::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr24::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr24::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr24::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr24::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr24::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr24::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c064,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr25::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr25::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr25::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr25::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr25::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr25::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr25::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr25::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr25::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr25::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr25::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr25::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr25::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr25::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr25::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr25::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr25::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr25::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr25::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr25::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr25::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr25::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr25::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr25::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr25::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr25::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr25::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr25::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr25::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c068,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr26::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr26::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr26::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr26::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr26::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr26::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr26::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr26::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr26::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr26::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr26::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr26::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr26::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr26::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr26::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr26::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr26::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr26::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr26::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr26::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr26::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr26::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr26::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr26::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr26::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr26::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr26::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr26::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr26::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c06c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr27::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr27::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr27::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr27::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr27::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr27::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr27::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr27::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr27::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr27::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr27::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr27::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr27::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr27::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr27::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr27::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr27::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr27::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr27::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr27::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr27::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr27::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr27::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr27::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr27::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr27::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr27::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr27::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr27::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c070,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr28::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr28::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr28::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr28::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr28::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr28::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr28::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr28::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr28::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr28::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr28::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr28::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr28::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr28::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr28::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr28::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr28::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr28::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr28::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr28::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr28::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr28::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr28::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr28::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr28::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr28::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr28::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr28::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr28::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c074,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr29::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr29::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr29::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr29::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr29::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr29::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr29::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr29::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr29::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr29::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr29::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr29::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr29::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr29::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr29::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr29::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr29::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr29::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr29::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr29::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr29::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr29::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr29::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr29::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr29::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr29::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr29::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr29::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr29::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c078,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr30::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr30::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr30::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr30::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr30::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr30::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr30::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr30::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr30::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr30::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr30::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr30::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr30::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr30::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr30::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr30::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr30::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr30::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr30::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr30::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr30::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr30::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr30::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr30::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr30::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr30::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr30::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr30::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr30::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c07c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortdPcr31::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr31::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortdPcr31::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr31::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortdPcr31::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr31::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortdPcr31::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr31::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortdPcr31::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr31::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortdPcr31::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortdPcr31::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortdPcr31::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortdPcr31::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortdPcr31::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortdPcr31::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortdPcr31::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortdPcr31::mux)::Type,MuxVal::v111> v111{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic 0.
            v1001=0x00000009,     ///<Interrupt on rising-edge.
            v1010=0x0000000a,     ///<Interrupt on falling-edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(PortdPcr31::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortdPcr31::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortdPcr31::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortdPcr31::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortdPcr31::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortdPcr31::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortdPcr31::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortdPcr31::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortdPcr31::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortdPcr31::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortdPcr31::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortdGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x4004c080,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PortdGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x4004c084,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PortdIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x4004c0a0,0x00000000,0x00000000,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
    }
}
