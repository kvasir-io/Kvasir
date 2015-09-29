#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortePcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d000,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d004,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d008,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d00c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d010,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d014,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d018,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d01c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d020,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d024,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d028,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d02c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d030,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d034,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d038,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d03c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d040,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d044,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d048,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d04c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d050,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d054,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d058,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d05c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d060,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d064,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d068,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d06c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d070,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d074,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d078,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004d07c,0xfef0f8a8,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Interrupt Configuration
        enum class irqcVal {
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
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic 1 is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PorteGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x4004d080,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
    }
    namespace PorteGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x4004d084,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
    }
    namespace PorteIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x4004d0a0,0x00000000,0,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
    }
}
