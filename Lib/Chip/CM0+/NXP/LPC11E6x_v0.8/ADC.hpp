#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//12-bit Analog-to-Digital Converter (ADC)
    namespace AdcCtrl{    ///<A/D Control Register. Contains the clock divide value, enable bits for each sequence and the A/D power-down bit.
        using Addr = Register::Address<0x4001c000,0x3ffff800,0x00000000,unsigned>;
        ///The system clock is divided by this value plus one to produce the clock for the A/D converter, which should be less than or equal to 50 MHz (up to 100 MHz in 10-bit mode).  Typically, software should program the smallest value in this field that yields this maximum clock rate or slightly less, but in certain cases (such as a high-impedance analog source) a slower clock may be desirable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select low-power ADC mode. The analog circuitry is automatically powered-down when no conversions are taking place. When any (hardware or software) triggering event is detected, the analog circuitry is enabled. After the required start-up time, the requested conversion will be launched. Once the conversion completes, the analog-circuitry will again be powered-down provided no further conversions are pending. Using this mode can save an appreciable amount of current (approximately 2.5 mA) when conversions are required relatively infrequently. The penalty for using this mode is an approximately 15 ADC clock delay (30 clocks in 10-bit mode), based on the frequency specified in the CLKDIV field, from the time the trigger event occurs until sampling of the A/D input commences. This mode will NOT power-up the A/D if the ADC_ENA bit is low.
        enum class LpwrmodeVal {
            disabled=0x00000000,     ///<Disabled. The low-power ADC mode is disabled.  The analog circuitry remains activated even when no conversions are requested.
            enabled=0x00000001,     ///<Enabled. The low-power ADC mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,LpwrmodeVal> lpwrmode{}; 
        namespace LpwrmodeValC{
            constexpr Register::FieldValue<decltype(lpwrmode)::Type,LpwrmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lpwrmode)::Type,LpwrmodeVal::enabled> enabled{};
        }
        ///Writing a 1 to this bit initiates a self-calibration cycle. This bit will be automatically cleared by hardware after the calibration cycle is complete. Other bits of this register may be written to concurrently with setting this bit, however once this bit has been set no further writes to this register are permitted until the full calibration cycle has ended.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> calMode{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcSeqaCtrl{    ///<A/D Conversion Sequence-A control Register: Controls triggering and channel selection for conversion sequence-A. Also specifies interrupt mode for sequence-A.
        using Addr = Register::Address<0x4001c008,0x00000000,0x00000000,unsigned>;
        ///Selects which one or more of the twelve channels will be sampled and converted when this sequence is launched. A 1 in any bit of this field will cause the corresponding channel to be included in the conversion sequence, where bit 0 corresponds to channel 0, bit 1 to channel 1 and so forth.  When this conversion sequence is triggered, either by a hardware trigger or via software command, A/D conversions will be performed on each enabled channel, in sequence, beginning with the lowest-ordered channel.  This field can ONLY be changed while the SEQA_ENA bit (bit 31) is LOW. It is allowed to change this field and set bit 31 in the same write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> channels{}; 
        ///Selects which of the available hardware trigger sources will cause this conversion sequence to be initiated. Program the trigger input number in this field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> trigger{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select the polarity of the selected input trigger for this conversion sequence.
        enum class TrigpolVal {
            negativeEdge=0x00000000,     ///<Negative edge. A negative edge launches the conversion sequence on the selected trigger input.
            positiveEdge=0x00000001,     ///<Positive edge. A positive edge launches the conversion sequence on the selected trigger input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::negativeEdge> negativeEdge{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::positiveEdge> positiveEdge{};
        }
        ///Setting this bit allows the hardware trigger input to bypass  synchronization flip-flops stages and therefore shorten the time between the trigger input signal and the start of a conversion. There are slightly different criteria for whether or not this bit can be set depending on the clock operating mode: Synchronous mode: Synchronization may be bypassed (this bit may be set) if the selected trigger source is already synchronous with the main system clock (eg. coming from an on-chip, system-clock-based timer). Whether this bit is set or not, a trigger pulse must be maintained for at least one system clock period. Asynchronous mode: Synchronization may be bypassed (this bit may be set) if it is certain that the duration of a trigger input pulse will be at least one cycle of the ADC clock (regardless of whether the trigger comes from and on-chip or off-chip source). If this bit is NOT set, the trigger pulse must at least be maintained for one system clock period.
        enum class SyncbypassVal {
            enableSynchronizati=0x00000000,     ///<Enable synchronization. The hardware trigger bypass is not enabled.
            bypassSynchronizati=0x00000001,     ///<Bypass synchronization. The hardware trigger bypass is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SyncbypassVal> syncbypass{}; 
        namespace SyncbypassValC{
            constexpr Register::FieldValue<decltype(syncbypass)::Type,SyncbypassVal::enableSynchronizati> enableSynchronizati{};
            constexpr Register::FieldValue<decltype(syncbypass)::Type,SyncbypassVal::bypassSynchronizati> bypassSynchronizati{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 to this field will launch one pass through this conversion sequence. The behavior will be identical to a sequence triggered by a hardware trigger. Do not write 1 to this bit if the BURST bit is set. This bit is only set to a 1 momentarily when written-to to launch a conversion sequence. It will consequently always read-back as a zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> start{}; 
        ///Writing a 1 to this bit will cause this conversion sequence to be continuously cycled through. Other sequence A triggers will be ignored while this bit is set. Repeated conversions can be halted by clearing this bit. The sequence currently in progress will be completed before conversions are terminated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> burst{}; 
        ///When this bit is set, a hardware trigger or a write to the START bit will launch a single conversion on the next channel in the sequence instead of the default response of launching an entire sequence of conversions. Once all of the channels comprising a sequence have been converted, a subsequent trigger will repeat the sequence beginning with the first enabled channel. Interrupt generation will still occur either after each individual conversion or at the end of the entire sequence, depending on the state of the MODE bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> singlestep{}; 
        ///Set priority for sequence A.
        enum class LowprioVal {
            lowPriority=0x00000000,     ///<Low priority. Any B trigger which occurs while an A conversion sequence is active will be ignored and lost.
            highPriority=0x00000001,     ///<High priority.  Setting this bit to a 1 will permit any enabled B sequence trigger (including a B sequence software start) to immediately interrupt this sequence and launch a B sequence in it's place. The conversion currently in progress will be terminated.  The A sequence that was interrupted will automatically resume after the B sequence completes. The channel whose conversion was terminated will be re-sampled and the conversion sequence will resume from that point.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,LowprioVal> lowprio{}; 
        namespace LowprioValC{
            constexpr Register::FieldValue<decltype(lowprio)::Type,LowprioVal::lowPriority> lowPriority{};
            constexpr Register::FieldValue<decltype(lowprio)::Type,LowprioVal::highPriority> highPriority{};
        }
        ///Indicates whether the primary method for retrieving conversion results for this sequence will be accomplished via reading the global data register (SEQA_GDAT) at the end of each conversion, or the individual channel result registers at the end of the entire sequence.  Impacts when conversion-complete interrupt/DMA requests for sequence-A will be generated and which overrun conditions contribute to an overrun interrupt as described below:
        enum class ModeVal {
            endOfConversion=0x00000000,     ///<End of conversion. The sequence A interrupt/DMA flag will be set at the end of each individual A/D conversion performed under sequence A. This flag will mirror the DATAVALID bit in the SEQA_GDAT register. The OVERRUN bit in the SEQA_GDAT register will contribute to generation of an overrun interrupt/DMA request if enabled.
            endOfSequence=0x00000001,     ///<End of sequence. The sequence A interrupt/DMA flag will be set when the entire set of sequence-A conversions completes. This flag will need to be explicitly cleared by software or by the DMA-clear signal in this mode.  The OVERRUN bit in the SEQA_GDAT register will NOT contribute to generation of an overrun interrupt/DMA request since it is assumed this register may not be utilized in this mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::endOfConversion> endOfConversion{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::endOfSequence> endOfSequence{};
        }
        ///Sequence Enable
        enum class SeqaenaVal {
            disabled=0x00000000,     ///<Disabled. Sequence A is disabled. Sequence A triggers are ignored. If this bit is cleared while sequence A is in progress, the sequence will be halted at the end of the current conversion. After the sequence is re-enabled, a new trigger will be required to restart the sequence beginning with the next enabled channel.
            enabled=0x00000001,     ///<Enabled. Sequence A is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SeqaenaVal> seqaEna{}; 
        namespace SeqaenaValC{
            constexpr Register::FieldValue<decltype(seqaEna)::Type,SeqaenaVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqaEna)::Type,SeqaenaVal::enabled> enabled{};
        }
    }
    namespace AdcSeqbCtrl{    ///<A/D Conversion Sequence-B Control Register: Controls triggering and channel selection for conversion sequence-B. Also specifies interrupt mode for sequence-B.
        using Addr = Register::Address<0x4001c00c,0x00000000,0x00000000,unsigned>;
        ///Selects which one or more of the twelve channels will be sampled and converted when this sequence is launched. A 1 in any bit of this field will cause the corresponding channel to be included in the conversion sequence, where bit 0 corresponds to channel 0, bit 1 to channel 1 and so forth.  When this conversion sequence is triggered, either by a hardware trigger or via software command, A/D conversions will be performed on each enabled channel, in sequence, beginning with the lowest-ordered channel. This field can ONLY be changed while the SEQB_ENA bit (bit 31) is LOW. It is permissible to change this field and set bit 31 in the same write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> channels{}; 
        ///Selects which of the available hardware trigger sources will cause this conversion sequence to be initiated. Program the trigger input number in this field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> trigger{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select the polarity of the selected input trigger for this conversion sequence.
        enum class TrigpolVal {
            negativeEdge=0x00000000,     ///<Negative edge. A negative edge launches the conversion sequence on the selected trigger input.
            positiveEdge=0x00000001,     ///<Positive edge. A positive edge launches the conversion sequence on the selected trigger input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::negativeEdge> negativeEdge{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::positiveEdge> positiveEdge{};
        }
        ///Setting this bit allows the hardware trigger input to bypass  synchronization flip-flops stages and therefore shorten the time between the trigger input signal and the start of a conversion. There are slightly different criteria for whether or not this bit can be set depending on the clock operating mode: Synchronous mode: Synchronization may be bypassed (this bit may be set) if the selected trigger source is already synchronous with the main system clock (eg. coming from an on-chip, system-clock-based timer). Whether this bit is set or not, a trigger pulse must be maintained for at least one system clock period. Asynchronous mode: Synchronization may be bypassed (this bit may be set) if it is certain that the duration of a trigger input pulse will be at least one cycle of the ADC clock (regardless of whether the trigger comes from and on-chip or off-chip source). If this bit is NOT set, the trigger pulse must at least be maintained for one system clock period.
        enum class SyncbypassVal {
            enableSynchronizati=0x00000000,     ///<Enable synchronization. The hardware trigger bypass is not enabled.
            bypassSynchronizati=0x00000001,     ///<Bypass synchronization. The hardware trigger bypass is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SyncbypassVal> syncbypass{}; 
        namespace SyncbypassValC{
            constexpr Register::FieldValue<decltype(syncbypass)::Type,SyncbypassVal::enableSynchronizati> enableSynchronizati{};
            constexpr Register::FieldValue<decltype(syncbypass)::Type,SyncbypassVal::bypassSynchronizati> bypassSynchronizati{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 to this field will launch one pass through this conversion sequence. The behavior will be identical to a sequence triggered by a hardware trigger. Do not write a 1 to this bit if the BURST bit is set.   This bit is only set to a 1 momentarily when written-to to launch a conversion sequence. It will consequently always read-back as a zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> start{}; 
        ///Writing a 1 to this bit will cause this conversion sequence to be continuously cycled through. Other B triggers will be ignored while this bit is set.  Repeated conversions can be halted by clearing this bit. The sequence currently in progress will be completed before conversions are terminated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> burst{}; 
        ///When this bit is set, a hardware trigger or a write to the START bit will launch a single conversion on the next channel in the sequence instead of the default response of launching an entire sequence of conversions. Once all of the channels comprising a sequence have been converted, a subsequent trigger will repeat the sequence beginning with the first enabled channel.  Interrupt generation will still occur either after each individual conversion or at the end of the entire sequence, depending on the state of the MODE bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> singlestep{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Indicates whether the primary method for retrieving conversion results for this sequence will be accomplished via reading the global data register (SEQB_GDAT) at the end of each conversion, or the individual channel result registers at the end of the entire sequence.   Impacts when conversion-complete interrupt/DMA requests for sequence-B will be generated and which overrun conditions contribute to an overrun interrupt as described below:
        enum class ModeVal {
            endOfConversion=0x00000000,     ///<End of conversion. The sequence B interrupt/DMA flag will be set at the end of each individual A/D conversion performed under sequence B. This flag will mirror the DATAVALID bit in the SEQB_GDAT register.  The OVERRUN bit in the SEQB_GDAT register will contribute to generation of an overrun interrupt/DMA request if enabled.
            endOfSequence=0x00000001,     ///<End of sequence. The sequence B interrupt/DMA flag will be set when the entire set of sequence B conversions completes. This flag will need to be explicitly cleared by software or by the DMA-clear signal in this mode.   The OVERRUN bit in the SEQB_GDAT register will NOT contribute to generation of an overrun interrupt/DMA request since it is assumed this register will not be utilized in this mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::endOfConversion> endOfConversion{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::endOfSequence> endOfSequence{};
        }
        ///Sequence Enable
        enum class SeqbenaVal {
            disabled=0x00000000,     ///<Disabled. Sequence B is disabled. Sequence B triggers are ignored. If this bit is cleared while sequence B is in progress, the sequence will be halted at the end of the current conversion. After the sequence is re-enabled, a new trigger will be required to restart the sequence beginning with the next enabled channel.
            enabled=0x00000001,     ///<Enabled. Sequence B is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SeqbenaVal> seqbEna{}; 
        namespace SeqbenaValC{
            constexpr Register::FieldValue<decltype(seqbEna)::Type,SeqbenaVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqbEna)::Type,SeqbenaVal::enabled> enabled{};
        }
    }
    namespace AdcSeqaGdat{    ///<A/D Sequence-A Global Data Register. This register contains the result of the most recent A/D conversion performed under sequence-A
        using Addr = Register::Address<0x4001c010,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the most recent conversion performed under conversion sequence associated with this register.   The result is the  a binary fraction representing the voltage on the currently-selected input channel as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.  DATAVALID = 1 indicates that this result has not yet been read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Indicates whether the result of the last conversion performed was above, below or within the range established by the designated threshold comparison registers (THRn_LOW and THRn_HIGH).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Indicates whether the result of the last conversion performed represented a crossing of the threshold level established by the designated LOW threshold comparison register (THRn_LOW) and, if so, in what direction the crossing occurred.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///These bits contain the channel from which the RESULT bits were converted (e.g. 0000 identifies channel 0, 0001 channel 1...).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> chn{}; 
        ///This bit is set if a new conversion result is loaded into the RESULT field before a previous result has been read - i.e. while the DATAVALID bit is set. This bit is cleared, along with the DATAVALID bit, whenever this register is read.  This bit will contribute to an overrun interrupt request if the MODE bit (in SEQA_CTRL) for the corresponding sequence is set to '0' (and if the overrun interrupt is enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to '1' at the end of each conversion when a new result is loaded into the RESULT field. It is cleared whenever this register is read.  This bit will cause a conversion-complete interrupt for the corresponding sequence if the MODE bit (in SEQA_CTRL) for that sequence is set to 0 (and if the interrupt is enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcSeqbGdat{    ///<A/D Sequence-B Global Data Register. This register contains the result of the most recent A/D conversion performed under sequence-B
        using Addr = Register::Address<0x4001c014,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the most recent conversion performed under conversion sequence associated with this register.   This will be a binary fraction representing the voltage on the currently-selected input channel as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on V REFP.  DATAVALID = 1 indicates that this result has not yet been read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Indicates whether the result of the last conversion performed was above, below or within the range established by the designated threshold comparison registers (THRn_LOW and THRn_HIGH).  Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Indicates whether the result of the last conversion performed represented a crossing of the threshold level established by the designated LOW threshold comparison register (THRn_LOW) and, if so, in what direction the crossing occurred. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///These bits contain the channel from which the RESULT bits were converted (e.g. 0b0000 identifies channel 0, 0b0001 channel 1...).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> chn{}; 
        ///This bit is set if a new conversion result is loaded into the RESULT field before a previous result has been read - i.e. while the DATAVALID bit is set. This bit is cleared, along with the DATAVALID bit, whenever this register is read.  This bit will contribute to an overrun interrupt request if the MODE bit (in SEQB_CTRL) for the corresponding sequence is set to 0 (and if the overrun interrupt is enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 at the end of each conversion when a new result is loaded into the RESULT field. It is cleared whenever this register is read.  This bit will cause a conversion-complete interrupt for the corresponding sequence if the MODE bit (in SEQB_CTRL) for that sequence is set to 0 (and if the interrupt is enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcThr0Low{    ///<A/D Low Compare Threshold Register 0 : Contains the lower threshold level for automatic threshold comparison for any channels linked to threshold pair 0.
        using Addr = Register::Address<0x4001c050,0x0000000f,0x00000000,unsigned>;
        ///Low threshold value against which A/D results will be compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrlow{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcThr1Low{    ///<A/D Low Compare Threshold Register 1: Contains the lower threshold level for automatic threshold comparison for any channels linked to threshold pair 1.
        using Addr = Register::Address<0x4001c054,0x0000000f,0x00000000,unsigned>;
        ///Low threshold value against which A/D results will be compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrlow{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcThr0High{    ///<A/D High Compare Threshold Register 0: Contains the upper threshold level for automatic threshold comparison for any channels linked to threshold pair 0.
        using Addr = Register::Address<0x4001c058,0x0000000f,0x00000000,unsigned>;
        ///High threshold value against which A/D results will be compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrhigh{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcThr1High{    ///<A/D High Compare Threshold Register 1: Contains the upper threshold level for automatic threshold comparison for any channels linked to threshold pair 1.
        using Addr = Register::Address<0x4001c05c,0x0000000f,0x00000000,unsigned>;
        ///High threshold value against which A/D results will be compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrhigh{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcChanThrsel{    ///<A/D Channel-Threshold Select Register. Specifies which set of threshold compare registers are to be used for each channel
        using Addr = Register::Address<0x4001c060,0xfffff000,0x00000000,unsigned>;
        ///Threshold select by channel.
        enum class Ch0thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 0 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 0 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0thrselVal> ch0Thrsel{}; 
        namespace Ch0thrselValC{
            constexpr Register::FieldValue<decltype(ch0Thrsel)::Type,Ch0thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch0Thrsel)::Type,Ch0thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch1thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 1 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 1 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1thrselVal> ch1Thrsel{}; 
        namespace Ch1thrselValC{
            constexpr Register::FieldValue<decltype(ch1Thrsel)::Type,Ch1thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch1Thrsel)::Type,Ch1thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch2thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 2 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 2 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2thrselVal> ch2Thrsel{}; 
        namespace Ch2thrselValC{
            constexpr Register::FieldValue<decltype(ch2Thrsel)::Type,Ch2thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch2Thrsel)::Type,Ch2thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch3thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 3 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 3 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3thrselVal> ch3Thrsel{}; 
        namespace Ch3thrselValC{
            constexpr Register::FieldValue<decltype(ch3Thrsel)::Type,Ch3thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch3Thrsel)::Type,Ch3thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch4thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 4 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 4 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4thrselVal> ch4Thrsel{}; 
        namespace Ch4thrselValC{
            constexpr Register::FieldValue<decltype(ch4Thrsel)::Type,Ch4thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch4Thrsel)::Type,Ch4thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch5thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 5 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 5 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5thrselVal> ch5Thrsel{}; 
        namespace Ch5thrselValC{
            constexpr Register::FieldValue<decltype(ch5Thrsel)::Type,Ch5thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch5Thrsel)::Type,Ch5thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch6thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 6 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 6 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6thrselVal> ch6Thrsel{}; 
        namespace Ch6thrselValC{
            constexpr Register::FieldValue<decltype(ch6Thrsel)::Type,Ch6thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch6Thrsel)::Type,Ch6thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch7thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 7 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 7 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7thrselVal> ch7Thrsel{}; 
        namespace Ch7thrselValC{
            constexpr Register::FieldValue<decltype(ch7Thrsel)::Type,Ch7thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch7Thrsel)::Type,Ch7thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch8thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 8 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 8 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8thrselVal> ch8Thrsel{}; 
        namespace Ch8thrselValC{
            constexpr Register::FieldValue<decltype(ch8Thrsel)::Type,Ch8thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch8Thrsel)::Type,Ch8thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch9thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 9 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 9 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9thrselVal> ch9Thrsel{}; 
        namespace Ch9thrselValC{
            constexpr Register::FieldValue<decltype(ch9Thrsel)::Type,Ch9thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch9Thrsel)::Type,Ch9thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch10thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 10 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 10 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10thrselVal> ch10Thrsel{}; 
        namespace Ch10thrselValC{
            constexpr Register::FieldValue<decltype(ch10Thrsel)::Type,Ch10thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch10Thrsel)::Type,Ch10thrselVal::threshold1> threshold1{};
        }
        ///Threshold select by channel.
        enum class Ch11thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 11 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 11 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11thrselVal> ch11Thrsel{}; 
        namespace Ch11thrselValC{
            constexpr Register::FieldValue<decltype(ch11Thrsel)::Type,Ch11thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch11Thrsel)::Type,Ch11thrselVal::threshold1> threshold1{};
        }
    }
    namespace AdcInten{    ///<A/D Interrupt Enable Register. This register contains enable bits that enable the sequence-A, sequence-B, threshold compare and data overrun interrupts to be generated.
        using Addr = Register::Address<0x4001c064,0x00000000,0x00000000,unsigned>;
        ///Sequence A interrupt enable.
        enum class SeqaintenVal {
            disabled=0x00000000,     ///<Disabled. The sequence A interrupt/DMA request is disabled.
            enabled=0x00000001,     ///<Enabled. The sequence A interrupt/DMA request is enabled and will be asserted either upon completion of each individual conversion performed as part of sequence A, or upon completion of the entire A sequence of conversions, depending on the MODE bit in the SEQA_CTRL register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SeqaintenVal> seqaInten{}; 
        namespace SeqaintenValC{
            constexpr Register::FieldValue<decltype(seqaInten)::Type,SeqaintenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqaInten)::Type,SeqaintenVal::enabled> enabled{};
        }
        ///Sequence B interrupt enable.
        enum class SeqbintenVal {
            disabled=0x00000000,     ///<Disabled. The sequence B interrupt/DMA request is disabled.
            enabled=0x00000001,     ///<Enabled. The sequence B interrupt/DMA request is enabled and will be asserted either upon completion of each individual conversion performed as part of sequence B, or upon completion of the entire B sequence of conversions, depending on the MODE bit in the SEQB_CTRL register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SeqbintenVal> seqbInten{}; 
        namespace SeqbintenValC{
            constexpr Register::FieldValue<decltype(seqbInten)::Type,SeqbintenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqbInten)::Type,SeqbintenVal::enabled> enabled{};
        }
        ///Overrun interrupt enable.
        enum class OvrintenVal {
            disabled=0x00000000,     ///<Disabled. The overrun interrupt is disabled.
            enabled=0x00000001,     ///<Enabled. The overrun interrupt is enabled. Detection of an overrun condition on any of the 12 channel data registers will cause an overrun interrupt request. In addition, if the MODE bit for a particular sequence is 0, then an overrun in the global data register for that sequence will also cause this interrupt request to be asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,OvrintenVal> ovrInten{}; 
        namespace OvrintenValC{
            constexpr Register::FieldValue<decltype(ovrInten)::Type,OvrintenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrInten)::Type,OvrintenVal::enabled> enabled{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten0Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,Adcmpinten0Val> adcmpinten0{}; 
        namespace Adcmpinten0ValC{
            constexpr Register::FieldValue<decltype(adcmpinten0)::Type,Adcmpinten0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten0)::Type,Adcmpinten0Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten0)::Type,Adcmpinten0Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten1Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,Adcmpinten1Val> adcmpinten1{}; 
        namespace Adcmpinten1ValC{
            constexpr Register::FieldValue<decltype(adcmpinten1)::Type,Adcmpinten1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten1)::Type,Adcmpinten1Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten1)::Type,Adcmpinten1Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten2Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,Adcmpinten2Val> adcmpinten2{}; 
        namespace Adcmpinten2ValC{
            constexpr Register::FieldValue<decltype(adcmpinten2)::Type,Adcmpinten2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten2)::Type,Adcmpinten2Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten2)::Type,Adcmpinten2Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten3Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,Adcmpinten3Val> adcmpinten3{}; 
        namespace Adcmpinten3ValC{
            constexpr Register::FieldValue<decltype(adcmpinten3)::Type,Adcmpinten3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten3)::Type,Adcmpinten3Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten3)::Type,Adcmpinten3Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten4Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,Adcmpinten4Val> adcmpinten4{}; 
        namespace Adcmpinten4ValC{
            constexpr Register::FieldValue<decltype(adcmpinten4)::Type,Adcmpinten4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten4)::Type,Adcmpinten4Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten4)::Type,Adcmpinten4Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten5Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,Adcmpinten5Val> adcmpinten5{}; 
        namespace Adcmpinten5ValC{
            constexpr Register::FieldValue<decltype(adcmpinten5)::Type,Adcmpinten5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten5)::Type,Adcmpinten5Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten5)::Type,Adcmpinten5Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten6Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,Adcmpinten6Val> adcmpinten6{}; 
        namespace Adcmpinten6ValC{
            constexpr Register::FieldValue<decltype(adcmpinten6)::Type,Adcmpinten6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten6)::Type,Adcmpinten6Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten6)::Type,Adcmpinten6Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten7Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,Adcmpinten7Val> adcmpinten7{}; 
        namespace Adcmpinten7ValC{
            constexpr Register::FieldValue<decltype(adcmpinten7)::Type,Adcmpinten7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten7)::Type,Adcmpinten7Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten7)::Type,Adcmpinten7Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten8Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,Adcmpinten8Val> adcmpinten8{}; 
        namespace Adcmpinten8ValC{
            constexpr Register::FieldValue<decltype(adcmpinten8)::Type,Adcmpinten8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten8)::Type,Adcmpinten8Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten8)::Type,Adcmpinten8Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten9Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,Adcmpinten9Val> adcmpinten9{}; 
        namespace Adcmpinten9ValC{
            constexpr Register::FieldValue<decltype(adcmpinten9)::Type,Adcmpinten9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten9)::Type,Adcmpinten9Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten9)::Type,Adcmpinten9Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten10Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,Adcmpinten10Val> adcmpinten10{}; 
        namespace Adcmpinten10ValC{
            constexpr Register::FieldValue<decltype(adcmpinten10)::Type,Adcmpinten10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten10)::Type,Adcmpinten10Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten10)::Type,Adcmpinten10Val::crossingThreshold> crossingThreshold{};
        }
        ///Threshold comparison interrupt enable.
        enum class Adcmpinten11Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,Adcmpinten11Val> adcmpinten11{}; 
        namespace Adcmpinten11ValC{
            constexpr Register::FieldValue<decltype(adcmpinten11)::Type,Adcmpinten11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcmpinten11)::Type,Adcmpinten11Val::outsideThreshold> outsideThreshold{};
            constexpr Register::FieldValue<decltype(adcmpinten11)::Type,Adcmpinten11Val::crossingThreshold> crossingThreshold{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcFlags{    ///<A/D Flags Register. Contains the four interrupt request flags and the individual component overrun and threshold-compare flags. (The overrun bits replicate information stored in the result registers).
        using Addr = Register::Address<0x4001c068,0x00000000,0x00000000,unsigned>;
        ///Threshold comparison event on Channel 0. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> thcmp0{}; 
        ///Threshold comparison event on Channel 1. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> thcmp1{}; 
        ///Threshold comparison event on Channel 2. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> thcmp2{}; 
        ///Threshold comparison event on Channel 3. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> thcmp3{}; 
        ///Threshold comparison event on Channel 4. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> thcmp4{}; 
        ///Threshold comparison event on Channel 5. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> thcmp5{}; 
        ///Threshold comparison event on Channel 6. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> thcmp6{}; 
        ///Threshold comparison event on Channel 7. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> thcmp7{}; 
        ///Threshold comparison event on Channel 8. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> thcmp8{}; 
        ///Threshold comparison event on Channel 9. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> thcmp9{}; 
        ///Threshold comparison event on Channel 10. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> thcmp10{}; 
        ///Threshold comparison event on Channel 11. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> thcmp11{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> overrun0{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> overrun1{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> overrun2{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> overrun3{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> overrun4{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> overrun5{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> overrun6{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> overrun7{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> overrun8{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> overrun9{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> overrun10{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> overrun11{}; 
        ///Mirrors the global OVERRUN status flag in the SEQA_GDAT register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> seqaOvr{}; 
        ///Mirrors the global OVERRUN status flag in the SEQB_GDAT register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> seqbOvr{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Sequence A interrupt/DMA flag. If the MODE bit in the SEQA_CTRL register is 0, this flag will mirror the DATAVALID bit in the sequence A global data register (SEQA_GDAT), which is set at the end of every A/D conversion performed as part of sequence A. It will be cleared automatically when the SEQA_GDAT register is read. If the MODE bit in the SEQA_CTRL register is 1, this flag will be set upon completion of an entire A sequence. In this case it must be cleared by writing a 1 to this SEQA_INT bit.  This interrupt must be enabled in the INTEN register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> seqaInt{}; 
        ///Sequence A interrupt/DMA flag. If the MODE bit in the SEQB_CTRL register is 0, this flag will mirror the DATAVALID bit in the sequence A global data register (SEQB_GDAT), which is set at the end of every A/D conversion performed as part of sequence B. It will be cleared automatically when the SEQB_GDAT register is read. If the MODE bit in the SEQB_CTRL register is 1, this flag will be set upon completion of an entire B sequence. In this case it must be cleared by writing a 1 to this SEQB_INT bit.  This interrupt must be enabled in the INTEN register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> seqbInt{}; 
        ///Threshold Comparison Interrupt/DMA flag. This bit will be set if any of the 12 THCMP flags in the lower bits of this register are set to 1 (due to an enabled out-of-range or threshold-crossing event on any channel). Each type of threshold comparison interrupt on each channel must be individually enabled in the INTEN register to cause this interrupt. This bit will be cleared when all of the component flags in bits 11:0 are cleared via writing 1s to those bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> thcmpInt{}; 
        ///Overrun Interrupt flag. Any overrun bit in any of the individual channel data registers will cause this interrupt. In addition, if the MODE bit in either of the SEQn_CTRL registers is 0 then the OVERRUN bit in the corresponding SEQn_GDAT register will also cause this interrupt.  This interrupt must be enabled in the INTEN register. This bit will be cleared when all of the individual overrun bits have been cleared via reading the corresponding data registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ovrInt{}; 
    }
    namespace AdcTrm{    ///<ADC trim register.
        using Addr = Register::Address<0x4001c06c,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved.
        enum class VrangeVal {
            highVoltage=0x00000000,     ///<High voltage. VDDA = 2.7 V to 3.6 V.
            lowVoltage=0x00000001,     ///<Low voltage. VDDA = 1.8 V to 2.7 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,VrangeVal> vrange{}; 
        namespace VrangeValC{
            constexpr Register::FieldValue<decltype(vrange)::Type,VrangeVal::highVoltage> highVoltage{};
            constexpr Register::FieldValue<decltype(vrange)::Type,VrangeVal::lowVoltage> lowVoltage{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcDat0{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c020,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcDat1{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c024,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcDat2{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c028,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcDat3{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c02c,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcDat4{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c030,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcDat5{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c034,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcDat6{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c038,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcDat7{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c03c,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcDat8{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c040,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcDat9{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c044,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcDat10{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c048,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace AdcDat11{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4001c04c,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
}
