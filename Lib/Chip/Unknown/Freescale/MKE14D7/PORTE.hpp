#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Pin Control and Interrupts
    namespace PorteGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x40037080,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PorteGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x40037084,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PorteIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x400370a0,0x00000000,0x00000000,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
    }
    namespace PorteDfer{    ///<Digital Filter Enable Register
        using Addr = Register::Address<0x400370c0,0x00000000,0x00000000,unsigned>;
        ///Digital Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dfe{}; 
    }
    namespace PorteDfcr{    ///<Digital Filter Clock Register
        using Addr = Register::Address<0x400370c4,0x00000000,0x00000000,unsigned>;
        ///Clock Source
        enum class CsVal {
            v0=0x00000000,     ///<Digital filters are clocked by the bus clock.
            v1=0x00000001,     ///<Digital filters are clocked by the 1 kHz LPO clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CsVal> cs{}; 
        namespace CsValC{
            constexpr Register::FieldValue<decltype(cs)::Type,CsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cs)::Type,CsVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PorteDfwr{    ///<Digital Filter Width Register
        using Addr = Register::Address<0x400370c8,0x00000000,0x00000000,unsigned>;
        ///Filter Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> filt{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037000,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037004,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037008,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003700c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037010,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037014,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037018,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003701c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037020,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037024,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037028,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003702c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037030,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037034,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037038,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003703c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037040,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037044,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037048,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003704c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037050,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037054,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037058,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003705c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037060,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037064,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037068,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003706c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037070,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037074,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037078,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace PortePcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003707c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
}
