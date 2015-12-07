#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DAC
    namespace Nonecr{    ///<D/A control register
        using Addr = Register::Address<0x40024000,0xff10003f,0,unsigned>;
        ///After the selected settling time after a conversion begins, the voltage on the AOUT pin (with respect to VSS) is VALUE x (V DD/1024).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> value{}; 
        namespace ValueValC{
        }
        ///Settling time
        enum class BiasVal {
            fast=0x00000000,     ///<The settling time of the DAC is 1 us max, and the maximum current is 700 uA. This allows a maximum update rate of 1 MHz.
            slow=0x00000001,     ///<The settling time of the DAC is 2.5 us and the maximum current is 350 uA. This allows a maximum update rate of 400 kHz.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,BiasVal> bias{}; 
        namespace BiasValC{
            constexpr Register::FieldValue<decltype(bias),BiasVal::fast> fast{};
            constexpr Register::FieldValue<decltype(bias),BiasVal::slow> slow{};
        }
        ///The value written to this field determines whether conversion begins immediately after this register is written, or whether conversion is delayed until a selected event occurs.
        enum class TrigVal {
            immediate=0x00000000,     ///<Conversion begins when this register is written, and AOUT begins to change to the new voltage immediately. For all other values in this field, AOUT remains at its previous voltage until the selected event has occurred.
            complevelout=0x00000001,     ///<Conversion is triggered by the selected edge(s) on the analog comparator (level) output
            atrg0edge=0x00000002,     ///<Conversion is triggered by the selected edge(s) on ATRG0.
            atrg1edge=0x00000003,     ///<Conversion is triggered by the selected edge(s) on ATRG1.
            ct32b1Mat0edge=0x00000004,     ///<Conversion is triggered by the selected edge(s) on CT32B1_MAT0 [2].
            ct32b1Mat1edge=0x00000005,     ///<Conversion is triggered by the selected edge(s) on CT32B1_MAT1[2].
            ct16b1Mat0edge=0x00000006,     ///<Conversion is triggered by the selected edge(s) on CT16B1_MAT0[2].
            ct16b1Mat1edge=0x00000007,     ///<Conversion is triggered by the selected edge(s) on CT16B1_MAT1[2].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::immediate> immediate{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::complevelout> complevelout{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::atrg0edge> atrg0edge{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::atrg1edge> atrg1edge{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::ct32b1Mat0edge> ct32b1Mat0edge{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::ct32b1Mat1edge> ct32b1Mat1edge{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::ct16b1Mat0edge> ct16b1Mat0edge{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::ct16b1Mat1edge> ct16b1Mat1edge{};
        }
        ///For non-zero values of TRIG, this field selects when the conversion is triggered:
        enum class EdgeselVal {
            falling=0x00000000,     ///<Falling edges
            risings=0x00000001,     ///<Rising edges
            dualedge=0x00000002,     ///<Both edges
            dualedge=0x00000003,     ///<Both edges
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,EdgeselVal> edgesel{}; 
        namespace EdgeselValC{
            constexpr Register::FieldValue<decltype(edgesel),EdgeselVal::falling> falling{};
            constexpr Register::FieldValue<decltype(edgesel),EdgeselVal::risings> risings{};
            constexpr Register::FieldValue<decltype(edgesel),EdgeselVal::dualedge> dualedge{};
            constexpr Register::FieldValue<decltype(edgesel),EdgeselVal::dualedge> dualedge{};
        }
        ///If the TRIG field (above) is non-zero, this bit is set when a conversion is triggered, and is cleared by any write to this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> trigerd{}; 
        namespace TrigerdValC{
        }
    }
}
