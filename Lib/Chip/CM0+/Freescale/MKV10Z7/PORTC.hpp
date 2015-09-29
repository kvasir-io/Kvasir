#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortcPcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b000,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b004,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b008,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b00c,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b010,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b014,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b018,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b01c,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b020,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b024,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b028,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b02c,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b030,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b034,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b038,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b03c,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b040,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b044,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b048,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b04c,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b050,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b054,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b058,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b05c,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b060,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b064,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b068,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b06c,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b070,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b074,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b078,0xfef0f8a8,0,unsigned>;
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
    namespace PortcPcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004b07c,0xfef0f8a8,0,unsigned>;
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
    namespace PortcGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x4004b080,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
    }
    namespace PortcGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x4004b084,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
    }
    namespace PortcIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x4004b0a0,0x00000000,0,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
    }
}
