#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortaPcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049000,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr0::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr0::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr0::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr0::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr0::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr0::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr0::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr0::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr0::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr0::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            disabled=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            tpm0ch5=0x00000003,     ///<Alternative 3 (chip-specific).
            swdClk=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortaPcr0::mux)::Type,MuxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(PortaPcr0::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortaPcr0::mux)::Type,MuxVal::tpm0ch5> tpm0ch5{};
            constexpr Register::FieldValue<decltype(PortaPcr0::mux)::Type,MuxVal::swdClk> swdClk{};
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
            constexpr Register::FieldValue<decltype(PortaPcr0::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr0::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr0::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr0::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr0::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr0::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr0::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr0::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr0::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr0::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr0::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049004,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr1::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr1::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr1::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr1::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr1::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr1::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr1::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr1::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr1::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr1::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            disabled=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            lpuart0Rx=0x00000002,     ///<Alternative 2 (chip-specific).
            tpm2ch0=0x00000003,     ///<Alternative 3 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortaPcr1::mux)::Type,MuxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(PortaPcr1::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortaPcr1::mux)::Type,MuxVal::lpuart0Rx> lpuart0Rx{};
            constexpr Register::FieldValue<decltype(PortaPcr1::mux)::Type,MuxVal::tpm2ch0> tpm2ch0{};
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
            constexpr Register::FieldValue<decltype(PortaPcr1::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr1::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr1::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr1::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr1::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr1::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr1::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr1::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr1::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr1::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr1::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049008,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr2::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr2::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr2::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr2::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr2::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr2::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr2::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr2::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr2::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr2::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            disabled=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            lpuart0Tx=0x00000002,     ///<Alternative 2 (chip-specific).
            tpm2ch1=0x00000003,     ///<Alternative 3 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortaPcr2::mux)::Type,MuxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(PortaPcr2::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortaPcr2::mux)::Type,MuxVal::lpuart0Tx> lpuart0Tx{};
            constexpr Register::FieldValue<decltype(PortaPcr2::mux)::Type,MuxVal::tpm2ch1> tpm2ch1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr2::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr2::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr2::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr2::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr2::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr2::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr2::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr2::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr2::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr2::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr2::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004900c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr3::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr3::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr3::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr3::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr3::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr3::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr3::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr3::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr3::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr3::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            disabled=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            i2c1Sda=0x00000002,     ///<Alternative 2 (chip-specific).
            tpm0ch0=0x00000003,     ///<Alternative 3 (chip-specific).
            SwdDio=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortaPcr3::mux)::Type,MuxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(PortaPcr3::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortaPcr3::mux)::Type,MuxVal::i2c1Sda> i2c1Sda{};
            constexpr Register::FieldValue<decltype(PortaPcr3::mux)::Type,MuxVal::tpm0ch0> tpm0ch0{};
            constexpr Register::FieldValue<decltype(PortaPcr3::mux)::Type,MuxVal::SwdDio> SwdDio{};
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
            constexpr Register::FieldValue<decltype(PortaPcr3::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr3::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr3::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr3::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr3::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr3::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr3::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr3::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr3::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr3::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr3::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049010,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr4::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr4::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr4::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr4::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr4::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr4::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr4::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr4::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr4::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr4::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            disabled=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            i2c1Sda=0x00000002,     ///<Alternative 2 (chip-specific).
            tpm0ch1=0x00000003,     ///<Alternative 3 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortaPcr4::mux)::Type,MuxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(PortaPcr4::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortaPcr4::mux)::Type,MuxVal::i2c1Sda> i2c1Sda{};
            constexpr Register::FieldValue<decltype(PortaPcr4::mux)::Type,MuxVal::tpm0ch1> tpm0ch1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr4::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr4::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr4::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr4::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr4::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr4::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr4::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr4::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr4::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr4::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr4::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049014,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr5::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr5::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr5::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr5::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr5::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr5::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr5::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr5::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr5::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr5::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            disabled=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            usbClkIn=0x00000002,     ///<Alternative 2 (chip-specific).
            tpm0ch2=0x00000003,     ///<Alternative 3 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortaPcr5::mux)::Type,MuxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(PortaPcr5::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortaPcr5::mux)::Type,MuxVal::usbClkIn> usbClkIn{};
            constexpr Register::FieldValue<decltype(PortaPcr5::mux)::Type,MuxVal::tpm0ch2> tpm0ch2{};
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
            constexpr Register::FieldValue<decltype(PortaPcr5::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr5::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr5::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr5::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr5::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr5::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr5::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr5::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr5::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr5::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr5::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049018,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr6::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr6::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr6::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr6::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr6::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr6::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr6::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr6::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr6::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr6::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr6::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr6::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr6::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr6::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr6::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr6::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr6::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr6::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr6::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr6::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr6::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr6::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr6::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr6::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr6::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr6::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr6::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr6::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr6::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004901c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr7::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr7::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr7::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr7::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr7::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr7::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr7::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr7::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr7::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr7::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr7::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr7::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr7::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr7::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr7::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr7::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr7::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr7::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr7::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr7::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr7::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr7::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr7::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr7::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr7::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr7::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr7::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr7::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr7::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049020,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr8::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr8::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr8::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr8::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr8::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr8::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr8::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr8::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr8::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr8::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr8::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr8::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr8::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr8::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr8::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr8::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr8::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr8::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr8::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr8::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr8::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr8::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr8::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr8::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr8::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr8::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr8::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr8::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr8::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049024,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr9::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr9::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr9::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr9::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr9::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr9::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr9::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr9::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr9::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr9::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr9::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr9::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr9::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr9::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr9::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr9::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr9::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr9::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr9::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr9::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr9::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr9::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr9::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr9::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr9::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr9::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr9::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr9::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr9::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049028,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr10::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr10::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr10::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr10::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr10::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr10::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr10::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr10::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr10::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr10::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr10::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr10::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr10::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr10::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr10::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr10::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr10::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr10::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr10::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr10::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr10::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr10::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr10::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr10::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr10::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr10::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr10::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr10::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr10::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004902c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr11::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr11::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr11::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr11::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr11::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr11::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr11::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr11::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr11::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr11::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr11::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr11::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr11::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr11::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr11::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr11::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr11::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr11::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr11::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr11::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr11::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr11::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr11::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr11::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr11::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr11::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr11::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr11::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr11::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049030,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr12::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr12::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr12::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr12::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr12::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr12::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr12::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr12::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr12::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr12::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr12::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr12::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr12::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr12::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr12::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr12::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr12::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr12::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr12::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr12::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr12::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr12::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr12::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr12::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr12::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr12::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr12::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr12::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr12::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049034,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr13::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr13::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr13::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr13::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr13::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr13::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr13::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr13::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr13::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr13::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr13::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr13::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr13::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr13::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr13::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr13::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr13::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr13::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr13::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr13::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr13::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr13::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr13::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr13::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr13::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr13::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr13::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr13::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr13::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049038,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr14::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr14::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr14::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr14::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr14::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr14::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr14::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr14::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr14::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr14::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr14::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr14::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr14::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr14::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr14::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr14::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr14::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr14::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr14::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr14::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr14::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr14::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr14::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr14::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr14::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr14::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr14::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr14::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr14::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004903c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr15::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr15::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr15::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr15::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr15::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr15::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr15::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr15::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr15::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr15::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr15::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr15::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr15::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr15::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr15::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr15::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr15::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr15::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr15::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr15::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr15::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr15::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr15::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr15::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr15::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr15::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr15::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr15::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr15::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049040,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr16::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr16::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr16::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr16::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr16::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr16::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr16::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr16::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr16::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr16::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr16::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr16::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr16::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr16::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr16::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr16::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr16::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr16::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr16::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr16::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr16::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr16::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr16::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr16::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr16::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr16::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr16::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr16::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr16::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049044,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr17::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr17::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr17::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr17::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr17::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr17::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr17::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr17::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr17::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr17::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr17::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr17::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr17::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr17::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr17::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr17::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr17::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr17::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr17::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr17::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr17::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr17::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr17::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr17::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr17::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr17::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr17::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr17::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr17::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049048,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr18::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr18::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr18::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr18::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr18::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr18::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr18::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr18::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr18::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr18::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            extal0=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            lpuart1Rx=0x00000003,     ///<Alternative 3 (chip-specific).
            tpmClkIn0=0x00000004,     ///<Alternative 4 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortaPcr18::mux)::Type,MuxVal::extal0> extal0{};
            constexpr Register::FieldValue<decltype(PortaPcr18::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortaPcr18::mux)::Type,MuxVal::lpuart1Rx> lpuart1Rx{};
            constexpr Register::FieldValue<decltype(PortaPcr18::mux)::Type,MuxVal::tpmClkIn0> tpmClkIn0{};
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
            constexpr Register::FieldValue<decltype(PortaPcr18::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr18::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr18::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr18::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr18::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr18::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr18::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr18::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr18::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr18::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr18::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004904c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr19::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr19::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr19::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr19::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr19::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr19::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr19::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr19::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr19::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr19::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            Xtal0=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            lpuart1Tx=0x00000003,     ///<Alternative 3 (chip-specific).
            tpmClkIn1=0x00000004,     ///<Alternative 4 (chip-specific).
            lptmr0Alt1=0x00000006,     ///<Alternative 6 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortaPcr19::mux)::Type,MuxVal::Xtal0> Xtal0{};
            constexpr Register::FieldValue<decltype(PortaPcr19::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortaPcr19::mux)::Type,MuxVal::lpuart1Tx> lpuart1Tx{};
            constexpr Register::FieldValue<decltype(PortaPcr19::mux)::Type,MuxVal::tpmClkIn1> tpmClkIn1{};
            constexpr Register::FieldValue<decltype(PortaPcr19::mux)::Type,MuxVal::lptmr0Alt1> lptmr0Alt1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr19::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr19::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr19::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr19::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr19::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr19::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr19::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr19::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr19::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr19::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr19::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049050,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr20::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr20::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr20::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr20::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr20::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr20::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr20::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr20::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr20::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr20::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            diabled=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            resetB=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortaPcr20::mux)::Type,MuxVal::diabled> diabled{};
            constexpr Register::FieldValue<decltype(PortaPcr20::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortaPcr20::mux)::Type,MuxVal::resetB> resetB{};
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
            constexpr Register::FieldValue<decltype(PortaPcr20::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr20::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr20::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr20::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr20::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr20::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr20::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr20::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr20::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr20::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr20::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049054,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr21::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr21::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr21::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr21::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr21::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr21::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr21::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr21::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr21::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr21::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr21::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr21::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr21::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr21::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr21::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr21::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr21::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr21::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr21::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr21::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr21::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr21::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr21::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr21::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr21::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr21::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr21::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr21::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr21::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049058,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr22::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr22::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr22::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr22::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr22::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr22::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr22::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr22::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr22::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr22::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr22::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr22::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr22::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr22::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr22::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr22::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr22::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr22::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr22::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr22::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr22::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr22::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr22::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr22::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr22::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr22::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr22::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr22::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr22::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004905c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr23::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr23::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr23::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr23::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr23::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr23::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr23::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr23::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr23::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr23::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr23::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr23::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr23::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr23::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr23::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr23::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr23::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr23::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr23::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr23::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr23::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr23::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr23::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr23::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr23::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr23::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr23::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr23::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr23::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049060,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr24::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr24::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr24::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr24::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr24::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr24::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr24::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr24::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr24::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr24::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr24::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr24::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr24::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr24::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr24::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr24::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr24::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr24::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr24::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr24::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr24::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr24::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr24::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr24::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr24::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr24::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr24::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr24::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr24::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049064,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr25::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr25::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr25::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr25::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr25::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr25::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr25::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr25::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr25::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr25::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr25::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr25::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr25::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr25::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr25::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr25::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr25::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr25::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr25::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr25::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr25::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr25::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr25::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr25::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr25::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr25::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr25::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr25::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr25::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049068,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr26::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr26::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr26::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr26::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr26::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr26::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr26::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr26::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr26::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr26::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr26::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr26::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr26::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr26::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr26::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr26::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr26::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr26::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr26::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr26::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr26::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr26::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr26::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr26::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr26::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr26::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr26::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr26::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr26::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004906c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr27::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr27::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr27::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr27::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr27::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr27::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr27::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr27::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr27::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr27::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr27::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr27::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr27::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr27::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr27::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr27::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr27::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr27::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr27::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr27::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr27::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr27::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr27::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr27::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr27::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr27::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr27::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr27::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr27::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049070,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr28::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr28::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr28::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr28::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr28::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr28::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr28::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr28::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr28::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr28::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr28::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr28::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr28::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr28::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr28::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr28::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr28::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr28::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr28::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr28::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr28::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr28::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr28::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr28::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr28::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr28::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr28::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr28::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr28::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049074,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr29::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr29::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr29::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr29::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr29::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr29::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr29::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr29::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr29::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr29::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr29::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr29::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr29::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr29::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr29::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr29::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr29::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr29::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr29::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr29::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr29::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr29::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr29::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr29::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr29::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr29::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr29::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr29::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr29::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x40049078,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr30::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr30::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr30::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr30::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr30::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr30::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr30::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr30::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr30::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr30::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr30::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr30::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr30::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr30::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr30::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr30::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr30::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr30::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr30::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr30::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr30::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr30::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr30::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr30::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr30::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr30::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr30::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr30::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr30::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004907c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortaPcr31::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr31::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortaPcr31::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr31::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortaPcr31::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr31::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortaPcr31::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr31::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortaPcr31::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr31::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortaPcr31::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortaPcr31::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortaPcr31::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortaPcr31::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortaPcr31::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortaPcr31::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortaPcr31::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortaPcr31::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortaPcr31::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortaPcr31::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortaPcr31::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortaPcr31::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortaPcr31::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortaPcr31::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortaPcr31::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortaPcr31::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortaPcr31::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortaPcr31::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortaPcr31::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x40049080,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PortaGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x40049084,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PortaIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x400490a0,0x00000000,0x00000000,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
    }
}
