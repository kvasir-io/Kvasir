#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//12-bit ADC controller ADC0/1 
    namespace Nonectrl{    ///<A/D Control Register. Contains the clock divide value, enable bits for each sequence and the A/D power-down bit.
        using Addr = Register::Address<0x40000000,0xbffff800,0,unsigned>;
        ///In synchronous mode only, the system clock is divided by this value plus one to produce the clock for the A/D converter, which should be less than or equal to 50 MHz (up to 100 MHz in 10-bit mode).  Typically, software should program the smallest value in this field that yields this maximum clock rate or slightly less, but in certain cases (such as a high-impedance analog source) a slower clock may be desirable. This field is ignored in the asynchronous operating mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Select clock mode.
        enum class asynmodeVal {
            synchronousMode=0x00000000,     ///<Synchronous mode.  The ADC clock is derived from the system clock based on the divide value selected in the CLKDIV field. The ADC clock will be started in a controlled fashion in response to a trigger to eliminate any uncertainty in the launching of an ADC conversion in response to any synchronous (on-chip) trigger. In Synchronous mode with the SYNCBYPASS bit set, sampling of the A/D input and start of conversion will initiate exactly 2 system clocks after the leading edge of a (synchronous) trigger pulse.
            asynchronousMode=0x00000001,     ///<Asynchronous mode. The ADC clock is based on the output of the asynchronous ADC clock divider ADCASYNCCLKSEL in the SYSCON block.  The frequency of this clock is limited to 50 MHz max (100 MHz in 10-bit mode). In addition, the ADC clock must never be faster than 10x the system clock.
        };
        namespace asynmodeValC{
            constexpr MPL::Value<asynmodeVal,asynmodeVal::synchronousMode> synchronousMode{};
            constexpr MPL::Value<asynmodeVal,asynmodeVal::asynchronousMode> asynchronousMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,asynmodeVal> asynmode{}; 
        ///Select 10-bit conversion. In 10-bit mode higher conversion rates of up to 100 MHz are supported. A/D resolution is reduced to ten bits, but the clock rate (set via the CLKDIV field) can be increased up to 100 MHz to achieve a conversion rate of up to four million samples per second. The two LSBs of the result data are forced to zero.
        enum class mode10bitVal {
            disabled=0x00000000,     ///<Disabled. The 10-bit/high-conversion rate mode is disabled.
            enabled=0x00000001,     ///<Enabled. The 10-bit/high-conversion rate is enabled.
        };
        namespace mode10bitValC{
            constexpr MPL::Value<mode10bitVal,mode10bitVal::disabled> disabled{};
            constexpr MPL::Value<mode10bitVal,mode10bitVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,mode10bitVal> mode10bit{}; 
        ///Select low-power ADC mode. The analog circuitry is automatically powered-down when no conversions are taking place. When any (hardware or software) triggering event is detected, the analog circuitry is enabled. After the required start-up time, the requested conversion will be launched. Once the conversion completes, the analog-circuitry will again be powered-down provided no further conversions are pending. Using this mode can save an appreciable amount of current (approximately 2.5 mA) when conversions are required relatively infrequently. The penalty for using this mode is an approximately 15 ADC clock delay (30 clocks in 10-bit mode), based on the frequency specified in the CLKDIV field, from the time the trigger event occurs until sampling of the A/D input commences. This mode will NOT power-up the A/D if the ADC_ENA bit is low.
        enum class lpwrmodeVal {
            disabled=0x00000000,     ///<Disabled. The low-power ADC mode is disabled.  The analog circuitry remains activated even when no conversions are requested.
            enabled=0x00000001,     ///<Enabled. The low-power ADC mode is enabled.
        };
        namespace lpwrmodeValC{
            constexpr MPL::Value<lpwrmodeVal,lpwrmodeVal::disabled> disabled{};
            constexpr MPL::Value<lpwrmodeVal,lpwrmodeVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,lpwrmodeVal> lpwrmode{}; 
        ///Writing a 1 to this bit initiates a self-calibration cycle. This bit will be automatically cleared by hardware after the calibration cycle is complete. Other bits of this register may be written to concurrently with setting this bit, however once this bit has been set no further writes to this register are permitted until the full calibration cycle has ended.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> calmode{}; 
    }
    namespace Noneinsel{    ///<A/D Input Select Register: Selects between external pin and internal source for various channels
        using Addr = Register::Address<0x40000004,0xfffffff0,0,unsigned>;
        ///This field selects the input source for channel 0. All other values are reserved.
        enum class ad0selVal {
            adcn0Pin=0x00000000,     ///<ADCn_0 pin. Voltage on ADC channel 0 input.
            coreVoltageRegulat=0x00000001,     ///<Core voltage regulator output (1.2V to 1.8V). If the WRAPEN field is 0x2, the core voltage regulator output is also is output on the ADC0/1_0 pin.
            internalVoltageRef=0x00000002,     ///<Internal voltage reference. If the WRAPEN field is 0x2, the internal voltage reference is also is output on the ADCn_0 pin.
            temperatureSensor=0x00000003,     ///<Temperature Sensor. If the WRAPEN field is 0x2, the temperature sensor voltage is also is output on the ADCn_0 pin.
            vddadiv2=0x00000004,     ///<VDDA/2.
            noConnectionOrLoa=0x0000000f,     ///<No connection or load
        };
        namespace ad0selValC{
            constexpr MPL::Value<ad0selVal,ad0selVal::adcn0Pin> adcn0Pin{};
            constexpr MPL::Value<ad0selVal,ad0selVal::coreVoltageRegulat> coreVoltageRegulat{};
            constexpr MPL::Value<ad0selVal,ad0selVal::internalVoltageRef> internalVoltageRef{};
            constexpr MPL::Value<ad0selVal,ad0selVal::temperatureSensor> temperatureSensor{};
            constexpr MPL::Value<ad0selVal,ad0selVal::vddadiv2> vddadiv2{};
            constexpr MPL::Value<ad0selVal,ad0selVal::noConnectionOrLoa> noConnectionOrLoa{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,ad0selVal> ad0sel{}; 
    }
    namespace NoneseqaCtrl{    ///<A/D Conversion Sequence-A control Register: Controls triggering and channel selection for conversion sequence-A. Also specifies interrupt mode for sequence-A.
        using Addr = Register::Address<0x40000008,0x03f30000,0,unsigned>;
        ///Selects which one or more of the twelve channels will be sampled and converted when this sequence is launched. A 1 in any bit of this field will cause the corresponding channel to be included in the conversion sequence, where bit 0 corresponds to channel 0, bit 1 to channel 1 and so forth.  When this conversion sequence is triggered, either by a hardware trigger or via software command, A/D conversions will be performed on each enabled channel, in sequence, beginning with the lowest-ordered channel.  This field can ONLY be changed while the SEQA_ENA bit (bit 31) is LOW. It is allowed to change this field and set bit 31 in the same write.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> channels{}; 
        ///Selects which of the available hardware trigger sources will cause this conversion sequence to be initiated. Program the trigger input number in this field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> trigger{}; 
        ///Select the polarity of the selected input trigger for this conversion sequence.
        enum class trigpolVal {
            negativeEdge=0x00000000,     ///<Negative edge. A negative edge launches the conversion sequence on the selected trigger input.
            positiveEdge=0x00000001,     ///<Positive edge. A positive edge launches the conversion sequence on the selected trigger input.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::negativeEdge> negativeEdge{};
            constexpr MPL::Value<trigpolVal,trigpolVal::positiveEdge> positiveEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Setting this bit allows the hardware trigger input to bypass  synchronization flip-flops stages and therefore shorten the time between the trigger input signal and the start of a conversion. There are slightly different criteria for whether or not this bit can be set depending on the clock operating mode: Synchronous mode: Synchronization may be bypassed (this bit may be set) if the selected trigger source is already synchronous with the main system clock (eg. coming from an on-chip, system-clock-based timer). Whether this bit is set or not, a trigger pulse must be maintained for at least one system clock period. Asynchronous mode: Synchronization may be bypassed (this bit may be set) if it is certain that the duration of a trigger input pulse will be at least one cycle of the ADC clock (regardless of whether the trigger comes from and on-chip or off-chip source). If this bit is NOT set, the trigger pulse must at least be maintained for one system clock period.
        enum class syncbypassVal {
            enableSynchronizati=0x00000000,     ///<Enable synchronization. The hardware trigger bypass is not enabled.
            bypassSynchronizati=0x00000001,     ///<Bypass synchronization. The hardware trigger bypass is enabled.
        };
        namespace syncbypassValC{
            constexpr MPL::Value<syncbypassVal,syncbypassVal::enableSynchronizati> enableSynchronizati{};
            constexpr MPL::Value<syncbypassVal,syncbypassVal::bypassSynchronizati> bypassSynchronizati{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,syncbypassVal> syncbypass{}; 
        ///Writing a 1 to this field will launch one pass through this conversion sequence. The behavior will be identical to a sequence triggered by a hardware trigger. Do not write 1 to this bit if the BURST bit is set. This bit is only set to a 1 momentarily when written-to to launch a conversion sequence. It will consequently always read-back as a zero.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> start{}; 
        ///Writing a 1 to this bit will cause this conversion sequence to be continuously cycled through. Other sequence A triggers will be ignored while this bit is set. Repeated conversions can be halted by clearing this bit. The sequence currently in progress will be completed before conversions are terminated.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> burst{}; 
        ///When this bit is set, a hardware trigger or a write to the START bit will launch a single conversion on the next channel in the sequence instead of the default response of launching an entire sequence of conversions. Once all of the channels comprising a sequence have been converted, a subsequent trigger will repeat the sequence beginning with the first enabled channel. Interrupt generation will still occur either after each individual conversion or at the end of the entire sequence, depending on the state of the MODE bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> singlestep{}; 
        ///Set priority for sequence A.
        enum class lowprioVal {
            lowPriority=0x00000000,     ///<Low priority. Any B trigger which occurs while an A conversion sequence is active will be ignored and lost.
            highPriority=0x00000001,     ///<High priority.  Setting this bit to a 1 will permit any enabled B sequence trigger (including a B sequence software start) to immediately interrupt this sequence and launch a B sequence in it's place. The conversion currently in progress will be terminated.  The A sequence that was interrupted will automatically resume after the B sequence completes. The channel whose conversion was terminated will be re-sampled and the conversion sequence will resume from that point.
        };
        namespace lowprioValC{
            constexpr MPL::Value<lowprioVal,lowprioVal::lowPriority> lowPriority{};
            constexpr MPL::Value<lowprioVal,lowprioVal::highPriority> highPriority{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,lowprioVal> lowprio{}; 
        ///Indicates whether the primary method for retrieving conversion results for this sequence will be accomplished via reading the global data register (SEQA_GDAT) at the end of each conversion, or the individual channel result registers at the end of the entire sequence.  Impacts when conversion-complete interrupt/DMA requests for sequence-A will be generated and which overrun conditions contribute to an overrun interrupt as described below:
        enum class modeVal {
            endOfConversion=0x00000000,     ///<End of conversion. The sequence A interrupt/DMA flag will be set at the end of each individual A/D conversion performed under sequence A. This flag will mirror the DATAVALID bit in the SEQA_GDAT register. The OVERRUN bit in the SEQA_GDAT register will contribute to generation of an overrun interrupt/DMA request if enabled.
            endOfSequence=0x00000001,     ///<End of sequence. The sequence A interrupt/DMA flag will be set when the entire set of sequence-A conversions completes. This flag will need to be explicitly cleared by software or by the DMA-clear signal in this mode.  The OVERRUN bit in the SEQA_GDAT register will NOT contribute to generation of an overrun interrupt/DMA request since it is assumed this register may not be utilized in this mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::endOfConversion> endOfConversion{};
            constexpr MPL::Value<modeVal,modeVal::endOfSequence> endOfSequence{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Sequence Enable
        enum class seqaEnaVal {
            disabled=0x00000000,     ///<Disabled. Sequence A is disabled. Sequence A triggers are ignored. If this bit is cleared while sequence A is in progress, the sequence will be halted at the end of the current conversion. After the sequence is re-enabled, a new trigger will be required to restart the sequence beginning with the next enabled channel.
            enabled=0x00000001,     ///<Enabled. Sequence A is enabled.
        };
        namespace seqaEnaValC{
            constexpr MPL::Value<seqaEnaVal,seqaEnaVal::disabled> disabled{};
            constexpr MPL::Value<seqaEnaVal,seqaEnaVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,seqaEnaVal> seqaEna{}; 
    }
    namespace NoneseqbCtrl{    ///<A/D Conversion Sequence-B Control Register: Controls triggering and channel selection for conversion sequence-B. Also specifies interrupt mode for sequence-B.
        using Addr = Register::Address<0x4000000c,0x23f30000,0,unsigned>;
        ///Selects which one or more of the twelve channels will be sampled and converted when this sequence is launched. A 1 in any bit of this field will cause the corresponding channel to be included in the conversion sequence, where bit 0 corresponds to channel 0, bit 1 to channel 1 and so forth.  When this conversion sequence is triggered, either by a hardware trigger or via software command, A/D conversions will be performed on each enabled channel, in sequence, beginning with the lowest-ordered channel. This field can ONLY be changed while the SEQB_ENA bit (bit 31) is LOW. It is permissible to change this field and set bit 31 in the same write.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> channels{}; 
        ///Selects which of the available hardware trigger sources will cause this conversion sequence to be initiated. Program the trigger input number in this field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> trigger{}; 
        ///Select the polarity of the selected input trigger for this conversion sequence.
        enum class trigpolVal {
            negativeEdge=0x00000000,     ///<Negative edge. A negative edge launches the conversion sequence on the selected trigger input.
            positiveEdge=0x00000001,     ///<Positive edge. A positive edge launches the conversion sequence on the selected trigger input.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::negativeEdge> negativeEdge{};
            constexpr MPL::Value<trigpolVal,trigpolVal::positiveEdge> positiveEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Setting this bit allows the hardware trigger input to bypass  synchronization flip-flops stages and therefore shorten the time between the trigger input signal and the start of a conversion. There are slightly different criteria for whether or not this bit can be set depending on the clock operating mode: Synchronous mode: Synchronization may be bypassed (this bit may be set) if the selected trigger source is already synchronous with the main system clock (eg. coming from an on-chip, system-clock-based timer). Whether this bit is set or not, a trigger pulse must be maintained for at least one system clock period. Asynchronous mode: Synchronization may be bypassed (this bit may be set) if it is certain that the duration of a trigger input pulse will be at least one cycle of the ADC clock (regardless of whether the trigger comes from and on-chip or off-chip source). If this bit is NOT set, the trigger pulse must at least be maintained for one system clock period.
        enum class syncbypassVal {
            enableSynchronizati=0x00000000,     ///<Enable synchronization. The hardware trigger bypass is not enabled.
            bypassSynchronizati=0x00000001,     ///<Bypass synchronization. The hardware trigger bypass is enabled.
        };
        namespace syncbypassValC{
            constexpr MPL::Value<syncbypassVal,syncbypassVal::enableSynchronizati> enableSynchronizati{};
            constexpr MPL::Value<syncbypassVal,syncbypassVal::bypassSynchronizati> bypassSynchronizati{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,syncbypassVal> syncbypass{}; 
        ///Writing a 1 to this field will launch one pass through this conversion sequence. The behavior will be identical to a sequence triggered by a hardware trigger. Do not write a 1 to this bit if the BURST bit is set.   This bit is only set to a 1 momentarily when written-to to launch a conversion sequence. It will consequently always read-back as a zero.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> start{}; 
        ///Writing a 1 to this bit will cause this conversion sequence to be continuously cycled through. Other B triggers will be ignored while this bit is set.  Repeated conversions can be halted by clearing this bit. The sequence currently in progress will be completed before conversions are terminated.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> burst{}; 
        ///When this bit is set, a hardware trigger or a write to the START bit will launch a single conversion on the next channel in the sequence instead of the default response of launching an entire sequence of conversions. Once all of the channels comprising a sequence have been converted, a subsequent trigger will repeat the sequence beginning with the first enabled channel.  Interrupt generation will still occur either after each individual conversion or at the end of the entire sequence, depending on the state of the MODE bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> singlestep{}; 
        ///Indicates whether the primary method for retrieving conversion results for this sequence will be accomplished via reading the global data register (SEQB_GDAT) at the end of each conversion, or the individual channel result registers at the end of the entire sequence.   Impacts when conversion-complete interrupt/DMA requests for sequence-B will be generated and which overrun conditions contribute to an overrun interrupt as described below:
        enum class modeVal {
            endOfConversion=0x00000000,     ///<End of conversion. The sequence B interrupt/DMA flag will be set at the end of each individual A/D conversion performed under sequence B. This flag will mirror the DATAVALID bit in the SEQB_GDAT register.  The OVERRUN bit in the SEQB_GDAT register will contribute to generation of an overrun interrupt/DMA request if enabled.
            endOfSequence=0x00000001,     ///<End of sequence. The sequence B interrupt/DMA flag will be set when the entire set of sequence B conversions completes. This flag will need to be explicitly cleared by software or by the DMA-clear signal in this mode.   The OVERRUN bit in the SEQB_GDAT register will NOT contribute to generation of an overrun interrupt/DMA request since it is assumed this register will not be utilized in this mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::endOfConversion> endOfConversion{};
            constexpr MPL::Value<modeVal,modeVal::endOfSequence> endOfSequence{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Sequence Enable
        enum class seqbEnaVal {
            disabled=0x00000000,     ///<Disabled. Sequence B is disabled. Sequence B triggers are ignored. If this bit is cleared while sequence B is in progress, the sequence will be halted at the end of the current conversion. After the sequence is re-enabled, a new trigger will be required to restart the sequence beginning with the next enabled channel.
            enabled=0x00000001,     ///<Enabled. Sequence B is enabled.
        };
        namespace seqbEnaValC{
            constexpr MPL::Value<seqbEnaVal,seqbEnaVal::disabled> disabled{};
            constexpr MPL::Value<seqbEnaVal,seqbEnaVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,seqbEnaVal> seqbEna{}; 
    }
    namespace NoneseqaGdat{    ///<A/D Sequence-A Global Data Register. This register contains the result of the most recent A/D conversion performed under sequence-A
        using Addr = Register::Address<0x40000010,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the most recent conversion performed under conversion sequence associated with this register.   The result is the  a binary fraction representing the voltage on the currently-selected input channel as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.  DATAVALID = 1 indicates that this result has not yet been read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Indicates whether the result of the last conversion performed was above, below or within the range established by the designated threshold comparison registers (THRn_LOW and THRn_HIGH).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Indicates whether the result of the last conversion performed represented a crossing of the threshold level established by the designated LOW threshold comparison register (THRn_LOW) and, if so, in what direction the crossing occurred.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///These bits contain the channel from which the RESULT bits were converted (e.g. 0000 identifies channel 0, 0001 channel 1...).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> chn{}; 
        ///This bit is set if a new conversion result is loaded into the RESULT field before a previous result has been read - i.e. while the DATAVALID bit is set. This bit is cleared, along with the DATAVALID bit, whenever this register is read.  This bit will contribute to an overrun interrupt request if the MODE bit (in SEQA_CTRL) for the corresponding sequence is set to 0 (and if the overrun interrupt is enabled).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 at the end of each conversion when a new result is loaded into the RESULT field. It is cleared whenever this register is read.  This bit will cause a conversion-complete interrupt for the corresponding sequence if the MODE bit (in SEQA_CTRL) for that sequence is set to 0 (and if the interrupt is enabled).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace NoneseqbGdat{    ///<A/D Sequence-B Global Data Register. This register contains the result of the most recent A/D conversion performed under sequence-B
        using Addr = Register::Address<0x40000014,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the most recent conversion performed under conversion sequence associated with this register.   This will be a binary fraction representing the voltage on the currently-selected input channel as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on V REFP.  DATAVALID = 1 indicates that this result has not yet been read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Indicates whether the result of the last conversion performed was above, below or within the range established by the designated threshold comparison registers (THRn_LOW and THRn_HIGH).  Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Indicates whether the result of the last conversion performed represented a crossing of the threshold level established by the designated LOW threshold comparison register (THRn_LOW) and, if so, in what direction the crossing occurred. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///These bits contain the channel from which the RESULT bits were converted (e.g. 0b0000 identifies channel 0, 0b0001 channel 1...).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> chn{}; 
        ///This bit is set if a new conversion result is loaded into the RESULT field before a previous result has been read - i.e. while the DATAVALID bit is set. This bit is cleared, along with the DATAVALID bit, whenever this register is read.  This bit will contribute to an overrun interrupt request if the MODE bit (in SEQB_CTRL) for the corresponding sequence is set to 0 (and if the overrun interrupt is enabled).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 at the end of each conversion when a new result is loaded into the RESULT field. It is cleared whenever this register is read.  This bit will cause a conversion-complete interrupt for the corresponding sequence if the MODE bit (in SEQB_CTRL) for that sequence is set to 0 (and if the interrupt is enabled).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonedat0{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40000020,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonedat1{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40000024,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonedat2{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40000028,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonedat3{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4000002c,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonedat4{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40000030,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonedat5{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40000034,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonedat6{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40000038,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonedat7{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4000003c,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonedat8{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40000040,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonedat9{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40000044,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonedat10{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40000048,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonedat11{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4000004c,0x03f0000f,0,unsigned>;
        ///This field contains the 12-bit A/D conversion result from the last conversion performed on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///Threshold Range Comparison result. 0x0 = In Range: The last completed conversion was greater than or equal to the value programmed into the designated LOW threshold register (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last completed conversion was greater than the value programmed into the designated HIGH threshold register (THRn_HIGH). 0x3 = Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> thcmprange{}; 
        ///Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The most recent completed conversion on this channel had the same relationship (above or below) to the threshold value established by the designated LOW threshold register (THRn_LOW) as did the previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the previous sample on this channel was above the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred - i.e. the previous sample on this channel was below the threshold value established by the designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> thcmpcross{}; 
        ///This field is hard-coded to contain the channel number that this particular register relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1 register, etc)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26),Register::ReadWriteAccess,unsigned> channel{}; 
        ///This bit will be set to a 1 if a new conversion on this channel completes and overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit is set. This bit is cleared, along with the DONE bit, whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. This bit (in any of the 12 registers) will cause an overrun interrupt request to be asserted if the overrun interrupt is enabled. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion on this channel completes. This bit is cleared whenever this register is read or when the data related to this channel is read from either of the global SEQn_GDAT registers. While it is allowed to include the same channels in both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the data registers associated with any of the channels that are shared between the two sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> datavalid{}; 
    }
    namespace Nonethr0Low{    ///<A/D Low Compare Threshold Register 0 : Contains the lower threshold level for automatic threshold comparison for any channels linked to threshold pair 0.
        using Addr = Register::Address<0x40000050,0xffff000f,0,unsigned>;
        ///Low threshold value against which A/D results will be compared
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrlow{}; 
    }
    namespace Nonethr1Low{    ///<A/D Low Compare Threshold Register 1: Contains the lower threshold level for automatic threshold comparison for any channels linked to threshold pair 1.
        using Addr = Register::Address<0x40000054,0xffff000f,0,unsigned>;
        ///Low threshold value against which A/D results will be compared
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrlow{}; 
    }
    namespace Nonethr0High{    ///<A/D High Compare Threshold Register 0: Contains the upper threshold level for automatic threshold comparison for any channels linked to threshold pair 0.
        using Addr = Register::Address<0x40000058,0xffff000f,0,unsigned>;
        ///High threshold value against which A/D results will be compared
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrhigh{}; 
    }
    namespace Nonethr1High{    ///<A/D High Compare Threshold Register 1: Contains the upper threshold level for automatic threshold comparison for any channels linked to threshold pair 1.
        using Addr = Register::Address<0x4000005c,0xffff000f,0,unsigned>;
        ///High threshold value against which A/D results will be compared
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> thrhigh{}; 
    }
    namespace NonechanThrsel{    ///<A/D Channel-Threshold Select Register. Specifies which set of threshold compare registers are to be used for each channel
        using Addr = Register::Address<0x40000060,0xfffff000,0,unsigned>;
        ///Threshold select by channel.
        enum class ch0ThrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 0 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 0 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        namespace ch0ThrselValC{
            constexpr MPL::Value<ch0ThrselVal,ch0ThrselVal::threshold0> threshold0{};
            constexpr MPL::Value<ch0ThrselVal,ch0ThrselVal::threshold1> threshold1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0ThrselVal> ch0Thrsel{}; 
        ///Threshold select by channel.
        enum class ch1ThrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 1 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 1 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        namespace ch1ThrselValC{
            constexpr MPL::Value<ch1ThrselVal,ch1ThrselVal::threshold0> threshold0{};
            constexpr MPL::Value<ch1ThrselVal,ch1ThrselVal::threshold1> threshold1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1ThrselVal> ch1Thrsel{}; 
        ///Threshold select by channel.
        enum class ch2ThrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 2 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 2 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        namespace ch2ThrselValC{
            constexpr MPL::Value<ch2ThrselVal,ch2ThrselVal::threshold0> threshold0{};
            constexpr MPL::Value<ch2ThrselVal,ch2ThrselVal::threshold1> threshold1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2ThrselVal> ch2Thrsel{}; 
        ///Threshold select by channel.
        enum class ch3ThrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 3 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 3 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        namespace ch3ThrselValC{
            constexpr MPL::Value<ch3ThrselVal,ch3ThrselVal::threshold0> threshold0{};
            constexpr MPL::Value<ch3ThrselVal,ch3ThrselVal::threshold1> threshold1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3ThrselVal> ch3Thrsel{}; 
        ///Threshold select by channel.
        enum class ch4ThrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 4 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 4 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        namespace ch4ThrselValC{
            constexpr MPL::Value<ch4ThrselVal,ch4ThrselVal::threshold0> threshold0{};
            constexpr MPL::Value<ch4ThrselVal,ch4ThrselVal::threshold1> threshold1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4ThrselVal> ch4Thrsel{}; 
        ///Threshold select by channel.
        enum class ch5ThrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 5 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 5 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        namespace ch5ThrselValC{
            constexpr MPL::Value<ch5ThrselVal,ch5ThrselVal::threshold0> threshold0{};
            constexpr MPL::Value<ch5ThrselVal,ch5ThrselVal::threshold1> threshold1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5ThrselVal> ch5Thrsel{}; 
        ///Threshold select by channel.
        enum class ch6ThrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 6 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 6 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        namespace ch6ThrselValC{
            constexpr MPL::Value<ch6ThrselVal,ch6ThrselVal::threshold0> threshold0{};
            constexpr MPL::Value<ch6ThrselVal,ch6ThrselVal::threshold1> threshold1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6ThrselVal> ch6Thrsel{}; 
        ///Threshold select by channel.
        enum class ch7ThrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 7 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 7 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        namespace ch7ThrselValC{
            constexpr MPL::Value<ch7ThrselVal,ch7ThrselVal::threshold0> threshold0{};
            constexpr MPL::Value<ch7ThrselVal,ch7ThrselVal::threshold1> threshold1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7ThrselVal> ch7Thrsel{}; 
        ///Threshold select by channel.
        enum class ch8ThrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 8 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 8 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        namespace ch8ThrselValC{
            constexpr MPL::Value<ch8ThrselVal,ch8ThrselVal::threshold0> threshold0{};
            constexpr MPL::Value<ch8ThrselVal,ch8ThrselVal::threshold1> threshold1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8ThrselVal> ch8Thrsel{}; 
        ///Threshold select by channel.
        enum class ch9ThrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 9 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 9 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        namespace ch9ThrselValC{
            constexpr MPL::Value<ch9ThrselVal,ch9ThrselVal::threshold0> threshold0{};
            constexpr MPL::Value<ch9ThrselVal,ch9ThrselVal::threshold1> threshold1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9ThrselVal> ch9Thrsel{}; 
        ///Threshold select by channel.
        enum class ch10ThrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 10 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 10 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        namespace ch10ThrselValC{
            constexpr MPL::Value<ch10ThrselVal,ch10ThrselVal::threshold0> threshold0{};
            constexpr MPL::Value<ch10ThrselVal,ch10ThrselVal::threshold1> threshold1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10ThrselVal> ch10Thrsel{}; 
        ///Threshold select by channel.
        enum class ch11ThrselVal {
            threshold0=0x00000000,     ///<Threshold 0. Channel 11 results will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers
            threshold1=0x00000001,     ///<Threshold 1. Channel 11 results will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers
        };
        namespace ch11ThrselValC{
            constexpr MPL::Value<ch11ThrselVal,ch11ThrselVal::threshold0> threshold0{};
            constexpr MPL::Value<ch11ThrselVal,ch11ThrselVal::threshold1> threshold1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11ThrselVal> ch11Thrsel{}; 
    }
    namespace Noneinten{    ///<A/D Interrupt Enable Register. This register contains enable bits that enable the sequence-A, sequence-B, threshold compare and data overrun interrupts to be generated.
        using Addr = Register::Address<0x40000064,0xf8000000,0,unsigned>;
        ///Sequence A interrupt enable.
        enum class seqaIntenVal {
            disabled=0x00000000,     ///<Disabled. The sequence A interrupt/DMA request is disabled.
            enabled=0x00000001,     ///<Enabled. The sequence A interrupt/DMA request is enabled and will be asserted either upon completion of each individual conversion performed as part of sequence A, or upon completion of the entire A sequence of conversions, depending on the MODE bit in the SEQA_CTRL register.
        };
        namespace seqaIntenValC{
            constexpr MPL::Value<seqaIntenVal,seqaIntenVal::disabled> disabled{};
            constexpr MPL::Value<seqaIntenVal,seqaIntenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,seqaIntenVal> seqaInten{}; 
        ///Sequence B interrupt enable.
        enum class seqbIntenVal {
            disabled=0x00000000,     ///<Disabled. The sequence B interrupt/DMA request is disabled.
            enabled=0x00000001,     ///<Enabled. The sequence B interrupt/DMA request is enabled and will be asserted either upon completion of each individual conversion performed as part of sequence B, or upon completion of the entire B sequence of conversions, depending on the MODE bit in the SEQB_CTRL register.
        };
        namespace seqbIntenValC{
            constexpr MPL::Value<seqbIntenVal,seqbIntenVal::disabled> disabled{};
            constexpr MPL::Value<seqbIntenVal,seqbIntenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,seqbIntenVal> seqbInten{}; 
        ///Overrun interrupt enable.
        enum class ovrIntenVal {
            disabled=0x00000000,     ///<Disabled. The overrun interrupt is disabled.
            enabled=0x00000001,     ///<Enabled. The overrun interrupt is enabled. Detection of an overrun condition on any of the 12 channel data registers will cause an overrun interrupt request. In addition, if the MODE bit for a particular sequence is 0, then an overrun in the global data register for that sequence will also cause this interrupt request to be asserted.
        };
        namespace ovrIntenValC{
            constexpr MPL::Value<ovrIntenVal,ovrIntenVal::disabled> disabled{};
            constexpr MPL::Value<ovrIntenVal,ovrIntenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ovrIntenVal> ovrInten{}; 
        ///Threshold comparison interrupt enable.
        enum class adcmpinten0Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
            reserved=0x00000003,     ///<Reserved
        };
        namespace adcmpinten0ValC{
            constexpr MPL::Value<adcmpinten0Val,adcmpinten0Val::disabled> disabled{};
            constexpr MPL::Value<adcmpinten0Val,adcmpinten0Val::outsideThreshold> outsideThreshold{};
            constexpr MPL::Value<adcmpinten0Val,adcmpinten0Val::crossingThreshold> crossingThreshold{};
            constexpr MPL::Value<adcmpinten0Val,adcmpinten0Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,adcmpinten0Val> adcmpinten0{}; 
        ///Threshold comparison interrupt enable.
        enum class adcmpinten1Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace adcmpinten1ValC{
            constexpr MPL::Value<adcmpinten1Val,adcmpinten1Val::disabled> disabled{};
            constexpr MPL::Value<adcmpinten1Val,adcmpinten1Val::outsideThreshold> outsideThreshold{};
            constexpr MPL::Value<adcmpinten1Val,adcmpinten1Val::crossingThreshold> crossingThreshold{};
            constexpr MPL::Value<adcmpinten1Val,adcmpinten1Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,adcmpinten1Val> adcmpinten1{}; 
        ///Threshold comparison interrupt enable.
        enum class adcmpinten2Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
            reserved=0x00000003,     ///<Reserved
        };
        namespace adcmpinten2ValC{
            constexpr MPL::Value<adcmpinten2Val,adcmpinten2Val::disabled> disabled{};
            constexpr MPL::Value<adcmpinten2Val,adcmpinten2Val::outsideThreshold> outsideThreshold{};
            constexpr MPL::Value<adcmpinten2Val,adcmpinten2Val::crossingThreshold> crossingThreshold{};
            constexpr MPL::Value<adcmpinten2Val,adcmpinten2Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,adcmpinten2Val> adcmpinten2{}; 
        ///Threshold comparison interrupt enable.
        enum class adcmpinten3Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
            reserved=0x00000003,     ///<Reserved
        };
        namespace adcmpinten3ValC{
            constexpr MPL::Value<adcmpinten3Val,adcmpinten3Val::disabled> disabled{};
            constexpr MPL::Value<adcmpinten3Val,adcmpinten3Val::outsideThreshold> outsideThreshold{};
            constexpr MPL::Value<adcmpinten3Val,adcmpinten3Val::crossingThreshold> crossingThreshold{};
            constexpr MPL::Value<adcmpinten3Val,adcmpinten3Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,adcmpinten3Val> adcmpinten3{}; 
        ///Threshold comparison interrupt enable.
        enum class adcmpinten4Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
            reserved=0x00000003,     ///<Reserved
        };
        namespace adcmpinten4ValC{
            constexpr MPL::Value<adcmpinten4Val,adcmpinten4Val::disabled> disabled{};
            constexpr MPL::Value<adcmpinten4Val,adcmpinten4Val::outsideThreshold> outsideThreshold{};
            constexpr MPL::Value<adcmpinten4Val,adcmpinten4Val::crossingThreshold> crossingThreshold{};
            constexpr MPL::Value<adcmpinten4Val,adcmpinten4Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,adcmpinten4Val> adcmpinten4{}; 
        ///Threshold comparison interrupt enable.
        enum class adcmpinten5Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
            reserved=0x00000003,     ///<Reserved
        };
        namespace adcmpinten5ValC{
            constexpr MPL::Value<adcmpinten5Val,adcmpinten5Val::disabled> disabled{};
            constexpr MPL::Value<adcmpinten5Val,adcmpinten5Val::outsideThreshold> outsideThreshold{};
            constexpr MPL::Value<adcmpinten5Val,adcmpinten5Val::crossingThreshold> crossingThreshold{};
            constexpr MPL::Value<adcmpinten5Val,adcmpinten5Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,adcmpinten5Val> adcmpinten5{}; 
        ///Threshold comparison interrupt enable.
        enum class adcmpinten6Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace adcmpinten6ValC{
            constexpr MPL::Value<adcmpinten6Val,adcmpinten6Val::disabled> disabled{};
            constexpr MPL::Value<adcmpinten6Val,adcmpinten6Val::outsideThreshold> outsideThreshold{};
            constexpr MPL::Value<adcmpinten6Val,adcmpinten6Val::crossingThreshold> crossingThreshold{};
            constexpr MPL::Value<adcmpinten6Val,adcmpinten6Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,adcmpinten6Val> adcmpinten6{}; 
        ///Threshold comparison interrupt enable.
        enum class adcmpinten7Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
            reserved=0x00000003,     ///<Reserved
        };
        namespace adcmpinten7ValC{
            constexpr MPL::Value<adcmpinten7Val,adcmpinten7Val::disabled> disabled{};
            constexpr MPL::Value<adcmpinten7Val,adcmpinten7Val::outsideThreshold> outsideThreshold{};
            constexpr MPL::Value<adcmpinten7Val,adcmpinten7Val::crossingThreshold> crossingThreshold{};
            constexpr MPL::Value<adcmpinten7Val,adcmpinten7Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,adcmpinten7Val> adcmpinten7{}; 
        ///Threshold comparison interrupt enable.
        enum class adcmpinten8Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
            reserved=0x00000003,     ///<Reserved
        };
        namespace adcmpinten8ValC{
            constexpr MPL::Value<adcmpinten8Val,adcmpinten8Val::disabled> disabled{};
            constexpr MPL::Value<adcmpinten8Val,adcmpinten8Val::outsideThreshold> outsideThreshold{};
            constexpr MPL::Value<adcmpinten8Val,adcmpinten8Val::crossingThreshold> crossingThreshold{};
            constexpr MPL::Value<adcmpinten8Val,adcmpinten8Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,adcmpinten8Val> adcmpinten8{}; 
        ///Threshold comparison interrupt enable.
        enum class adcmpinten9Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
            reserved=0x00000003,     ///<Reserved
        };
        namespace adcmpinten9ValC{
            constexpr MPL::Value<adcmpinten9Val,adcmpinten9Val::disabled> disabled{};
            constexpr MPL::Value<adcmpinten9Val,adcmpinten9Val::outsideThreshold> outsideThreshold{};
            constexpr MPL::Value<adcmpinten9Val,adcmpinten9Val::crossingThreshold> crossingThreshold{};
            constexpr MPL::Value<adcmpinten9Val,adcmpinten9Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,adcmpinten9Val> adcmpinten9{}; 
        ///Threshold comparison interrupt enable.
        enum class adcmpinten10Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
            reserved=0x00000003,     ///<Reserved
        };
        namespace adcmpinten10ValC{
            constexpr MPL::Value<adcmpinten10Val,adcmpinten10Val::disabled> disabled{};
            constexpr MPL::Value<adcmpinten10Val,adcmpinten10Val::outsideThreshold> outsideThreshold{};
            constexpr MPL::Value<adcmpinten10Val,adcmpinten10Val::crossingThreshold> crossingThreshold{};
            constexpr MPL::Value<adcmpinten10Val,adcmpinten10Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,adcmpinten10Val> adcmpinten10{}; 
        ///Threshold comparison interrupt enable.
        enum class adcmpinten11Val {
            disabled=0x00000000,     ///<Disabled.
            outsideThreshold=0x00000001,     ///<Outside threshold.
            crossingThreshold=0x00000002,     ///<Crossing threshold.
            reserved=0x00000003,     ///<Reserved
        };
        namespace adcmpinten11ValC{
            constexpr MPL::Value<adcmpinten11Val,adcmpinten11Val::disabled> disabled{};
            constexpr MPL::Value<adcmpinten11Val,adcmpinten11Val::outsideThreshold> outsideThreshold{};
            constexpr MPL::Value<adcmpinten11Val,adcmpinten11Val::crossingThreshold> crossingThreshold{};
            constexpr MPL::Value<adcmpinten11Val,adcmpinten11Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,adcmpinten11Val> adcmpinten11{}; 
    }
    namespace Noneflags{    ///<A/D Flags Register. Contains the four interrupt request flags and the individual component overrun and threshold-compare flags. (The overrun bits replicate information stored in the result registers).
        using Addr = Register::Address<0x40000068,0x0c000000,0,unsigned>;
        ///Threshold comparison event on Channel 0. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> thcmp0{}; 
        ///Threshold comparison event on Channel 1. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> thcmp1{}; 
        ///Threshold comparison event on Channel 2. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> thcmp2{}; 
        ///Threshold comparison event on Channel 3. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> thcmp3{}; 
        ///Threshold comparison event on Channel 4. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> thcmp4{}; 
        ///Threshold comparison event on Channel 5. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> thcmp5{}; 
        ///Threshold comparison event on Channel 6. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> thcmp6{}; 
        ///Threshold comparison event on Channel 7. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> thcmp7{}; 
        ///Threshold comparison event on Channel 8. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> thcmp8{}; 
        ///Threshold comparison event on Channel 9. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> thcmp9{}; 
        ///Threshold comparison event on Channel 10. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> thcmp10{}; 
        ///Threshold comparison event on Channel 11. Set to 1 upon either an out-of-range result or a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by writing a 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> thcmp11{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> overrun0{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> overrun1{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> overrun2{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> overrun3{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> overrun4{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> overrun5{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> overrun6{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> overrun7{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> overrun8{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> overrun9{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> overrun10{}; 
        ///Mirrors the OVERRRUN status flag from the result register for A/D channel 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> overrun11{}; 
        ///Mirrors the global OVERRUN status flag in the SEQA_GDAT register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> seqaOvr{}; 
        ///Mirrors the global OVERRUN status flag in the SEQB_GDAT register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> seqbOvr{}; 
        ///Sequence A interrupt/DMA flag. If the MODE bit in the SEQA_CTRL register is 0, this flag will mirror the DATAVALID bit in the sequence A global data register (SEQA_GDAT), which is set at the end of every A/D conversion performed as part of sequence A. It will be cleared automatically when the SEQA_GDAT register is read. If the MODE bit in the SEQA_CTRL register is 1, this flag will be set upon completion of an entire A sequence. In this case it must be cleared by writing a 1 to this SEQA_INT bit.  This interrupt must be enabled in the INTEN register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> seqaInt{}; 
        ///Sequence A interrupt/DMA flag. If the MODE bit in the SEQB_CTRL register is 0, this flag will mirror the DATAVALID bit in the sequence A global data register (SEQB_GDAT), which is set at the end of every A/D conversion performed as part of sequence B. It will be cleared automatically when the SEQB_GDAT register is read. If the MODE bit in the SEQB_CTRL register is 1, this flag will be set upon completion of an entire B sequence. In this case it must be cleared by writing a 1 to this SEQB_INT bit.  This interrupt must be enabled in the INTEN register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> seqbInt{}; 
        ///Threshold Comparison Interrupt/DMA flag. This bit will be set if any of the 12 THCMP flags in the lower bits of this register are set to 1 (due to an enabled out-of-range or threshold-crossing event on any channel). Each type of threshold comparison interrupt on each channel must be individually enabled in the INTEN register to cause this interrupt. This bit will be cleared when all of the component flags in bits 11:0 are cleared via writing 1s to those bits.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> thcmpInt{}; 
        ///Overrun Interrupt flag. Any overrun bit in any of the individual channel data registers will cause this interrupt. In addition, if the MODE bit in either of the SEQn_CTRL registers is 0 then the OVERRUN bit in the corresponding SEQn_GDAT register will also cause this interrupt.  This interrupt must be enabled in the INTEN register. This bit will be cleared when all of the individual overrun bits have been cleared via reading the corresponding data registers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ovrInt{}; 
    }
    namespace Nonetrm{    ///<ADC trim register.
        using Addr = Register::Address<0x4000006c,0xffffffdf,0,unsigned>;
        ///Reserved.
        enum class vrangeVal {
            highVoltage=0x00000000,     ///<High voltage. VDDA = 2.7 V to 3.6 V.
            lowVoltage=0x00000001,     ///<Low voltage. VDDA = 2.4 V to 2.7 V.
        };
        namespace vrangeValC{
            constexpr MPL::Value<vrangeVal,vrangeVal::highVoltage> highVoltage{};
            constexpr MPL::Value<vrangeVal,vrangeVal::lowVoltage> lowVoltage{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,vrangeVal> vrange{}; 
    }
}
