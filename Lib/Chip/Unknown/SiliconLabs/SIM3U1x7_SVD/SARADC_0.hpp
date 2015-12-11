#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<Module Configuration
        using Addr = Register::Address<0x4001a000,0x80002800,0,unsigned>;
        ///Sampling Phase Select. 
        enum class SpselVal {
            phase0=0x00000000,     ///<The ADC samples at SSG phase 0.
            phase1=0x00000001,     ///<The ADC samples at SSG phase 1.
            phase2=0x00000002,     ///<The ADC samples at SSG phase 2.
            phase3=0x00000003,     ///<The ADC samples at SSG phase 3.
            phase4=0x00000004,     ///<The ADC samples at SSG phase 4.
            phase5=0x00000005,     ///<The ADC samples at SSG phase 5.
            phase6=0x00000006,     ///<The ADC samples at SSG phase 6.
            phase7=0x00000007,     ///<The ADC samples at SSG phase 7.
            phase8=0x00000008,     ///<The ADC samples at SSG phase 8.
            phase9=0x00000009,     ///<The ADC samples at SSG phase 9.
            phase10=0x0000000a,     ///<The ADC samples at SSG phase 10.
            phase11=0x0000000b,     ///<The ADC samples at SSG phase 11.
            phase12=0x0000000c,     ///<The ADC samples at SSG phase 12.
            phase13=0x0000000d,     ///<The ADC samples at SSG phase 13.
            phase14=0x0000000e,     ///<The ADC samples at SSG phase 14.
            phase15=0x0000000f,     ///<The ADC samples at SSG phase 15.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SpselVal> spsel{}; 
        namespace SpselValC{
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase0> phase0{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase1> phase1{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase2> phase2{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase3> phase3{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase4> phase4{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase5> phase5{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase6> phase6{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase7> phase7{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase8> phase8{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase9> phase9{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase10> phase10{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase11> phase11{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase12> phase12{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase13> phase13{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase14> phase14{};
            constexpr Register::FieldValue<decltype(spsel)::Type,SpselVal::phase15> phase15{};
        }
        }
        ///Sampling Phase Enable. 
        enum class SpenVal {
            disabled=0x00000000,     ///<Disable Phase Select.  The ADC will always sample on the start-of-conversion trigger selected by the SCSEL field.
            enabled=0x00000001,     ///<Enable Phase Select.  The ADC will sample according to the phase selected by the SPSEL field.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SpenVal> spen{}; 
        namespace SpenValC{
            constexpr Register::FieldValue<decltype(spen)::Type,SpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spen)::Type,SpenVal::enabled> enabled{};
        }
        }
        ///Synchronous Sample Generator Enable. 
        enum class SsgenVal {
            disabled=0x00000000,     ///<Disable the SAR clock output to SSG.
            enabled=0x00000001,     ///<The ADC is the SSG master, and the SAR clock will be output to the SSG block.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SsgenVal> ssgen{}; 
        namespace SsgenValC{
            constexpr Register::FieldValue<decltype(ssgen)::Type,SsgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ssgen)::Type,SsgenVal::enabled> enabled{};
        }
        }
        ///Output Packing Mode. 
        enum class PackmdVal {
            upperOnly=0x00000000,     ///<Data is written to the upper half-word and the lower half-word is filled with 0's.  An SCI interrupt is triggered when data is written, if enabled.
            lowerOnly=0x00000001,     ///<Data is written to the lower half-word, and the upper half-word is filled with 0's. An SCI interrupt is triggered when data is written, if enabled.
            upperFirst=0x00000002,     ///<Two data words are packed into the register with the upper half-word representing the earlier data, and the lower half-word representing the later data.  If SIMCEN is set to 1, the upper half-word represents data from the master ADC (selected by SSGEN) and the lower half-word represents data from the slave ADC. The ADC write to the lower half-word will trigger the SCI interrupt, if enabled.
            lowerFirst=0x00000003,     ///<Two data words are packed into the register with the lower half-word representing the earlier data, and the upper half-word representing the later data.  If SIMCEN is set to 1, the lower half-word represents data from the master ADC (selected by SSGEN) and the upper half-word represents data from the slave ADC. The ADC write to the upper half-word will trigger the SCI interrupt, if enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PackmdVal> packmd{}; 
        namespace PackmdValC{
            constexpr Register::FieldValue<decltype(packmd)::Type,PackmdVal::upperOnly> upperOnly{};
            constexpr Register::FieldValue<decltype(packmd)::Type,PackmdVal::lowerOnly> lowerOnly{};
            constexpr Register::FieldValue<decltype(packmd)::Type,PackmdVal::upperFirst> upperFirst{};
            constexpr Register::FieldValue<decltype(packmd)::Type,PackmdVal::lowerFirst> lowerFirst{};
        }
        }
        ///Simultaneous Conversion Packing Enable. 
        enum class SimcenVal {
            disabled=0x00000000,     ///<Disable simultaneous mode conversion packing.
            enabled=0x00000001,     ///<Enable simultaneous mode conversion packing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SimcenVal> simcen{}; 
        namespace SimcenValC{
            constexpr Register::FieldValue<decltype(simcen)::Type,SimcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(simcen)::Type,SimcenVal::enabled> enabled{};
        }
        }
        ///Interleaved Conversion Packing Enable. 
        enum class IntlvenVal {
            disabled=0x00000000,     ///<Disable interleaved mode conversion packing.
            enabled=0x00000001,     ///<Enable interleaved mode conversion packing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,IntlvenVal> intlven{}; 
        namespace IntlvenValC{
            constexpr Register::FieldValue<decltype(intlven)::Type,IntlvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(intlven)::Type,IntlvenVal::enabled> enabled{};
        }
        }
        ///Scan Mode Enable. 
        enum class ScanenVal {
            disabled=0x00000000,     ///<Disable ADC scan mode.
            enabled=0x00000001,     ///<Enable ADC scan mode. The ADC will scan through the defined time slots in sequence on every start of conversion.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ScanenVal> scanen{}; 
        namespace ScanenValC{
            constexpr Register::FieldValue<decltype(scanen)::Type,ScanenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(scanen)::Type,ScanenVal::enabled> enabled{};
        }
        }
        ///Scan Mode Select. 
        enum class ScanmdVal {
            once=0x00000000,     ///<The channel sequencer will cycle through all of the specified time slots once.
            loop=0x00000001,     ///<The channel sequencer will cycle through all of the specified time slots in a loop until SCANEN is cleared to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ScanmdVal> scanmd{}; 
        namespace ScanmdValC{
            constexpr Register::FieldValue<decltype(scanmd)::Type,ScanmdVal::once> once{};
            constexpr Register::FieldValue<decltype(scanmd)::Type,ScanmdVal::loop> loop{};
        }
        }
        ///DMA Interface Enable . 
        enum class DmaenVal {
            disabled=0x00000000,     ///<Disable the ADC module DMA interface.
            enabled=0x00000001,     ///<Enable the ADC module DMA interface.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::enabled> enabled{};
        }
        }
        ///Burst Mode Clock Select. 
        enum class BclkselVal {
            lposc0=0x00000000,     ///<Burst mode uses the Low Power Oscillator.
            apb=0x00000001,     ///<Burst mode uses the APB clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,BclkselVal> bclksel{}; 
        namespace BclkselValC{
            constexpr Register::FieldValue<decltype(bclksel)::Type,BclkselVal::lposc0> lposc0{};
            constexpr Register::FieldValue<decltype(bclksel)::Type,BclkselVal::apb> apb{};
        }
        }
        ///SAR Clock Divider. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Single Conversion Complete Interrupt Enable. 
        enum class SccienVal {
            disabled=0x00000000,     ///<Disable the ADC single data conversion complete interrupt.
            enabled=0x00000001,     ///<Enable the ADC single data conversion complete interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,SccienVal> sccien{}; 
        namespace SccienValC{
            constexpr Register::FieldValue<decltype(sccien)::Type,SccienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sccien)::Type,SccienVal::enabled> enabled{};
        }
        }
        ///Scan Done Interrupt Enable. 
        enum class SdienVal {
            disabled=0x00000000,     ///<Disable the ADC scan complete interrupt.
            enabled=0x00000001,     ///<Enable the ADC scan complete interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,SdienVal> sdien{}; 
        namespace SdienValC{
            constexpr Register::FieldValue<decltype(sdien)::Type,SdienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sdien)::Type,SdienVal::enabled> enabled{};
        }
        }
        ///FIFO Overrun Interrupt Enable. 
        enum class ForienVal {
            disabled=0x00000000,     ///<Disable the data FIFO overrun interrupt.
            enabled=0x00000001,     ///<Enable the data FIFO overrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ForienVal> forien{}; 
        namespace ForienValC{
            constexpr Register::FieldValue<decltype(forien)::Type,ForienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(forien)::Type,ForienVal::enabled> enabled{};
        }
        }
        ///FIFO Underrun Interrupt Enable. 
        enum class FurienVal {
            disabled=0x00000000,     ///<Disable the data FIFO underrun interrupt.
            enabled=0x00000001,     ///<Enable the data FIFO underrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,FurienVal> furien{}; 
        namespace FurienValC{
            constexpr Register::FieldValue<decltype(furien)::Type,FurienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(furien)::Type,FurienVal::enabled> enabled{};
        }
        }
    }
    namespace Nonecontrol{    ///<Measurement Control
        using Addr = Register::Address<0x4001a010,0x30100000,0,unsigned>;
        ///Reference Ground Select. 
        enum class RefgndselVal {
            internal=0x00000000,     ///<The internal device ground is used as the ground reference for ADC conversions.
            external=0x00000001,     ///<The VREFGND pin is used as the ground reference for ADC conversions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RefgndselVal> refgndsel{}; 
        namespace RefgndselValC{
            constexpr Register::FieldValue<decltype(refgndsel)::Type,RefgndselVal::internal> internal{};
            constexpr Register::FieldValue<decltype(refgndsel)::Type,RefgndselVal::external> external{};
        }
        }
        ///Sampling Clock Edge Select. 
        enum class ClkeselVal {
            rising=0x00000000,     ///<Select the rising edge of the APB clock.
            falling=0x00000001,     ///<Select the falling edge of the APB clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkeselVal> clkesel{}; 
        namespace ClkeselValC{
            constexpr Register::FieldValue<decltype(clkesel)::Type,ClkeselVal::rising> rising{};
            constexpr Register::FieldValue<decltype(clkesel)::Type,ClkeselVal::falling> falling{};
        }
        }
        ///Burst Mode Tracking Time. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> bmtk{}; 
        ///Start-Of-Conversion Source Select. 
        enum class ScselVal {
            adcnt0=0x00000000,     ///<An ADC conversion triggers from the ADCnT0 ("On Demand" by writing 1 to ADBUSY) trigger source.
            adcnt1=0x00000001,     ///<An ADC conversion triggers from the ADCnT1 (Timer 0 Low Overflow) trigger source.
            adcnt2=0x00000002,     ///<An ADC conversion triggers from the ADCnT2 (Timer 0 High Overflow) trigger source.
            adcnt3=0x00000003,     ///<An ADC conversion triggers from the ADCnT3 (Timer 1 Low Overflow) trigger source.
            adcnt4=0x00000004,     ///<An ADC conversion triggers from the ADCnT4 (Timer 1 High Overflow) trigger source.
            adcnt5=0x00000005,     ///<An ADC conversion triggers from the ADCnT5 (EPCA0 synchronization pulse) trigger source.
            adcnt6=0x00000006,     ///<An ADC conversion triggers from the ADCnT6 (I2C0 Timer overflow) trigger source.
            adcnt7=0x00000007,     ///<An ADC conversion triggers from the ADCnT7 (I2C1 Timer overflow) trigger source.
            adcnt8=0x00000008,     ///<An ADC conversion triggers from the ADCnT8 (SSG phase defined by ADSP bits) trigger source.
            adcnt9=0x00000009,     ///<An ADC conversion triggers from the ADCnT9 (RESERVED) trigger source.
            adcnt10=0x0000000a,     ///<An ADC conversion triggers from the ADCnT10 (RESERVED) trigger source.
            adcnt11=0x0000000b,     ///<An ADC conversion triggers from the ADCnT11 (RESERVED) trigger source.
            adcnt12=0x0000000c,     ///<An ADC conversion triggers from the ADCnT12 (RESERVED) trigger source.
            adcnt13=0x0000000d,     ///<An ADC conversion triggers from the ADCnT13 (RESERVED) trigger source.
            adcnt14=0x0000000e,     ///<An ADC conversion triggers from the ADCnT14 (RESERVED) trigger source.
            adcnt15=0x0000000f,     ///<An ADC conversion triggers from the ADCnT15 (PB1.13) trigger source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,ScselVal> scsel{}; 
        namespace ScselValC{
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt0> adcnt0{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt1> adcnt1{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt2> adcnt2{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt3> adcnt3{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt4> adcnt4{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt5> adcnt5{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt6> adcnt6{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt7> adcnt7{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt8> adcnt8{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt9> adcnt9{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt10> adcnt10{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt11> adcnt11{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt12> adcnt12{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt13> adcnt13{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt14> adcnt14{};
            constexpr Register::FieldValue<decltype(scsel)::Type,ScselVal::adcnt15> adcnt15{};
        }
        }
        ///Burst Mode Power Up Time. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> pwrtime{}; 
        ///Burst Mode Enable. 
        enum class BurstenVal {
            disabled=0x00000000,     ///<Disable burst mode.
            enabled=0x00000001,     ///<Enable burst mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,BurstenVal> bursten{}; 
        namespace BurstenValC{
            constexpr Register::FieldValue<decltype(bursten)::Type,BurstenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bursten)::Type,BurstenVal::enabled> enabled{};
        }
        }
        ///ADC Enable. 
        enum class AdcenVal {
            disabled=0x00000000,     ///<Disable the ADC (low-power shutdown).
            enabled=0x00000001,     ///<Enable the ADC (active and ready for data conversions).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,AdcenVal> adcen{}; 
        namespace AdcenValC{
            constexpr Register::FieldValue<decltype(adcen)::Type,AdcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcen)::Type,AdcenVal::enabled> enabled{};
        }
        }
        ///12-Bit Mode Sample Select. 
        enum class Ad12bsselVal {
            four=0x00000000,     ///<The ADC re-samples the input before each of the four conversions.
            one=0x00000001,     ///<The ADC samples once before the first conversion and converts four times.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ad12bsselVal> ad12bssel{}; 
        namespace Ad12bsselValC{
            constexpr Register::FieldValue<decltype(ad12bssel)::Type,Ad12bsselVal::four> four{};
            constexpr Register::FieldValue<decltype(ad12bssel)::Type,Ad12bsselVal::one> one{};
        }
        }
        ///Common Mode Buffer Enable. 
        enum class VcmenVal {
            disabled=0x00000000,     ///<Disable the common mode buffer.
            enabled=0x00000001,     ///<Enable the common mode buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,VcmenVal> vcmen{}; 
        namespace VcmenValC{
            constexpr Register::FieldValue<decltype(vcmen)::Type,VcmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vcmen)::Type,VcmenVal::enabled> enabled{};
        }
        }
        ///Accumulation Mode. 
        enum class AccmdVal {
            accumulate=0x00000000,     ///<Conversions will be accumulated for the specified number of cycles in burst mode according to the channel configuration.
            repeat=0x00000001,     ///<Conversions will not be accumulated in burst mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,AccmdVal> accmd{}; 
        namespace AccmdValC{
            constexpr Register::FieldValue<decltype(accmd)::Type,AccmdVal::accumulate> accumulate{};
            constexpr Register::FieldValue<decltype(accmd)::Type,AccmdVal::repeat> repeat{};
        }
        }
        ///ADC Tracking Mode. 
        enum class TrkmdVal {
            normal=0x00000000,     ///<Normal Tracking Mode: When the ADC is enabled, a conversion begins immediately following the start-of-conversion signal.
            delayed=0x00000001,     ///<Delayed Tracking Mode: When the ADC is enabled, a conversion begins 3 SAR clock cycles following the start-of-conversion signal. The ADC is allowed to track during this time.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TrkmdVal> trkmd{}; 
        namespace TrkmdValC{
            constexpr Register::FieldValue<decltype(trkmd)::Type,TrkmdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(trkmd)::Type,TrkmdVal::delayed> delayed{};
        }
        }
        ///ADC Busy. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> adbusy{}; 
        ///Bias Power Select. 
        enum class BiasselVal {
            mode0=0x00000000,     ///<Select bias current mode 0. Recommended to use modes 1, 2, or 3.
            mode1=0x00000001,     ///<Select bias current mode 1 (SARCLK = 16 MHz).
            mode2=0x00000002,     ///<Select bias current mode 2.
            mode3=0x00000003,     ///<Select bias current mode 3 (SARCLK = 4 MHz).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,BiasselVal> biassel{}; 
        namespace BiasselValC{
            constexpr Register::FieldValue<decltype(biassel)::Type,BiasselVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(biassel)::Type,BiasselVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(biassel)::Type,BiasselVal::mode2> mode2{};
            constexpr Register::FieldValue<decltype(biassel)::Type,BiasselVal::mode3> mode3{};
        }
        }
        ///Low Power Mode Enable. 
        enum class LpmdenVal {
            disabled=0x00000000,     ///<Disable low power mode.
            enabled=0x00000001,     ///<Enable low power mode (requires extended tracking time).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,LpmdenVal> lpmden{}; 
        namespace LpmdenValC{
            constexpr Register::FieldValue<decltype(lpmden)::Type,LpmdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lpmden)::Type,LpmdenVal::enabled> enabled{};
        }
        }
        ///MUX and VREF Low Power Enable. 
        enum class MreflpenVal {
            disabled=0x00000000,     ///<Disable low power mode.
            enabled=0x00000001,     ///<Enable low power mode (SAR clock <= 4 MHz).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,MreflpenVal> mreflpen{}; 
        namespace MreflpenValC{
            constexpr Register::FieldValue<decltype(mreflpen)::Type,MreflpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mreflpen)::Type,MreflpenVal::enabled> enabled{};
        }
        }
        ///Voltage Reference Select. 
        enum class VrefselVal {
            internalVref=0x00000000,     ///<Select the internal, dedicated SARADC voltage reference as the ADC reference.
            vdd=0x00000001,     ///<Select the VDD pin as the ADC reference.
            ldoOut=0x00000002,     ///<Select the output of the internal LDO regulator (~1.8 V) as the ADC reference.
            externalVref=0x00000003,     ///<Select the VREF pin as the ADC reference. This option is used for either an external VREF or the on-chip VREF driving out to the VREF pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,VrefselVal> vrefsel{}; 
        namespace VrefselValC{
            constexpr Register::FieldValue<decltype(vrefsel)::Type,VrefselVal::internalVref> internalVref{};
            constexpr Register::FieldValue<decltype(vrefsel)::Type,VrefselVal::vdd> vdd{};
            constexpr Register::FieldValue<decltype(vrefsel)::Type,VrefselVal::ldoOut> ldoOut{};
            constexpr Register::FieldValue<decltype(vrefsel)::Type,VrefselVal::externalVref> externalVref{};
        }
        }
    }
    namespace Nonesq7654{    ///<Channel Sequencer Time Slots 4-7 Setup
        using Addr = Register::Address<0x4001a020,0x80808080,0,unsigned>;
        ///Time Slot 4 Conversion Characteristic. 
        enum class Ts4chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 4.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 4.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 4.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Ts4chrVal> ts4chr{}; 
        namespace Ts4chrValC{
            constexpr Register::FieldValue<decltype(ts4chr)::Type,Ts4chrVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(ts4chr)::Type,Ts4chrVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(ts4chr)::Type,Ts4chrVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(ts4chr)::Type,Ts4chrVal::cc3> cc3{};
        }
        }
        ///Time Slot 4 Input Channel. 
        enum class Ts4muxVal {
            adcn0=0x00000000,     ///<Select channel ADCn.0 (PB0.0).
            adcn1=0x00000001,     ///<Select channel ADCn.1 (PB0.1).
            adcn2=0x00000002,     ///<Select channel ADCn.2 (PB0.2).
            adcn3=0x00000003,     ///<Select channel ADCn.3 (PB0.3).
            adcn4=0x00000004,     ///<Select channel ADCn.4 (PB0.4).
            adcn5=0x00000005,     ///<Select channel ADCn.5 (PB0.5).
            adcn6=0x00000006,     ///<Select channel ADCn.6 (PB0.7).
            adcn7=0x00000007,     ///<Select channel ADCn.7 (PB0.8).
            adcn8=0x00000008,     ///<Select channel ADCn.8 (PB0.9).
            adcn9=0x00000009,     ///<Select channel ADCn.9 (PB0.11).
            adcn10=0x0000000a,     ///<Select channel ADCn.10 (PB0.12).
            adcn11=0x0000000b,     ///<Select channel ADCn.11 (PB1.1).
            adcn12=0x0000000c,     ///<Select channel ADCn.12 (PB1.3).
            adcn13=0x0000000d,     ///<Select channel ADCn.13 (PB1.4).
            adcn14=0x0000000e,     ///<Select channel ADCn.14 (PB1.5).
            adcn15=0x0000000f,     ///<Select channel ADCn.15 (PB1.6).
            adcn16=0x00000010,     ///<Select channel ADCn.16 (IVC0.0 Output (IVC0C0)).
            adcn17=0x00000011,     ///<Select channel ADCn.17 (VSS).
            adcn18=0x00000012,     ///<Select channel ADCn.18 (1.8 V Output of LDO).
            adcn19=0x00000013,     ///<Select channel ADCn.19 (VDD).
            adcn20=0x00000014,     ///<Select channel ADCn.20 (Temperature Sensor Output).
            adcn21=0x00000015,     ///<Select channel ADCn.21 (VIOHD / 4).
            adcn22=0x00000016,     ///<Select channel ADCn.22 (RESERVED).
            adcn23=0x00000017,     ///<Select channel ADCn.23 (RESERVED).
            adcn24=0x00000018,     ///<Select channel ADCn.24 (RESERVED).
            adcn25=0x00000019,     ///<Select channel ADCn.25 (RESERVED).
            adcn26=0x0000001a,     ///<Select channel ADCn.26 (RESERVED).
            adcn27=0x0000001b,     ///<Select channel ADCn.27 (RESERVED).
            adcn28=0x0000001c,     ///<Select channel ADCn.28 (RESERVED).
            adcn29=0x0000001d,     ///<Select channel ADCn.29 (RESERVED).
            adcn30=0x0000001e,     ///<Select channel ADCn.30 (RESERVED).
            end=0x0000001f,     ///<None - End the sequence.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,Ts4muxVal> ts4mux{}; 
        namespace Ts4muxValC{
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn0> adcn0{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn1> adcn1{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn2> adcn2{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn3> adcn3{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn4> adcn4{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn5> adcn5{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn6> adcn6{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn7> adcn7{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn8> adcn8{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn9> adcn9{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn10> adcn10{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn11> adcn11{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn12> adcn12{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn13> adcn13{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn14> adcn14{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn15> adcn15{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn16> adcn16{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn17> adcn17{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn18> adcn18{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn19> adcn19{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn20> adcn20{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn21> adcn21{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn22> adcn22{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn23> adcn23{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn24> adcn24{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn25> adcn25{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn26> adcn26{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn27> adcn27{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn28> adcn28{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn29> adcn29{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::adcn30> adcn30{};
            constexpr Register::FieldValue<decltype(ts4mux)::Type,Ts4muxVal::end> end{};
        }
        }
        ///Time Slot 5 Conversion Characteristic. 
        enum class Ts5chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 5.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 5.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 5.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Ts5chrVal> ts5chr{}; 
        namespace Ts5chrValC{
            constexpr Register::FieldValue<decltype(ts5chr)::Type,Ts5chrVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(ts5chr)::Type,Ts5chrVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(ts5chr)::Type,Ts5chrVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(ts5chr)::Type,Ts5chrVal::cc3> cc3{};
        }
        }
        ///Time Slot 5 Input Channel. 
        enum class Ts5muxVal {
            adcn0=0x00000000,     ///<Select channel ADCn.0 (PB0.0).
            adcn1=0x00000001,     ///<Select channel ADCn.1 (PB0.1).
            adcn2=0x00000002,     ///<Select channel ADCn.2 (PB0.2).
            adcn3=0x00000003,     ///<Select channel ADCn.3 (PB0.3).
            adcn4=0x00000004,     ///<Select channel ADCn.4 (PB0.4).
            adcn5=0x00000005,     ///<Select channel ADCn.5 (PB0.5).
            adcn6=0x00000006,     ///<Select channel ADCn.6 (PB0.7).
            adcn7=0x00000007,     ///<Select channel ADCn.7 (PB0.8).
            adcn8=0x00000008,     ///<Select channel ADCn.8 (PB0.9).
            adcn9=0x00000009,     ///<Select channel ADCn.9 (PB0.11).
            adcn10=0x0000000a,     ///<Select channel ADCn.10 (PB0.12).
            adcn11=0x0000000b,     ///<Select channel ADCn.11 (PB1.1).
            adcn12=0x0000000c,     ///<Select channel ADCn.12 (PB1.3).
            adcn13=0x0000000d,     ///<Select channel ADCn.13 (PB1.4).
            adcn14=0x0000000e,     ///<Select channel ADCn.14 (PB1.5).
            adcn15=0x0000000f,     ///<Select channel ADCn.15 (PB1.6).
            adcn16=0x00000010,     ///<Select channel ADCn.16 (IVC0.0 Output (IVC0C0)).
            adcn17=0x00000011,     ///<Select channel ADCn.17 (VSS).
            adcn18=0x00000012,     ///<Select channel ADCn.18 (1.8 V Output of LDO).
            adcn19=0x00000013,     ///<Select channel ADCn.19 (VDD).
            adcn20=0x00000014,     ///<Select channel ADCn.20 (Temperature Sensor Output).
            adcn21=0x00000015,     ///<Select channel ADCn.21 (VIOHD / 4).
            adcn22=0x00000016,     ///<Select channel ADCn.22 (RESERVED).
            adcn23=0x00000017,     ///<Select channel ADCn.23 (RESERVED).
            adcn24=0x00000018,     ///<Select channel ADCn.24 (RESERVED).
            adcn25=0x00000019,     ///<Select channel ADCn.25 (RESERVED).
            adcn26=0x0000001a,     ///<Select channel ADCn.26 (RESERVED).
            adcn27=0x0000001b,     ///<Select channel ADCn.27 (RESERVED).
            adcn28=0x0000001c,     ///<Select channel ADCn.28 (RESERVED).
            adcn29=0x0000001d,     ///<Select channel ADCn.29 (RESERVED).
            adcn30=0x0000001e,     ///<Select channel ADCn.30 (RESERVED).
            end=0x0000001f,     ///<None - End the sequence.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,Ts5muxVal> ts5mux{}; 
        namespace Ts5muxValC{
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn0> adcn0{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn1> adcn1{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn2> adcn2{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn3> adcn3{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn4> adcn4{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn5> adcn5{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn6> adcn6{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn7> adcn7{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn8> adcn8{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn9> adcn9{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn10> adcn10{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn11> adcn11{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn12> adcn12{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn13> adcn13{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn14> adcn14{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn15> adcn15{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn16> adcn16{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn17> adcn17{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn18> adcn18{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn19> adcn19{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn20> adcn20{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn21> adcn21{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn22> adcn22{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn23> adcn23{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn24> adcn24{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn25> adcn25{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn26> adcn26{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn27> adcn27{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn28> adcn28{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn29> adcn29{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::adcn30> adcn30{};
            constexpr Register::FieldValue<decltype(ts5mux)::Type,Ts5muxVal::end> end{};
        }
        }
        ///Time Slot 6 Conversion Characteristic. 
        enum class Ts6chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 6.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 6.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 6.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Ts6chrVal> ts6chr{}; 
        namespace Ts6chrValC{
            constexpr Register::FieldValue<decltype(ts6chr)::Type,Ts6chrVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(ts6chr)::Type,Ts6chrVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(ts6chr)::Type,Ts6chrVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(ts6chr)::Type,Ts6chrVal::cc3> cc3{};
        }
        }
        ///Time Slot 6 Input Channel. 
        enum class Ts6muxVal {
            adcn0=0x00000000,     ///<Select channel ADCn.0 (PB0.0).
            adcn1=0x00000001,     ///<Select channel ADCn.1 (PB0.1).
            adcn2=0x00000002,     ///<Select channel ADCn.2 (PB0.2).
            adcn3=0x00000003,     ///<Select channel ADCn.3 (PB0.3).
            adcn4=0x00000004,     ///<Select channel ADCn.4 (PB0.4).
            adcn5=0x00000005,     ///<Select channel ADCn.5 (PB0.5).
            adcn6=0x00000006,     ///<Select channel ADCn.6 (PB0.7).
            adcn7=0x00000007,     ///<Select channel ADCn.7 (PB0.8).
            adcn8=0x00000008,     ///<Select channel ADCn.8 (PB0.9).
            adcn9=0x00000009,     ///<Select channel ADCn.9 (PB0.11).
            adcn10=0x0000000a,     ///<Select channel ADCn.10 (PB0.12).
            adcn11=0x0000000b,     ///<Select channel ADCn.11 (PB1.1).
            adcn12=0x0000000c,     ///<Select channel ADCn.12 (PB1.3).
            adcn13=0x0000000d,     ///<Select channel ADCn.13 (PB1.4).
            adcn14=0x0000000e,     ///<Select channel ADCn.14 (PB1.5).
            adcn15=0x0000000f,     ///<Select channel ADCn.15 (PB1.6).
            adcn16=0x00000010,     ///<Select channel ADCn.16 (IVC0.0 Output (IVC0C0)).
            adcn17=0x00000011,     ///<Select channel ADCn.17 (VSS).
            adcn18=0x00000012,     ///<Select channel ADCn.18 (1.8 V Output of LDO).
            adcn19=0x00000013,     ///<Select channel ADCn.19 (VDD).
            adcn20=0x00000014,     ///<Select channel ADCn.20 (Temperature Sensor Output).
            adcn21=0x00000015,     ///<Select channel ADCn.21 (VIOHD / 4).
            adcn22=0x00000016,     ///<Select channel ADCn.22 (RESERVED).
            adcn23=0x00000017,     ///<Select channel ADCn.23 (RESERVED).
            adcn24=0x00000018,     ///<Select channel ADCn.24 (RESERVED).
            adcn25=0x00000019,     ///<Select channel ADCn.25 (RESERVED).
            adcn26=0x0000001a,     ///<Select channel ADCn.26 (RESERVED).
            adcn27=0x0000001b,     ///<Select channel ADCn.27 (RESERVED).
            adcn28=0x0000001c,     ///<Select channel ADCn.28 (RESERVED).
            adcn29=0x0000001d,     ///<Select channel ADCn.29 (RESERVED).
            adcn30=0x0000001e,     ///<Select channel ADCn.30 (RESERVED).
            end=0x0000001f,     ///<None - End the sequence.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,Ts6muxVal> ts6mux{}; 
        namespace Ts6muxValC{
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn0> adcn0{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn1> adcn1{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn2> adcn2{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn3> adcn3{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn4> adcn4{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn5> adcn5{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn6> adcn6{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn7> adcn7{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn8> adcn8{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn9> adcn9{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn10> adcn10{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn11> adcn11{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn12> adcn12{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn13> adcn13{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn14> adcn14{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn15> adcn15{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn16> adcn16{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn17> adcn17{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn18> adcn18{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn19> adcn19{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn20> adcn20{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn21> adcn21{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn22> adcn22{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn23> adcn23{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn24> adcn24{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn25> adcn25{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn26> adcn26{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn27> adcn27{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn28> adcn28{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn29> adcn29{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::adcn30> adcn30{};
            constexpr Register::FieldValue<decltype(ts6mux)::Type,Ts6muxVal::end> end{};
        }
        }
        ///Time Slot 7 Conversion Characteristic. 
        enum class Ts7chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 7.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 7.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 7.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Ts7chrVal> ts7chr{}; 
        namespace Ts7chrValC{
            constexpr Register::FieldValue<decltype(ts7chr)::Type,Ts7chrVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(ts7chr)::Type,Ts7chrVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(ts7chr)::Type,Ts7chrVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(ts7chr)::Type,Ts7chrVal::cc3> cc3{};
        }
        }
        ///Time Slot 7 Input Channel. 
        enum class Ts7muxVal {
            adcn0=0x00000000,     ///<Select channel ADCn.0 (PB0.0).
            adcn1=0x00000001,     ///<Select channel ADCn.1 (PB0.1).
            adcn2=0x00000002,     ///<Select channel ADCn.2 (PB0.2).
            adcn3=0x00000003,     ///<Select channel ADCn.3 (PB0.3).
            adcn4=0x00000004,     ///<Select channel ADCn.4 (PB0.4).
            adcn5=0x00000005,     ///<Select channel ADCn.5 (PB0.5).
            adcn6=0x00000006,     ///<Select channel ADCn.6 (PB0.7).
            adcn7=0x00000007,     ///<Select channel ADCn.7 (PB0.8).
            adcn8=0x00000008,     ///<Select channel ADCn.8 (PB0.9).
            adcn9=0x00000009,     ///<Select channel ADCn.9 (PB0.11).
            adcn10=0x0000000a,     ///<Select channel ADCn.10 (PB0.12).
            adcn11=0x0000000b,     ///<Select channel ADCn.11 (PB1.1).
            adcn12=0x0000000c,     ///<Select channel ADCn.12 (PB1.3).
            adcn13=0x0000000d,     ///<Select channel ADCn.13 (PB1.4).
            adcn14=0x0000000e,     ///<Select channel ADCn.14 (PB1.5).
            adcn15=0x0000000f,     ///<Select channel ADCn.15 (PB1.6).
            adcn16=0x00000010,     ///<Select channel ADCn.16 (IVC0.0 Output (IVC0C0)).
            adcn17=0x00000011,     ///<Select channel ADCn.17 (VSS).
            adcn18=0x00000012,     ///<Select channel ADCn.18 (1.8 V Output of LDO).
            adcn19=0x00000013,     ///<Select channel ADCn.19 (VDD).
            adcn20=0x00000014,     ///<Select channel ADCn.20 (Temperature Sensor Output).
            adcn21=0x00000015,     ///<Select channel ADCn.21 (VIOHD / 4).
            adcn22=0x00000016,     ///<Select channel ADCn.22 (RESERVED).
            adcn23=0x00000017,     ///<Select channel ADCn.23 (RESERVED).
            adcn24=0x00000018,     ///<Select channel ADCn.24 (RESERVED).
            adcn25=0x00000019,     ///<Select channel ADCn.25 (RESERVED).
            adcn26=0x0000001a,     ///<Select channel ADCn.26 (RESERVED).
            adcn27=0x0000001b,     ///<Select channel ADCn.27 (RESERVED).
            adcn28=0x0000001c,     ///<Select channel ADCn.28 (RESERVED).
            adcn29=0x0000001d,     ///<Select channel ADCn.29 (RESERVED).
            adcn30=0x0000001e,     ///<Select channel ADCn.30 (RESERVED).
            end=0x0000001f,     ///<None - End the sequence.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,Ts7muxVal> ts7mux{}; 
        namespace Ts7muxValC{
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn0> adcn0{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn1> adcn1{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn2> adcn2{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn3> adcn3{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn4> adcn4{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn5> adcn5{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn6> adcn6{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn7> adcn7{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn8> adcn8{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn9> adcn9{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn10> adcn10{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn11> adcn11{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn12> adcn12{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn13> adcn13{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn14> adcn14{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn15> adcn15{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn16> adcn16{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn17> adcn17{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn18> adcn18{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn19> adcn19{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn20> adcn20{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn21> adcn21{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn22> adcn22{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn23> adcn23{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn24> adcn24{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn25> adcn25{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn26> adcn26{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn27> adcn27{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn28> adcn28{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn29> adcn29{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::adcn30> adcn30{};
            constexpr Register::FieldValue<decltype(ts7mux)::Type,Ts7muxVal::end> end{};
        }
        }
    }
    namespace Nonesq3210{    ///<Channel Sequencer Time Slots 0-3 Setup
        using Addr = Register::Address<0x4001a030,0x80808080,0,unsigned>;
        ///Time Slot 0 Conversion Characteristic. 
        enum class Ts0chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 0.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 0.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 0.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Ts0chrVal> ts0chr{}; 
        namespace Ts0chrValC{
            constexpr Register::FieldValue<decltype(ts0chr)::Type,Ts0chrVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(ts0chr)::Type,Ts0chrVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(ts0chr)::Type,Ts0chrVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(ts0chr)::Type,Ts0chrVal::cc3> cc3{};
        }
        }
        ///Time Slot 0 Input Channel. 
        enum class Ts0muxVal {
            adcn0=0x00000000,     ///<Select channel ADCn.0 (PB0.0).
            adcn1=0x00000001,     ///<Select channel ADCn.1 (PB0.1).
            adcn2=0x00000002,     ///<Select channel ADCn.2 (PB0.2).
            adcn3=0x00000003,     ///<Select channel ADCn.3 (PB0.3).
            adcn4=0x00000004,     ///<Select channel ADCn.4 (PB0.4).
            adcn5=0x00000005,     ///<Select channel ADCn.5 (PB0.5).
            adcn6=0x00000006,     ///<Select channel ADCn.6 (PB0.7).
            adcn7=0x00000007,     ///<Select channel ADCn.7 (PB0.8).
            adcn8=0x00000008,     ///<Select channel ADCn.8 (PB0.9).
            adcn9=0x00000009,     ///<Select channel ADCn.9 (PB0.11).
            adcn10=0x0000000a,     ///<Select channel ADCn.10 (PB0.12).
            adcn11=0x0000000b,     ///<Select channel ADCn.11 (PB1.1).
            adcn12=0x0000000c,     ///<Select channel ADCn.12 (PB1.3).
            adcn13=0x0000000d,     ///<Select channel ADCn.13 (PB1.4).
            adcn14=0x0000000e,     ///<Select channel ADCn.14 (PB1.5).
            adcn15=0x0000000f,     ///<Select channel ADCn.15 (PB1.6).
            adcn16=0x00000010,     ///<Select channel ADCn.16 (IVC0.0 Output (IVC0C0)).
            adcn17=0x00000011,     ///<Select channel ADCn.17 (VSS).
            adcn18=0x00000012,     ///<Select channel ADCn.18 (1.8 V Output of LDO).
            adcn19=0x00000013,     ///<Select channel ADCn.19 (VDD).
            adcn20=0x00000014,     ///<Select channel ADCn.20 (Temperature Sensor Output).
            adcn21=0x00000015,     ///<Select channel ADCn.21 (VIOHD / 4).
            adcn22=0x00000016,     ///<Select channel ADCn.22 (RESERVED).
            adcn23=0x00000017,     ///<Select channel ADCn.23 (RESERVED).
            adcn24=0x00000018,     ///<Select channel ADCn.24 (RESERVED).
            adcn25=0x00000019,     ///<Select channel ADCn.25 (RESERVED).
            adcn26=0x0000001a,     ///<Select channel ADCn.26 (RESERVED).
            adcn27=0x0000001b,     ///<Select channel ADCn.27 (RESERVED).
            adcn28=0x0000001c,     ///<Select channel ADCn.28 (RESERVED).
            adcn29=0x0000001d,     ///<Select channel ADCn.29 (RESERVED).
            adcn30=0x0000001e,     ///<Select channel ADCn.30 (RESERVED).
            end=0x0000001f,     ///<None - End the sequence.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,Ts0muxVal> ts0mux{}; 
        namespace Ts0muxValC{
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn0> adcn0{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn1> adcn1{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn2> adcn2{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn3> adcn3{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn4> adcn4{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn5> adcn5{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn6> adcn6{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn7> adcn7{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn8> adcn8{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn9> adcn9{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn10> adcn10{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn11> adcn11{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn12> adcn12{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn13> adcn13{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn14> adcn14{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn15> adcn15{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn16> adcn16{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn17> adcn17{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn18> adcn18{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn19> adcn19{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn20> adcn20{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn21> adcn21{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn22> adcn22{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn23> adcn23{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn24> adcn24{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn25> adcn25{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn26> adcn26{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn27> adcn27{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn28> adcn28{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn29> adcn29{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::adcn30> adcn30{};
            constexpr Register::FieldValue<decltype(ts0mux)::Type,Ts0muxVal::end> end{};
        }
        }
        ///Time Slot 1 Conversion Characteristic. 
        enum class Ts1chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 1.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 1.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 1.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Ts1chrVal> ts1chr{}; 
        namespace Ts1chrValC{
            constexpr Register::FieldValue<decltype(ts1chr)::Type,Ts1chrVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(ts1chr)::Type,Ts1chrVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(ts1chr)::Type,Ts1chrVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(ts1chr)::Type,Ts1chrVal::cc3> cc3{};
        }
        }
        ///Time Slot 1 Input Channel. 
        enum class Ts1muxVal {
            adcn0=0x00000000,     ///<Select channel ADCn.0 (PB0.0).
            adcn1=0x00000001,     ///<Select channel ADCn.1 (PB0.1).
            adcn2=0x00000002,     ///<Select channel ADCn.2 (PB0.2).
            adcn3=0x00000003,     ///<Select channel ADCn.3 (PB0.3).
            adcn4=0x00000004,     ///<Select channel ADCn.4 (PB0.4).
            adcn5=0x00000005,     ///<Select channel ADCn.5 (PB0.5).
            adcn6=0x00000006,     ///<Select channel ADCn.6 (PB0.7).
            adcn7=0x00000007,     ///<Select channel ADCn.7 (PB0.8).
            adcn8=0x00000008,     ///<Select channel ADCn.8 (PB0.9).
            adcn9=0x00000009,     ///<Select channel ADCn.9 (PB0.11).
            adcn10=0x0000000a,     ///<Select channel ADCn.10 (PB0.12).
            adcn11=0x0000000b,     ///<Select channel ADCn.11 (PB1.1).
            adcn12=0x0000000c,     ///<Select channel ADCn.12 (PB1.3).
            adcn13=0x0000000d,     ///<Select channel ADCn.13 (PB1.4).
            adcn14=0x0000000e,     ///<Select channel ADCn.14 (PB1.5).
            adcn15=0x0000000f,     ///<Select channel ADCn.15 (PB1.6).
            adcn16=0x00000010,     ///<Select channel ADCn.16 (IVC0.0 Output (IVC0C0)).
            adcn17=0x00000011,     ///<Select channel ADCn.17 (VSS).
            adcn18=0x00000012,     ///<Select channel ADCn.18 (1.8 V Output of LDO).
            adcn19=0x00000013,     ///<Select channel ADCn.19 (VDD).
            adcn20=0x00000014,     ///<Select channel ADCn.20 (Temperature Sensor Output).
            adcn21=0x00000015,     ///<Select channel ADCn.21 (VIOHD / 4).
            adcn22=0x00000016,     ///<Select channel ADCn.22 (RESERVED).
            adcn23=0x00000017,     ///<Select channel ADCn.23 (RESERVED).
            adcn24=0x00000018,     ///<Select channel ADCn.24 (RESERVED).
            adcn25=0x00000019,     ///<Select channel ADCn.25 (RESERVED).
            adcn26=0x0000001a,     ///<Select channel ADCn.26 (RESERVED).
            adcn27=0x0000001b,     ///<Select channel ADCn.27 (RESERVED).
            adcn28=0x0000001c,     ///<Select channel ADCn.28 (RESERVED).
            adcn29=0x0000001d,     ///<Select channel ADCn.29 (RESERVED).
            adcn30=0x0000001e,     ///<Select channel ADCn.30 (RESERVED).
            end=0x0000001f,     ///<None - End the sequence.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,Ts1muxVal> ts1mux{}; 
        namespace Ts1muxValC{
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn0> adcn0{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn1> adcn1{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn2> adcn2{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn3> adcn3{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn4> adcn4{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn5> adcn5{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn6> adcn6{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn7> adcn7{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn8> adcn8{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn9> adcn9{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn10> adcn10{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn11> adcn11{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn12> adcn12{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn13> adcn13{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn14> adcn14{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn15> adcn15{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn16> adcn16{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn17> adcn17{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn18> adcn18{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn19> adcn19{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn20> adcn20{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn21> adcn21{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn22> adcn22{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn23> adcn23{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn24> adcn24{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn25> adcn25{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn26> adcn26{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn27> adcn27{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn28> adcn28{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn29> adcn29{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::adcn30> adcn30{};
            constexpr Register::FieldValue<decltype(ts1mux)::Type,Ts1muxVal::end> end{};
        }
        }
        ///Time Slot 2 Conversion Characteristic. 
        enum class Ts2chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 2.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 2.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 2.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Ts2chrVal> ts2chr{}; 
        namespace Ts2chrValC{
            constexpr Register::FieldValue<decltype(ts2chr)::Type,Ts2chrVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(ts2chr)::Type,Ts2chrVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(ts2chr)::Type,Ts2chrVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(ts2chr)::Type,Ts2chrVal::cc3> cc3{};
        }
        }
        ///Time Slot 2 Input Channel. 
        enum class Ts2muxVal {
            adcn0=0x00000000,     ///<Select channel ADCn.0 (PB0.0).
            adcn1=0x00000001,     ///<Select channel ADCn.1 (PB0.1).
            adcn2=0x00000002,     ///<Select channel ADCn.2 (PB0.2).
            adcn3=0x00000003,     ///<Select channel ADCn.3 (PB0.3).
            adcn4=0x00000004,     ///<Select channel ADCn.4 (PB0.4).
            adcn5=0x00000005,     ///<Select channel ADCn.5 (PB0.5).
            adcn6=0x00000006,     ///<Select channel ADCn.6 (PB0.7).
            adcn7=0x00000007,     ///<Select channel ADCn.7 (PB0.8).
            adcn8=0x00000008,     ///<Select channel ADCn.8 (PB0.9).
            adcn9=0x00000009,     ///<Select channel ADCn.9 (PB0.11).
            adcn10=0x0000000a,     ///<Select channel ADCn.10 (PB0.12).
            adcn11=0x0000000b,     ///<Select channel ADCn.11 (PB1.1).
            adcn12=0x0000000c,     ///<Select channel ADCn.12 (PB1.3).
            adcn13=0x0000000d,     ///<Select channel ADCn.13 (PB1.4).
            adcn14=0x0000000e,     ///<Select channel ADCn.14 (PB1.5).
            adcn15=0x0000000f,     ///<Select channel ADCn.15 (PB1.6).
            adcn16=0x00000010,     ///<Select channel ADCn.16 (IVC0.0 Output (IVC0C0)).
            adcn17=0x00000011,     ///<Select channel ADCn.17 (VSS).
            adcn18=0x00000012,     ///<Select channel ADCn.18 (1.8 V Output of LDO).
            adcn19=0x00000013,     ///<Select channel ADCn.19 (VDD).
            adcn20=0x00000014,     ///<Select channel ADCn.20 (Temperature Sensor Output).
            adcn21=0x00000015,     ///<Select channel ADCn.21 (VIOHD / 4).
            adcn22=0x00000016,     ///<Select channel ADCn.22 (RESERVED).
            adcn23=0x00000017,     ///<Select channel ADCn.23 (RESERVED).
            adcn24=0x00000018,     ///<Select channel ADCn.24 (RESERVED).
            adcn25=0x00000019,     ///<Select channel ADCn.25 (RESERVED).
            adcn26=0x0000001a,     ///<Select channel ADCn.26 (RESERVED).
            adcn27=0x0000001b,     ///<Select channel ADCn.27 (RESERVED).
            adcn28=0x0000001c,     ///<Select channel ADCn.28 (RESERVED).
            adcn29=0x0000001d,     ///<Select channel ADCn.29 (RESERVED).
            adcn30=0x0000001e,     ///<Select channel ADCn.30 (RESERVED).
            end=0x0000001f,     ///<None - End the sequence.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,Ts2muxVal> ts2mux{}; 
        namespace Ts2muxValC{
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn0> adcn0{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn1> adcn1{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn2> adcn2{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn3> adcn3{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn4> adcn4{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn5> adcn5{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn6> adcn6{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn7> adcn7{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn8> adcn8{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn9> adcn9{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn10> adcn10{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn11> adcn11{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn12> adcn12{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn13> adcn13{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn14> adcn14{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn15> adcn15{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn16> adcn16{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn17> adcn17{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn18> adcn18{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn19> adcn19{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn20> adcn20{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn21> adcn21{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn22> adcn22{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn23> adcn23{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn24> adcn24{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn25> adcn25{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn26> adcn26{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn27> adcn27{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn28> adcn28{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn29> adcn29{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::adcn30> adcn30{};
            constexpr Register::FieldValue<decltype(ts2mux)::Type,Ts2muxVal::end> end{};
        }
        }
        ///Time Slot 3 Conversion Characteristic. 
        enum class Ts3chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 3.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 3.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 3.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Ts3chrVal> ts3chr{}; 
        namespace Ts3chrValC{
            constexpr Register::FieldValue<decltype(ts3chr)::Type,Ts3chrVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(ts3chr)::Type,Ts3chrVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(ts3chr)::Type,Ts3chrVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(ts3chr)::Type,Ts3chrVal::cc3> cc3{};
        }
        }
        ///Time Slot 3 Input Channel. 
        enum class Ts3muxVal {
            adcn0=0x00000000,     ///<Select channel ADCn.0 (PB0.0).
            adcn1=0x00000001,     ///<Select channel ADCn.1 (PB0.1).
            adcn2=0x00000002,     ///<Select channel ADCn.2 (PB0.2).
            adcn3=0x00000003,     ///<Select channel ADCn.3 (PB0.3).
            adcn4=0x00000004,     ///<Select channel ADCn.4 (PB0.4).
            adcn5=0x00000005,     ///<Select channel ADCn.5 (PB0.5).
            adcn6=0x00000006,     ///<Select channel ADCn.6 (PB0.7).
            adcn7=0x00000007,     ///<Select channel ADCn.7 (PB0.8).
            adcn8=0x00000008,     ///<Select channel ADCn.8 (PB0.9).
            adcn9=0x00000009,     ///<Select channel ADCn.9 (PB0.11).
            adcn10=0x0000000a,     ///<Select channel ADCn.10 (PB0.12).
            adcn11=0x0000000b,     ///<Select channel ADCn.11 (PB1.1).
            adcn12=0x0000000c,     ///<Select channel ADCn.12 (PB1.3).
            adcn13=0x0000000d,     ///<Select channel ADCn.13 (PB1.4).
            adcn14=0x0000000e,     ///<Select channel ADCn.14 (PB1.5).
            adcn15=0x0000000f,     ///<Select channel ADCn.15 (PB1.6).
            adcn16=0x00000010,     ///<Select channel ADCn.16 (IVC0.0 Output (IVC0C0)).
            adcn17=0x00000011,     ///<Select channel ADCn.17 (VSS).
            adcn18=0x00000012,     ///<Select channel ADCn.18 (1.8 V Output of LDO).
            adcn19=0x00000013,     ///<Select channel ADCn.19 (VDD).
            adcn20=0x00000014,     ///<Select channel ADCn.20 (Temperature Sensor Output).
            adcn21=0x00000015,     ///<Select channel ADCn.21 (VIOHD / 4).
            adcn22=0x00000016,     ///<Select channel ADCn.22 (RESERVED).
            adcn23=0x00000017,     ///<Select channel ADCn.23 (RESERVED).
            adcn24=0x00000018,     ///<Select channel ADCn.24 (RESERVED).
            adcn25=0x00000019,     ///<Select channel ADCn.25 (RESERVED).
            adcn26=0x0000001a,     ///<Select channel ADCn.26 (RESERVED).
            adcn27=0x0000001b,     ///<Select channel ADCn.27 (RESERVED).
            adcn28=0x0000001c,     ///<Select channel ADCn.28 (RESERVED).
            adcn29=0x0000001d,     ///<Select channel ADCn.29 (RESERVED).
            adcn30=0x0000001e,     ///<Select channel ADCn.30 (RESERVED).
            end=0x0000001f,     ///<None - End the sequence.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,Ts3muxVal> ts3mux{}; 
        namespace Ts3muxValC{
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn0> adcn0{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn1> adcn1{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn2> adcn2{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn3> adcn3{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn4> adcn4{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn5> adcn5{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn6> adcn6{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn7> adcn7{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn8> adcn8{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn9> adcn9{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn10> adcn10{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn11> adcn11{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn12> adcn12{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn13> adcn13{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn14> adcn14{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn15> adcn15{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn16> adcn16{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn17> adcn17{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn18> adcn18{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn19> adcn19{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn20> adcn20{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn21> adcn21{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn22> adcn22{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn23> adcn23{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn24> adcn24{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn25> adcn25{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn26> adcn26{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn27> adcn27{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn28> adcn28{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn29> adcn29{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::adcn30> adcn30{};
            constexpr Register::FieldValue<decltype(ts3mux)::Type,Ts3muxVal::end> end{};
        }
        }
    }
    namespace Nonechar32{    ///<Conversion Characteristic 2 and 3 Setup
        using Addr = Register::Address<0x4001a040,0xfe00fe00,0,unsigned>;
        ///Conversion Characteristic 2 Gain. 
        enum class Chr2gnVal {
            unity=0x00000000,     ///<The on-chip PGA gain is 1.
            half=0x00000001,     ///<The on-chip PGA gain is 0.5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Chr2gnVal> chr2gn{}; 
        namespace Chr2gnValC{
            constexpr Register::FieldValue<decltype(chr2gn)::Type,Chr2gnVal::unity> unity{};
            constexpr Register::FieldValue<decltype(chr2gn)::Type,Chr2gnVal::half> half{};
        }
        }
        ///Conversion Characteristic 2 Repeat Counter. 
        enum class Chr2rptVal {
            acc1=0x00000000,     ///<Accumulate one sample.
            acc4=0x00000001,     ///<Accumulate four samples.
            acc8=0x00000002,     ///<Accumulate eight samples.
            acc16=0x00000003,     ///<Accumulate sixteen samples.
            acc32=0x00000004,     ///<Accumulate thirty-two samples (10-bit mode only).
            acc64=0x00000005,     ///<Accumulate sixty-four samples (10-bit mode only).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,Chr2rptVal> chr2rpt{}; 
        namespace Chr2rptValC{
            constexpr Register::FieldValue<decltype(chr2rpt)::Type,Chr2rptVal::acc1> acc1{};
            constexpr Register::FieldValue<decltype(chr2rpt)::Type,Chr2rptVal::acc4> acc4{};
            constexpr Register::FieldValue<decltype(chr2rpt)::Type,Chr2rptVal::acc8> acc8{};
            constexpr Register::FieldValue<decltype(chr2rpt)::Type,Chr2rptVal::acc16> acc16{};
            constexpr Register::FieldValue<decltype(chr2rpt)::Type,Chr2rptVal::acc32> acc32{};
            constexpr Register::FieldValue<decltype(chr2rpt)::Type,Chr2rptVal::acc64> acc64{};
        }
        }
        ///Conversion Characteristic 2 Left-Shift Bits. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> chr2ls{}; 
        ///Conversion Characteristic 2 Resolution Selection. 
        enum class Chr2rselVal {
            b10=0x00000000,     ///<Select 10-bit Mode.
            b12=0x00000001,     ///<Select 12-bit Mode (burst mode must be enabled).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Chr2rselVal> chr2rsel{}; 
        namespace Chr2rselValC{
            constexpr Register::FieldValue<decltype(chr2rsel)::Type,Chr2rselVal::b10> b10{};
            constexpr Register::FieldValue<decltype(chr2rsel)::Type,Chr2rselVal::b12> b12{};
        }
        }
        ///Conversion Characteristic 2 Window Comparator Interrupt Enable. 
        enum class Chr2wcienVal {
            disabled=0x00000000,     ///<Disable window comparison interrupts.
            enabled=0x00000001,     ///<Enabled window comparison interrupts.  The window comparator will be used to check the ADC result on channels that use this characteristic.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Chr2wcienVal> chr2wcien{}; 
        namespace Chr2wcienValC{
            constexpr Register::FieldValue<decltype(chr2wcien)::Type,Chr2wcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(chr2wcien)::Type,Chr2wcienVal::enabled> enabled{};
        }
        }
        ///Conversion Characteristic 3 Gain. 
        enum class Chr3gnVal {
            unity=0x00000000,     ///<The on-chip PGA gain is 1.
            half=0x00000001,     ///<The on-chip PGA gain is 0.5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Chr3gnVal> chr3gn{}; 
        namespace Chr3gnValC{
            constexpr Register::FieldValue<decltype(chr3gn)::Type,Chr3gnVal::unity> unity{};
            constexpr Register::FieldValue<decltype(chr3gn)::Type,Chr3gnVal::half> half{};
        }
        }
        ///Conversion Characteristic 3 Repeat Counter. 
        enum class Chr3rptVal {
            acc1=0x00000000,     ///<Accumulate one sample.
            acc4=0x00000001,     ///<Accumulate four samples.
            acc8=0x00000002,     ///<Accumulate eight samples.
            acc16=0x00000003,     ///<Accumulate sixteen samples.
            acc32=0x00000004,     ///<Accumulate thirty-two samples (10-bit mode only).
            acc64=0x00000005,     ///<Accumulate sixty-four samples (10-bit mode only).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,Chr3rptVal> chr3rpt{}; 
        namespace Chr3rptValC{
            constexpr Register::FieldValue<decltype(chr3rpt)::Type,Chr3rptVal::acc1> acc1{};
            constexpr Register::FieldValue<decltype(chr3rpt)::Type,Chr3rptVal::acc4> acc4{};
            constexpr Register::FieldValue<decltype(chr3rpt)::Type,Chr3rptVal::acc8> acc8{};
            constexpr Register::FieldValue<decltype(chr3rpt)::Type,Chr3rptVal::acc16> acc16{};
            constexpr Register::FieldValue<decltype(chr3rpt)::Type,Chr3rptVal::acc32> acc32{};
            constexpr Register::FieldValue<decltype(chr3rpt)::Type,Chr3rptVal::acc64> acc64{};
        }
        }
        ///Conversion Characteristic 3 Left-Shift Bits. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> chr3ls{}; 
        ///Conversion Characteristic 3 Resolution Selection. 
        enum class Chr3rselVal {
            b10=0x00000000,     ///<Select 10-bit Mode.
            b12=0x00000001,     ///<Select 12-bit Mode (burst mode must be enabled).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Chr3rselVal> chr3rsel{}; 
        namespace Chr3rselValC{
            constexpr Register::FieldValue<decltype(chr3rsel)::Type,Chr3rselVal::b10> b10{};
            constexpr Register::FieldValue<decltype(chr3rsel)::Type,Chr3rselVal::b12> b12{};
        }
        }
        ///Conversion Characteristic 3 Window Comparator Interrupt Enable. 
        enum class Chr3wcienVal {
            disabled=0x00000000,     ///<Disable window comparison interrupts.
            enabled=0x00000001,     ///<Enabled window comparison interrupts.  The window comparator will be used to check the ADC result on channels that use this characteristic.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Chr3wcienVal> chr3wcien{}; 
        namespace Chr3wcienValC{
            constexpr Register::FieldValue<decltype(chr3wcien)::Type,Chr3wcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(chr3wcien)::Type,Chr3wcienVal::enabled> enabled{};
        }
        }
    }
    namespace Nonechar10{    ///<Conversion Characteristic 0 and 1 Setup
        using Addr = Register::Address<0x4001a050,0xfe00fe00,0,unsigned>;
        ///Conversion Characteristic 0 Gain. 
        enum class Chr0gnVal {
            unity=0x00000000,     ///<The on-chip PGA gain is 1.
            half=0x00000001,     ///<The on-chip PGA gain is 0.5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Chr0gnVal> chr0gn{}; 
        namespace Chr0gnValC{
            constexpr Register::FieldValue<decltype(chr0gn)::Type,Chr0gnVal::unity> unity{};
            constexpr Register::FieldValue<decltype(chr0gn)::Type,Chr0gnVal::half> half{};
        }
        }
        ///Conversion Characteristic 0 Repeat Counter. 
        enum class Chr0rptVal {
            acc1=0x00000000,     ///<Accumulate one sample.
            acc4=0x00000001,     ///<Accumulate four samples.
            acc8=0x00000002,     ///<Accumulate eight samples.
            acc16=0x00000003,     ///<Accumulate sixteen samples.
            acc32=0x00000004,     ///<Accumulate thirty-two samples (10-bit mode only).
            acc64=0x00000005,     ///<Accumulate sixty-four samples (10-bit mode only).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,Chr0rptVal> chr0rpt{}; 
        namespace Chr0rptValC{
            constexpr Register::FieldValue<decltype(chr0rpt)::Type,Chr0rptVal::acc1> acc1{};
            constexpr Register::FieldValue<decltype(chr0rpt)::Type,Chr0rptVal::acc4> acc4{};
            constexpr Register::FieldValue<decltype(chr0rpt)::Type,Chr0rptVal::acc8> acc8{};
            constexpr Register::FieldValue<decltype(chr0rpt)::Type,Chr0rptVal::acc16> acc16{};
            constexpr Register::FieldValue<decltype(chr0rpt)::Type,Chr0rptVal::acc32> acc32{};
            constexpr Register::FieldValue<decltype(chr0rpt)::Type,Chr0rptVal::acc64> acc64{};
        }
        }
        ///Conversion Characteristic 0 Left-Shift Bits. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> chr0ls{}; 
        ///Conversion Characteristic 0 Resolution Selection. 
        enum class Chr0rselVal {
            b10=0x00000000,     ///<Select 10-bit Mode.
            b12=0x00000001,     ///<Select 12-bit Mode (burst mode must be enabled).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Chr0rselVal> chr0rsel{}; 
        namespace Chr0rselValC{
            constexpr Register::FieldValue<decltype(chr0rsel)::Type,Chr0rselVal::b10> b10{};
            constexpr Register::FieldValue<decltype(chr0rsel)::Type,Chr0rselVal::b12> b12{};
        }
        }
        ///Conversion Characteristic 0 Window Comparator Interrupt Enable. 
        enum class Chr0wcienVal {
            disabled=0x00000000,     ///<Disable window comparison interrupts.
            enabled=0x00000001,     ///<Enabled window comparison interrupts.  The window comparator will be used to check the ADC result on channels that use this characteristic.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Chr0wcienVal> chr0wcien{}; 
        namespace Chr0wcienValC{
            constexpr Register::FieldValue<decltype(chr0wcien)::Type,Chr0wcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(chr0wcien)::Type,Chr0wcienVal::enabled> enabled{};
        }
        }
        ///Conversion Characteristic 1 Gain. 
        enum class Chr1gnVal {
            unity=0x00000000,     ///<The on-chip PGA gain is 1.
            half=0x00000001,     ///<The on-chip PGA gain is 0.5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Chr1gnVal> chr1gn{}; 
        namespace Chr1gnValC{
            constexpr Register::FieldValue<decltype(chr1gn)::Type,Chr1gnVal::unity> unity{};
            constexpr Register::FieldValue<decltype(chr1gn)::Type,Chr1gnVal::half> half{};
        }
        }
        ///Conversion Characteristic 1 Repeat Counter. 
        enum class Chr1rptVal {
            acc1=0x00000000,     ///<Accumulate one sample.
            acc4=0x00000001,     ///<Accumulate four samples.
            acc8=0x00000002,     ///<Accumulate eight samples.
            acc16=0x00000003,     ///<Accumulate sixteen samples.
            acc32=0x00000004,     ///<Accumulate thirty-two samples (10-bit mode only).
            acc64=0x00000005,     ///<Accumulate sixty-four samples (10-bit mode only).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,Chr1rptVal> chr1rpt{}; 
        namespace Chr1rptValC{
            constexpr Register::FieldValue<decltype(chr1rpt)::Type,Chr1rptVal::acc1> acc1{};
            constexpr Register::FieldValue<decltype(chr1rpt)::Type,Chr1rptVal::acc4> acc4{};
            constexpr Register::FieldValue<decltype(chr1rpt)::Type,Chr1rptVal::acc8> acc8{};
            constexpr Register::FieldValue<decltype(chr1rpt)::Type,Chr1rptVal::acc16> acc16{};
            constexpr Register::FieldValue<decltype(chr1rpt)::Type,Chr1rptVal::acc32> acc32{};
            constexpr Register::FieldValue<decltype(chr1rpt)::Type,Chr1rptVal::acc64> acc64{};
        }
        }
        ///Conversion Characteristic 1 Left-Shift Bits. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> chr1ls{}; 
        ///Conversion Characteristic 1 Resolution Selection. 
        enum class Chr1rselVal {
            b10=0x00000000,     ///<Select 10-bit Mode.
            b12=0x00000001,     ///<Select 12-bit Mode (burst mode must be enabled).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Chr1rselVal> chr1rsel{}; 
        namespace Chr1rselValC{
            constexpr Register::FieldValue<decltype(chr1rsel)::Type,Chr1rselVal::b10> b10{};
            constexpr Register::FieldValue<decltype(chr1rsel)::Type,Chr1rselVal::b12> b12{};
        }
        }
        ///Conversion Characteristic 1 Window Comparator Interrupt Enable. 
        enum class Chr1wcienVal {
            disabled=0x00000000,     ///<Disable window comparison interrupts.
            enabled=0x00000001,     ///<Enabled window comparison interrupts.  The window comparator will be used to check the ADC result on channels that use this characteristic.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Chr1wcienVal> chr1wcien{}; 
        namespace Chr1wcienValC{
            constexpr Register::FieldValue<decltype(chr1wcien)::Type,Chr1wcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(chr1wcien)::Type,Chr1wcienVal::enabled> enabled{};
        }
        }
    }
    namespace Nonedata{    ///<Output Data Word
        using Addr = Register::Address<0x4001a060,0x00000000,0,unsigned>;
        ///Output Data Word. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonewclimits{    ///<Window Comparator Limits
        using Addr = Register::Address<0x4001a070,0x00000000,0,unsigned>;
        ///Less-Than Window Comparator Limit. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wclt{}; 
        ///Greater-Than Window Comparator Limit. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> wcgt{}; 
    }
    namespace Noneacc{    ///<Accumulator Initial Value
        using Addr = Register::Address<0x4001a080,0xffff0000,0,unsigned>;
        ///Accumulator Initial Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> acc{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x4001a090,0xffffffe0,0,unsigned>;
        ///Window Compare Interrupt. 
        enum class WciVal {
            notSet=0x00000000,     ///<Read: A window compare interrupt has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A window compare interrupt occurred. Write: Force a window compare interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WciVal> wci{}; 
        namespace WciValC{
            constexpr Register::FieldValue<decltype(wci)::Type,WciVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(wci)::Type,WciVal::set> set{};
        }
        }
        ///Single Conversion Complete Interrupt. 
        enum class ScciVal {
            notSet=0x00000000,     ///<Read: A single data conversion interrupt has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A single data conversion interrupt occurred. Write: Force a single data conversion interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ScciVal> scci{}; 
        namespace ScciValC{
            constexpr Register::FieldValue<decltype(scci)::Type,ScciVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(scci)::Type,ScciVal::set> set{};
        }
        }
        ///Scan Done Interrupt. 
        enum class SdiVal {
            notSet=0x00000000,     ///<Read: A scan done interrupt has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A scan done interrupt occurred. Write: Force a scan done interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SdiVal> sdi{}; 
        namespace SdiValC{
            constexpr Register::FieldValue<decltype(sdi)::Type,SdiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(sdi)::Type,SdiVal::set> set{};
        }
        }
        ///FIFO Overrun Interrupt. 
        enum class ForiVal {
            notSet=0x00000000,     ///<Read: A data FIFO overrun interrupt has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A data FIFO overrun interrupt occurred. Write: Force a data FIFO overrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ForiVal> fori{}; 
        namespace ForiValC{
            constexpr Register::FieldValue<decltype(fori)::Type,ForiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(fori)::Type,ForiVal::set> set{};
        }
        }
        ///FIFO Underrun Interrupt. 
        enum class FuriVal {
            notSet=0x00000000,     ///<Read: A data FIFO underrun interrupt has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A data FIFO underrun interrupt occurred. Write: Force a data FIFO underrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FuriVal> furi{}; 
        namespace FuriValC{
            constexpr Register::FieldValue<decltype(furi)::Type,FuriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(furi)::Type,FuriVal::set> set{};
        }
        }
    }
    namespace Nonefifostatus{    ///<FIFO Status
        using Addr = Register::Address<0x4001a0a0,0xffffffc0,0,unsigned>;
        ///FIFO Level. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fifolvl{}; 
        ///Data Packing Status. 
        enum class DpstsVal {
            lower=0x00000000,     ///<The next ADC conversion will be written to the lower half-word.
            upper=0x00000001,     ///<The next ADC conversion will be written to the upper half-word.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DpstsVal> dpsts{}; 
        namespace DpstsValC{
            constexpr Register::FieldValue<decltype(dpsts)::Type,DpstsVal::lower> lower{};
            constexpr Register::FieldValue<decltype(dpsts)::Type,DpstsVal::upper> upper{};
        }
        }
        ///Data Ready Flag. 
        enum class DrdyfVal {
            notSet=0x00000000,     ///<New data is not produced yet.
            set=0x00000001,     ///<New data is ready.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DrdyfVal> drdyf{}; 
        namespace DrdyfValC{
            constexpr Register::FieldValue<decltype(drdyf)::Type,DrdyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(drdyf)::Type,DrdyfVal::set> set{};
        }
        }
    }
}
