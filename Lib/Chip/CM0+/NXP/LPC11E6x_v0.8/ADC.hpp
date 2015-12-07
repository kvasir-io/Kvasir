#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//12-bit Analog-to-Digital Converter (ADC)
    namespace Nonectrl{    ///<A/D Control Register. Contains the clock divide value, enable bits for each sequence and the A/D power-down bit.
        using Addr = Register::Address<0x4001c000,0xbffffb00,0,unsigned>;
        ///The system clock is divided by this value plus one to produce the clock for the A/D converter, which should be less than or equal to 50 MHz (up to 100 MHz in 10-bit mode).  Typically, software should program the smallest value in this field that yields this maximum clock rate or slightly less, but in certain cases (such as a high-impedance analog source) a slower clock may be desirable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///Select low-power ADC mode. The analog circuitry is automatically powered-down when no conversions are taking place. When any (hardware or software) triggering event is detected, the analog circuitry is enabled. After the required start-up time, the requested conversion will be launched. Once the conversion completes, the analog-circuitry will again be powered-down provided no further conversions are pending. Using this mode can save an appreciable amount of current (approximately 2.5 mA) when conversions are required relatively infrequently. The penalty for using this mode is an approximately 15 ADC clock delay (30 clocks in 10-bit mode), based on the frequency specified in the CLKDIV field, from the time the trigger event occurs until sampling of the A/D input commences. This mode will NOT power-up the A/D if the ADC_ENA bit is low.
        enum class LpwrmodeVal {
            disabled=0x00000000,     ///<Disabled. The low-power ADC mode is disabled.  The analog circuitry remains activated even when no conversions are requested.
            enabled=0x00000001,     ///<Enabled. The low-power ADC mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,LpwrmodeVal> lpwrmode{}; 
        namespace LpwrmodeValC{
            constexpr Register::FieldValue<decltype(lpwrmode),LpwrmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lpwrmode),LpwrmodeVal::enabled> enabled{};
        }
        ///Writing a 1 to this bit initiates a self-calibration cycle. This bit will be automatically cleared by hardware after the calibration cycle is complete. Other bits of this register may be written to concurrently with setting this bit, however once this bit has been set no further writes to this register are permitted until the full calibration cycle has ended.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> calMode{}; 
        namespace CalmodeValC{
        }
    }
    namespace NoneseqaCtrl{    ///<A/D Conversion Sequence-A control Register: Controls triggering and channel selection for conversion sequence-A. Also specifies interrupt mode for sequence-A.
        using Addr = Register::Address<0x4001c008,0x03f38000,0,unsigned>;
        ///Selects which one or more of the twelve channels will be sampled and converted when this sequence is launched. A 1 in any bit of this field will cause the corresponding channel to be included in the conversion sequence, where bit 0 corresponds to channel 0, bit 1 to channel 1 and so forth.  When this conversion sequence is triggered, either by a hardware trigger or via software command, A/D conversions will be performed on each enabled channel, in sequence, beginning with the lowest-ordered channel.  This field can ONLY be changed while the SEQA_ENA bit (bit 31) is LOW. It is allowed to change this field and set bit 31 in the same write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> channels{}; 
        namespace ChannelsValC{
        }
        ///Selects which of the available hardware trigger sources will cause this conversion sequence to be initiated. Program the trigger input number in this field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> trigger{}; 
        namespace TriggerValC{
        }
        ///Select the polarity of the selected input trigger for this conversion sequence.
        enum class TrigpolVal {
            negativeEdge=0x00000000,     ///<Negative edge. A negative edge launches the conversion sequence on the selected trigger input.
            positiveEdge=0x00000001,     ///<Positive edge. A positive edge launches the conversion sequence on the selected trigger input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::negativeEdge> negativeEdge{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::positiveEdge> positiveEdge{};
        }
        ///Setting this bit allows the hardware trigger input to bypass  synchronization flip-flops stages and therefore shorten the time between the trigger input signal and the start of a conversion. There are slightly different criteria for whether or not this bit can be set depending on the clock operating mode: Synchronous mode: Synchronization may be bypassed (this bit may be set) if the selected trigger source is already synchronous with the main system clock (eg. coming from an on-chip, system-clock-based timer). Whether this bit is set or not, a trigger pulse must be maintained for at least one system clock period. Asynchronous mode: Synchronization may be bypassed (this bit may be set) if it is certain that the duration of a trigger input pulse will be at least one cycle of the ADC clock (regardless of whether the trigger comes from and on-chip or off-chip source). If this bit is NOT set, the trigger pulse must at least be maintained for one system clock period.
        enum class SyncbypassVal {
            enableSynchronizati=0x00000000,     ///<Enable synchronization. The hardware trigger bypass is not enabled.
            bypassSynchronizati=0x00000001,     ///<Bypass synchronization. The hardware trigger bypass is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SyncbypassVal> syncbypass{}; 
        namespace SyncbypassValC{
            constexpr Register::FieldValue<decltype(syncbypass),SyncbypassVal::enableSynchronizati> enableSynchronizati{};
            constexpr Register::FieldValue<decltype(syncbypass),SyncbypassVal::bypassSynchronizati> bypassSynchronizati{};
        }
        ///Writing a 1 to this field will launch one pass through this conversion sequence. The behavior will be identical to a sequence triggered by a hardware trigger. Do not write 1 to this bit if the BURST bit is set. This bit is only set to a 1 momentarily when written-to to launch a conversion sequence. It will consequently always read-back as a zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Writing a 1 to this bit will cause this conversion sequence to be continuously cycled through. Other sequence A triggers will be ignored while this bit is set. Repeated conversions can be halted by clearing this bit. The sequence currently in progress will be completed before conversions are terminated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> burst{}; 
        namespace BurstValC{
        }
        ///When this bit is set, a hardware trigger or a write to the START bit will launch a single conversion on the next channel in the sequence instead of the default response of launching an entire sequence of conversions. Once all of the channels comprising a sequence have been converted, a subsequent trigger will repeat the sequence beginning with the first enabled channel. Interrupt generation will still occur either after each individual conversion or at the end of the entire sequence, depending on the state of the MODE bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> singlestep{}; 
        namespace SinglestepValC{
        }
        ///Set priority for sequence A.
        enum class LowprioVal {
            lowPriority=0x00000000,     ///<Low priority. Any B trigger which occurs while an A conversion sequence is active will be ignored and lost.
            highPriority=0x00000001,     ///<High priority.  Setting this bit to a 1 will permit any enabled B sequence trigger (including a B sequence software start) to immediately interrupt this sequence and launch a B sequence in it's place. The conversion currently in progress will be terminated.  The A sequence that was interrupted will automatically resume after the B sequence completes. The channel whose conversion was terminated will be re-sampled and the conversion sequence will resume from that point.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,LowprioVal> lowprio{}; 
        namespace LowprioValC{
            constexpr Register::FieldValue<decltype(lowprio),LowprioVal::lowPriority> lowPriority{};
            constexpr Register::FieldValue<decltype(lowprio),LowprioVal::highPriority> highPriority{};
        }
        ///Indicates whether the primary method for retrieving conversion results for this sequence will be accomplished via reading the global data register (SEQA_GDAT) at the end of each conversion, or the individual channel result registers at the end of the entire sequence.  Impacts when conversion-complete interrupt/DMA requests for sequence-A will be generated and which overrun conditions contribute to an overrun interrupt as described below:
        enum class ModeVal {
            endOfConversion=0x00000000,     ///<End of conversion. The sequence A interrupt/DMA flag will be set at the end of each individual A/D conversion performed under sequence A. This flag will mirror the DATAVALID bit in the SEQA_GDAT register. The OVERRUN bit in the SEQA_GDAT register will contribute to generation of an overrun interrupt/DMA request if enabled.
            endOfSequence=0x00000001,     ///<End of sequence. The sequence A interrupt/DMA flag will be set when the entire set of sequence-A conversions completes. This flag will need to be explicitly cleared by software or by the DMA-clear signal in this mode.  The OVERRUN bit in the SEQA_GDAT register will NOT contribute to generation of an overrun interrupt/DMA request since it is assumed this register may not be utilized in this mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::endOfConversion> endOfConversion{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::endOfSequence> endOfSequence{};
        }
        ///Sequence Enable
        enum class SeqaenaVal {
            disabled=0x00000000,     ///<Disabled. Sequence A is disabled. Sequence A triggers are ignored. If this bit is cleared while sequence A is in progress, the sequence will be halted at the end of the current conversion. After the sequence is re-enabled, a new trigger will be required to restart the sequence beginning with the next enabled channel.
            enabled=0x00000001,     ///<Enabled. Sequence A is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SeqaenaVal> seqaEna{}; 
        namespace SeqaenaValC{
            constexpr Register::FieldValue<decltype(seqaEna),SeqaenaVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqaEna),SeqaenaVal::enabled> enabled{};
        }
    }
    namespace NoneseqbCtrl{    ///<A/D Conversion Sequence-B Control Register: Controls triggering and channel selection for conversion sequence-B. Also specifies interrupt mode for sequence-B.
        using Addr = Register::Address<0x4001c00c,0x23f38000,0,unsigned>;
        ///Selects which one or more of the twelve channels will be sampled and converted when this sequence is launched. A 1 in any bit of this field will cause the corresponding channel to be included in the conversion sequence, where bit 0 corresponds to channel 0, bit 1 to channel 1 and so forth.  When this conversion sequence is triggered, either by a hardware trigger or via software command, A/D conversions will be performed on each enabled channel, in sequence, beginning with the lowest-ordered channel. This field can ONLY be changed while the SEQB_ENA bit (bit 31) is LOW. It is permissible to change this field and set bit 31 in the same write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> channels{}; 
        namespace ChannelsValC{
        }
        ///Selects which of the available hardware trigger sources will cause this conversion sequence to be initiated. Program the trigger input number in this field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> trigger{}; 
        namespace TriggerValC{
        }
        ///Select the polarity of the selected input trigger for this conversion sequence.
        enum class TrigpolVal {
            negativeEdge=0x00000000,     ///<Negative edge. A negative edge launches the conversion sequence on the selected trigger input.
            positiveEdge=0x00000001,     ///<Positive edge. A positive edge launches the conversion sequence on the selected trigger input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::negativeEdge> negativeEdge{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::positiveEdge> positiveEdge{};
        }
        ///Setting this bit allows the hardware trigger input to bypass  synchronization flip-flops stages and therefore shorten the time between the trigger input signal and the start of a conversion. There are slightly different criteria for whether or not this bit can be set depending on the clock operating mode: Synchronous mode: Synchronization may be bypassed (this bit may be set) if the selected trigger source is already synchronous with the main system clock (eg. coming from an on-chip, system-clock-based timer). Whether this bit is set or not, a trigger pulse must be maintained for at least one system clock period. Asynchronous mode: Synchronization may be bypassed (this bit may be set) if it is certain that the duration of a trigger input pulse will be at least one cycle of the ADC clock (regardless of whether the trigger comes from and on-chip or off-chip source). If this bit is NOT set, the trigger pulse must at least be maintained for one system clock period.
        enum class SyncbypassVal {
            enableSynchronizati=0x00000000,     ///<Enable synchronization. The hardware trigger bypass is not enabled.
            bypassSynchronizati=0x00000001,     ///<Bypass synchronization. The hardware trigger bypass is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SyncbypassVal> syncbypass{}; 
        namespace SyncbypassValC{
            constexpr Register::FieldValue<decltype(syncbypass),SyncbypassVal::enableSynchronizati> enableSynchronizati{};
            constexpr Register::FieldValue<decltype(syncbypass),SyncbypassVal::bypassSynchronizati> bypassSynchronizati{};
        }
        ///Writing a 1 to this field will launch one pass through this conversion sequence. The behavior will be identical to a sequence triggered by a hardware trigger. Do not write a 1 to this bit if the BURST bit is set.   This bit is only set to a 1 momentarily when written-to to launch a conversion sequence. It will consequently always read-back as a zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Writing a 1 to this bit will cause this conversion sequence to be continuously cycled through. Other B triggers will be ignored while this bit is set.  Repeated conversions can be halted by clearing this bit. The sequence currently in progress will be completed before conversions are terminated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> burst{}; 
        namespace BurstValC{
        }
        ///When this bit is set, a hardware trigger or a write to the START bit will launch a single conversion on the next channel in the sequence instead of the default response of launching an entire sequence of conversions. Once all of the channels comprising a sequence have been converted, a subsequent trigger will repeat the sequence beginning with the first enabled channel.  Interrupt generation will still occur either after each individual conversion or at the end of the entire sequence, depending on the state of the MODE bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> singlestep{}; 
        namespace SinglestepValC{
        }
        ///Indicates whether the primary method for retrieving conversion results for this sequence will be accomplished via reading the global data register (SEQB_GDAT) at the end of each conversion, or the individual channel result registers at the end of the entire sequence.   Impacts when conversion-complete interrupt/DMA requests for sequence-B will be generated and which overrun conditions contribute to an overrun interrupt as described below:
        enum class ModeVal {
            endOfConversion=0x00000000,     ///<End of conversion. The sequence B interrupt/DMA flag will be set at the end of each individual A/D conversion performed under sequence B. This flag will mirror the DATAVALID bit in the SEQB_GDAT register.  The OVERRUN bit in the SEQB_GDAT register will contribute to generation of an overrun interrupt/DMA request if enabled.
            endOfSequence=0x00000001,     ///<End of sequence. The sequence B interrupt/DMA flag will be set when the entire set of sequence B conversions completes. This flag will need to be explicitly cleared by software or by the DMA-clear signal in this mode.   The OVERRUN bit in the SEQB_GDAT register will NOT contribute to generation of an overrun interrupt/DMA request since it is assumed this register will not be utilized in this mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::endOfConversion> endOfConversion{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::endOfSequence> endOfSequence{};
        }
        ///Sequence Enable
        enum class SeqbenaVal {
            disabled=0x00000000,     ///<Disabled. Sequence B is disabled. Sequence B triggers are ignored. If this bit is cleared while sequence B is in progress, the sequence will be halted at the end of the current conversion. After the sequence is re-enabled, a new trigger will be required to restart the sequence beginning with the next enabled channel.
            enabled=0x00000001,     ///<Enabled. Sequence B is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SeqbenaVal> seqbEna{}; 
        namespace SeqbenaValC{
            constexpr Register::FieldValue<decltype(seqbEna),SeqbenaVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqbEna),SeqbenaVal::enabled> enabled{};
        }
    }
    namespace NoneseqaGdat{    ///<A/D Sequence-A Global Data Register. This register contains the result of the most recent A/D conversion performed under sequence-A
        using Addr = Register::Address<0x4001c010,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the most recent conversion performed under conversion sequence associated with this register.   The result is the  a binary fraction representing the voltage on the currently-selected input channel as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.  DATAVALID = 1 indicates that this result has not yet been read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Indicates whether the result of the last conversion performed was above, below or within the range established by the designated threshold comparison registers (THRn_LOW and THRn_HIGH).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Indicates whether the result of the last conversion performed represented a crossing of the threshold level established by the designated LOW threshold comparison register (THRn_LOW) and, if so, in what direction the crossing occurred.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///These bits contain the channel from which the RESULT bits were converted (e.g. 0000 identifies channel 0, 0001 channel 1...).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> chn{}; 
        namespace ChnValC{
        }
        ///This bit is set if a new conversion result is loaded into the RESULT field before a previous result has been read - i.e. while the DATAVALID bit is set. This bit is cleared, along with the DATAVALID bit, whenever this register is read.  This bit will contribute to an overrun interrupt request if the MODE bit (in SEQA_CTRL) for the corresponding sequence is set to '0' (and if the overrun interrupt is enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to '1' at the end of each conversion when a new result is loaded into the RESULT field. It is cleared whenever this register is read.  This bit will cause a conversion-complete interrupt for the corresponding sequence if the MODE bit (in SEQA_CTRL) for that sequence is set to 0 (and if the interrupt is enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace NoneseqbGdat{    ///<A/D Sequence-B Global Data Register. This register contains the result of the most recent A/D conversion performed under sequence-B
        using Addr = Register::Address<0x4001c014,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the most recent conversion performed under conversion sequence associated with this register.   This will be a binary fraction representing the voltage on the currently-selected input channel as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on V REFP.  DATAVALID = 1 indicates that this result has not yet been read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Indicates whether the result of the last conversion performed was above, below or within the range established by the designated threshold comparison registers (THRn_LOW and THRn_HIGH).  Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Indicates whether the result of the last conversion performed represented a crossing of the threshold level established by the designated LOW threshold comparison register (THRn_LOW) and, if so, in what direction the crossing occurred. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///These bits contain the channel from which the RESULT bits were converted (e.g. 0b0000 identifies channel 0, 0b0001 channel 1...).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> chn{}; 
        namespace ChnValC{
        }
        ///This bit is set if a new conversion result is loaded into the RESULT field before a previous result has been read - i.e. while the DATAVALID bit is set. This bit is cleared, along with the DATAVALID bit, whenever this register is read.  This bit will contribute to an overrun interrupt request if the MODE bit (in SEQB_CTRL) for the corresponding sequence is set to 0 (and if the overrun interrupt is enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 at the end of each conversion when a new result is loaded into the RESULT field. It is cleared whenever this register is read.  This bit will cause a conversion-complete interrupt for the corresponding sequence if the MODE bit (in SEQB_CTRL) for that sequence is set to 0 (and if the interrupt is enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat0{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c020,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat1{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c024,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat2{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c028,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat3{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c02c,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat4{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c030,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat5{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c034,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat6{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c038,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat7{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c03c,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat8{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c040,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat9{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c044,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat10{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c048,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat11{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c04c,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonethr0Low{    ///<A/D Low Compare Threshold Register 0 : Contains the lower threshold level for automatic threshold comparison for any channels linked to threshold pair 0.
        using Addr = Register::Address<0x4001c050,0xffff000f,0,unsigned>;
        ///Low threshold value against which A/D results will be compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrlow{}; 
        namespace ThrlowValC{
        }
    }
    namespace Nonethr1Low{    ///<A/D Low Compare Threshold Register 1: Contains the lower threshold level for automatic threshold comparison for any channels linked to threshold pair 1.
        using Addr = Register::Address<0x4001c054,0xffff000f,0,unsigned>;
        ///Low threshold value against which A/D results will be compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrlow{}; 
        namespace ThrlowValC{
        }
    }
    namespace Nonethr0High{    ///<A/D High Compare Threshold Register 0: Contains the upper threshold level for automatic threshold comparison for any channels linked to threshold pair 0.
        using Addr = Register::Address<0x4001c058,0xffff000f,0,unsigned>;
        ///High threshold value against which A/D results will be compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrhigh{}; 
        namespace ThrhighValC{
        }
    }
    namespace Nonethr1High{    ///<A/D High Compare Threshold Register 1: Contains the upper threshold level for automatic threshold comparison for any channels linked to threshold pair 1.
        using Addr = Register::Address<0x4001c05c,0xffff000f,0,unsigned>;
        ///High threshold value against which A/D results will be compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrhigh{}; 
        namespace ThrhighValC{
        }
    }
    namespace NonechanThrsel{    ///<A/D Channel-Threshold Select Register. Specifies which set of threshold compare registers are to be used for each channel
        using Addr = Register::Address<0x4001c060,0xfffff000,0,unsigned>;
        ///Threshold select by channel.
        enum class Ch0thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 0 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 0 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0thrselVal> ch0Thrsel{}; 
        namespace Ch0thrselValC{
            constexpr Register::FieldValue<decltype(ch0Thrsel),Ch0thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch0Thrsel),Ch0thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch1thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 1 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 1 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1thrselVal> ch1Thrsel{}; 
        namespace Ch1thrselValC{
            constexpr Register::FieldValue<decltype(ch1Thrsel),Ch1thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch1Thrsel),Ch1thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch2thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 2 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 2 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2thrselVal> ch2Thrsel{}; 
        namespace Ch2thrselValC{
            constexpr Register::FieldValue<decltype(ch2Thrsel),Ch2thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch2Thrsel),Ch2thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch3thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 3 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 3 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3thrselVal> ch3Thrsel{}; 
        namespace Ch3thrselValC{
            constexpr Register::FieldValue<decltype(ch3Thrsel),Ch3thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch3Thrsel),Ch3thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch4thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 4 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 4 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4thrselVal> ch4Thrsel{}; 
        namespace Ch4thrselValC{
            constexpr Register::FieldValue<decltype(ch4Thrsel),Ch4thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch4Thrsel),Ch4thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch5thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 5 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 5 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5thrselVal> ch5Thrsel{}; 
        namespace Ch5thrselValC{
            constexpr Register::FieldValue<decltype(ch5Thrsel),Ch5thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch5Thrsel),Ch5thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch6thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 6 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 6 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6thrselVal> ch6Thrsel{}; 
        namespace Ch6thrselValC{
            constexpr Register::FieldValue<decltype(ch6Thrsel),Ch6thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch6Thrsel),Ch6thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch7thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 7 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 7 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7thrselVal> ch7Thrsel{}; 
        namespace Ch7thrselValC{
            constexpr Register::FieldValue<decltype(ch7Thrsel),Ch7thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch7Thrsel),Ch7thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch8thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 8 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 8 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8thrselVal> ch8Thrsel{}; 
        namespace Ch8thrselValC{
            constexpr Register::FieldValue<decltype(ch8Thrsel),Ch8thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch8Thrsel),Ch8thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch9thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 9 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 9 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9thrselVal> ch9Thrsel{}; 
        namespace Ch9thrselValC{
            constexpr Register::FieldValue<decltype(ch9Thrsel),Ch9thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch9Thrsel),Ch9thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch10thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 10 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 10 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10thrselVal> ch10Thrsel{}; 
        namespace Ch10thrselValC{
            constexpr Register::FieldValue<decltype(ch10Thrsel),Ch10thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch10Thrsel),Ch10thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch11thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 11 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 11 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11thrselVal> ch11Thrsel{}; 
        namespace Ch11thrselValC{
            constexpr Register::FieldValue<decltype(ch11Thrsel),Ch11thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch11Thrsel),Ch11thrselVal::threshold1> threshold1{};
        }
    }
    namespace Noneinten{    ///<A/D Interrupt Enable Register. This register contains enable bits that enable the sequence-A, sequence-B, threshold compare and data overrun interrupts to be generated.
        using Addr = Register::Address<0x4001c064,0xf8000000,0,unsigned>;
        ///Sequence A interrupt enable.
        enum class SeqaintenVal {
            disabled=0x00000000,     ///<Disabled. The sequence A interrupt/DMA request is disabled.
            enabled=0x00000001,     ///<Enabled. The sequence A interrupt/DMA request is enabled and will be asserted either upon completion of each individual conversion performed as part of sequence A, or upon completion of the entire A sequence of conversions, depending on the MODE bit in the SEQA_CTRL register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SeqaintenVal> seqaInten{}; 
        namespace SeqaintenValC{
            constexpr Register::FieldValue<decltype(seqaInten),SeqaintenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqaInten),SeqaintenVal::enabled> enabled{};
        }
        ///Sequence B interrupt enable.
        enum class SeqbintenVal {
            disabled=0x00000000,     ///<Disabled. The sequence B interrupt/DMA request is disabled.
            enabled=0x00000001,     ///<Enabled. The sequence B interrupt/DMA request is enabled and will be asserted either upon completion of each individual conversion performed as part of sequence B, or upon completion of the entire B sequence of conversions, depending on the MODE bit in the SEQB_CTRL register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SeqbintenVal> seqbInten{}; 
        namespace SeqbintenValC{
            constexpr Register::FieldValue<decltype(seqbInten),SeqbintenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqbInten),SeqbintenVal::enabled> enabled{};
        }
        ///Overrun interrupt enable.
        enum class OvrintenVal {
            disabled=0x00000000,     ///<Disabled. The overrun interrupt is disabled.
            enabled=0x00000001,     ///<Enabled. The overrun interrupt is enabled. Detection of an overrun condition on any of the 12 channel data registers will cause an overrun interrupt request. In addition, if the MODE bit for a particular sequence is 0, then an overrun in the global data register for that sequence will also cause this interrupt request to be asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,OvrintenVal> ovrInten{}; 
        namespace OvrintenValC{
            constexpr Register::FieldValue<decltype(ovrInten),OvrintenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrInten),OvrintenVal::enabled> enabled{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten0Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,Adcmpinten0Val> adcmpinten0{}; 
        namespace Adcmpinten0ValC{
            constexpr Register::FieldValue<decltype(adcmpinten0),Adcmpinten0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten0),Adcmpinten0Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten0),Adcmpinten0Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten1Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,Adcmpinten1Val> adcmpinten1{}; 
        namespace Adcmpinten1ValC{
            constexpr Register::FieldValue<decltype(adcmpinten1),Adcmpinten1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten1),Adcmpinten1Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten1),Adcmpinten1Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten2Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,Adcmpinten2Val> adcmpinten2{}; 
        namespace Adcmpinten2ValC{
            constexpr Register::FieldValue<decltype(adcmpinten2),Adcmpinten2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten2),Adcmpinten2Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten2),Adcmpinten2Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten3Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,Adcmpinten3Val> adcmpinten3{}; 
        namespace Adcmpinten3ValC{
            constexpr Register::FieldValue<decltype(adcmpinten3),Adcmpinten3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten3),Adcmpinten3Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten3),Adcmpinten3Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten4Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,Adcmpinten4Val> adcmpinten4{}; 
        namespace Adcmpinten4ValC{
            constexpr Register::FieldValue<decltype(adcmpinten4),Adcmpinten4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten4),Adcmpinten4Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten4),Adcmpinten4Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten5Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,Adcmpinten5Val> adcmpinten5{}; 
        namespace Adcmpinten5ValC{
            constexpr Register::FieldValue<decltype(adcmpinten5),Adcmpinten5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten5),Adcmpinten5Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten5),Adcmpinten5Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten6Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,Adcmpinten6Val> adcmpinten6{}; 
        namespace Adcmpinten6ValC{
            constexpr Register::FieldValue<decltype(adcmpinten6),Adcmpinten6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten6),Adcmpinten6Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten6),Adcmpinten6Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten7Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,Adcmpinten7Val> adcmpinten7{}; 
        namespace Adcmpinten7ValC{
            constexpr Register::FieldValue<decltype(adcmpinten7),Adcmpinten7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten7),Adcmpinten7Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten7),Adcmpinten7Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten8Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,Adcmpinten8Val> adcmpinten8{}; 
        namespace Adcmpinten8ValC{
            constexpr Register::FieldValue<decltype(adcmpinten8),Adcmpinten8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten8),Adcmpinten8Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten8),Adcmpinten8Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten9Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,Adcmpinten9Val> adcmpinten9{}; 
        namespace Adcmpinten9ValC{
            constexpr Register::FieldValue<decltype(adcmpinten9),Adcmpinten9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten9),Adcmpinten9Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten9),Adcmpinten9Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten10Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,Adcmpinten10Val> adcmpinten10{}; 
        namespace Adcmpinten10ValC{
            constexpr Register::FieldValue<decltype(adcmpinten10),Adcmpinten10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten10),Adcmpinten10Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten10),Adcmpinten10Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten11Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,Adcmpinten11Val> adcmpinten11{}; 
        namespace Adcmpinten11ValC{
            constexpr Register::FieldValue<decltype(adcmpinten11),Adcmpinten11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten11),Adcmpinten11Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten11),Adcmpinten11Val::crossingThreshold> crossingThreshold{};
        }
    }
    namespace Noneflags{    ///<A/D Flags Register. Contains the four interrupt request flags and the individual component overrun and threshold-compare flags. (The overrun bits replicate information stored in the result registers).
        using Addr = Register::Address<0x4001c068,0x0c000000,0,unsigned>;
        ///Threshold comparison event on Channel 0. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> thcmp0{}; 
        namespace Thcmp0ValC{
        }
        ///Threshold comparison event on Channel 1. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> thcmp1{}; 
        namespace Thcmp1ValC{
        }
        ///Threshold comparison event on Channel 2. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> thcmp2{}; 
        namespace Thcmp2ValC{
        }
        ///Threshold comparison event on Channel 3. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> thcmp3{}; 
        namespace Thcmp3ValC{
        }
        ///Threshold comparison event on Channel 4. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> thcmp4{}; 
        namespace Thcmp4ValC{
        }
        ///Threshold comparison event on Channel 5. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> thcmp5{}; 
        namespace Thcmp5ValC{
        }
        ///Threshold comparison event on Channel 6. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> thcmp6{}; 
        namespace Thcmp6ValC{
        }
        ///Threshold comparison event on Channel 7. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> thcmp7{}; 
        namespace Thcmp7ValC{
        }
        ///Threshold comparison event on Channel 8. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> thcmp8{}; 
        namespace Thcmp8ValC{
        }
        ///Threshold comparison event on Channel 9. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> thcmp9{}; 
        namespace Thcmp9ValC{
        }
        ///Threshold comparison event on Channel 10. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> thcmp10{}; 
        namespace Thcmp10ValC{
        }
        ///Threshold comparison event on Channel 11. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> thcmp11{}; 
        namespace Thcmp11ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> overrun0{}; 
        namespace Overrun0ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> overrun1{}; 
        namespace Overrun1ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> overrun2{}; 
        namespace Overrun2ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> overrun3{}; 
        namespace Overrun3ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> overrun4{}; 
        namespace Overrun4ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> overrun5{}; 
        namespace Overrun5ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> overrun6{}; 
        namespace Overrun6ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> overrun7{}; 
        namespace Overrun7ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> overrun8{}; 
        namespace Overrun8ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> overrun9{}; 
        namespace Overrun9ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> overrun10{}; 
        namespace Overrun10ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> overrun11{}; 
        namespace Overrun11ValC{
        }
        ///Mirrors the global OVERRUN status flag in the SEQA_GDAT register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> seqaOvr{}; 
        namespace SeqaovrValC{
        }
        ///Mirrors the global OVERRUN status flag in the SEQB_GDAT register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> seqbOvr{}; 
        namespace SeqbovrValC{
        }
        ///Sequence A interrupt/DMA flag. If the MODE bit in the SEQA_CTRL register is 0, this flag will mirror the DATAVALID bit in the sequence A global data register (SEQA_GDAT), which is set at the end of every A/D conversion performed as part of sequence A. It will be cleared automatically when the SEQA_GDAT register is read. If the MODE bit in the SEQA_CTRL register is 1, this flag will be set upon completion of an entire A sequence. In this case it must be cleared by writing a 1 to this SEQA_INT bit.  This interrupt must be enabled in the INTEN register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> seqaInt{}; 
        namespace SeqaintValC{
        }
        ///Sequence A interrupt/DMA flag. If the MODE bit in the SEQB_CTRL register is 0, this flag will mirror the DATAVALID bit in the sequence A global data register (SEQB_GDAT), which is set at the end of every A/D conversion performed as part of sequence B. It will be cleared automatically when the SEQB_GDAT register is read. If the MODE bit in the SEQB_CTRL register is 1, this flag will be set upon completion of an entire B sequence. In this case it must be cleared by writing a 1 to this SEQB_INT bit.  This interrupt must be enabled in the INTEN register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> seqbInt{}; 
        namespace SeqbintValC{
        }
        ///Threshold Comparison Interrupt/DMA flag. This bit will be set if any of the 12 THCMP flags in the lower bits of this register are set to 1 (due to an enabled out-of-range or threshold-crossing event on any channel). Each type of threshold comparison interrupt on each channel must be individually enabled in the INTEN register to cause this interrupt. This bit will be cleared when all of the component flags in bits 11:0 are cleared via writing 1s to those bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> thcmpInt{}; 
        namespace ThcmpintValC{
        }
        ///Overrun Interrupt flag. Any overrun bit in any of the individual channel data registers will cause this interrupt. In addition, if the MODE bit in either of the SEQn_CTRL registers is 0 then the OVERRUN bit in the corresponding SEQn_GDAT register will also cause this interrupt.  This interrupt must be enabled in the INTEN register. This bit will be cleared when all of the individual overrun bits have been cleared via reading the corresponding data registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ovrInt{}; 
        namespace OvrintValC{
        }
    }
    namespace Nonetrm{    ///<ADC trim register.
        using Addr = Register::Address<0x4001c06c,0xffffffdf,0,unsigned>;
        ///Reserved.
        enum class VrangeVal {
            highVoltage=0x00000000,     ///<High voltage. VDDA = 2.7 V to 3.6 V.
            lowVoltage=0x00000001,     ///<Low voltage. VDDA = 1.8 V to 2.7 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,VrangeVal> vrange{}; 
        namespace VrangeValC{
            constexpr Register::FieldValue<decltype(vrange),VrangeVal::highVoltage> highVoltage{};
            constexpr Register::FieldValue<decltype(vrange),VrangeVal::lowVoltage> lowVoltage{};
        }
    }
}
