#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortbPcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a000,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr0::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr0::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr0::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr0::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr0::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr0::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr0::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr0::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr0::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr0::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            adc0Se8=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            i2c0Scl=0x00000002,     ///<Alternative 2 (chip-specific).
            tpm1ch0=0x00000003,     ///<Alternative 3 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortbPcr0::mux)::Type,MuxVal::adc0Se8> adc0Se8{};
            constexpr Register::FieldValue<decltype(PortbPcr0::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortbPcr0::mux)::Type,MuxVal::i2c0Scl> i2c0Scl{};
            constexpr Register::FieldValue<decltype(PortbPcr0::mux)::Type,MuxVal::tpm1ch0> tpm1ch0{};
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
            constexpr Register::FieldValue<decltype(PortbPcr0::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr0::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr0::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr0::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr0::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr0::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr0::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr0::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr0::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr0::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr0::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a004,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr1::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr1::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr1::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr1::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr1::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr1::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr1::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr1::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr1::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr1::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            adc0Se9=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            i2c0Sda=0x00000002,     ///<Alternative 2 (chip-specific).
            tpm1ch1=0x00000003,     ///<Alternative 3 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortbPcr1::mux)::Type,MuxVal::adc0Se9> adc0Se9{};
            constexpr Register::FieldValue<decltype(PortbPcr1::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortbPcr1::mux)::Type,MuxVal::i2c0Sda> i2c0Sda{};
            constexpr Register::FieldValue<decltype(PortbPcr1::mux)::Type,MuxVal::tpm1ch1> tpm1ch1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr1::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr1::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr1::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr1::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr1::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr1::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr1::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr1::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr1::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr1::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr1::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a008,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr2::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr2::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr2::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr2::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr2::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr2::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr2::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr2::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr2::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr2::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr2::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr2::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr2::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr2::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr2::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr2::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr2::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr2::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr2::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr2::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr2::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr2::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr2::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr2::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr2::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr2::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr2::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr2::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr2::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a00c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr3::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr3::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr3::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr3::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr3::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr3::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr3::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr3::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr3::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr3::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr3::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr3::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr3::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr3::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr3::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr3::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr3::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr3::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr3::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr3::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr3::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr3::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr3::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr3::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr3::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr3::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr3::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr3::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr3::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a010,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr4::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr4::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr4::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr4::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr4::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr4::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr4::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr4::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr4::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr4::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr4::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr4::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr4::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr4::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr4::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr4::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr4::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr4::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr4::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr4::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr4::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr4::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr4::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr4::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr4::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr4::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr4::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr4::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr4::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a014,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr5::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr5::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr5::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr5::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr5::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr5::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr5::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr5::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr5::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr5::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr5::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr5::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr5::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr5::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr5::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr5::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr5::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr5::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr5::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr5::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr5::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr5::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr5::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr5::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr5::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr5::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr5::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr5::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr5::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a018,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr6::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr6::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr6::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr6::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr6::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr6::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr6::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr6::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr6::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr6::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr6::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr6::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr6::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr6::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr6::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr6::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr6::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr6::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr6::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr6::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr6::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr6::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr6::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr6::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr6::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr6::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr6::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr6::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr6::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a01c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr7::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr7::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr7::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr7::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr7::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr7::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr7::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr7::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr7::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr7::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr7::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr7::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr7::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr7::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr7::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr7::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr7::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr7::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr7::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr7::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr7::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr7::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr7::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr7::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr7::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr7::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr7::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr7::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr7::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a020,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr8::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr8::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr8::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr8::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr8::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr8::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr8::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr8::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr8::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr8::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr8::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr8::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr8::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr8::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr8::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr8::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr8::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr8::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr8::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr8::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr8::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr8::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr8::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr8::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr8::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr8::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr8::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr8::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr8::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a024,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr9::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr9::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr9::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr9::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr9::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr9::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr9::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr9::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr9::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr9::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr9::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr9::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr9::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr9::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr9::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr9::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr9::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr9::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr9::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr9::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr9::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr9::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr9::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr9::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr9::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr9::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr9::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr9::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr9::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a028,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr10::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr10::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr10::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr10::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr10::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr10::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr10::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr10::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr10::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr10::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr10::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr10::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr10::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr10::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr10::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr10::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr10::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr10::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr10::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr10::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr10::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr10::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr10::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr10::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr10::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr10::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr10::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr10::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr10::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a02c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr11::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr11::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr11::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr11::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr11::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr11::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr11::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr11::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr11::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr11::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr11::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr11::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr11::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr11::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr11::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr11::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr11::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr11::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr11::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr11::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr11::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr11::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr11::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr11::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr11::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr11::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr11::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr11::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr11::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a030,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr12::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr12::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr12::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr12::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr12::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr12::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr12::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr12::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr12::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr12::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr12::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr12::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr12::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr12::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr12::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr12::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr12::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr12::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr12::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr12::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr12::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr12::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr12::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr12::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr12::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr12::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr12::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr12::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr12::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a034,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr13::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr13::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr13::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr13::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr13::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr13::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr13::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr13::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr13::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr13::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr13::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr13::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr13::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr13::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr13::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr13::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr13::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr13::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr13::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr13::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr13::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr13::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr13::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr13::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr13::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr13::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr13::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr13::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr13::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a038,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr14::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr14::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr14::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr14::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr14::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr14::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr14::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr14::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr14::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr14::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr14::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr14::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr14::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr14::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr14::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr14::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr14::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr14::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr14::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr14::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr14::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr14::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr14::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr14::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr14::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr14::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr14::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr14::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr14::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a03c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr15::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr15::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr15::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr15::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr15::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr15::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr15::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr15::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr15::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr15::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr15::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr15::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr15::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr15::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr15::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr15::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr15::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr15::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr15::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr15::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr15::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr15::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr15::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr15::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr15::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr15::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr15::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr15::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr15::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a040,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr16::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr16::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr16::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr16::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr16::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr16::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr16::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr16::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr16::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr16::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr16::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr16::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr16::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr16::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr16::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr16::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr16::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr16::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr16::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr16::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr16::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr16::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr16::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr16::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr16::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr16::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr16::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr16::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr16::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a044,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr17::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr17::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr17::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr17::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr17::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr17::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr17::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr17::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr17::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr17::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr17::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr17::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr17::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr17::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr17::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr17::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr17::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr17::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr17::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr17::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr17::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr17::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr17::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr17::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr17::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr17::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr17::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr17::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr17::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a048,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr18::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr18::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr18::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr18::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr18::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr18::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr18::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr18::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr18::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr18::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            disabled=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            tpm2ch0=0x00000003,     ///<Alternative 3 (chip-specific).
            i2s0TxBclk=0x00000004,     ///<Alternative 4 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortbPcr18::mux)::Type,MuxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(PortbPcr18::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortbPcr18::mux)::Type,MuxVal::tpm2ch0> tpm2ch0{};
            constexpr Register::FieldValue<decltype(PortbPcr18::mux)::Type,MuxVal::i2s0TxBclk> i2s0TxBclk{};
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
            constexpr Register::FieldValue<decltype(PortbPcr18::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr18::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr18::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr18::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr18::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr18::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr18::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr18::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr18::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr18::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr18::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a04c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr19::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr19::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr19::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr19::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr19::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr19::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr19::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr19::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr19::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr19::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr19::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr19::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr19::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr19::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr19::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr19::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr19::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr19::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr19::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr19::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr19::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr19::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr19::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr19::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr19::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr19::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr19::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr19::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr19::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a050,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr20::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr20::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr20::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr20::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr20::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr20::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr20::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr20::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr20::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr20::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr20::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr20::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr20::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr20::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr20::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr20::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr20::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr20::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr20::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr20::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr20::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr20::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr20::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr20::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr20::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr20::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr20::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr20::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr20::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a054,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr21::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr21::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr21::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr21::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr21::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr21::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr21::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr21::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr21::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr21::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr21::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr21::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr21::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr21::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr21::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr21::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr21::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr21::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr21::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr21::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr21::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr21::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr21::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr21::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr21::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr21::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr21::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr21::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr21::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a058,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr22::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr22::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr22::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr22::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr22::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr22::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr22::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr22::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr22::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr22::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr22::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr22::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr22::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr22::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr22::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr22::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr22::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr22::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr22::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr22::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr22::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr22::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr22::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr22::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr22::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr22::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr22::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr22::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr22::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a05c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr23::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr23::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr23::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr23::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr23::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr23::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr23::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr23::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr23::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr23::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr23::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr23::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr23::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr23::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr23::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr23::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr23::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr23::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr23::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr23::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr23::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr23::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr23::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr23::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr23::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr23::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr23::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr23::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr23::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a060,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr24::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr24::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr24::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr24::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr24::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr24::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr24::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr24::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr24::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr24::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr24::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr24::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr24::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr24::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr24::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr24::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr24::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr24::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr24::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr24::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr24::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr24::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr24::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr24::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr24::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr24::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr24::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr24::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr24::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a064,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr25::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr25::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr25::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr25::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr25::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr25::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr25::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr25::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr25::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr25::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr25::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr25::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr25::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr25::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr25::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr25::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr25::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr25::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr25::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr25::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr25::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr25::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr25::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr25::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr25::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr25::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr25::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr25::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr25::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a068,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr26::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr26::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr26::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr26::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr26::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr26::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr26::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr26::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr26::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr26::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr26::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr26::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr26::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr26::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr26::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr26::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr26::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr26::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr26::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr26::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr26::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr26::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr26::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr26::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr26::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr26::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr26::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr26::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr26::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a06c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr27::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr27::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr27::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr27::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr27::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr27::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr27::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr27::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr27::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr27::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr27::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr27::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr27::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr27::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr27::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr27::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr27::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr27::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr27::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr27::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr27::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr27::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr27::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr27::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr27::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr27::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr27::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr27::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr27::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a070,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr28::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr28::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr28::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr28::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr28::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr28::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr28::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr28::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr28::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr28::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr28::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr28::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr28::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr28::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr28::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr28::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr28::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr28::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr28::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr28::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr28::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr28::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr28::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr28::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr28::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr28::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr28::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr28::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr28::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a074,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr29::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr29::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr29::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr29::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr29::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr29::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr29::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr29::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr29::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr29::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr29::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr29::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr29::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr29::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr29::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr29::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr29::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr29::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr29::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr29::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr29::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr29::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr29::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr29::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr29::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr29::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr29::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr29::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr29::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a078,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr30::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr30::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr30::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr30::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr30::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr30::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr30::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr30::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr30::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr30::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr30::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr30::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr30::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr30::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr30::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr30::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr30::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr30::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr30::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr30::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr30::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr30::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr30::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr30::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr30::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr30::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr30::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr30::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr30::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbPcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a07c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortbPcr31::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr31::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortbPcr31::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr31::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortbPcr31::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr31::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortbPcr31::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr31::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortbPcr31::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr31::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortbPcr31::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortbPcr31::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortbPcr31::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortbPcr31::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortbPcr31::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortbPcr31::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortbPcr31::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortbPcr31::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortbPcr31::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortbPcr31::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortbPcr31::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortbPcr31::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortbPcr31::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortbPcr31::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortbPcr31::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortbPcr31::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortbPcr31::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortbPcr31::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortbPcr31::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortbGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x4004a080,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PortbGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x4004a084,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PortbIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x4004a0a0,0x00000000,0x00000000,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
    }
}
