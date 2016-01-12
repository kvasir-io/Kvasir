#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortcPcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b000,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr0::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr0::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr0::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr0::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr0::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr0::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr0::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr0::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr0::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr0::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr0::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr0::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr0::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr0::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr0::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr0::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr0::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr0::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr0::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr0::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr0::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr0::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr0::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr0::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr0::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr0::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr0::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr0::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr0::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b004,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr1::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr1::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr1::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr1::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr1::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr1::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr1::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr1::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr1::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr1::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            adc0Se15=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            i2c1Scl=0x00000002,     ///<Alternative 2 (chip-specific).
            tpm0ch0=0x00000004,     ///<Alternative 4 (chip-specific).
            i2s0Txdo=0x00000006,     ///<Alternative 6 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortcPcr1::mux)::Type,MuxVal::adc0Se15> adc0Se15{};
            constexpr Register::FieldValue<decltype(PortcPcr1::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortcPcr1::mux)::Type,MuxVal::i2c1Scl> i2c1Scl{};
            constexpr Register::FieldValue<decltype(PortcPcr1::mux)::Type,MuxVal::tpm0ch0> tpm0ch0{};
            constexpr Register::FieldValue<decltype(PortcPcr1::mux)::Type,MuxVal::i2s0Txdo> i2s0Txdo{};
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
            constexpr Register::FieldValue<decltype(PortcPcr1::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr1::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr1::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr1::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr1::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr1::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr1::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr1::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr1::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr1::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr1::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b008,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr2::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr2::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr2::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr2::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr2::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr2::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr2::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr2::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr2::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr2::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr2::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr2::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr2::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr2::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr2::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr2::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr2::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr2::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr2::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr2::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr2::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr2::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr2::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr2::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr2::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr2::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr2::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr2::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr2::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b00c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr3::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr3::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr3::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr3::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr3::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr3::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr3::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr3::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr3::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr3::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr3::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr3::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr3::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr3::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr3::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr3::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr3::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr3::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr3::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr3::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr3::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr3::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr3::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr3::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr3::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr3::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr3::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr3::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr3::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b010,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr4::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr4::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr4::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr4::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr4::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr4::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr4::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr4::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr4::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr4::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr4::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr4::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr4::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr4::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr4::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr4::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr4::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr4::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr4::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr4::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr4::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr4::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr4::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr4::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr4::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr4::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr4::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr4::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr4::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b014,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr5::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr5::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr5::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr5::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr5::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr5::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr5::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr5::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr5::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr5::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr5::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr5::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr5::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr5::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr5::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr5::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr5::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr5::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr5::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr5::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr5::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr5::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr5::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr5::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr5::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr5::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr5::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr5::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr5::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b018,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr6::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr6::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr6::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr6::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr6::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr6::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr6::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr6::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr6::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr6::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr6::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr6::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr6::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr6::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr6::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr6::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr6::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr6::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr6::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr6::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr6::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr6::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr6::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr6::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr6::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr6::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr6::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr6::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr6::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b01c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr7::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr7::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr7::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr7::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr7::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr7::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr7::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr7::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr7::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr7::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr7::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr7::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr7::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr7::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr7::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr7::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr7::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr7::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr7::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr7::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr7::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr7::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr7::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr7::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr7::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr7::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr7::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr7::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr7::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b020,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr8::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr8::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr8::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr8::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr8::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr8::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr8::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr8::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr8::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr8::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr8::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr8::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr8::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr8::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr8::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr8::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr8::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr8::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr8::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr8::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr8::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr8::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr8::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr8::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr8::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr8::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr8::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr8::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr8::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b024,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr9::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr9::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr9::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr9::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr9::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr9::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr9::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr9::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr9::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr9::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr9::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr9::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr9::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr9::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr9::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr9::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr9::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr9::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr9::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr9::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr9::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr9::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr9::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr9::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr9::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr9::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr9::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr9::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr9::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b028,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr10::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr10::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr10::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr10::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr10::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr10::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr10::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr10::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr10::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr10::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr10::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr10::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr10::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr10::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr10::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr10::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr10::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr10::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr10::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr10::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr10::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr10::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr10::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr10::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr10::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr10::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr10::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr10::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr10::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b02c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr11::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr11::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr11::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr11::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr11::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr11::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr11::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr11::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr11::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr11::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr11::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr11::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr11::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr11::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr11::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr11::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr11::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr11::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr11::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr11::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr11::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr11::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr11::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr11::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr11::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr11::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr11::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr11::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr11::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b030,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr12::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr12::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr12::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr12::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr12::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr12::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr12::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr12::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr12::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr12::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr12::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr12::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr12::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr12::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr12::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr12::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr12::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr12::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr12::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr12::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr12::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr12::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr12::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr12::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr12::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr12::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr12::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr12::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr12::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b034,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr13::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr13::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr13::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr13::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr13::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr13::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr13::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr13::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr13::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr13::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr13::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr13::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr13::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr13::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr13::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr13::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr13::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr13::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr13::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr13::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr13::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr13::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr13::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr13::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr13::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr13::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr13::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr13::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr13::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b038,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr14::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr14::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr14::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr14::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr14::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr14::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr14::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr14::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr14::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr14::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr14::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr14::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr14::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr14::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr14::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr14::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr14::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr14::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr14::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr14::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr14::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr14::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr14::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr14::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr14::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr14::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr14::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr14::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr14::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b03c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr15::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr15::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr15::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr15::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr15::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr15::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr15::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr15::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr15::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr15::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr15::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr15::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr15::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr15::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr15::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr15::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr15::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr15::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr15::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr15::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr15::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr15::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr15::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr15::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr15::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr15::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr15::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr15::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr15::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b040,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr16::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr16::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr16::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr16::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr16::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr16::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr16::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr16::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr16::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr16::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr16::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr16::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr16::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr16::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr16::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr16::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr16::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr16::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr16::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr16::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr16::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr16::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr16::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr16::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr16::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr16::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr16::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr16::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr16::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b044,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr17::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr17::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr17::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr17::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr17::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr17::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr17::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr17::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr17::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr17::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr17::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr17::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr17::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr17::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr17::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr17::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr17::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr17::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr17::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr17::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr17::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr17::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr17::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr17::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr17::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr17::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr17::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr17::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr17::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b048,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr18::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr18::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr18::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr18::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr18::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr18::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr18::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr18::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr18::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr18::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr18::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr18::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr18::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr18::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr18::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr18::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr18::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr18::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr18::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr18::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr18::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr18::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr18::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr18::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr18::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr18::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr18::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr18::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr18::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b04c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr19::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr19::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr19::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr19::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr19::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr19::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr19::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr19::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr19::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr19::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr19::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr19::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr19::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr19::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr19::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr19::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr19::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr19::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr19::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr19::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr19::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr19::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr19::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr19::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr19::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr19::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr19::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr19::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr19::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b050,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr20::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr20::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr20::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr20::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr20::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr20::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr20::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr20::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr20::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr20::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr20::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr20::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr20::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr20::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr20::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr20::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr20::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr20::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr20::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr20::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr20::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr20::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr20::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr20::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr20::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr20::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr20::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr20::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr20::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b054,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr21::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr21::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr21::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr21::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr21::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr21::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr21::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr21::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr21::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr21::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr21::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr21::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr21::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr21::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr21::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr21::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr21::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr21::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr21::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr21::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr21::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr21::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr21::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr21::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr21::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr21::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr21::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr21::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr21::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b058,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr22::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr22::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr22::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr22::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr22::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr22::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr22::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr22::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr22::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr22::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr22::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr22::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr22::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr22::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr22::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr22::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr22::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr22::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr22::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr22::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr22::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr22::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr22::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr22::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr22::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr22::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr22::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr22::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr22::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b05c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr23::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr23::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr23::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr23::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr23::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr23::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr23::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr23::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr23::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr23::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr23::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr23::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr23::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr23::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr23::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr23::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr23::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr23::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr23::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr23::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr23::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr23::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr23::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr23::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr23::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr23::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr23::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr23::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr23::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b060,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr24::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr24::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr24::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr24::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr24::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr24::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr24::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr24::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr24::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr24::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr24::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr24::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr24::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr24::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr24::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr24::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr24::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr24::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr24::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr24::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr24::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr24::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr24::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr24::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr24::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr24::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr24::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr24::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr24::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b064,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr25::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr25::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr25::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr25::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr25::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr25::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr25::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr25::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr25::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr25::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr25::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr25::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr25::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr25::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr25::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr25::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr25::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr25::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr25::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr25::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr25::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr25::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr25::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr25::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr25::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr25::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr25::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr25::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr25::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b068,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr26::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr26::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr26::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr26::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr26::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr26::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr26::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr26::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr26::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr26::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr26::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr26::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr26::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr26::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr26::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr26::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr26::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr26::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr26::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr26::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr26::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr26::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr26::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr26::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr26::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr26::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr26::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr26::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr26::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b06c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr27::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr27::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr27::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr27::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr27::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr27::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr27::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr27::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr27::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr27::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr27::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr27::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr27::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr27::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr27::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr27::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr27::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr27::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr27::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr27::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr27::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr27::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr27::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr27::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr27::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr27::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr27::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr27::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr27::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b070,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr28::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr28::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr28::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr28::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr28::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr28::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr28::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr28::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr28::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr28::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr28::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr28::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr28::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr28::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr28::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr28::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr28::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr28::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr28::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr28::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr28::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr28::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr28::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr28::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr28::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr28::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr28::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr28::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr28::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b074,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr29::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr29::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr29::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr29::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr29::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr29::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr29::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr29::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr29::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr29::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr29::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr29::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr29::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr29::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr29::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr29::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr29::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr29::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr29::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr29::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr29::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr29::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr29::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr29::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr29::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr29::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr29::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr29::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr29::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b078,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr30::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr30::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr30::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr30::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr30::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr30::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr30::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr30::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr30::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr30::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr30::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr30::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr30::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr30::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr30::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr30::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr30::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr30::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr30::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr30::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr30::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr30::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr30::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr30::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr30::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr30::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr30::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr30::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr30::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcPcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b07c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortcPcr31::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr31::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortcPcr31::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr31::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortcPcr31::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr31::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortcPcr31::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr31::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortcPcr31::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr31::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortcPcr31::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortcPcr31::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortcPcr31::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortcPcr31::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortcPcr31::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortcPcr31::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortcPcr31::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortcPcr31::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortcPcr31::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortcPcr31::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortcPcr31::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortcPcr31::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortcPcr31::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortcPcr31::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortcPcr31::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortcPcr31::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortcPcr31::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortcPcr31::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortcPcr31::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortcGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x4004b080,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PortcGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x4004b084,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PortcIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x4004b0a0,0x00000000,0x00000000,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
    }
}
