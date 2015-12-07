#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortePcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a000,0xfef078f8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
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
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
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
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a004,0xfef078f8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
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
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
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
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a008,0xfef078f8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
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
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
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
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a00c,0xfef078f8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
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
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
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
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a010,0xfef078f8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
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
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
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
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a014,0xfef078f8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
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
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
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
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a018,0xfef078f8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
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
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
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
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortePcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a01c,0xfef078f8,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
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
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
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
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PorteGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x4004a080,0x00000000,0,unsigned>;
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
        using Addr = Register::Address<0x4004a084,0x00000000,0,unsigned>;
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
        using Addr = Register::Address<0x4004a0a0,0x00000000,0,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
        namespace IsfValC{
        }
    }
    namespace PorteDfer{    ///<Digital Filter Enable Register
        using Addr = Register::Address<0x4004a0c0,0x00000000,0,unsigned>;
        ///Digital Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dfe{}; 
        namespace DfeValC{
        }
    }
    namespace PorteDfcr{    ///<Digital Filter Clock Register
        using Addr = Register::Address<0x4004a0c4,0xfffffffe,0,unsigned>;
        ///Clock Source
        enum class CsVal {
            v0=0x00000000,     ///<Digital filters are clocked by the bus clock.
            v1=0x00000001,     ///<Digital filters are clocked by the 1 kHz LPO clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CsVal> cs{}; 
        namespace CsValC{
            constexpr Register::FieldValue<decltype(cs),CsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cs),CsVal::v1> v1{};
        }
    }
    namespace PorteDfwr{    ///<Digital Filter Width Register
        using Addr = Register::Address<0x4004a0c8,0xffffffe0,0,unsigned>;
        ///Filter Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> filt{}; 
        namespace FiltValC{
        }
    }
}
