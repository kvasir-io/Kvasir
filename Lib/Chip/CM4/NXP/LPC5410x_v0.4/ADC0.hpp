#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//12-bit ADC controller 0
    namespace Nonectrl{    ///<ADC Control Register. Contains the clock divide value, enable bits
						for each sequence and the ADC power-down bit.
        using Addr = Register::Address<0x1c034000,0xffff8000,0,unsigned>;
        ///In synchronous mode only, the system clock is divided by
								this value plus one to produce the clock for the ADC converter,
								which should be less than or equal to 80 MHz. Typically, software
								should program the smallest value in this field that yields this
								maximum clock rate or slightly less, but in certain cases (such as a
								high-impedance analog source) a slower clock may be desirable. This
								field is ignored in the asynchronous operating mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///Select clock mode.
        enum class AsynmodeVal {
            synchronousMode=0x00000000,     ///<Synchronous mode. The ADC clock is derived from the
										system clock based on the divide value selected in the
										CLKDIV field. The ADC clock will be started in a controlled
										fashion in response to a trigger to eliminate any
										uncertainty in the launching of an ADC conversion in
										response to any synchronous (on-chip) trigger. In
										Synchronous mode with the SYNCBYPASS bit (in a sequence
										control register) set, sampling of the ADC input and start
										of conversion will initiate 2 system clocks after the
										leading edge of a (synchronous) trigger pulse.
            asynchronousMode=0x00000001,     ///<Asynchronous mode. The ADC clock is based on the
										output of the ADC clock divider ADCCLKSEL in the SYSCON
										block.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AsynmodeVal> asynmode{}; 
        namespace AsynmodeValC{
            constexpr Register::FieldValue<decltype(asynmode),AsynmodeVal::synchronousMode> synchronousMode{};
            constexpr Register::FieldValue<decltype(asynmode),AsynmodeVal::asynchronousMode> asynchronousMode{};
        }
        ///The number of bits of ADC resolution. Accuracy can be
								reduced to achieve higher conversion rates. A single conversion
								requires the selected number of bits of resolution plus 3 ADC
								clocks. This field must only be altered when the ADC is fully idle.
								Changing it during any kind of ADC operation may have unpredictable
								results. ADC clock frequencies for various resolutions must not
								exceed: - 5x the system clock rate for 12-bit resolution - 4.3x the
								system clock rate for 10-bit resolution - 3.6x the system clock for
								8-bit resolution - 3x the bus clock rate for 6-bit
								resolution
        enum class ResolVal {
            v6BitResolution=0x00000000,     ///<6-bit resolution. An ADC conversion requires 9 ADC
										clocks, plus any clocks specified by the TSAMP
										field.
            v8BitResolution=0x00000001,     ///<8-bit resolution. An ADC conversion requires 11 ADC
										clocks, plus any clocks specified by the TSAMP
										field.
            v10BitResolution=0x00000002,     ///<10-bit resolution. An ADC conversion requires 13
										ADC clocks, plus any clocks specified by the TSAMP
										field.
            v12BitResolution=0x00000003,     ///<12-bit resolution. An ADC conversion requires 15
										ADC clocks, plus any clocks specified by the TSAMP
										field.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,ResolVal> resol{}; 
        namespace ResolValC{
            constexpr Register::FieldValue<decltype(resol),ResolVal::v6BitResolution> v6BitResolution{};
            constexpr Register::FieldValue<decltype(resol),ResolVal::v8BitResolution> v8BitResolution{};
            constexpr Register::FieldValue<decltype(resol),ResolVal::v10BitResolution> v10BitResolution{};
            constexpr Register::FieldValue<decltype(resol),ResolVal::v12BitResolution> v12BitResolution{};
        }
        ///Bypass Calibration. This bit may be set to avoid the need
								to calibrate if offset error is not a concern in the
								application.
        enum class BypasscalVal {
            calibrate=0x00000000,     ///<Calibrate. The stored calibration value will be
										applied to the ADC during conversions to compensated for
										offset error. A calibration cycle must be performed each
										time the chip is powered-up. Re-calibration may be warranted
										periodically - especially if operating conditions have
										changed.
            bypassCalibration=0x00000001,     ///<Bypass calibration. Calibration is not utilized.
										Less time is required when enabling the ADC - particularly
										following chip power-up. Attempts to launch a calibration
										cycle are blocked when this bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,BypasscalVal> bypasscal{}; 
        namespace BypasscalValC{
            constexpr Register::FieldValue<decltype(bypasscal),BypasscalVal::calibrate> calibrate{};
            constexpr Register::FieldValue<decltype(bypasscal),BypasscalVal::bypassCalibration> bypassCalibration{};
        }
        ///Sample Time. The default sampling period (TSAMP = 000) at
								the start of each conversion is 2.5 ADC clock periods. Depending on
								a variety of factors, including operating conditions and the output
								impedance of the analog source, longer sampling times may be
								required. The TSAMP field specifies the number of additional ADC
								clock cycles, from zero to seven, by which the sample period will be
								extended. The total conversion time will increase by the same number
								of clocks. 000 - The sample period will be the default 2.5 ADC
								clocks. A complete conversion with 12-bits of accuracy will require
								15 clocks. 001- The sample period will be extended by one ADC clock
								to a total of 3.5 clock periods. A complete 12-bit conversion will
								require 16 clocks. 010 - The sample period will be extended by two
								clocks to 4.5 ADC clock cycles. A complete 12-bit conversion will
								require 17 ADC clocks. : 111 - The sample period will be extended by
								two clocks to 9.5 ADC clock cycles. A complete 12-bit conversion
								will require 22 ADC clocks.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tsamp{}; 
        namespace TsampValC{
        }
    }
    namespace NoneseqaCtrl{    ///<ADC Conversion Sequence-A control Register: Controls triggering and
						channel selection for conversion sequence-A. Also specifies interrupt mode
						for sequence-A.
        using Addr = Register::Address<0x1c034008,0x03f00000,0,unsigned>;
        ///Selects which one or more of the ADC channels will be
								sampled and converted when this sequence is launched. A 1 in any bit
								of this field will cause the corresponding channel to be included in
								the conversion sequence, where bit 0 corresponds to channel 0, bit 1
								to channel 1 and so forth. When this conversion sequence is
								triggered, either by a hardware trigger or via software command, ADC
								conversions will be performed on each enabled channel, in sequence,
								beginning with the lowest-ordered channel. This field can ONLY be
								changed while the SEQA_ENA bit (bit 31) is LOW. It is allowed to
								change this field and set bit 31 in the same write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> channels{}; 
        namespace ChannelsValC{
        }
        ///Selects which of the available hardware trigger sources
								will cause this conversion sequence to be initiated. Program the
								trigger input number in this field. See Table 351. In order to avoid
								generating a spurious trigger, it is recommended writing to this
								field only when the SEQA_ENA bit (bit 31) is low. It is safe to
								change this field and set bit 31 in the same write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,12),Register::ReadWriteAccess,unsigned> trigger{}; 
        namespace TriggerValC{
        }
        ///Select the polarity of the selected input trigger for this
								conversion sequence. In order to avoid generating a spurious
								trigger, it is recommended writing to this field only when the
								SEQA_ENA bit (bit 31) is low. It is safe to change this field and
								set bit 31 in the same write.
        enum class TrigpolVal {
            negativeEdge=0x00000000,     ///<Negative edge. A negative edge launches the
										conversion sequence on the selected trigger
										input.
            positiveEdge=0x00000001,     ///<Positive edge. A positive edge launches the
										conversion sequence on the selected trigger
										input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::negativeEdge> negativeEdge{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::positiveEdge> positiveEdge{};
        }
        ///Setting this bit allows the hardware trigger input to
								bypass synchronization flip-flop stages and therefore shorten the
								time between the trigger input signal and the start of a conversion.
								There are slightly different criteria for whether or not this bit
								can be set depending on the clock operating mode: Synchronous mode
								(the ASYNMODE in the CTRL register = 0): Synchronization may be
								bypassed (this bit may be set) if the selected trigger source is
								already synchronous with the main system clock (eg. coming from an
								on-chip, system-clock-based timer). Whether this bit is set or not,
								a trigger pulse must be maintained for at least one system clock
								period. Asynchronous mode (the ASYNMODE in the CTRL register = 1):
								Synchronization may be bypassed (this bit may be set) if it is
								certain that the duration of a trigger input pulse will be at least
								one cycle of the ADC clock (regardless of whether the trigger comes
								from and on-chip or off-chip source). If this bit is NOT set, the
								trigger pulse must at least be maintained for one system clock
								period.
        enum class SyncbypassVal {
            enableTriggerSynch=0x00000000,     ///<Enable trigger synchronization. The hardware
										trigger bypass is not enabled.
            bypassTriggerSynch=0x00000001,     ///<Bypass trigger synchronization. The hardware
										trigger bypass is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SyncbypassVal> syncbypass{}; 
        namespace SyncbypassValC{
            constexpr Register::FieldValue<decltype(syncbypass),SyncbypassVal::enableTriggerSynch> enableTriggerSynch{};
            constexpr Register::FieldValue<decltype(syncbypass),SyncbypassVal::bypassTriggerSynch> bypassTriggerSynch{};
        }
        ///Writing a 1 to this field will launch one pass through this
								conversion sequence. The behavior will be identical to a sequence
								triggered by a hardware trigger. Do not write 1 to this bit if the
								BURST bit is set. This bit is only set to a 1 momentarily when
								written to launch a conversion sequence. It will consequently always
								read back as a zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Writing a 1 to this bit will cause this conversion sequence
								to be continuously cycled through. Other sequence A triggers will be
								ignored while this bit is set. Repeated conversions can be halted by
								clearing this bit. The sequence currently in progress will be
								completed before conversions are terminated. Note that a new
								sequence could begin just before BURST is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> burst{}; 
        namespace BurstValC{
        }
        ///When this bit is set, a hardware trigger or a write to the
								START bit will launch a single conversion on the next channel in the
								sequence instead of the default response of launching an entire
								sequence of conversions. Once all of the channels comprising a
								sequence have been converted, a subsequent trigger will repeat the
								sequence beginning with the first enabled channel. Interrupt
								generation will still occur either after each individual conversion
								or at the end of the entire sequence, depending on the state of the
								MODE bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> singlestep{}; 
        namespace SinglestepValC{
        }
        ///Set priority for sequence A.
        enum class LowprioVal {
            lowPriority=0x00000000,     ///<Low priority. Any B trigger which occurs while an A
										conversion sequence is active will be ignored and
										lost.
            highPriority=0x00000001,     ///<High priority. Setting this bit to a 1 will permit
										any enabled B sequence trigger (including a B sequence
										software start) to immediately interrupt sequence A and
										launch a B sequence in its place. The conversion currently
										in progress will be terminated. The A sequence that was
										interrupted will automatically resume after the B sequence
										completes. The channel whose conversion was terminated will
										be re-sampled and the conversion sequence will resume from
										that point.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,LowprioVal> lowprio{}; 
        namespace LowprioValC{
            constexpr Register::FieldValue<decltype(lowprio),LowprioVal::lowPriority> lowPriority{};
            constexpr Register::FieldValue<decltype(lowprio),LowprioVal::highPriority> highPriority{};
        }
        ///Indicates whether the primary method for retrieving
								conversion results for this sequence will be accomplished via
								reading the global data register (SEQA_GDAT) at the end of each
								conversion, or the individual channel result registers at the end of
								the entire sequence. Impacts when conversion-complete interrupt/DMA
								trigger for sequence-A will be generated and which overrun
								conditions contribute to an overrun interrupt as described
								below.
        enum class ModeVal {
            endOfConversion=0x00000000,     ///<End of conversion. The sequence A interrupt/DMA
										trigger will be set at the end of each individual ADC
										conversion performed under sequence A. This flag will mirror
										the DATAVALID bit in the SEQA_GDAT register. The OVERRUN bit
										in the SEQA_GDAT register will contribute to generation of
										an overrun interrupt/DMA trigger if enabled.
            endOfSequence=0x00000001,     ///<End of sequence. The sequence A interrupt/DMA
										trigger will be set when the entire set of sequence-A
										conversions completes. This flag will need to be explicitly
										cleared by software or by the DMA-clear signal in this mode.
										The OVERRUN bit in the SEQA_GDAT register will NOT
										contribute to generation of an overrun interrupt/DMA trigger
										since it is assumed this register may not be utilized in
										this mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::endOfConversion> endOfConversion{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::endOfSequence> endOfSequence{};
        }
        ///Sequence Enable. In order to avoid spuriously triggering
								the sequence, care should be taken to only set the SEQA_ENA bit when
								the selected trigger input is in its INACTIVE state (as defined by
								the TRIGPOL bit). If this condition is not met, the sequence will be
								triggered immediately upon being enabled. In order to avoid
								spuriously triggering the sequence, care should be taken to only set
								the SEQA_ENA bit when the selected trigger input is in its INACTIVE
								state (as defined by the TRIGPOL bit). If this condition is not met,
								the sequence will be triggered immediately upon being
								enabled.
        enum class SeqaenaVal {
            disabled=0x00000000,     ///<Disabled. Sequence A is disabled. Sequence A
										triggers are ignored. If this bit is cleared while sequence
										A is in progress, the sequence will be halted at the end of
										the current conversion. After the sequence is re-enabled, a
										new trigger will be required to restart the sequence
										beginning with the next enabled channel.
            enabled=0x00000001,     ///<Enabled. Sequence A is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SeqaenaVal> seqaEna{}; 
        namespace SeqaenaValC{
            constexpr Register::FieldValue<decltype(seqaEna),SeqaenaVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqaEna),SeqaenaVal::enabled> enabled{};
        }
    }
    namespace NoneseqbCtrl{    ///<ADC Conversion Sequence-B Control Register: Controls triggering and
						channel selection for conversion sequence-B. Also specifies interrupt mode
						for sequence-B.
        using Addr = Register::Address<0x1c03400c,0x23f00000,0,unsigned>;
        ///Selects which one or more of the ADC channels will be
								sampled and converted when this sequence is launched. A 1 in any bit
								of this field will cause the corresponding channel to be included in
								the conversion sequence, where bit 0 corresponds to channel 0, bit 1
								to channel 1 and so forth. When this conversion sequence is
								triggered, either by a hardware trigger or via software command, ADC
								conversions will be performed on each enabled channel, in sequence,
								beginning with the lowest-ordered channel. This field can ONLY be
								changed while the SEQB_ENA bit (bit 31) is LOW. It is allowed to
								change this field and set bit 31 in the same write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> channels{}; 
        namespace ChannelsValC{
        }
        ///Selects which of the available hardware trigger sources
								will cause this conversion sequence to be initiated. Program the
								trigger input number in this field. See Table 351. In order to avoid
								generating a spurious trigger, it is recommended writing to this
								field only when the SEQB_ENA bit (bit 31) is low. It is safe to
								change this field and set bit 31 in the same write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,12),Register::ReadWriteAccess,unsigned> trigger{}; 
        namespace TriggerValC{
        }
        ///Select the polarity of the selected input trigger for this
								conversion sequence. In order to avoid generating a spurious
								trigger, it is recommended writing to this field only when the
								SEQB_ENA bit (bit 31) is low. It is safe to change this field and
								set bit 31 in the same write.
        enum class TrigpolVal {
            negativeEdge=0x00000000,     ///<Negative edge. A negative edge launches the
										conversion sequence on the selected trigger
										input.
            positiveEdge=0x00000001,     ///<Positive edge. A positive edge launches the
										conversion sequence on the selected trigger
										input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::negativeEdge> negativeEdge{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::positiveEdge> positiveEdge{};
        }
        ///Setting this bit allows the hardware trigger input to
								bypass synchronization flip-flop stages and therefore shorten the
								time between the trigger input signal and the start of a conversion.
								There are slightly different criteria for whether or not this bit
								can be set depending on the clock operating mode: Synchronous mode
								(the ASYNMODE in the CTRL register = 0): Synchronization may be
								bypassed (this bit may be set) if the selected trigger source is
								already synchronous with the main system clock (eg. coming from an
								on-chip, system-clock-based timer). Whether this bit is set or not,
								a trigger pulse must be maintained for at least one system clock
								period. Asynchronous mode (the ASYNMODE in the CTRL register = 1):
								Synchronization may be bypassed (this bit may be set) if it is
								certain that the duration of a trigger input pulse will be at least
								one cycle of the ADC clock (regardless of whether the trigger comes
								from and on-chip or off-chip source). If this bit is NOT set, the
								trigger pulse must at least be maintained for one system clock
								period.
        enum class SyncbypassVal {
            enableSynchronizati=0x00000000,     ///<Enable synchronization. The hardware trigger bypass
										is not enabled.
            bypassSynchronizati=0x00000001,     ///<Bypass synchronization. The hardware trigger bypass
										is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SyncbypassVal> syncbypass{}; 
        namespace SyncbypassValC{
            constexpr Register::FieldValue<decltype(syncbypass),SyncbypassVal::enableSynchronizati> enableSynchronizati{};
            constexpr Register::FieldValue<decltype(syncbypass),SyncbypassVal::bypassSynchronizati> bypassSynchronizati{};
        }
        ///Writing a 1 to this field will launch one pass through this
								conversion sequence. The behavior will be identical to a sequence
								triggered by a hardware trigger. Do not write 1 to this bit if the
								BURST bit is set. This bit is only set to a 1 momentarily when
								written to launch a conversion sequence. It will consequently always
								read back as a zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Writing a 1 to this bit will cause this conversion sequence
								to be continuously cycled through. Other sequence B triggers will be
								ignored while this bit is set. Repeated conversions can be halted by
								clearing this bit. The sequence currently in progress will be
								completed before conversions are terminated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> burst{}; 
        namespace BurstValC{
        }
        ///When this bit is set, a hardware trigger or a write to the
								START bit will launch a single conversion on the next channel in the
								sequence instead of the default response of launching an entire
								sequence of conversions. Once all of the channels comprising a
								sequence have been converted, a subsequent trigger will repeat the
								sequence beginning with the first enabled channel. Interrupt
								generation will still occur either after each individual conversion
								or at the end of the entire sequence, depending on the state of the
								MODE bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> singlestep{}; 
        namespace SinglestepValC{
        }
        ///Indicates whether the primary method for retrieving
								conversion results for this sequence will be accomplished via
								reading the global data register (SEQB_GDAT) at the end of each
								conversion, or the individual channel result registers at the end of
								the entire sequence. Impacts when conversion-complete interrupt/DMA
								trigger for sequence-B will be generated and which overrun
								conditions contribute to an overrun interrupt as described
								below.
        enum class ModeVal {
            endOfConversion=0x00000000,     ///<End of conversion. The sequence B interrupt/DMA
										trigger will be set at the end of each individual ADC
										conversion performed under sequence B. This flag will mirror
										the DATAVALID bit in the SEQB_GDAT register. The OVERRUN bit
										in the SEQB_GDAT register will contribute to generation of
										an overrun interrupt/DMA trigger if enabled.
            endOfSequence=0x00000001,     ///<End of sequence. The sequence B interrupt/DMA
										trigger will be set when the entire set of sequence-B
										conversions completes. This flag will need to be explicitly
										cleared by software or by the DMA-clear signal in this mode.
										The OVERRUN bit in the SEQB_GDAT register will NOT
										contribute to generation of an overrun interrupt/DMA trigger
										since it is assumed this register may not be utilized in
										this mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::endOfConversion> endOfConversion{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::endOfSequence> endOfSequence{};
        }
        ///Sequence Enable. In order to avoid spuriously triggering
								the sequence, care should be taken to only set the SEQB_ENA bit when
								the selected trigger input is in its INACTIVE state (as defined by
								the TRIGPOL bit). If this condition is not met, the sequence will be
								triggered immediately upon being enabled. In order to avoid
								spuriously triggering the sequence, care should be taken to only set
								the SEQB_ENA bit when the selected trigger input is in its INACTIVE
								state (as defined by the TRIGPOL bit). If this condition is not met,
								the sequence will be triggered immediately upon being
								enabled.
        enum class SeqbenaVal {
            disabled=0x00000000,     ///<Disabled. Sequence B is disabled. Sequence B
										triggers are ignored. If this bit is cleared while sequence
										B is in progress, the sequence will be halted at the end of
										the current conversion. After the sequence is re-enabled, a
										new trigger will be required to restart the sequence
										beginning with the next enabled channel.
            enabled=0x00000001,     ///<Enabled. Sequence B is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SeqbenaVal> seqbEna{}; 
        namespace SeqbenaValC{
            constexpr Register::FieldValue<decltype(seqbEna),SeqbenaVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqbEna),SeqbenaVal::enabled> enabled{};
        }
    }
    namespace NoneseqaGdat{    ///<ADC Sequence-A Global Data Register. This register contains the
						result of the most recent ADC conversion performed under
						sequence-A
        using Addr = Register::Address<0x1c034010,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the most recent conversion performed under conversion sequence
								associated with this register. The result is a binary fraction
								representing the voltage on the currently-selected input channel as
								it falls within the range of VREFP to VREFN. Zero in the field
								indicates that the voltage on the input pin was less than, equal to,
								or close to that on VREFN, while 0xFFF indicates that the voltage on
								the input was close to, equal to, or greater than that on VREFP.
								DATAVALID = 1 indicates that this result has not yet been
								read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Indicates whether the result of the last conversion
								performed was above, below or within the range established by the
								designated threshold comparison registers (THRn_LOW and
								THRn_HIGH).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Indicates whether the result of the last conversion
								performed represented a crossing of the threshold level established
								by the designated LOW threshold comparison register (THRn_LOW) and,
								if so, in what direction the crossing occurred.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///These bits contain the channel from which the RESULT bits
								were converted (e.g. 0000 identifies channel 0, 0001 channel 1,
								etc.).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> chn{}; 
        namespace ChnValC{
        }
        ///This bit is set if a new conversion result is loaded into
								the RESULT field before a previous result has been read - i.e. while
								the DATAVALID bit is set. This bit is cleared, along with the
								DATAVALID bit, whenever this register is read. This bit will
								contribute to an overrun interrupt/DMA trigger if the MODE bit (in
								SEQAA_CTRL) for the corresponding sequence is set to 0 (and if the
								overrun interrupt is enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 at the end of each conversion when a
								new result is loaded into the RESULT field. It is cleared whenever
								this register is read. This bit will cause a conversion-complete
								interrupt for the corresponding sequence if the MODE bit (in
								SEQA_CTRL) for that sequence is set to 0 (and if the interrupt is
								enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace NoneseqbGdat{    ///<ADC Sequence-B Global Data Register. This register contains the
						result of the most recent ADC conversion performed under
						sequence-B
        using Addr = Register::Address<0x1c034014,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the most recent conversion performed under conversion sequence
								associated with this register. The result is a binary fraction
								representing the voltage on the currently-selected input channel as
								it falls within the range of VREFP to VREFN. Zero in the field
								indicates that the voltage on the input pin was less than, equal to,
								or close to that on VREFN, while 0xFFF indicates that the voltage on
								the input was close to, equal to, or greater than that on VREFP.
								DATAVALID = 1 indicates that this result has not yet been
								read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Indicates whether the result of the last conversion
								performed was above, below or within the range established by the
								designated threshold comparison registers (THRn_LOW and
								THRn_HIGH).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Indicates whether the result of the last conversion
								performed represented a crossing of the threshold level established
								by the designated LOW threshold comparison register (THRn_LOW) and,
								if so, in what direction the crossing occurred.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///These bits contain the channel from which the RESULT bits
								were converted (e.g. 0000 identifies channel 0, 0001 channel 1,
								etc.).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> chn{}; 
        namespace ChnValC{
        }
        ///This bit is set if a new conversion result is loaded into
								the RESULT field before a previous result has been read - i.e. while
								the DATAVALID bit is set. This bit is cleared, along with the
								DATAVALID bit, whenever this register is read. This bit will
								contribute to an overrun interrupt/DMA trigger if the MODE bit (in
								SEQB_CTRL) for the corresponding sequence is set to 0 (and if the
								overrun interrupt is enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 at the end of each conversion when a
								new result is loaded into the RESULT field. It is cleared whenever
								this register is read. This bit will cause a conversion-complete
								interrupt for the corresponding sequence if the MODE bit (in
								SEQB_CTRL) for that sequence is set to 0 (and if the interrupt is
								enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat0{    ///<ADC Channel 0 Data Register. This register contains the result of
						the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x1c034020,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the last conversion performed on this channel. This will be a binary
								fraction representing the voltage on the AD0[n] pin, as it falls
								within the range of VREFP to VREFN. Zero in the field indicates that
								the voltage on the input pin was less than, equal to, or close to
								that on VREFN, while 0xFFF indicates that the voltage on the input
								was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last
								completed conversion was greater than or equal to the value
								programmed into the designated LOW threshold register (THRn_LOW) but
								less than or equal to the value programmed into the designated HIGH
								threshold register (THRn_HIGH). 0x1 = Below Range: The last
								completed conversion on was less than the value programmed into the
								designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The
								last completed conversion was greater than the value programmed into
								the designated HIGH threshold register (THRn_HIGH). 0x3 =
								Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold
								Crossing detected: The most recent completed conversion on this
								channel had the same relationship (above or below) to the threshold
								value established by the designated LOW threshold register
								(THRn_LOW) as did the previous conversion on this channel. 0x1 =
								Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that
								a threshold crossing in the downward direction has occurred - i.e.
								the previous sample on this channel was above the threshold value
								established by the designated LOW threshold register (THRn_LOW) and
								the current sample is below that threshold. 0x3 = Upward Threshold
								Crossing Detected. Indicates that a threshold crossing in the upward
								direction has occurred - i.e. the previous sample on this channel
								was below the threshold value established by the designated LOW
								threshold register (THRn_LOW) and the current sample is above that
								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that
								this particular register relates to (i.e. this field will contain
								0b0000 for the DAT0 register, 0b0001 for the DAT1 register,
								etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this
								channel completes and overwrites the previous contents of the RESULT
								field before it has been read - i.e. while the DONE bit is set. This
								bit is cleared, along with the DONE bit, whenever this register is
								read or when the data related to this channel is read from either of
								the global SEQn_GDAT registers. This bit (in any of the 12
								registers) will cause an overrun interrupt/DMA trigger to be
								asserted if the overrun interrupt is enabled. While it is allowed to
								include the same channels in both conversion sequences, doing so may
								cause erratic behavior of the DONE and OVERRUN bits in the data
								registers associated with any of the channels that are shared
								between the two sequences. Any erratic OVERRUN behavior will also
								affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an ADC conversion on this channel
								completes. This bit is cleared whenever this register is read or
								when the data related to this channel is read from either of the
								global SEQn_GDAT registers. While it is allowed to include the same
								channels in both conversion sequences, doing so may cause erratic
								behavior of the DONE and OVERRUN bits in the data registers
								associated with any of the channels that are shared between the two
								sequences. Any erratic OVERRUN behavior will also affect overrun
								interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat1{    ///<ADC Channel 0 Data Register. This register contains the result of
						the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x1c034024,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the last conversion performed on this channel. This will be a binary
								fraction representing the voltage on the AD0[n] pin, as it falls
								within the range of VREFP to VREFN. Zero in the field indicates that
								the voltage on the input pin was less than, equal to, or close to
								that on VREFN, while 0xFFF indicates that the voltage on the input
								was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last
								completed conversion was greater than or equal to the value
								programmed into the designated LOW threshold register (THRn_LOW) but
								less than or equal to the value programmed into the designated HIGH
								threshold register (THRn_HIGH). 0x1 = Below Range: The last
								completed conversion on was less than the value programmed into the
								designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The
								last completed conversion was greater than the value programmed into
								the designated HIGH threshold register (THRn_HIGH). 0x3 =
								Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold
								Crossing detected: The most recent completed conversion on this
								channel had the same relationship (above or below) to the threshold
								value established by the designated LOW threshold register
								(THRn_LOW) as did the previous conversion on this channel. 0x1 =
								Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that
								a threshold crossing in the downward direction has occurred - i.e.
								the previous sample on this channel was above the threshold value
								established by the designated LOW threshold register (THRn_LOW) and
								the current sample is below that threshold. 0x3 = Upward Threshold
								Crossing Detected. Indicates that a threshold crossing in the upward
								direction has occurred - i.e. the previous sample on this channel
								was below the threshold value established by the designated LOW
								threshold register (THRn_LOW) and the current sample is above that
								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that
								this particular register relates to (i.e. this field will contain
								0b0000 for the DAT0 register, 0b0001 for the DAT1 register,
								etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this
								channel completes and overwrites the previous contents of the RESULT
								field before it has been read - i.e. while the DONE bit is set. This
								bit is cleared, along with the DONE bit, whenever this register is
								read or when the data related to this channel is read from either of
								the global SEQn_GDAT registers. This bit (in any of the 12
								registers) will cause an overrun interrupt/DMA trigger to be
								asserted if the overrun interrupt is enabled. While it is allowed to
								include the same channels in both conversion sequences, doing so may
								cause erratic behavior of the DONE and OVERRUN bits in the data
								registers associated with any of the channels that are shared
								between the two sequences. Any erratic OVERRUN behavior will also
								affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an ADC conversion on this channel
								completes. This bit is cleared whenever this register is read or
								when the data related to this channel is read from either of the
								global SEQn_GDAT registers. While it is allowed to include the same
								channels in both conversion sequences, doing so may cause erratic
								behavior of the DONE and OVERRUN bits in the data registers
								associated with any of the channels that are shared between the two
								sequences. Any erratic OVERRUN behavior will also affect overrun
								interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat2{    ///<ADC Channel 0 Data Register. This register contains the result of
						the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x1c034028,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the last conversion performed on this channel. This will be a binary
								fraction representing the voltage on the AD0[n] pin, as it falls
								within the range of VREFP to VREFN. Zero in the field indicates that
								the voltage on the input pin was less than, equal to, or close to
								that on VREFN, while 0xFFF indicates that the voltage on the input
								was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last
								completed conversion was greater than or equal to the value
								programmed into the designated LOW threshold register (THRn_LOW) but
								less than or equal to the value programmed into the designated HIGH
								threshold register (THRn_HIGH). 0x1 = Below Range: The last
								completed conversion on was less than the value programmed into the
								designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The
								last completed conversion was greater than the value programmed into
								the designated HIGH threshold register (THRn_HIGH). 0x3 =
								Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold
								Crossing detected: The most recent completed conversion on this
								channel had the same relationship (above or below) to the threshold
								value established by the designated LOW threshold register
								(THRn_LOW) as did the previous conversion on this channel. 0x1 =
								Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that
								a threshold crossing in the downward direction has occurred - i.e.
								the previous sample on this channel was above the threshold value
								established by the designated LOW threshold register (THRn_LOW) and
								the current sample is below that threshold. 0x3 = Upward Threshold
								Crossing Detected. Indicates that a threshold crossing in the upward
								direction has occurred - i.e. the previous sample on this channel
								was below the threshold value established by the designated LOW
								threshold register (THRn_LOW) and the current sample is above that
								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that
								this particular register relates to (i.e. this field will contain
								0b0000 for the DAT0 register, 0b0001 for the DAT1 register,
								etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this
								channel completes and overwrites the previous contents of the RESULT
								field before it has been read - i.e. while the DONE bit is set. This
								bit is cleared, along with the DONE bit, whenever this register is
								read or when the data related to this channel is read from either of
								the global SEQn_GDAT registers. This bit (in any of the 12
								registers) will cause an overrun interrupt/DMA trigger to be
								asserted if the overrun interrupt is enabled. While it is allowed to
								include the same channels in both conversion sequences, doing so may
								cause erratic behavior of the DONE and OVERRUN bits in the data
								registers associated with any of the channels that are shared
								between the two sequences. Any erratic OVERRUN behavior will also
								affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an ADC conversion on this channel
								completes. This bit is cleared whenever this register is read or
								when the data related to this channel is read from either of the
								global SEQn_GDAT registers. While it is allowed to include the same
								channels in both conversion sequences, doing so may cause erratic
								behavior of the DONE and OVERRUN bits in the data registers
								associated with any of the channels that are shared between the two
								sequences. Any erratic OVERRUN behavior will also affect overrun
								interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat3{    ///<ADC Channel 0 Data Register. This register contains the result of
						the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x1c03402c,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the last conversion performed on this channel. This will be a binary
								fraction representing the voltage on the AD0[n] pin, as it falls
								within the range of VREFP to VREFN. Zero in the field indicates that
								the voltage on the input pin was less than, equal to, or close to
								that on VREFN, while 0xFFF indicates that the voltage on the input
								was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last
								completed conversion was greater than or equal to the value
								programmed into the designated LOW threshold register (THRn_LOW) but
								less than or equal to the value programmed into the designated HIGH
								threshold register (THRn_HIGH). 0x1 = Below Range: The last
								completed conversion on was less than the value programmed into the
								designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The
								last completed conversion was greater than the value programmed into
								the designated HIGH threshold register (THRn_HIGH). 0x3 =
								Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold
								Crossing detected: The most recent completed conversion on this
								channel had the same relationship (above or below) to the threshold
								value established by the designated LOW threshold register
								(THRn_LOW) as did the previous conversion on this channel. 0x1 =
								Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that
								a threshold crossing in the downward direction has occurred - i.e.
								the previous sample on this channel was above the threshold value
								established by the designated LOW threshold register (THRn_LOW) and
								the current sample is below that threshold. 0x3 = Upward Threshold
								Crossing Detected. Indicates that a threshold crossing in the upward
								direction has occurred - i.e. the previous sample on this channel
								was below the threshold value established by the designated LOW
								threshold register (THRn_LOW) and the current sample is above that
								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that
								this particular register relates to (i.e. this field will contain
								0b0000 for the DAT0 register, 0b0001 for the DAT1 register,
								etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this
								channel completes and overwrites the previous contents of the RESULT
								field before it has been read - i.e. while the DONE bit is set. This
								bit is cleared, along with the DONE bit, whenever this register is
								read or when the data related to this channel is read from either of
								the global SEQn_GDAT registers. This bit (in any of the 12
								registers) will cause an overrun interrupt/DMA trigger to be
								asserted if the overrun interrupt is enabled. While it is allowed to
								include the same channels in both conversion sequences, doing so may
								cause erratic behavior of the DONE and OVERRUN bits in the data
								registers associated with any of the channels that are shared
								between the two sequences. Any erratic OVERRUN behavior will also
								affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an ADC conversion on this channel
								completes. This bit is cleared whenever this register is read or
								when the data related to this channel is read from either of the
								global SEQn_GDAT registers. While it is allowed to include the same
								channels in both conversion sequences, doing so may cause erratic
								behavior of the DONE and OVERRUN bits in the data registers
								associated with any of the channels that are shared between the two
								sequences. Any erratic OVERRUN behavior will also affect overrun
								interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat4{    ///<ADC Channel 0 Data Register. This register contains the result of
						the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x1c034030,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the last conversion performed on this channel. This will be a binary
								fraction representing the voltage on the AD0[n] pin, as it falls
								within the range of VREFP to VREFN. Zero in the field indicates that
								the voltage on the input pin was less than, equal to, or close to
								that on VREFN, while 0xFFF indicates that the voltage on the input
								was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last
								completed conversion was greater than or equal to the value
								programmed into the designated LOW threshold register (THRn_LOW) but
								less than or equal to the value programmed into the designated HIGH
								threshold register (THRn_HIGH). 0x1 = Below Range: The last
								completed conversion on was less than the value programmed into the
								designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The
								last completed conversion was greater than the value programmed into
								the designated HIGH threshold register (THRn_HIGH). 0x3 =
								Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold
								Crossing detected: The most recent completed conversion on this
								channel had the same relationship (above or below) to the threshold
								value established by the designated LOW threshold register
								(THRn_LOW) as did the previous conversion on this channel. 0x1 =
								Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that
								a threshold crossing in the downward direction has occurred - i.e.
								the previous sample on this channel was above the threshold value
								established by the designated LOW threshold register (THRn_LOW) and
								the current sample is below that threshold. 0x3 = Upward Threshold
								Crossing Detected. Indicates that a threshold crossing in the upward
								direction has occurred - i.e. the previous sample on this channel
								was below the threshold value established by the designated LOW
								threshold register (THRn_LOW) and the current sample is above that
								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that
								this particular register relates to (i.e. this field will contain
								0b0000 for the DAT0 register, 0b0001 for the DAT1 register,
								etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this
								channel completes and overwrites the previous contents of the RESULT
								field before it has been read - i.e. while the DONE bit is set. This
								bit is cleared, along with the DONE bit, whenever this register is
								read or when the data related to this channel is read from either of
								the global SEQn_GDAT registers. This bit (in any of the 12
								registers) will cause an overrun interrupt/DMA trigger to be
								asserted if the overrun interrupt is enabled. While it is allowed to
								include the same channels in both conversion sequences, doing so may
								cause erratic behavior of the DONE and OVERRUN bits in the data
								registers associated with any of the channels that are shared
								between the two sequences. Any erratic OVERRUN behavior will also
								affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an ADC conversion on this channel
								completes. This bit is cleared whenever this register is read or
								when the data related to this channel is read from either of the
								global SEQn_GDAT registers. While it is allowed to include the same
								channels in both conversion sequences, doing so may cause erratic
								behavior of the DONE and OVERRUN bits in the data registers
								associated with any of the channels that are shared between the two
								sequences. Any erratic OVERRUN behavior will also affect overrun
								interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat5{    ///<ADC Channel 0 Data Register. This register contains the result of
						the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x1c034034,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the last conversion performed on this channel. This will be a binary
								fraction representing the voltage on the AD0[n] pin, as it falls
								within the range of VREFP to VREFN. Zero in the field indicates that
								the voltage on the input pin was less than, equal to, or close to
								that on VREFN, while 0xFFF indicates that the voltage on the input
								was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last
								completed conversion was greater than or equal to the value
								programmed into the designated LOW threshold register (THRn_LOW) but
								less than or equal to the value programmed into the designated HIGH
								threshold register (THRn_HIGH). 0x1 = Below Range: The last
								completed conversion on was less than the value programmed into the
								designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The
								last completed conversion was greater than the value programmed into
								the designated HIGH threshold register (THRn_HIGH). 0x3 =
								Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold
								Crossing detected: The most recent completed conversion on this
								channel had the same relationship (above or below) to the threshold
								value established by the designated LOW threshold register
								(THRn_LOW) as did the previous conversion on this channel. 0x1 =
								Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that
								a threshold crossing in the downward direction has occurred - i.e.
								the previous sample on this channel was above the threshold value
								established by the designated LOW threshold register (THRn_LOW) and
								the current sample is below that threshold. 0x3 = Upward Threshold
								Crossing Detected. Indicates that a threshold crossing in the upward
								direction has occurred - i.e. the previous sample on this channel
								was below the threshold value established by the designated LOW
								threshold register (THRn_LOW) and the current sample is above that
								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that
								this particular register relates to (i.e. this field will contain
								0b0000 for the DAT0 register, 0b0001 for the DAT1 register,
								etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this
								channel completes and overwrites the previous contents of the RESULT
								field before it has been read - i.e. while the DONE bit is set. This
								bit is cleared, along with the DONE bit, whenever this register is
								read or when the data related to this channel is read from either of
								the global SEQn_GDAT registers. This bit (in any of the 12
								registers) will cause an overrun interrupt/DMA trigger to be
								asserted if the overrun interrupt is enabled. While it is allowed to
								include the same channels in both conversion sequences, doing so may
								cause erratic behavior of the DONE and OVERRUN bits in the data
								registers associated with any of the channels that are shared
								between the two sequences. Any erratic OVERRUN behavior will also
								affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an ADC conversion on this channel
								completes. This bit is cleared whenever this register is read or
								when the data related to this channel is read from either of the
								global SEQn_GDAT registers. While it is allowed to include the same
								channels in both conversion sequences, doing so may cause erratic
								behavior of the DONE and OVERRUN bits in the data registers
								associated with any of the channels that are shared between the two
								sequences. Any erratic OVERRUN behavior will also affect overrun
								interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat6{    ///<ADC Channel 0 Data Register. This register contains the result of
						the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x1c034038,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the last conversion performed on this channel. This will be a binary
								fraction representing the voltage on the AD0[n] pin, as it falls
								within the range of VREFP to VREFN. Zero in the field indicates that
								the voltage on the input pin was less than, equal to, or close to
								that on VREFN, while 0xFFF indicates that the voltage on the input
								was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last
								completed conversion was greater than or equal to the value
								programmed into the designated LOW threshold register (THRn_LOW) but
								less than or equal to the value programmed into the designated HIGH
								threshold register (THRn_HIGH). 0x1 = Below Range: The last
								completed conversion on was less than the value programmed into the
								designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The
								last completed conversion was greater than the value programmed into
								the designated HIGH threshold register (THRn_HIGH). 0x3 =
								Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold
								Crossing detected: The most recent completed conversion on this
								channel had the same relationship (above or below) to the threshold
								value established by the designated LOW threshold register
								(THRn_LOW) as did the previous conversion on this channel. 0x1 =
								Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that
								a threshold crossing in the downward direction has occurred - i.e.
								the previous sample on this channel was above the threshold value
								established by the designated LOW threshold register (THRn_LOW) and
								the current sample is below that threshold. 0x3 = Upward Threshold
								Crossing Detected. Indicates that a threshold crossing in the upward
								direction has occurred - i.e. the previous sample on this channel
								was below the threshold value established by the designated LOW
								threshold register (THRn_LOW) and the current sample is above that
								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that
								this particular register relates to (i.e. this field will contain
								0b0000 for the DAT0 register, 0b0001 for the DAT1 register,
								etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this
								channel completes and overwrites the previous contents of the RESULT
								field before it has been read - i.e. while the DONE bit is set. This
								bit is cleared, along with the DONE bit, whenever this register is
								read or when the data related to this channel is read from either of
								the global SEQn_GDAT registers. This bit (in any of the 12
								registers) will cause an overrun interrupt/DMA trigger to be
								asserted if the overrun interrupt is enabled. While it is allowed to
								include the same channels in both conversion sequences, doing so may
								cause erratic behavior of the DONE and OVERRUN bits in the data
								registers associated with any of the channels that are shared
								between the two sequences. Any erratic OVERRUN behavior will also
								affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an ADC conversion on this channel
								completes. This bit is cleared whenever this register is read or
								when the data related to this channel is read from either of the
								global SEQn_GDAT registers. While it is allowed to include the same
								channels in both conversion sequences, doing so may cause erratic
								behavior of the DONE and OVERRUN bits in the data registers
								associated with any of the channels that are shared between the two
								sequences. Any erratic OVERRUN behavior will also affect overrun
								interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat7{    ///<ADC Channel 0 Data Register. This register contains the result of
						the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x1c03403c,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the last conversion performed on this channel. This will be a binary
								fraction representing the voltage on the AD0[n] pin, as it falls
								within the range of VREFP to VREFN. Zero in the field indicates that
								the voltage on the input pin was less than, equal to, or close to
								that on VREFN, while 0xFFF indicates that the voltage on the input
								was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last
								completed conversion was greater than or equal to the value
								programmed into the designated LOW threshold register (THRn_LOW) but
								less than or equal to the value programmed into the designated HIGH
								threshold register (THRn_HIGH). 0x1 = Below Range: The last
								completed conversion on was less than the value programmed into the
								designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The
								last completed conversion was greater than the value programmed into
								the designated HIGH threshold register (THRn_HIGH). 0x3 =
								Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold
								Crossing detected: The most recent completed conversion on this
								channel had the same relationship (above or below) to the threshold
								value established by the designated LOW threshold register
								(THRn_LOW) as did the previous conversion on this channel. 0x1 =
								Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that
								a threshold crossing in the downward direction has occurred - i.e.
								the previous sample on this channel was above the threshold value
								established by the designated LOW threshold register (THRn_LOW) and
								the current sample is below that threshold. 0x3 = Upward Threshold
								Crossing Detected. Indicates that a threshold crossing in the upward
								direction has occurred - i.e. the previous sample on this channel
								was below the threshold value established by the designated LOW
								threshold register (THRn_LOW) and the current sample is above that
								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that
								this particular register relates to (i.e. this field will contain
								0b0000 for the DAT0 register, 0b0001 for the DAT1 register,
								etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this
								channel completes and overwrites the previous contents of the RESULT
								field before it has been read - i.e. while the DONE bit is set. This
								bit is cleared, along with the DONE bit, whenever this register is
								read or when the data related to this channel is read from either of
								the global SEQn_GDAT registers. This bit (in any of the 12
								registers) will cause an overrun interrupt/DMA trigger to be
								asserted if the overrun interrupt is enabled. While it is allowed to
								include the same channels in both conversion sequences, doing so may
								cause erratic behavior of the DONE and OVERRUN bits in the data
								registers associated with any of the channels that are shared
								between the two sequences. Any erratic OVERRUN behavior will also
								affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an ADC conversion on this channel
								completes. This bit is cleared whenever this register is read or
								when the data related to this channel is read from either of the
								global SEQn_GDAT registers. While it is allowed to include the same
								channels in both conversion sequences, doing so may cause erratic
								behavior of the DONE and OVERRUN bits in the data registers
								associated with any of the channels that are shared between the two
								sequences. Any erratic OVERRUN behavior will also affect overrun
								interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat8{    ///<ADC Channel 0 Data Register. This register contains the result of
						the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x1c034040,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the last conversion performed on this channel. This will be a binary
								fraction representing the voltage on the AD0[n] pin, as it falls
								within the range of VREFP to VREFN. Zero in the field indicates that
								the voltage on the input pin was less than, equal to, or close to
								that on VREFN, while 0xFFF indicates that the voltage on the input
								was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last
								completed conversion was greater than or equal to the value
								programmed into the designated LOW threshold register (THRn_LOW) but
								less than or equal to the value programmed into the designated HIGH
								threshold register (THRn_HIGH). 0x1 = Below Range: The last
								completed conversion on was less than the value programmed into the
								designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The
								last completed conversion was greater than the value programmed into
								the designated HIGH threshold register (THRn_HIGH). 0x3 =
								Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold
								Crossing detected: The most recent completed conversion on this
								channel had the same relationship (above or below) to the threshold
								value established by the designated LOW threshold register
								(THRn_LOW) as did the previous conversion on this channel. 0x1 =
								Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that
								a threshold crossing in the downward direction has occurred - i.e.
								the previous sample on this channel was above the threshold value
								established by the designated LOW threshold register (THRn_LOW) and
								the current sample is below that threshold. 0x3 = Upward Threshold
								Crossing Detected. Indicates that a threshold crossing in the upward
								direction has occurred - i.e. the previous sample on this channel
								was below the threshold value established by the designated LOW
								threshold register (THRn_LOW) and the current sample is above that
								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that
								this particular register relates to (i.e. this field will contain
								0b0000 for the DAT0 register, 0b0001 for the DAT1 register,
								etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this
								channel completes and overwrites the previous contents of the RESULT
								field before it has been read - i.e. while the DONE bit is set. This
								bit is cleared, along with the DONE bit, whenever this register is
								read or when the data related to this channel is read from either of
								the global SEQn_GDAT registers. This bit (in any of the 12
								registers) will cause an overrun interrupt/DMA trigger to be
								asserted if the overrun interrupt is enabled. While it is allowed to
								include the same channels in both conversion sequences, doing so may
								cause erratic behavior of the DONE and OVERRUN bits in the data
								registers associated with any of the channels that are shared
								between the two sequences. Any erratic OVERRUN behavior will also
								affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an ADC conversion on this channel
								completes. This bit is cleared whenever this register is read or
								when the data related to this channel is read from either of the
								global SEQn_GDAT registers. While it is allowed to include the same
								channels in both conversion sequences, doing so may cause erratic
								behavior of the DONE and OVERRUN bits in the data registers
								associated with any of the channels that are shared between the two
								sequences. Any erratic OVERRUN behavior will also affect overrun
								interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat9{    ///<ADC Channel 0 Data Register. This register contains the result of
						the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x1c034044,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the last conversion performed on this channel. This will be a binary
								fraction representing the voltage on the AD0[n] pin, as it falls
								within the range of VREFP to VREFN. Zero in the field indicates that
								the voltage on the input pin was less than, equal to, or close to
								that on VREFN, while 0xFFF indicates that the voltage on the input
								was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last
								completed conversion was greater than or equal to the value
								programmed into the designated LOW threshold register (THRn_LOW) but
								less than or equal to the value programmed into the designated HIGH
								threshold register (THRn_HIGH). 0x1 = Below Range: The last
								completed conversion on was less than the value programmed into the
								designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The
								last completed conversion was greater than the value programmed into
								the designated HIGH threshold register (THRn_HIGH). 0x3 =
								Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold
								Crossing detected: The most recent completed conversion on this
								channel had the same relationship (above or below) to the threshold
								value established by the designated LOW threshold register
								(THRn_LOW) as did the previous conversion on this channel. 0x1 =
								Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that
								a threshold crossing in the downward direction has occurred - i.e.
								the previous sample on this channel was above the threshold value
								established by the designated LOW threshold register (THRn_LOW) and
								the current sample is below that threshold. 0x3 = Upward Threshold
								Crossing Detected. Indicates that a threshold crossing in the upward
								direction has occurred - i.e. the previous sample on this channel
								was below the threshold value established by the designated LOW
								threshold register (THRn_LOW) and the current sample is above that
								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that
								this particular register relates to (i.e. this field will contain
								0b0000 for the DAT0 register, 0b0001 for the DAT1 register,
								etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this
								channel completes and overwrites the previous contents of the RESULT
								field before it has been read - i.e. while the DONE bit is set. This
								bit is cleared, along with the DONE bit, whenever this register is
								read or when the data related to this channel is read from either of
								the global SEQn_GDAT registers. This bit (in any of the 12
								registers) will cause an overrun interrupt/DMA trigger to be
								asserted if the overrun interrupt is enabled. While it is allowed to
								include the same channels in both conversion sequences, doing so may
								cause erratic behavior of the DONE and OVERRUN bits in the data
								registers associated with any of the channels that are shared
								between the two sequences. Any erratic OVERRUN behavior will also
								affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an ADC conversion on this channel
								completes. This bit is cleared whenever this register is read or
								when the data related to this channel is read from either of the
								global SEQn_GDAT registers. While it is allowed to include the same
								channels in both conversion sequences, doing so may cause erratic
								behavior of the DONE and OVERRUN bits in the data registers
								associated with any of the channels that are shared between the two
								sequences. Any erratic OVERRUN behavior will also affect overrun
								interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat10{    ///<ADC Channel 0 Data Register. This register contains the result of
						the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x1c034048,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the last conversion performed on this channel. This will be a binary
								fraction representing the voltage on the AD0[n] pin, as it falls
								within the range of VREFP to VREFN. Zero in the field indicates that
								the voltage on the input pin was less than, equal to, or close to
								that on VREFN, while 0xFFF indicates that the voltage on the input
								was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last
								completed conversion was greater than or equal to the value
								programmed into the designated LOW threshold register (THRn_LOW) but
								less than or equal to the value programmed into the designated HIGH
								threshold register (THRn_HIGH). 0x1 = Below Range: The last
								completed conversion on was less than the value programmed into the
								designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The
								last completed conversion was greater than the value programmed into
								the designated HIGH threshold register (THRn_HIGH). 0x3 =
								Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold
								Crossing detected: The most recent completed conversion on this
								channel had the same relationship (above or below) to the threshold
								value established by the designated LOW threshold register
								(THRn_LOW) as did the previous conversion on this channel. 0x1 =
								Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that
								a threshold crossing in the downward direction has occurred - i.e.
								the previous sample on this channel was above the threshold value
								established by the designated LOW threshold register (THRn_LOW) and
								the current sample is below that threshold. 0x3 = Upward Threshold
								Crossing Detected. Indicates that a threshold crossing in the upward
								direction has occurred - i.e. the previous sample on this channel
								was below the threshold value established by the designated LOW
								threshold register (THRn_LOW) and the current sample is above that
								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that
								this particular register relates to (i.e. this field will contain
								0b0000 for the DAT0 register, 0b0001 for the DAT1 register,
								etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this
								channel completes and overwrites the previous contents of the RESULT
								field before it has been read - i.e. while the DONE bit is set. This
								bit is cleared, along with the DONE bit, whenever this register is
								read or when the data related to this channel is read from either of
								the global SEQn_GDAT registers. This bit (in any of the 12
								registers) will cause an overrun interrupt/DMA trigger to be
								asserted if the overrun interrupt is enabled. While it is allowed to
								include the same channels in both conversion sequences, doing so may
								cause erratic behavior of the DONE and OVERRUN bits in the data
								registers associated with any of the channels that are shared
								between the two sequences. Any erratic OVERRUN behavior will also
								affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an ADC conversion on this channel
								completes. This bit is cleared whenever this register is read or
								when the data related to this channel is read from either of the
								global SEQn_GDAT registers. While it is allowed to include the same
								channels in both conversion sequences, doing so may cause erratic
								behavior of the DONE and OVERRUN bits in the data registers
								associated with any of the channels that are shared between the two
								sequences. Any erratic OVERRUN behavior will also affect overrun
								interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonedat11{    ///<ADC Channel 0 Data Register. This register contains the result of
						the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x1c03404c,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit ADC conversion result from
								the last conversion performed on this channel. This will be a binary
								fraction representing the voltage on the AD0[n] pin, as it falls
								within the range of VREFP to VREFN. Zero in the field indicates that
								the voltage on the input pin was less than, equal to, or close to
								that on VREFN, while 0xFFF indicates that the voltage on the input
								was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        namespace ResultValC{
        }
        ///Threshold Range Comparison result. 0x0 = In Range: The last
								completed conversion was greater than or equal to the value
								programmed into the designated LOW threshold register (THRn_LOW) but
								less than or equal to the value programmed into the designated HIGH
								threshold register (THRn_HIGH). 0x1 = Below Range: The last
								completed conversion on was less than the value programmed into the
								designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The
								last completed conversion was greater than the value programmed into
								the designated HIGH threshold register (THRn_HIGH). 0x3 =
								Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        namespace ThcmprangeValC{
        }
        ///Threshold Crossing Comparison result. 0x0 = No threshold
								Crossing detected: The most recent completed conversion on this
								channel had the same relationship (above or below) to the threshold
								value established by the designated LOW threshold register
								(THRn_LOW) as did the previous conversion on this channel. 0x1 =
								Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that
								a threshold crossing in the downward direction has occurred - i.e.
								the previous sample on this channel was above the threshold value
								established by the designated LOW threshold register (THRn_LOW) and
								the current sample is below that threshold. 0x3 = Upward Threshold
								Crossing Detected. Indicates that a threshold crossing in the upward
								direction has occurred - i.e. the previous sample on this channel
								was below the threshold value established by the designated LOW
								threshold register (THRn_LOW) and the current sample is above that
								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        namespace ThcmpcrossValC{
        }
        ///This field is hard-coded to contain the channel number that
								this particular register relates to (i.e. this field will contain
								0b0000 for the DAT0 register, 0b0001 for the DAT1 register,
								etc)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///This bit will be set to a 1 if a new conversion on this
								channel completes and overwrites the previous contents of the RESULT
								field before it has been read - i.e. while the DONE bit is set. This
								bit is cleared, along with the DONE bit, whenever this register is
								read or when the data related to this channel is read from either of
								the global SEQn_GDAT registers. This bit (in any of the 12
								registers) will cause an overrun interrupt/DMA trigger to be
								asserted if the overrun interrupt is enabled. While it is allowed to
								include the same channels in both conversion sequences, doing so may
								cause erratic behavior of the DONE and OVERRUN bits in the data
								registers associated with any of the channels that are shared
								between the two sequences. Any erratic OVERRUN behavior will also
								affect overrun interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an ADC conversion on this channel
								completes. This bit is cleared whenever this register is read or
								when the data related to this channel is read from either of the
								global SEQn_GDAT registers. While it is allowed to include the same
								channels in both conversion sequences, doing so may cause erratic
								behavior of the DONE and OVERRUN bits in the data registers
								associated with any of the channels that are shared between the two
								sequences. Any erratic OVERRUN behavior will also affect overrun
								interrupt generation, if enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
        namespace DatavalidValC{
        }
    }
    namespace Nonethr0Low{    ///<ADC Low Compare Threshold Register 0: Contains the lower threshold
						level for automatic threshold comparison for any channels linked to
						threshold pair 0.
        using Addr = Register::Address<0x1c034050,0xffff000f,0,unsigned>;
        ///Low threshold value against which ADC results will be
								compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrlow{}; 
        namespace ThrlowValC{
        }
    }
    namespace Nonethr1Low{    ///<ADC Low Compare Threshold Register 1: Contains the lower threshold
						level for automatic threshold comparison for any channels linked to
						threshold pair 1.
        using Addr = Register::Address<0x1c034054,0xffff000f,0,unsigned>;
        ///Low threshold value against which ADC results will be
								compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrlow{}; 
        namespace ThrlowValC{
        }
    }
    namespace Nonethr0High{    ///<ADC High Compare Threshold Register 0: Contains the upper threshold
						level for automatic threshold comparison for any channels linked to
						threshold pair 0.
        using Addr = Register::Address<0x1c034058,0xffff000f,0,unsigned>;
        ///High threshold value against which ADC results will be
								compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrhigh{}; 
        namespace ThrhighValC{
        }
    }
    namespace Nonethr1High{    ///<ADC High Compare Threshold Register 1: Contains the upper threshold
						level for automatic threshold comparison for any channels linked to
						threshold pair 1.
        using Addr = Register::Address<0x1c03405c,0xffff000f,0,unsigned>;
        ///High threshold value against which ADC results will be
								compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrhigh{}; 
        namespace ThrhighValC{
        }
    }
    namespace NonechanThrsel{    ///<ADC Channel-Threshold Select Register. Specifies which set of
						threshold compare registers are to be used for each channel
        using Addr = Register::Address<0x1c034060,0xfffff000,0,unsigned>;
        ///Threshold select for channel 0.
        enum class Ch0thrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Results for this channel will be
										compared against the threshold levels indicated in the
										THR0_LOW and THR0_HIGH registers.
            threshold1=0x00000001,     ///<Threshold 1. Results for this channel will be
										compared against the threshold levels indicated in the
										THR1_LOW and THR1_HIGH registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0thrselVal> ch0Thrsel{}; 
        namespace Ch0thrselValC{
            constexpr Register::FieldValue<decltype(ch0Thrsel),Ch0thrselVal::threshold0> threshold0{};
            constexpr Register::FieldValue<decltype(ch0Thrsel),Ch0thrselVal::threshold1> threshold1{};
        }
        ///Threshold select for channel 1. See description for channel
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1Thrsel{}; 
        namespace Ch1thrselValC{
        }
        ///Threshold select for channel 2. See description for channel
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2Thrsel{}; 
        namespace Ch2thrselValC{
        }
        ///Threshold select for channel 3. See description for channel
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3Thrsel{}; 
        namespace Ch3thrselValC{
        }
        ///Threshold select for channel 4. See description for channel
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4Thrsel{}; 
        namespace Ch4thrselValC{
        }
        ///Threshold select for channel 5. See description for channel
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5Thrsel{}; 
        namespace Ch5thrselValC{
        }
        ///Threshold select for channel 6. See description for channel
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6Thrsel{}; 
        namespace Ch6thrselValC{
        }
        ///Threshold select for channel 7. See description for channel
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7Thrsel{}; 
        namespace Ch7thrselValC{
        }
        ///Threshold select for channel 8. See description for channel
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8Thrsel{}; 
        namespace Ch8thrselValC{
        }
        ///Threshold select for channel 9. See description for channel
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9Thrsel{}; 
        namespace Ch9thrselValC{
        }
        ///Threshold select for channel 10. See description for
								channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10Thrsel{}; 
        namespace Ch10thrselValC{
        }
        ///Threshold select for channel 11. See description for
								channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11Thrsel{}; 
        namespace Ch11thrselValC{
        }
    }
    namespace Noneinten{    ///<ADC Interrupt Enable Register. This register contains enable bits
						that enable the sequence-A, sequence-B, threshold compare and data overrun
						interrupts to be generated.
        using Addr = Register::Address<0x1c034064,0xf8000000,0,unsigned>;
        ///Sequence A interrupt enable.
        enum class SeqaintenVal {
            disabled=0x00000000,     ///<Disabled. The sequence A interrupt/DMA trigger is
										disabled.
            enabled=0x00000001,     ///<Enabled. The sequence A interrupt/DMA trigger is
										enabled and will be asserted either upon completion of each
										individual conversion performed as part of sequence A, or
										upon completion of the entire A sequence of conversions,
										depending on the MODE bit in the SEQA_CTRL
										register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SeqaintenVal> seqaInten{}; 
        namespace SeqaintenValC{
            constexpr Register::FieldValue<decltype(seqaInten),SeqaintenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqaInten),SeqaintenVal::enabled> enabled{};
        }
        ///Sequence B interrupt enable.
        enum class SeqbintenVal {
            disabled=0x00000000,     ///<Disabled. The sequence B interrupt/DMA trigger is
										disabled.
            enabled=0x00000001,     ///<Enabled. The sequence B interrupt/DMA trigger is
										enabled and will be asserted either upon completion of each
										individual conversion performed as part of sequence B, or
										upon completion of the entire B sequence of conversions,
										depending on the MODE bit in the SEQB_CTRL
										register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SeqbintenVal> seqbInten{}; 
        namespace SeqbintenValC{
            constexpr Register::FieldValue<decltype(seqbInten),SeqbintenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(seqbInten),SeqbintenVal::enabled> enabled{};
        }
        ///Overrun interrupt enable.
        enum class OvrintenVal {
            disabled=0x00000000,     ///<Disabled. The overrun interrupt is
										disabled.
            enabled=0x00000001,     ///<Enabled. The overrun interrupt is enabled.
										Detection of an overrun condition on any of the 12 channel
										data registers will cause an overrun interrupt/DMA trigger.
										In addition, if the MODE bit for a particular sequence is 0,
										then an overrun in the global data register for that
										sequence will also cause this interrupt/DMA trigger to be
										asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,OvrintenVal> ovrInten{}; 
        namespace OvrintenValC{
            constexpr Register::FieldValue<decltype(ovrInten),OvrintenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrInten),OvrintenVal::enabled> enabled{};
        }
        ///Threshold comparison interrupt enable for channel
								0.
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
        ///Channel 1 threshold comparison interrupt enable. See
								description for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> adcmpinten1{}; 
        namespace Adcmpinten1ValC{
        }
        ///Channel 2 threshold comparison interrupt enable. See
								description for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,unsigned> adcmpinten2{}; 
        namespace Adcmpinten2ValC{
        }
        ///Channel 3 threshold comparison interrupt enable. See
								description for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> adcmpinten3{}; 
        namespace Adcmpinten3ValC{
        }
        ///Channel 4 threshold comparison interrupt enable. See
								description for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> adcmpinten4{}; 
        namespace Adcmpinten4ValC{
        }
        ///Channel 5 threshold comparison interrupt enable. See
								description for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> adcmpinten5{}; 
        namespace Adcmpinten5ValC{
        }
        ///Channel 6 threshold comparison interrupt enable. See
								description for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> adcmpinten6{}; 
        namespace Adcmpinten6ValC{
        }
        ///Channel 7 threshold comparison interrupt enable. See
								description for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> adcmpinten7{}; 
        namespace Adcmpinten7ValC{
        }
        ///Channel 8 threshold comparison interrupt enable. See
								description for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> adcmpinten8{}; 
        namespace Adcmpinten8ValC{
        }
        ///Channel 9 threshold comparison interrupt enable. See
								description for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> adcmpinten9{}; 
        namespace Adcmpinten9ValC{
        }
        ///Channel 10 threshold comparison interrupt enable. See
								description for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> adcmpinten10{}; 
        namespace Adcmpinten10ValC{
        }
        ///Channel 21 threshold comparison interrupt enable. See
								description for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> adcmpinten11{}; 
        namespace Adcmpinten11ValC{
        }
    }
    namespace Noneflags{    ///<ADC Flags Register. Contains the four interrupt/DMA trigger flags
						and the individual component overrun and threshold-compare flags. (The
						overrun bits replicate information stored in the result
						registers).
        using Addr = Register::Address<0x1c034068,0x0c000000,0,unsigned>;
        ///Threshold comparison event on Channel 0. Set to 1 upon
								either an out-of-range result or a threshold-crossing result if
								enabled to do so in the INTEN register. This bit is cleared by
								writing a 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> thcmp0{}; 
        namespace Thcmp0ValC{
        }
        ///Threshold comparison event on Channel 1. See description
								for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> thcmp1{}; 
        namespace Thcmp1ValC{
        }
        ///Threshold comparison event on Channel 2. See description
								for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> thcmp2{}; 
        namespace Thcmp2ValC{
        }
        ///Threshold comparison event on Channel 3. See description
								for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> thcmp3{}; 
        namespace Thcmp3ValC{
        }
        ///Threshold comparison event on Channel 4. See description
								for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> thcmp4{}; 
        namespace Thcmp4ValC{
        }
        ///Threshold comparison event on Channel 5. See description
								for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> thcmp5{}; 
        namespace Thcmp5ValC{
        }
        ///Threshold comparison event on Channel 6. See description
								for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> thcmp6{}; 
        namespace Thcmp6ValC{
        }
        ///Threshold comparison event on Channel 7. See description
								for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> thcmp7{}; 
        namespace Thcmp7ValC{
        }
        ///Threshold comparison event on Channel 8. See description
								for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> thcmp8{}; 
        namespace Thcmp8ValC{
        }
        ///Threshold comparison event on Channel 9. See description
								for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> thcmp9{}; 
        namespace Thcmp9ValC{
        }
        ///Threshold comparison event on Channel 10. See description
								for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> thcmp10{}; 
        namespace Thcmp10ValC{
        }
        ///Threshold comparison event on Channel 11. See description
								for channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> thcmp11{}; 
        namespace Thcmp11ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register
								for ADC channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> overrun0{}; 
        namespace Overrun0ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register
								for ADC channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> overrun1{}; 
        namespace Overrun1ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register
								for ADC channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> overrun2{}; 
        namespace Overrun2ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register
								for ADC channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> overrun3{}; 
        namespace Overrun3ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register
								for ADC channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> overrun4{}; 
        namespace Overrun4ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register
								for ADC channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> overrun5{}; 
        namespace Overrun5ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register
								for ADC channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> overrun6{}; 
        namespace Overrun6ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register
								for ADC channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> overrun7{}; 
        namespace Overrun7ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register
								for ADC channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> overrun8{}; 
        namespace Overrun8ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register
								for ADC channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> overrun9{}; 
        namespace Overrun9ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register
								for ADC channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> overrun10{}; 
        namespace Overrun10ValC{
        }
        ///Mirrors the OVERRRUN status flag from the result register
								for ADC channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> overrun11{}; 
        namespace Overrun11ValC{
        }
        ///Mirrors the global OVERRUN status flag in the SEQA_GDAT
								register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> seqaOvr{}; 
        namespace SeqaovrValC{
        }
        ///Mirrors the global OVERRUN status flag in the SEQB_GDAT
								register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> seqbOvr{}; 
        namespace SeqbovrValC{
        }
        ///Sequence A interrupt/DMA trigger. If the MODE bit in the
								SEQA_CTRL register is 0, this flag will mirror the DATAVALID bit in
								the sequence A global data register (SEQA_GDAT), which is set at the
								end of every ADC conversion performed as part of sequence A. It will
								be cleared automatically when the SEQA_GDAT register is read. If the
								MODE bit in the SEQA_CTRL register is 1, this flag will be set upon
								completion of an entire A sequence. In this case it must be cleared
								by writing a 1 to this SEQA_INT bit. This interrupt must be enabled
								in the INTEN register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> seqaInt{}; 
        namespace SeqaintValC{
        }
        ///Sequence A interrupt/DMA trigger. If the MODE bit in the
								SEQB_CTRL register is 0, this flag will mirror the DATAVALID bit in
								the sequence A global data register (SEQB_GDAT), which is set at the
								end of every ADC conversion performed as part of sequence B. It will
								be cleared automatically when the SEQB_GDAT register is read. If the
								MODE bit in the SEQB_CTRL register is 1, this flag will be set upon
								completion of an entire B sequence. In this case it must be cleared
								by writing a 1 to this SEQB_INT bit. This interrupt must be enabled
								in the INTEN register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> seqbInt{}; 
        namespace SeqbintValC{
        }
        ///Threshold Comparison Interrupt. This bit will be set if any
								of the THCMP flags in the lower bits of this register are set to 1
								(due to an enabled out-of-range or threshold-crossing event on any
								channel). Each type of threshold comparison interrupt on each
								channel must be individually enabled in the INTEN register to cause
								this interrupt. This bit will be cleared when all of the individual
								threshold flags are cleared via writing 1s to those
								bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> thcmpInt{}; 
        namespace ThcmpintValC{
        }
        ///Overrun Interrupt flag. Any overrun bit in any of the
								individual channel data registers will cause this interrupt. In
								addition, if the MODE bit in either of the SEQn_CTRL registers is 0
								then the OVERRUN bit in the corresponding SEQn_GDAT register will
								also cause this interrupt. This interrupt must be enabled in the
								INTEN register. This bit will be cleared when all of the individual
								overrun bits have been cleared via reading the corresponding data
								registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ovrInt{}; 
        namespace OvrintValC{
        }
    }
    namespace Nonestartup{    ///<ADC Startup Register (typically only used by the ADC
						API).
        using Addr = Register::Address<0x1c03406c,0xfffffffc,0,unsigned>;
        ///ADC Enable bit. This bit can only be set to a 1 by
								software. It is cleared automatically whenever the ADC is powered
								down. This bit must not be set until at least 10 microseconds after
								the ADC is powered up (typically by altering a system-level ADC
								power control bit).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcEna{}; 
        namespace AdcenaValC{
        }
        ///tbd
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcInt{}; 
        namespace AdcintValC{
        }
    }
    namespace Nonecalib{    ///<ADC Calibration Register.
        using Addr = Register::Address<0x1c034070,0xfffffe00,0,unsigned>;
        ///Calibration request. Setting this bit will launch an ADC
								calibration cycle. This bit can only be set to a 1 by software. It
								is cleared automatically when the calibration cycle
								completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> calib{}; 
        namespace CalibValC{
        }
        ///Calibration required. This read-only bit indicates if
								calibration is required when enabling the ADC. CALREQD will be 1 if
								no calibration has been run since the chip was powered-up and if the
								BYPASSCAL bit in the ADCTRL register is low. The ADC API will test
								this bit to determine whether to initiate a calibration cycle or
								whether to set the ADC_INIT bit (in the ADSTARTUP register) to
								launch the ADC initialization process which includes a dummy
								conversion cycle. Note: A dummy conversion cycle requires
								approximately 6 ADC clocks as opposed to 81 clocks required for
								calibration.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> calreqd{}; 
        namespace CalreqdValC{
        }
        ///Calibration Value. This read-only field displays the
								calibration value established during last calibration cycle. This
								value is not typically of any use to the user.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,2),Register::ReadWriteAccess,unsigned> calvalue{}; 
        namespace CalvalueValC{
        }
    }
}
