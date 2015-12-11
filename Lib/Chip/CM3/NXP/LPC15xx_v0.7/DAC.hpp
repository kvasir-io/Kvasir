#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//12-bit DAC Modification  
    namespace Noneval{    ///<D/A Converter Value Register. This register contains the digital value to be converted to analog.
        using Addr = Register::Address<0x40004000,0xffff000f,0,unsigned>;
        ///The voltage on the DAC_OUT pin (with respect to VSSA) is VALUE  x ((VREFP - V REFN)/4096) + VREFN.  This voltage will be stable the selected settling time (specified by the BIAS field in the DAC Control Register) after this field is modified.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonectrl{    ///<DAC Control register. This register contains bits to configure DAC operation and the interrupt/dma request flag.
        using Addr = Register::Address<0x40004004,0xffffe000,0,unsigned>;
        ///Interrupt/DMA request flag. This bit is read-only. 0 = This bit is cleared upon any write to the DACVAL register. 1 = This bit is set by hardware only if a hardware trigger has been selected as follows: - If the internal timer is selected, this bit will be set when the timer times-out.  - If an external trigger input is selected, this bit will be set when a transition of the specified polarity is detected on the selected input.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intDmaFlag{}; 
        ///Hardware Trigger Source: If anyof these hardware trigger sources are selected, an interrupt/dma request will be generated when the specified trigger occurs. In addition, if double-buffering is enabled (the DBLBUF_ENA' bit is set), the DACVAL register will be loaded from the pre-buffer at the same time.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> trigSrc{}; 
        ///Specifies the polarity of the selected external trigger input.  Does not apply if the TRIG_SRC field is set to 0.
        enum class PolarityVal {
            rising=0x00000000,     ///<Rising. A trigger will be asserted when a RISING edge is detected on the selected external trigger input.
            falling=0x00000001,     ///<Falling. A trigger will be asserted when a FALLING edge is detected on the selected external trigger input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::rising> rising{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::falling> falling{};
        }
        ///Permits bypassing of one synchronization flip-flop, if not required. Does not apply if the TRIG_SRC field is set to 0.
        enum class SyncbypassVal {
            synchronize=0x00000000,     ///<Synchronize. The selected trigger input will be synchronized to the system clock prior to edge-detection.
            notSynchronize=0x00000001,     ///<Not synchronize. The selected trigger input will not be synchronized to the system clock prior to edge-detection. This will save one clock of latency.   This bit should only be set f the selected hardware input trigger is from a source that is guaranteeed to already be synchronous to the system clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SyncbypassVal> syncBypass{}; 
        namespace SyncbypassValC{
            constexpr Register::FieldValue<decltype(syncBypass)::Type,SyncbypassVal::synchronize> synchronize{};
            constexpr Register::FieldValue<decltype(syncBypass)::Type,SyncbypassVal::notSynchronize> notSynchronize{};
        }
        ///Timer Enable
        enum class TimerenaVal {
            disabled=0x00000000,     ///<Disabled. The internal timer is disabled. If the TRIG_SEL field is also set to 000 then hardware triggering is disabled.
            enabled=0x00000001,     ///<Enabled. The internal timer is enabled and counting.  Note: This bit should only be set after a valid count value has been programmed into the DACCNTVAL register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TimerenaVal> timerEna{}; 
        namespace TimerenaValC{
            constexpr Register::FieldValue<decltype(timerEna)::Type,TimerenaVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(timerEna)::Type,TimerenaVal::enabled> enabled{};
        }
        ///Double-Buffer Enable.
        enum class DblbufenaVal {
            disabled=0x00000000,     ///<Disabled. Double-buffering of the DACVAL register is disabled. Software writes to the DACVAL address will directly modify the DAC data presented to the D/A converter. Hardware trigger events, if selected, will not affect the DACVAL contents.
            enabled=0x00000001,     ///<Enabled. The double-buffering feature in the DACVAL register is enabled. Writes to the DACVAL register are written to a pre-buffer and then transferred to the DACVAL when the specified hardware trigger occurs.  Setting this bit will have no effect if hardware triggering is disabled. Double-buffering is of no value under this condition.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DblbufenaVal> dblbufEna{}; 
        namespace DblbufenaValC{
            constexpr Register::FieldValue<decltype(dblbufEna)::Type,DblbufenaVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dblbufEna)::Type,DblbufenaVal::enabled> enabled{};
        }
        ///Shutoff Enable
        enum class ShutoffenaVal {
            disabled=0x00000000,     ///<Disabled. The hardware DAC-shutoff feature is disabled.
            enabled=0x00000001,     ///<Enabled. The hardware DAC-shutoff feature is enabled. Whenever the DAC_SHUTOFF (port pin) input is high, the DAC output voltage will be forced to zero. The DAC output will return to the value specifed in the DACVAL register once the input pin returns to the low state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ShutoffenaVal> shutoffEna{}; 
        namespace ShutoffenaValC{
            constexpr Register::FieldValue<decltype(shutoffEna)::Type,ShutoffenaVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(shutoffEna)::Type,ShutoffenaVal::enabled> enabled{};
        }
        ///Shutoff Flag. This is a read-only bit. Reflects the state of the DAC_SHUTOFF input if the Shutoff feature is enabled. 0 = DAC_SHUTOFF (port pin) input is low. DAC is outputting the voltage specified in the DAC VAL register. 1 = DAC_SHUTOFF (port pin) input is high. The DAC output is forced to zero. This bit serves as a flag only, If a processor interrupt is desired when a DAC shutoff condition occurrs, that can be accomplished by enabling the port pin selected as the DAC_SHUTOFF pin to directly generate a port interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> shutoffFlag{}; 
        ///These bits permit trading-off longer DAC settling times to achieve reduced power consumption. The default setting provides maximum speed but also maximum power.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> bias{}; 
    }
    namespace Nonecntval{    ///<DAC Counter Value register. This register contains the reload value for the internal DAC DMA/Interrupt timer.
        using Addr = Register::Address<0x40004008,0xffff0000,0,unsigned>;
        ///16-bit reload value for the internal DAC interrupt/DMA timer. The timer will overflow at the fixed rate of the system clock divided by CNTVAL+1.  Upon each overflow an interrupt/dma request will be generated and the DAC VAL register contents will be updated if double-buffering is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntval{}; 
    }
}
