#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortePcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d000,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr0::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr0::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr0::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr0::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr0::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr0::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr0::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr0::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr0::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr0::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            disabled=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            spi1Miso=0x00000002,     ///<Alternative 2 (chip-specific).
            lpuart1Tx=0x00000003,     ///<Alternative 3 (chip-specific).
            rtcClkOut=0x00000004,     ///<Alternative 4 (chip-specific).
            cmp0Out=0x00000005,     ///<Alternative 5 (chip-specific).
            i2c1Sda=0x00000006,     ///<Alternative 6 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortePcr0::mux)::Type,MuxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(PortePcr0::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortePcr0::mux)::Type,MuxVal::spi1Miso> spi1Miso{};
            constexpr Register::FieldValue<decltype(PortePcr0::mux)::Type,MuxVal::lpuart1Tx> lpuart1Tx{};
            constexpr Register::FieldValue<decltype(PortePcr0::mux)::Type,MuxVal::rtcClkOut> rtcClkOut{};
            constexpr Register::FieldValue<decltype(PortePcr0::mux)::Type,MuxVal::cmp0Out> cmp0Out{};
            constexpr Register::FieldValue<decltype(PortePcr0::mux)::Type,MuxVal::i2c1Sda> i2c1Sda{};
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
            constexpr Register::FieldValue<decltype(PortePcr0::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr0::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr0::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr0::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr0::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr0::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr0::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr0::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr0::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr0::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr0::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d004,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr1::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr1::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr1::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr1::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr1::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr1::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr1::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr1::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr1::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr1::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr1::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr1::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr1::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr1::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr1::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr1::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr1::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr1::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr1::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr1::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr1::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr1::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr1::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr1::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr1::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr1::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr1::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr1::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr1::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d008,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr2::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr2::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr2::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr2::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr2::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr2::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr2::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr2::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr2::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr2::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr2::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr2::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr2::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr2::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr2::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr2::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr2::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr2::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr2::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr2::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr2::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr2::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr2::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr2::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr2::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr2::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr2::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr2::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr2::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d00c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr3::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr3::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr3::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr3::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr3::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr3::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr3::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr3::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr3::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr3::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr3::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr3::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr3::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr3::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr3::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr3::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr3::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr3::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr3::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr3::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr3::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr3::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr3::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr3::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr3::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr3::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr3::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr3::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr3::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d010,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr4::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr4::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr4::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr4::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr4::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr4::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr4::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr4::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr4::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr4::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr4::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr4::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr4::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr4::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr4::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr4::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr4::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr4::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr4::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr4::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr4::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr4::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr4::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr4::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr4::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr4::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr4::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr4::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr4::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d014,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr5::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr5::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr5::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr5::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr5::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr5::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr5::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr5::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr5::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr5::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr5::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr5::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr5::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr5::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr5::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr5::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr5::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr5::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr5::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr5::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr5::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr5::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr5::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr5::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr5::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr5::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr5::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr5::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr5::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d018,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr6::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr6::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr6::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr6::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr6::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr6::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr6::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr6::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr6::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr6::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr6::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr6::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr6::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr6::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr6::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr6::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr6::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr6::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr6::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr6::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr6::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr6::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr6::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr6::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr6::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr6::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr6::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr6::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr6::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d01c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr7::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr7::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr7::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr7::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr7::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr7::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr7::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr7::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr7::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr7::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr7::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr7::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr7::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr7::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr7::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr7::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr7::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr7::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr7::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr7::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr7::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr7::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr7::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr7::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr7::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr7::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr7::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr7::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr7::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d020,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr8::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr8::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr8::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr8::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr8::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr8::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr8::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr8::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr8::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr8::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr8::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr8::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr8::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr8::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr8::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr8::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr8::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr8::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr8::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr8::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr8::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr8::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr8::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr8::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr8::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr8::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr8::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr8::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr8::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d024,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr9::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr9::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr9::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr9::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr9::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr9::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr9::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr9::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr9::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr9::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr9::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr9::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr9::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr9::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr9::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr9::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr9::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr9::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr9::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr9::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr9::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr9::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr9::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr9::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr9::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr9::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr9::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr9::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr9::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d028,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr10::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr10::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr10::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr10::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr10::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr10::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr10::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr10::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr10::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr10::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr10::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr10::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr10::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr10::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr10::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr10::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr10::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr10::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr10::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr10::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr10::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr10::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr10::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr10::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr10::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr10::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr10::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr10::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr10::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d02c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr11::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr11::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr11::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr11::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr11::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr11::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr11::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr11::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr11::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr11::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr11::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr11::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr11::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr11::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr11::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr11::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr11::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr11::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr11::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr11::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr11::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr11::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr11::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr11::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr11::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr11::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr11::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr11::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr11::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d030,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr12::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr12::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr12::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr12::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr12::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr12::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr12::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr12::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr12::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr12::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr12::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr12::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr12::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr12::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr12::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr12::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr12::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr12::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr12::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr12::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr12::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr12::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr12::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr12::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr12::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr12::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr12::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr12::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr12::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d034,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr13::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr13::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr13::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr13::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr13::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr13::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr13::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr13::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr13::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr13::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr13::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr13::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr13::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr13::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr13::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr13::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr13::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr13::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr13::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr13::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr13::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr13::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr13::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr13::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr13::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr13::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr13::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr13::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr13::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d038,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr14::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr14::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr14::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr14::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr14::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr14::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr14::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr14::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr14::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr14::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr14::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr14::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr14::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr14::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr14::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr14::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr14::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr14::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr14::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr14::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr14::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr14::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr14::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr14::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr14::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr14::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr14::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr14::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr14::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d03c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr15::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr15::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr15::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr15::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr15::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr15::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr15::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr15::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr15::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr15::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr15::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr15::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr15::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr15::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr15::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr15::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr15::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr15::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr15::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr15::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr15::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr15::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr15::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr15::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr15::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr15::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr15::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr15::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr15::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d040,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr16::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr16::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr16::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr16::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr16::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr16::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr16::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr16::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr16::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr16::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr16::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr16::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr16::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr16::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr16::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr16::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr16::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr16::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr16::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr16::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr16::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr16::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr16::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr16::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr16::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr16::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr16::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr16::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr16::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d044,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr17::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr17::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr17::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr17::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr17::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr17::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr17::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr17::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr17::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr17::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr17::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr17::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr17::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr17::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr17::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr17::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr17::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr17::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr17::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr17::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr17::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr17::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr17::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr17::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr17::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr17::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr17::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr17::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr17::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d048,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr18::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr18::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr18::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr18::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr18::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr18::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr18::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr18::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr18::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr18::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr18::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr18::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr18::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr18::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr18::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr18::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr18::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr18::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr18::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr18::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr18::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr18::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr18::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr18::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr18::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr18::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr18::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr18::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr18::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d04c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr19::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr19::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr19::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr19::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr19::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr19::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr19::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr19::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr19::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr19::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr19::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr19::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr19::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr19::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr19::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr19::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr19::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr19::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr19::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr19::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr19::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr19::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr19::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr19::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr19::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr19::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr19::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr19::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr19::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d050,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr20::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr20::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr20::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr20::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr20::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr20::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr20::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr20::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr20::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr20::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr20::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr20::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr20::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr20::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr20::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr20::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr20::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr20::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr20::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr20::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr20::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr20::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr20::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr20::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr20::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr20::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr20::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr20::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr20::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d054,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr21::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr21::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr21::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr21::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr21::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr21::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr21::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr21::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr21::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr21::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr21::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr21::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr21::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr21::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr21::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr21::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr21::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr21::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr21::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr21::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr21::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr21::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr21::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr21::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr21::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr21::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr21::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr21::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr21::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d058,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr22::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr22::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr22::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr22::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr22::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr22::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr22::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr22::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr22::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr22::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr22::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr22::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr22::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr22::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr22::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr22::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr22::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr22::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr22::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr22::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr22::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr22::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr22::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr22::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr22::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr22::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr22::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr22::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr22::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d05c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr23::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr23::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr23::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr23::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr23::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr23::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr23::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr23::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr23::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr23::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr23::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr23::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr23::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr23::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr23::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr23::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr23::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr23::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr23::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr23::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr23::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr23::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr23::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr23::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr23::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr23::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr23::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr23::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr23::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d060,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr24::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr24::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr24::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr24::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr24::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr24::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr24::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr24::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr24::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr24::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr24::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr24::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr24::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr24::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr24::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr24::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr24::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr24::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr24::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr24::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr24::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr24::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr24::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr24::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr24::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr24::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr24::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr24::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr24::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d064,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr25::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr25::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr25::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr25::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr25::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr25::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr25::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr25::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr25::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr25::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr25::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr25::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr25::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr25::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr25::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr25::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr25::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr25::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr25::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr25::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr25::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr25::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr25::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr25::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr25::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr25::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr25::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr25::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr25::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d068,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr26::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr26::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr26::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr26::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr26::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr26::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr26::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr26::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr26::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr26::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr26::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr26::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr26::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr26::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr26::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr26::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr26::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr26::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr26::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr26::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr26::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr26::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr26::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr26::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr26::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr26::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr26::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr26::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr26::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d06c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr27::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr27::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr27::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr27::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr27::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr27::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr27::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr27::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr27::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr27::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr27::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr27::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr27::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr27::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr27::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr27::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr27::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr27::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr27::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr27::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr27::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr27::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr27::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr27::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr27::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr27::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr27::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr27::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr27::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d070,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr28::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr28::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr28::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr28::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr28::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr28::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr28::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr28::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr28::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr28::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr28::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr28::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr28::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr28::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr28::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr28::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr28::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr28::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr28::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr28::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr28::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr28::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr28::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr28::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr28::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr28::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr28::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr28::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr28::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d074,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr29::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr29::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr29::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr29::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr29::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr29::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr29::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr29::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr29::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr29::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr29::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr29::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr29::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr29::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr29::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr29::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr29::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr29::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr29::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr29::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr29::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr29::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr29::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr29::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr29::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr29::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr29::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr29::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr29::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d078,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr30::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr30::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr30::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr30::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr30::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr30::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr30::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr30::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr30::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr30::dse)::Type,DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            dac0OutAdc0Se23Cmp0In4=0x00000000,     ///<Pin disabled (analog).
            gpio=0x00000001,     ///<Alternative 1 (GPIO).
            tpm0ch3=0x00000003,     ///<Alternative 3 (chip-specific).
            tpmClkIn1=0x00000004,     ///<Alternative 4 (chip-specific).
            lpuart1Tx=0x00000005,     ///<Alternative 5 (chip-specific).
            lptmr0Alt1=0x00000006,     ///<Alternative 6 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(PortePcr30::mux)::Type,MuxVal::dac0OutAdc0Se23Cmp0In4> dac0OutAdc0Se23Cmp0In4{};
            constexpr Register::FieldValue<decltype(PortePcr30::mux)::Type,MuxVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(PortePcr30::mux)::Type,MuxVal::tpm0ch3> tpm0ch3{};
            constexpr Register::FieldValue<decltype(PortePcr30::mux)::Type,MuxVal::tpmClkIn1> tpmClkIn1{};
            constexpr Register::FieldValue<decltype(PortePcr30::mux)::Type,MuxVal::lpuart1Tx> lpuart1Tx{};
            constexpr Register::FieldValue<decltype(PortePcr30::mux)::Type,MuxVal::lptmr0Alt1> lptmr0Alt1{};
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
            constexpr Register::FieldValue<decltype(PortePcr30::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr30::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr30::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr30::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr30::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr30::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr30::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr30::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr30::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr30::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr30::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortePcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d07c,0xfef0f8a8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(PortePcr31::ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr31::ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(PortePcr31::pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr31::pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(PortePcr31::sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr31::sre)::Type,SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(PortePcr31::pfe)::Type,PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr31::pfe)::Type,PfeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(PortePcr31::dse)::Type,DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr31::dse)::Type,DseVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(PortePcr31::mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(PortePcr31::mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(PortePcr31::mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(PortePcr31::mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(PortePcr31::mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(PortePcr31::mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(PortePcr31::mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(PortePcr31::mux)::Type,MuxVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(PortePcr31::irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(PortePcr31::irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(PortePcr31::irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(PortePcr31::irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(PortePcr31::irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(PortePcr31::irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(PortePcr31::irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(PortePcr31::irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(PortePcr31::irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(PortePcr31::isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(PortePcr31::isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PorteGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x4004d080,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PorteGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x4004d084,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PorteIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x4004d0a0,0x00000000,0x00000000,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
    }
}
