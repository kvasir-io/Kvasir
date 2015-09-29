#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<Module Configuration
        using Addr = Register::Address<0x4001a000,0x80002b3f,0,unsigned>;
        ///Output Packing Mode. 
        enum class packmdVal {
            upperOnly=0x00000000,     ///<Data is written to the upper half-word and the lower half-word is filled with 0's.  An SCI interrupt is triggered when data is written, if enabled.
            lowerOnly=0x00000001,     ///<Data is written to the lower half-word, and the upper half-word is filled with 0's. An SCI interrupt is triggered when data is written, if enabled.
            upperFirst=0x00000002,     ///<Two data words are packed into the register with the upper half-word representing the earlier data, and the lower half-word representing the later data. The ADC write to the lower half-word will trigger the SCI interrupt, if enabled.
            lowerFirst=0x00000003,     ///<Two data words are packed into the register with the lower half-word representing the earlier data, and the upper half-word representing the later data. The ADC write to the upper half-word will trigger the SCI interrupt, if enabled.
        };
        namespace packmdValC{
            constexpr MPL::Value<packmdVal,packmdVal::upperOnly> upperOnly{};
            constexpr MPL::Value<packmdVal,packmdVal::lowerOnly> lowerOnly{};
            constexpr MPL::Value<packmdVal,packmdVal::upperFirst> upperFirst{};
            constexpr MPL::Value<packmdVal,packmdVal::lowerFirst> lowerFirst{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,packmdVal> packmd{}; 
        ///Scan Mode Enable. 
        enum class scanenVal {
            disabled=0x00000000,     ///<Disable ADC scan mode.
            enabled=0x00000001,     ///<Enable ADC scan mode. The ADC will scan through the defined time slots in sequence on every start of conversion.
        };
        namespace scanenValC{
            constexpr MPL::Value<scanenVal,scanenVal::disabled> disabled{};
            constexpr MPL::Value<scanenVal,scanenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,scanenVal> scanen{}; 
        ///Scan Mode Select. 
        enum class scanmdVal {
            once=0x00000000,     ///<The channel sequencer will cycle through all of the specified time slots once.
            loop=0x00000001,     ///<The channel sequencer will cycle through all of the specified time slots in a loop until SCANEN is cleared to 0.
        };
        namespace scanmdValC{
            constexpr MPL::Value<scanmdVal,scanmdVal::once> once{};
            constexpr MPL::Value<scanmdVal,scanmdVal::loop> loop{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,scanmdVal> scanmd{}; 
        ///DMA Interface Enable . 
        enum class dmaenVal {
            disabled=0x00000000,     ///<Disable the ADC module DMA interface.
            enabled=0x00000001,     ///<Enable the ADC module DMA interface.
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::disabled> disabled{};
            constexpr MPL::Value<dmaenVal,dmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
        ///Burst Mode Clock Select. 
        enum class bclkselVal {
            lposc0=0x00000000,     ///<Burst mode uses the Low Power Oscillator.
            apb=0x00000001,     ///<Burst mode uses the APB clock.
        };
        namespace bclkselValC{
            constexpr MPL::Value<bclkselVal,bclkselVal::lposc0> lposc0{};
            constexpr MPL::Value<bclkselVal,bclkselVal::apb> apb{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,bclkselVal> bclksel{}; 
        ///SAR Clock Divider. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Single Conversion Complete Interrupt Enable. 
        enum class sccienVal {
            disabled=0x00000000,     ///<Disable the ADC single data conversion complete interrupt.
            enabled=0x00000001,     ///<Enable the ADC single data conversion complete interrupt.
        };
        namespace sccienValC{
            constexpr MPL::Value<sccienVal,sccienVal::disabled> disabled{};
            constexpr MPL::Value<sccienVal,sccienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,sccienVal> sccien{}; 
        ///Scan Done Interrupt Enable. 
        enum class sdienVal {
            disabled=0x00000000,     ///<Disable the ADC scan complete interrupt.
            enabled=0x00000001,     ///<Enable the ADC scan complete interrupt.
        };
        namespace sdienValC{
            constexpr MPL::Value<sdienVal,sdienVal::disabled> disabled{};
            constexpr MPL::Value<sdienVal,sdienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,sdienVal> sdien{}; 
        ///FIFO Overrun Interrupt Enable. 
        enum class forienVal {
            disabled=0x00000000,     ///<Disable the data FIFO overrun interrupt.
            enabled=0x00000001,     ///<Enable the data FIFO overrun interrupt.
        };
        namespace forienValC{
            constexpr MPL::Value<forienVal,forienVal::disabled> disabled{};
            constexpr MPL::Value<forienVal,forienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,forienVal> forien{}; 
        ///FIFO Underrun Interrupt Enable. 
        enum class furienVal {
            disabled=0x00000000,     ///<Disable the data FIFO underrun interrupt.
            enabled=0x00000001,     ///<Enable the data FIFO underrun interrupt.
        };
        namespace furienValC{
            constexpr MPL::Value<furienVal,furienVal::disabled> disabled{};
            constexpr MPL::Value<furienVal,furienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,furienVal> furien{}; 
    }
    namespace Nonecontrol{    ///<Measurement Control
        using Addr = Register::Address<0x4001a010,0x30100000,0,unsigned>;
        ///Reference Ground Select. 
        enum class refgndselVal {
            internal=0x00000000,     ///<The internal device ground is used as the ground reference for ADC conversions.
            external=0x00000001,     ///<The VREFGND pin is used as the ground reference for ADC conversions.
        };
        namespace refgndselValC{
            constexpr MPL::Value<refgndselVal,refgndselVal::internal> internal{};
            constexpr MPL::Value<refgndselVal,refgndselVal::external> external{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,refgndselVal> refgndsel{}; 
        ///Sampling Clock Edge Select. 
        enum class clkeselVal {
            rising=0x00000000,     ///<Select the rising edge of the APB clock.
            falling=0x00000001,     ///<Select the falling edge of the APB clock.
        };
        namespace clkeselValC{
            constexpr MPL::Value<clkeselVal,clkeselVal::rising> rising{};
            constexpr MPL::Value<clkeselVal,clkeselVal::falling> falling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,clkeselVal> clkesel{}; 
        ///Burst Mode Tracking Time. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> bmtk{}; 
        ///Start-Of-Conversion Source Select. 
        enum class scselVal {
            adcnt0=0x00000000,     ///<An ADC conversion triggers from the <dict>ADCnT0</dict> trigger source.
            adcnt1=0x00000001,     ///<An ADC conversion triggers from the <dict>ADCnT1</dict> trigger source.
            adcnt2=0x00000002,     ///<An ADC conversion triggers from the <dict>ADCnT2</dict> trigger source.
            adcnt3=0x00000003,     ///<An ADC conversion triggers from the <dict>ADCnT3</dict> trigger source.
            adcnt4=0x00000004,     ///<An ADC conversion triggers from the <dict>ADCnT4</dict> trigger source.
            adcnt5=0x00000005,     ///<An ADC conversion triggers from the <dict>ADCnT5</dict> trigger source.
            adcnt6=0x00000006,     ///<An ADC conversion triggers from the <dict>ADCnT6</dict> trigger source.
            adcnt7=0x00000007,     ///<An ADC conversion triggers from the <dict>ADCnT7</dict> trigger source.
            adcnt8=0x00000008,     ///<An ADC conversion triggers from the <dict>ADCnT8</dict> trigger source.
            adcnt9=0x00000009,     ///<An ADC conversion triggers from the <dict>ADCnT9</dict> trigger source.
            adcnt10=0x0000000a,     ///<An ADC conversion triggers from the <dict>ADCnT10</dict> trigger source.
            adcnt11=0x0000000b,     ///<An ADC conversion triggers from the <dict>ADCnT11</dict> trigger source.
            adcnt12=0x0000000c,     ///<An ADC conversion triggers from the <dict>ADCnT12</dict> trigger source.
            adcnt13=0x0000000d,     ///<An ADC conversion triggers from the <dict>ADCnT13</dict> trigger source.
            adcnt14=0x0000000e,     ///<An ADC conversion triggers from the <dict>ADCnT14</dict> trigger source.
            adcnt15=0x0000000f,     ///<An ADC conversion triggers from the <dict>ADCnT15</dict> trigger source.
        };
        namespace scselValC{
            constexpr MPL::Value<scselVal,scselVal::adcnt0> adcnt0{};
            constexpr MPL::Value<scselVal,scselVal::adcnt1> adcnt1{};
            constexpr MPL::Value<scselVal,scselVal::adcnt2> adcnt2{};
            constexpr MPL::Value<scselVal,scselVal::adcnt3> adcnt3{};
            constexpr MPL::Value<scselVal,scselVal::adcnt4> adcnt4{};
            constexpr MPL::Value<scselVal,scselVal::adcnt5> adcnt5{};
            constexpr MPL::Value<scselVal,scselVal::adcnt6> adcnt6{};
            constexpr MPL::Value<scselVal,scselVal::adcnt7> adcnt7{};
            constexpr MPL::Value<scselVal,scselVal::adcnt8> adcnt8{};
            constexpr MPL::Value<scselVal,scselVal::adcnt9> adcnt9{};
            constexpr MPL::Value<scselVal,scselVal::adcnt10> adcnt10{};
            constexpr MPL::Value<scselVal,scselVal::adcnt11> adcnt11{};
            constexpr MPL::Value<scselVal,scselVal::adcnt12> adcnt12{};
            constexpr MPL::Value<scselVal,scselVal::adcnt13> adcnt13{};
            constexpr MPL::Value<scselVal,scselVal::adcnt14> adcnt14{};
            constexpr MPL::Value<scselVal,scselVal::adcnt15> adcnt15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,scselVal> scsel{}; 
        ///Burst Mode Power Up Time. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> pwrtime{}; 
        ///Burst Mode Enable. 
        enum class burstenVal {
            disabled=0x00000000,     ///<Disable burst mode.
            enabled=0x00000001,     ///<Enable burst mode.
        };
        namespace burstenValC{
            constexpr MPL::Value<burstenVal,burstenVal::disabled> disabled{};
            constexpr MPL::Value<burstenVal,burstenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,burstenVal> bursten{}; 
        ///ADC Enable. 
        enum class adcenVal {
            disabled=0x00000000,     ///<Disable the ADC (low-power shutdown).
            enabled=0x00000001,     ///<Enable the ADC (active and ready for data conversions).
        };
        namespace adcenValC{
            constexpr MPL::Value<adcenVal,adcenVal::disabled> disabled{};
            constexpr MPL::Value<adcenVal,adcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,adcenVal> adcen{}; 
        ///12-Bit Mode Sample Select. 
        enum class ad12bsselVal {
            four=0x00000000,     ///<The ADC re-samples the input before each of the four conversions.
            one=0x00000001,     ///<The ADC samples once before the first conversion and converts four times.
        };
        namespace ad12bsselValC{
            constexpr MPL::Value<ad12bsselVal,ad12bsselVal::four> four{};
            constexpr MPL::Value<ad12bsselVal,ad12bsselVal::one> one{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ad12bsselVal> ad12bssel{}; 
        ///Common Mode Buffer Enable. 
        enum class vcmenVal {
            disabled=0x00000000,     ///<Disable the common mode buffer.
            enabled=0x00000001,     ///<Enable the common mode buffer.
        };
        namespace vcmenValC{
            constexpr MPL::Value<vcmenVal,vcmenVal::disabled> disabled{};
            constexpr MPL::Value<vcmenVal,vcmenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,vcmenVal> vcmen{}; 
        ///Accumulation Mode. 
        enum class accmdVal {
            accumulate=0x00000000,     ///<Conversions will be accumulated for the specified number of cycles in burst mode according to the channel configuration.
            repeat=0x00000001,     ///<Conversions will not be accumulated in burst mode.
        };
        namespace accmdValC{
            constexpr MPL::Value<accmdVal,accmdVal::accumulate> accumulate{};
            constexpr MPL::Value<accmdVal,accmdVal::repeat> repeat{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,accmdVal> accmd{}; 
        ///ADC Tracking Mode. 
        enum class trkmdVal {
            normal=0x00000000,     ///<Normal Tracking Mode: When the ADC is enabled, a conversion begins immediately following the start-of-conversion signal.
            delayed=0x00000001,     ///<Delayed Tracking Mode: When the ADC is enabled, a conversion begins 3 SAR clock cycles following the start-of-conversion signal. The ADC is allowed to track during this time.
        };
        namespace trkmdValC{
            constexpr MPL::Value<trkmdVal,trkmdVal::normal> normal{};
            constexpr MPL::Value<trkmdVal,trkmdVal::delayed> delayed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,trkmdVal> trkmd{}; 
        ///ADC Busy. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> adbusy{}; 
        ///Bias Power Select. 
        enum class biasselVal {
            mode0=0x00000000,     ///<Select bias current mode 0. Recommended to use modes 1, 2, or 3.
            mode1=0x00000001,     ///<Select bias current mode 1 (SARCLK = 16 MHz).
            mode2=0x00000002,     ///<Select bias current mode 2.
            mode3=0x00000003,     ///<Select bias current mode 3 (SARCLK = 4 MHz).
        };
        namespace biasselValC{
            constexpr MPL::Value<biasselVal,biasselVal::mode0> mode0{};
            constexpr MPL::Value<biasselVal,biasselVal::mode1> mode1{};
            constexpr MPL::Value<biasselVal,biasselVal::mode2> mode2{};
            constexpr MPL::Value<biasselVal,biasselVal::mode3> mode3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,biasselVal> biassel{}; 
        ///Low Power Mode Enable. 
        enum class lpmdenVal {
            disabled=0x00000000,     ///<Disable low power mode.
            enabled=0x00000001,     ///<Enable low power mode (requires extended tracking time).
        };
        namespace lpmdenValC{
            constexpr MPL::Value<lpmdenVal,lpmdenVal::disabled> disabled{};
            constexpr MPL::Value<lpmdenVal,lpmdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,lpmdenVal> lpmden{}; 
        ///MUX and VREF Low Power Enable. 
        enum class mreflpenVal {
            disabled=0x00000000,     ///<Disable low power mode.
            enabled=0x00000001,     ///<Enable low power mode (SAR clock <= 4 MHz).
        };
        namespace mreflpenValC{
            constexpr MPL::Value<mreflpenVal,mreflpenVal::disabled> disabled{};
            constexpr MPL::Value<mreflpenVal,mreflpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,mreflpenVal> mreflpen{}; 
        ///Voltage Reference Select. 
        enum class vrefselVal {
            internalVref=0x00000000,     ///<Select the internal, dedicated SARADC voltage reference as the ADC reference.
            vdd=0x00000001,     ///<Select the VDD pin as the ADC reference.
            ldoOut=0x00000002,     ///<Select the output of the internal LDO regulator (~1.8 V) as the ADC reference.
            externalVref=0x00000003,     ///<Select the VREF pin as the ADC reference. This option is used for either an external VREF or the on-chip VREF driving out to the VREF pin.
        };
        namespace vrefselValC{
            constexpr MPL::Value<vrefselVal,vrefselVal::internalVref> internalVref{};
            constexpr MPL::Value<vrefselVal,vrefselVal::vdd> vdd{};
            constexpr MPL::Value<vrefselVal,vrefselVal::ldoOut> ldoOut{};
            constexpr MPL::Value<vrefselVal,vrefselVal::externalVref> externalVref{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,vrefselVal> vrefsel{}; 
    }
    namespace Nonesq7654{    ///<Channel Sequencer Time Slots 4-7 Setup
        using Addr = Register::Address<0x4001a020,0x80808080,0,unsigned>;
        ///Time Slot 4 Conversion Characteristic. 
        enum class ts4chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 4.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 4.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 4.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 4.
        };
        namespace ts4chrValC{
            constexpr MPL::Value<ts4chrVal,ts4chrVal::cc0> cc0{};
            constexpr MPL::Value<ts4chrVal,ts4chrVal::cc1> cc1{};
            constexpr MPL::Value<ts4chrVal,ts4chrVal::cc2> cc2{};
            constexpr MPL::Value<ts4chrVal,ts4chrVal::cc3> cc3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ts4chrVal> ts4chr{}; 
        ///Time Slot 4 Input Channel. 
        enum class ts4muxVal {
            adcn0=0x00000000,     ///<Select channel <dict>ADCn.0</dict>.
            adcn1=0x00000001,     ///<Select channel <dict>ADCn.1</dict>.
            adcn2=0x00000002,     ///<Select channel <dict>ADCn.2</dict>.
            adcn3=0x00000003,     ///<Select channel <dict>ADCn.3</dict>.
            adcn4=0x00000004,     ///<Select channel <dict>ADCn.4</dict>.
            adcn5=0x00000005,     ///<Select channel <dict>ADCn.5</dict>.
            adcn6=0x00000006,     ///<Select channel <dict>ADCn.6</dict>.
            adcn7=0x00000007,     ///<Select channel <dict>ADCn.7</dict>.
            adcn8=0x00000008,     ///<Select channel <dict>ADCn.8</dict>.
            adcn9=0x00000009,     ///<Select channel <dict>ADCn.9</dict>.
            adcn10=0x0000000a,     ///<Select channel <dict>ADCn.10</dict>.
            adcn11=0x0000000b,     ///<Select channel <dict>ADCn.11</dict>.
            adcn12=0x0000000c,     ///<Select channel <dict>ADCn.12</dict>.
            adcn13=0x0000000d,     ///<Select channel <dict>ADCn.13</dict>.
            adcn14=0x0000000e,     ///<Select channel <dict>ADCn.14</dict>.
            adcn15=0x0000000f,     ///<Select channel <dict>ADCn.15</dict>.
            adcn16=0x00000010,     ///<Select channel <dict>ADCn.16</dict>.
            adcn17=0x00000011,     ///<Select channel <dict>ADCn.17</dict>.
            adcn18=0x00000012,     ///<Select channel <dict>ADCn.18</dict>.
            adcn19=0x00000013,     ///<Select channel <dict>ADCn.19</dict>.
            adcn20=0x00000014,     ///<Select channel <dict>ADCn.20</dict>.
            adcn21=0x00000015,     ///<Select channel <dict>ADCn.21</dict>.
            adcn22=0x00000016,     ///<Select channel <dict>ADCn.22</dict>.
            adcn23=0x00000017,     ///<Select channel <dict>ADCn.23</dict>.
            adcn24=0x00000018,     ///<Select channel <dict>ADCn.24</dict>.
            adcn25=0x00000019,     ///<Select channel <dict>ADCn.25</dict>.
            adcn26=0x0000001a,     ///<Select channel <dict>ADCn.26</dict>.
            adcn27=0x0000001b,     ///<Select channel <dict>ADCn.27</dict>.
            adcn28=0x0000001c,     ///<Select channel <dict>ADCn.28</dict>.
            adcn29=0x0000001d,     ///<Select channel <dict>ADCn.29</dict>.
            adcn30=0x0000001e,     ///<Select channel <dict>ADCn.30</dict>.
            end=0x0000001f,     ///<None - End the sequence.
        };
        namespace ts4muxValC{
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn0> adcn0{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn1> adcn1{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn2> adcn2{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn3> adcn3{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn4> adcn4{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn5> adcn5{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn6> adcn6{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn7> adcn7{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn8> adcn8{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn9> adcn9{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn10> adcn10{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn11> adcn11{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn12> adcn12{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn13> adcn13{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn14> adcn14{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn15> adcn15{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn16> adcn16{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn17> adcn17{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn18> adcn18{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn19> adcn19{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn20> adcn20{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn21> adcn21{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn22> adcn22{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn23> adcn23{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn24> adcn24{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn25> adcn25{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn26> adcn26{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn27> adcn27{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn28> adcn28{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn29> adcn29{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::adcn30> adcn30{};
            constexpr MPL::Value<ts4muxVal,ts4muxVal::end> end{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,ts4muxVal> ts4mux{}; 
        ///Time Slot 5 Conversion Characteristic. 
        enum class ts5chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 5.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 5.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 5.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 5.
        };
        namespace ts5chrValC{
            constexpr MPL::Value<ts5chrVal,ts5chrVal::cc0> cc0{};
            constexpr MPL::Value<ts5chrVal,ts5chrVal::cc1> cc1{};
            constexpr MPL::Value<ts5chrVal,ts5chrVal::cc2> cc2{};
            constexpr MPL::Value<ts5chrVal,ts5chrVal::cc3> cc3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ts5chrVal> ts5chr{}; 
        ///Time Slot 5 Input Channel. 
        enum class ts5muxVal {
            adcn0=0x00000000,     ///<Select channel <dict>ADCn.0</dict>.
            adcn1=0x00000001,     ///<Select channel <dict>ADCn.1</dict>.
            adcn2=0x00000002,     ///<Select channel <dict>ADCn.2</dict>.
            adcn3=0x00000003,     ///<Select channel <dict>ADCn.3</dict>.
            adcn4=0x00000004,     ///<Select channel <dict>ADCn.4</dict>.
            adcn5=0x00000005,     ///<Select channel <dict>ADCn.5</dict>.
            adcn6=0x00000006,     ///<Select channel <dict>ADCn.6</dict>.
            adcn7=0x00000007,     ///<Select channel <dict>ADCn.7</dict>.
            adcn8=0x00000008,     ///<Select channel <dict>ADCn.8</dict>.
            adcn9=0x00000009,     ///<Select channel <dict>ADCn.9</dict>.
            adcn10=0x0000000a,     ///<Select channel <dict>ADCn.10</dict>.
            adcn11=0x0000000b,     ///<Select channel <dict>ADCn.11</dict>.
            adcn12=0x0000000c,     ///<Select channel <dict>ADCn.12</dict>.
            adcn13=0x0000000d,     ///<Select channel <dict>ADCn.13</dict>.
            adcn14=0x0000000e,     ///<Select channel <dict>ADCn.14</dict>.
            adcn15=0x0000000f,     ///<Select channel <dict>ADCn.15</dict>.
            adcn16=0x00000010,     ///<Select channel <dict>ADCn.16</dict>.
            adcn17=0x00000011,     ///<Select channel <dict>ADCn.17</dict>.
            adcn18=0x00000012,     ///<Select channel <dict>ADCn.18</dict>.
            adcn19=0x00000013,     ///<Select channel <dict>ADCn.19</dict>.
            adcn20=0x00000014,     ///<Select channel <dict>ADCn.20</dict>.
            adcn21=0x00000015,     ///<Select channel <dict>ADCn.21</dict>.
            adcn22=0x00000016,     ///<Select channel <dict>ADCn.22</dict>.
            adcn23=0x00000017,     ///<Select channel <dict>ADCn.23</dict>.
            adcn24=0x00000018,     ///<Select channel <dict>ADCn.24</dict>.
            adcn25=0x00000019,     ///<Select channel <dict>ADCn.25</dict>.
            adcn26=0x0000001a,     ///<Select channel <dict>ADCn.26</dict>.
            adcn27=0x0000001b,     ///<Select channel <dict>ADCn.27</dict>.
            adcn28=0x0000001c,     ///<Select channel <dict>ADCn.28</dict>.
            adcn29=0x0000001d,     ///<Select channel <dict>ADCn.29</dict>.
            adcn30=0x0000001e,     ///<Select channel <dict>ADCn.30</dict>.
            end=0x0000001f,     ///<None - End the sequence.
        };
        namespace ts5muxValC{
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn0> adcn0{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn1> adcn1{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn2> adcn2{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn3> adcn3{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn4> adcn4{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn5> adcn5{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn6> adcn6{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn7> adcn7{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn8> adcn8{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn9> adcn9{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn10> adcn10{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn11> adcn11{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn12> adcn12{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn13> adcn13{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn14> adcn14{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn15> adcn15{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn16> adcn16{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn17> adcn17{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn18> adcn18{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn19> adcn19{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn20> adcn20{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn21> adcn21{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn22> adcn22{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn23> adcn23{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn24> adcn24{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn25> adcn25{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn26> adcn26{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn27> adcn27{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn28> adcn28{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn29> adcn29{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::adcn30> adcn30{};
            constexpr MPL::Value<ts5muxVal,ts5muxVal::end> end{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,ts5muxVal> ts5mux{}; 
        ///Time Slot 6 Conversion Characteristic. 
        enum class ts6chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 6.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 6.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 6.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 6.
        };
        namespace ts6chrValC{
            constexpr MPL::Value<ts6chrVal,ts6chrVal::cc0> cc0{};
            constexpr MPL::Value<ts6chrVal,ts6chrVal::cc1> cc1{};
            constexpr MPL::Value<ts6chrVal,ts6chrVal::cc2> cc2{};
            constexpr MPL::Value<ts6chrVal,ts6chrVal::cc3> cc3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,ts6chrVal> ts6chr{}; 
        ///Time Slot 6 Input Channel. 
        enum class ts6muxVal {
            adcn0=0x00000000,     ///<Select channel <dict>ADCn.0</dict>.
            adcn1=0x00000001,     ///<Select channel <dict>ADCn.1</dict>.
            adcn2=0x00000002,     ///<Select channel <dict>ADCn.2</dict>.
            adcn3=0x00000003,     ///<Select channel <dict>ADCn.3</dict>.
            adcn4=0x00000004,     ///<Select channel <dict>ADCn.4</dict>.
            adcn5=0x00000005,     ///<Select channel <dict>ADCn.5</dict>.
            adcn6=0x00000006,     ///<Select channel <dict>ADCn.6</dict>.
            adcn7=0x00000007,     ///<Select channel <dict>ADCn.7</dict>.
            adcn8=0x00000008,     ///<Select channel <dict>ADCn.8</dict>.
            adcn9=0x00000009,     ///<Select channel <dict>ADCn.9</dict>.
            adcn10=0x0000000a,     ///<Select channel <dict>ADCn.10</dict>.
            adcn11=0x0000000b,     ///<Select channel <dict>ADCn.11</dict>.
            adcn12=0x0000000c,     ///<Select channel <dict>ADCn.12</dict>.
            adcn13=0x0000000d,     ///<Select channel <dict>ADCn.13</dict>.
            adcn14=0x0000000e,     ///<Select channel <dict>ADCn.14</dict>.
            adcn15=0x0000000f,     ///<Select channel <dict>ADCn.15</dict>.
            adcn16=0x00000010,     ///<Select channel <dict>ADCn.16</dict>.
            adcn17=0x00000011,     ///<Select channel <dict>ADCn.17</dict>.
            adcn18=0x00000012,     ///<Select channel <dict>ADCn.18</dict>.
            adcn19=0x00000013,     ///<Select channel <dict>ADCn.19</dict>.
            adcn20=0x00000014,     ///<Select channel <dict>ADCn.20</dict>.
            adcn21=0x00000015,     ///<Select channel <dict>ADCn.21</dict>.
            adcn22=0x00000016,     ///<Select channel <dict>ADCn.22</dict>.
            adcn23=0x00000017,     ///<Select channel <dict>ADCn.23</dict>.
            adcn24=0x00000018,     ///<Select channel <dict>ADCn.24</dict>.
            adcn25=0x00000019,     ///<Select channel <dict>ADCn.25</dict>.
            adcn26=0x0000001a,     ///<Select channel <dict>ADCn.26</dict>.
            adcn27=0x0000001b,     ///<Select channel <dict>ADCn.27</dict>.
            adcn28=0x0000001c,     ///<Select channel <dict>ADCn.28</dict>.
            adcn29=0x0000001d,     ///<Select channel <dict>ADCn.29</dict>.
            adcn30=0x0000001e,     ///<Select channel <dict>ADCn.30</dict>.
            end=0x0000001f,     ///<None - End the sequence.
        };
        namespace ts6muxValC{
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn0> adcn0{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn1> adcn1{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn2> adcn2{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn3> adcn3{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn4> adcn4{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn5> adcn5{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn6> adcn6{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn7> adcn7{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn8> adcn8{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn9> adcn9{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn10> adcn10{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn11> adcn11{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn12> adcn12{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn13> adcn13{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn14> adcn14{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn15> adcn15{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn16> adcn16{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn17> adcn17{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn18> adcn18{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn19> adcn19{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn20> adcn20{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn21> adcn21{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn22> adcn22{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn23> adcn23{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn24> adcn24{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn25> adcn25{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn26> adcn26{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn27> adcn27{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn28> adcn28{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn29> adcn29{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::adcn30> adcn30{};
            constexpr MPL::Value<ts6muxVal,ts6muxVal::end> end{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,ts6muxVal> ts6mux{}; 
        ///Time Slot 7 Conversion Characteristic. 
        enum class ts7chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 7.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 7.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 7.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 7.
        };
        namespace ts7chrValC{
            constexpr MPL::Value<ts7chrVal,ts7chrVal::cc0> cc0{};
            constexpr MPL::Value<ts7chrVal,ts7chrVal::cc1> cc1{};
            constexpr MPL::Value<ts7chrVal,ts7chrVal::cc2> cc2{};
            constexpr MPL::Value<ts7chrVal,ts7chrVal::cc3> cc3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,ts7chrVal> ts7chr{}; 
        ///Time Slot 7 Input Channel. 
        enum class ts7muxVal {
            adcn0=0x00000000,     ///<Select channel <dict>ADCn.0</dict>.
            adcn1=0x00000001,     ///<Select channel <dict>ADCn.1</dict>.
            adcn2=0x00000002,     ///<Select channel <dict>ADCn.2</dict>.
            adcn3=0x00000003,     ///<Select channel <dict>ADCn.3</dict>.
            adcn4=0x00000004,     ///<Select channel <dict>ADCn.4</dict>.
            adcn5=0x00000005,     ///<Select channel <dict>ADCn.5</dict>.
            adcn6=0x00000006,     ///<Select channel <dict>ADCn.6</dict>.
            adcn7=0x00000007,     ///<Select channel <dict>ADCn.7</dict>.
            adcn8=0x00000008,     ///<Select channel <dict>ADCn.8</dict>.
            adcn9=0x00000009,     ///<Select channel <dict>ADCn.9</dict>.
            adcn10=0x0000000a,     ///<Select channel <dict>ADCn.10</dict>.
            adcn11=0x0000000b,     ///<Select channel <dict>ADCn.11</dict>.
            adcn12=0x0000000c,     ///<Select channel <dict>ADCn.12</dict>.
            adcn13=0x0000000d,     ///<Select channel <dict>ADCn.13</dict>.
            adcn14=0x0000000e,     ///<Select channel <dict>ADCn.14</dict>.
            adcn15=0x0000000f,     ///<Select channel <dict>ADCn.15</dict>.
            adcn16=0x00000010,     ///<Select channel <dict>ADCn.16</dict>.
            adcn17=0x00000011,     ///<Select channel <dict>ADCn.17</dict>.
            adcn18=0x00000012,     ///<Select channel <dict>ADCn.18</dict>.
            adcn19=0x00000013,     ///<Select channel <dict>ADCn.19</dict>.
            adcn20=0x00000014,     ///<Select channel <dict>ADCn.20</dict>.
            adcn21=0x00000015,     ///<Select channel <dict>ADCn.21</dict>.
            adcn22=0x00000016,     ///<Select channel <dict>ADCn.22</dict>.
            adcn23=0x00000017,     ///<Select channel <dict>ADCn.23</dict>.
            adcn24=0x00000018,     ///<Select channel <dict>ADCn.24</dict>.
            adcn25=0x00000019,     ///<Select channel <dict>ADCn.25</dict>.
            adcn26=0x0000001a,     ///<Select channel <dict>ADCn.26</dict>.
            adcn27=0x0000001b,     ///<Select channel <dict>ADCn.27</dict>.
            adcn28=0x0000001c,     ///<Select channel <dict>ADCn.28</dict>.
            adcn29=0x0000001d,     ///<Select channel <dict>ADCn.29</dict>.
            adcn30=0x0000001e,     ///<Select channel <dict>ADCn.30</dict>.
            end=0x0000001f,     ///<None - End the sequence.
        };
        namespace ts7muxValC{
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn0> adcn0{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn1> adcn1{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn2> adcn2{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn3> adcn3{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn4> adcn4{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn5> adcn5{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn6> adcn6{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn7> adcn7{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn8> adcn8{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn9> adcn9{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn10> adcn10{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn11> adcn11{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn12> adcn12{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn13> adcn13{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn14> adcn14{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn15> adcn15{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn16> adcn16{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn17> adcn17{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn18> adcn18{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn19> adcn19{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn20> adcn20{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn21> adcn21{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn22> adcn22{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn23> adcn23{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn24> adcn24{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn25> adcn25{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn26> adcn26{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn27> adcn27{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn28> adcn28{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn29> adcn29{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::adcn30> adcn30{};
            constexpr MPL::Value<ts7muxVal,ts7muxVal::end> end{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,ts7muxVal> ts7mux{}; 
    }
    namespace Nonesq3210{    ///<Channel Sequencer Time Slots 0-3 Setup
        using Addr = Register::Address<0x4001a030,0x80808080,0,unsigned>;
        ///Time Slot 0 Conversion Characteristic. 
        enum class ts0chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 0.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 0.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 0.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 0.
        };
        namespace ts0chrValC{
            constexpr MPL::Value<ts0chrVal,ts0chrVal::cc0> cc0{};
            constexpr MPL::Value<ts0chrVal,ts0chrVal::cc1> cc1{};
            constexpr MPL::Value<ts0chrVal,ts0chrVal::cc2> cc2{};
            constexpr MPL::Value<ts0chrVal,ts0chrVal::cc3> cc3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ts0chrVal> ts0chr{}; 
        ///Time Slot 0 Input Channel. 
        enum class ts0muxVal {
            adcn0=0x00000000,     ///<Select channel <dict>ADCn.0</dict>.
            adcn1=0x00000001,     ///<Select channel <dict>ADCn.1</dict>.
            adcn2=0x00000002,     ///<Select channel <dict>ADCn.2</dict>.
            adcn3=0x00000003,     ///<Select channel <dict>ADCn.3</dict>.
            adcn4=0x00000004,     ///<Select channel <dict>ADCn.4</dict>.
            adcn5=0x00000005,     ///<Select channel <dict>ADCn.5</dict>.
            adcn6=0x00000006,     ///<Select channel <dict>ADCn.6</dict>.
            adcn7=0x00000007,     ///<Select channel <dict>ADCn.7</dict>.
            adcn8=0x00000008,     ///<Select channel <dict>ADCn.8</dict>.
            adcn9=0x00000009,     ///<Select channel <dict>ADCn.9</dict>.
            adcn10=0x0000000a,     ///<Select channel <dict>ADCn.10</dict>.
            adcn11=0x0000000b,     ///<Select channel <dict>ADCn.11</dict>.
            adcn12=0x0000000c,     ///<Select channel <dict>ADCn.12</dict>.
            adcn13=0x0000000d,     ///<Select channel <dict>ADCn.13</dict>.
            adcn14=0x0000000e,     ///<Select channel <dict>ADCn.14</dict>.
            adcn15=0x0000000f,     ///<Select channel <dict>ADCn.15</dict>.
            adcn16=0x00000010,     ///<Select channel <dict>ADCn.16</dict>.
            adcn17=0x00000011,     ///<Select channel <dict>ADCn.17</dict>.
            adcn18=0x00000012,     ///<Select channel <dict>ADCn.18</dict>.
            adcn19=0x00000013,     ///<Select channel <dict>ADCn.19</dict>.
            adcn20=0x00000014,     ///<Select channel <dict>ADCn.20</dict>.
            adcn21=0x00000015,     ///<Select channel <dict>ADCn.21</dict>.
            adcn22=0x00000016,     ///<Select channel <dict>ADCn.22</dict>.
            adcn23=0x00000017,     ///<Select channel <dict>ADCn.23</dict>.
            adcn24=0x00000018,     ///<Select channel <dict>ADCn.24</dict>.
            adcn25=0x00000019,     ///<Select channel <dict>ADCn.25</dict>.
            adcn26=0x0000001a,     ///<Select channel <dict>ADCn.26</dict>.
            adcn27=0x0000001b,     ///<Select channel <dict>ADCn.27</dict>.
            adcn28=0x0000001c,     ///<Select channel <dict>ADCn.28</dict>.
            adcn29=0x0000001d,     ///<Select channel <dict>ADCn.29</dict>.
            adcn30=0x0000001e,     ///<Select channel <dict>ADCn.30</dict>.
            end=0x0000001f,     ///<None - End the sequence.
        };
        namespace ts0muxValC{
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn0> adcn0{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn1> adcn1{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn2> adcn2{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn3> adcn3{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn4> adcn4{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn5> adcn5{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn6> adcn6{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn7> adcn7{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn8> adcn8{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn9> adcn9{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn10> adcn10{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn11> adcn11{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn12> adcn12{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn13> adcn13{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn14> adcn14{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn15> adcn15{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn16> adcn16{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn17> adcn17{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn18> adcn18{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn19> adcn19{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn20> adcn20{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn21> adcn21{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn22> adcn22{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn23> adcn23{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn24> adcn24{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn25> adcn25{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn26> adcn26{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn27> adcn27{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn28> adcn28{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn29> adcn29{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::adcn30> adcn30{};
            constexpr MPL::Value<ts0muxVal,ts0muxVal::end> end{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,ts0muxVal> ts0mux{}; 
        ///Time Slot 1 Conversion Characteristic. 
        enum class ts1chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 1.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 1.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 1.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 1.
        };
        namespace ts1chrValC{
            constexpr MPL::Value<ts1chrVal,ts1chrVal::cc0> cc0{};
            constexpr MPL::Value<ts1chrVal,ts1chrVal::cc1> cc1{};
            constexpr MPL::Value<ts1chrVal,ts1chrVal::cc2> cc2{};
            constexpr MPL::Value<ts1chrVal,ts1chrVal::cc3> cc3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ts1chrVal> ts1chr{}; 
        ///Time Slot 1 Input Channel. 
        enum class ts1muxVal {
            adcn0=0x00000000,     ///<Select channel <dict>ADCn.0</dict>.
            adcn1=0x00000001,     ///<Select channel <dict>ADCn.1</dict>.
            adcn2=0x00000002,     ///<Select channel <dict>ADCn.2</dict>.
            adcn3=0x00000003,     ///<Select channel <dict>ADCn.3</dict>.
            adcn4=0x00000004,     ///<Select channel <dict>ADCn.4</dict>.
            adcn5=0x00000005,     ///<Select channel <dict>ADCn.5</dict>.
            adcn6=0x00000006,     ///<Select channel <dict>ADCn.6</dict>.
            adcn7=0x00000007,     ///<Select channel <dict>ADCn.7</dict>.
            adcn8=0x00000008,     ///<Select channel <dict>ADCn.8</dict>.
            adcn9=0x00000009,     ///<Select channel <dict>ADCn.9</dict>.
            adcn10=0x0000000a,     ///<Select channel <dict>ADCn.10</dict>.
            adcn11=0x0000000b,     ///<Select channel <dict>ADCn.11</dict>.
            adcn12=0x0000000c,     ///<Select channel <dict>ADCn.12</dict>.
            adcn13=0x0000000d,     ///<Select channel <dict>ADCn.13</dict>.
            adcn14=0x0000000e,     ///<Select channel <dict>ADCn.14</dict>.
            adcn15=0x0000000f,     ///<Select channel <dict>ADCn.15</dict>.
            adcn16=0x00000010,     ///<Select channel <dict>ADCn.16</dict>.
            adcn17=0x00000011,     ///<Select channel <dict>ADCn.17</dict>.
            adcn18=0x00000012,     ///<Select channel <dict>ADCn.18</dict>.
            adcn19=0x00000013,     ///<Select channel <dict>ADCn.19</dict>.
            adcn20=0x00000014,     ///<Select channel <dict>ADCn.20</dict>.
            adcn21=0x00000015,     ///<Select channel <dict>ADCn.21</dict>.
            adcn22=0x00000016,     ///<Select channel <dict>ADCn.22</dict>.
            adcn23=0x00000017,     ///<Select channel <dict>ADCn.23</dict>.
            adcn24=0x00000018,     ///<Select channel <dict>ADCn.24</dict>.
            adcn25=0x00000019,     ///<Select channel <dict>ADCn.25</dict>.
            adcn26=0x0000001a,     ///<Select channel <dict>ADCn.26</dict>.
            adcn27=0x0000001b,     ///<Select channel <dict>ADCn.27</dict>.
            adcn28=0x0000001c,     ///<Select channel <dict>ADCn.28</dict>.
            adcn29=0x0000001d,     ///<Select channel <dict>ADCn.29</dict>.
            adcn30=0x0000001e,     ///<Select channel <dict>ADCn.30</dict>.
            end=0x0000001f,     ///<None - End the sequence.
        };
        namespace ts1muxValC{
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn0> adcn0{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn1> adcn1{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn2> adcn2{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn3> adcn3{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn4> adcn4{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn5> adcn5{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn6> adcn6{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn7> adcn7{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn8> adcn8{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn9> adcn9{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn10> adcn10{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn11> adcn11{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn12> adcn12{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn13> adcn13{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn14> adcn14{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn15> adcn15{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn16> adcn16{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn17> adcn17{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn18> adcn18{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn19> adcn19{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn20> adcn20{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn21> adcn21{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn22> adcn22{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn23> adcn23{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn24> adcn24{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn25> adcn25{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn26> adcn26{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn27> adcn27{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn28> adcn28{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn29> adcn29{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::adcn30> adcn30{};
            constexpr MPL::Value<ts1muxVal,ts1muxVal::end> end{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,ts1muxVal> ts1mux{}; 
        ///Time Slot 2 Conversion Characteristic. 
        enum class ts2chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 2.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 2.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 2.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 2.
        };
        namespace ts2chrValC{
            constexpr MPL::Value<ts2chrVal,ts2chrVal::cc0> cc0{};
            constexpr MPL::Value<ts2chrVal,ts2chrVal::cc1> cc1{};
            constexpr MPL::Value<ts2chrVal,ts2chrVal::cc2> cc2{};
            constexpr MPL::Value<ts2chrVal,ts2chrVal::cc3> cc3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,ts2chrVal> ts2chr{}; 
        ///Time Slot 2 Input Channel. 
        enum class ts2muxVal {
            adcn0=0x00000000,     ///<Select channel <dict>ADCn.0</dict>.
            adcn1=0x00000001,     ///<Select channel <dict>ADCn.1</dict>.
            adcn2=0x00000002,     ///<Select channel <dict>ADCn.2</dict>.
            adcn3=0x00000003,     ///<Select channel <dict>ADCn.3</dict>.
            adcn4=0x00000004,     ///<Select channel <dict>ADCn.4</dict>.
            adcn5=0x00000005,     ///<Select channel <dict>ADCn.5</dict>.
            adcn6=0x00000006,     ///<Select channel <dict>ADCn.6</dict>.
            adcn7=0x00000007,     ///<Select channel <dict>ADCn.7</dict>.
            adcn8=0x00000008,     ///<Select channel <dict>ADCn.8</dict>.
            adcn9=0x00000009,     ///<Select channel <dict>ADCn.9</dict>.
            adcn10=0x0000000a,     ///<Select channel <dict>ADCn.10</dict>.
            adcn11=0x0000000b,     ///<Select channel <dict>ADCn.11</dict>.
            adcn12=0x0000000c,     ///<Select channel <dict>ADCn.12</dict>.
            adcn13=0x0000000d,     ///<Select channel <dict>ADCn.13</dict>.
            adcn14=0x0000000e,     ///<Select channel <dict>ADCn.14</dict>.
            adcn15=0x0000000f,     ///<Select channel <dict>ADCn.15</dict>.
            adcn16=0x00000010,     ///<Select channel <dict>ADCn.16</dict>.
            adcn17=0x00000011,     ///<Select channel <dict>ADCn.17</dict>.
            adcn18=0x00000012,     ///<Select channel <dict>ADCn.18</dict>.
            adcn19=0x00000013,     ///<Select channel <dict>ADCn.19</dict>.
            adcn20=0x00000014,     ///<Select channel <dict>ADCn.20</dict>.
            adcn21=0x00000015,     ///<Select channel <dict>ADCn.21</dict>.
            adcn22=0x00000016,     ///<Select channel <dict>ADCn.22</dict>.
            adcn23=0x00000017,     ///<Select channel <dict>ADCn.23</dict>.
            adcn24=0x00000018,     ///<Select channel <dict>ADCn.24</dict>.
            adcn25=0x00000019,     ///<Select channel <dict>ADCn.25</dict>.
            adcn26=0x0000001a,     ///<Select channel <dict>ADCn.26</dict>.
            adcn27=0x0000001b,     ///<Select channel <dict>ADCn.27</dict>.
            adcn28=0x0000001c,     ///<Select channel <dict>ADCn.28</dict>.
            adcn29=0x0000001d,     ///<Select channel <dict>ADCn.29</dict>.
            adcn30=0x0000001e,     ///<Select channel <dict>ADCn.30</dict>.
            end=0x0000001f,     ///<None - End the sequence.
        };
        namespace ts2muxValC{
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn0> adcn0{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn1> adcn1{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn2> adcn2{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn3> adcn3{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn4> adcn4{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn5> adcn5{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn6> adcn6{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn7> adcn7{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn8> adcn8{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn9> adcn9{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn10> adcn10{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn11> adcn11{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn12> adcn12{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn13> adcn13{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn14> adcn14{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn15> adcn15{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn16> adcn16{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn17> adcn17{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn18> adcn18{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn19> adcn19{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn20> adcn20{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn21> adcn21{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn22> adcn22{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn23> adcn23{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn24> adcn24{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn25> adcn25{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn26> adcn26{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn27> adcn27{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn28> adcn28{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn29> adcn29{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::adcn30> adcn30{};
            constexpr MPL::Value<ts2muxVal,ts2muxVal::end> end{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,ts2muxVal> ts2mux{}; 
        ///Time Slot 3 Conversion Characteristic. 
        enum class ts3chrVal {
            cc0=0x00000000,     ///<Select conversion characteristic 0 for time slot 3.
            cc1=0x00000001,     ///<Select conversion characteristic 1 for time slot 3.
            cc2=0x00000002,     ///<Select conversion characteristic 2 for time slot 3.
            cc3=0x00000003,     ///<Select conversion characteristic 3 for time slot 3.
        };
        namespace ts3chrValC{
            constexpr MPL::Value<ts3chrVal,ts3chrVal::cc0> cc0{};
            constexpr MPL::Value<ts3chrVal,ts3chrVal::cc1> cc1{};
            constexpr MPL::Value<ts3chrVal,ts3chrVal::cc2> cc2{};
            constexpr MPL::Value<ts3chrVal,ts3chrVal::cc3> cc3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,ts3chrVal> ts3chr{}; 
        ///Time Slot 3 Input Channel. 
        enum class ts3muxVal {
            adcn0=0x00000000,     ///<Select channel <dict>ADCn.0</dict>.
            adcn1=0x00000001,     ///<Select channel <dict>ADCn.1</dict>.
            adcn2=0x00000002,     ///<Select channel <dict>ADCn.2</dict>.
            adcn3=0x00000003,     ///<Select channel <dict>ADCn.3</dict>.
            adcn4=0x00000004,     ///<Select channel <dict>ADCn.4</dict>.
            adcn5=0x00000005,     ///<Select channel <dict>ADCn.5</dict>.
            adcn6=0x00000006,     ///<Select channel <dict>ADCn.6</dict>.
            adcn7=0x00000007,     ///<Select channel <dict>ADCn.7</dict>.
            adcn8=0x00000008,     ///<Select channel <dict>ADCn.8</dict>.
            adcn9=0x00000009,     ///<Select channel <dict>ADCn.9</dict>.
            adcn10=0x0000000a,     ///<Select channel <dict>ADCn.10</dict>.
            adcn11=0x0000000b,     ///<Select channel <dict>ADCn.11</dict>.
            adcn12=0x0000000c,     ///<Select channel <dict>ADCn.12</dict>.
            adcn13=0x0000000d,     ///<Select channel <dict>ADCn.13</dict>.
            adcn14=0x0000000e,     ///<Select channel <dict>ADCn.14</dict>.
            adcn15=0x0000000f,     ///<Select channel <dict>ADCn.15</dict>.
            adcn16=0x00000010,     ///<Select channel <dict>ADCn.16</dict>.
            adcn17=0x00000011,     ///<Select channel <dict>ADCn.17</dict>.
            adcn18=0x00000012,     ///<Select channel <dict>ADCn.18</dict>.
            adcn19=0x00000013,     ///<Select channel <dict>ADCn.19</dict>.
            adcn20=0x00000014,     ///<Select channel <dict>ADCn.20</dict>.
            adcn21=0x00000015,     ///<Select channel <dict>ADCn.21</dict>.
            adcn22=0x00000016,     ///<Select channel <dict>ADCn.22</dict>.
            adcn23=0x00000017,     ///<Select channel <dict>ADCn.23</dict>.
            adcn24=0x00000018,     ///<Select channel <dict>ADCn.24</dict>.
            adcn25=0x00000019,     ///<Select channel <dict>ADCn.25</dict>.
            adcn26=0x0000001a,     ///<Select channel <dict>ADCn.26</dict>.
            adcn27=0x0000001b,     ///<Select channel <dict>ADCn.27</dict>.
            adcn28=0x0000001c,     ///<Select channel <dict>ADCn.28</dict>.
            adcn29=0x0000001d,     ///<Select channel <dict>ADCn.29</dict>.
            adcn30=0x0000001e,     ///<Select channel <dict>ADCn.30</dict>.
            end=0x0000001f,     ///<None - End the sequence.
        };
        namespace ts3muxValC{
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn0> adcn0{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn1> adcn1{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn2> adcn2{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn3> adcn3{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn4> adcn4{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn5> adcn5{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn6> adcn6{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn7> adcn7{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn8> adcn8{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn9> adcn9{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn10> adcn10{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn11> adcn11{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn12> adcn12{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn13> adcn13{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn14> adcn14{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn15> adcn15{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn16> adcn16{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn17> adcn17{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn18> adcn18{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn19> adcn19{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn20> adcn20{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn21> adcn21{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn22> adcn22{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn23> adcn23{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn24> adcn24{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn25> adcn25{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn26> adcn26{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn27> adcn27{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn28> adcn28{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn29> adcn29{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::adcn30> adcn30{};
            constexpr MPL::Value<ts3muxVal,ts3muxVal::end> end{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,ts3muxVal> ts3mux{}; 
    }
    namespace Nonechar32{    ///<Conversion Characteristic 2 and 3 Setup
        using Addr = Register::Address<0x4001a040,0xfe00fe00,0,unsigned>;
        ///Conversion Characteristic 2 Gain. 
        enum class chr2gnVal {
            unity=0x00000000,     ///<The on-chip PGA gain is 1.
            half=0x00000001,     ///<The on-chip PGA gain is 0.5.
        };
        namespace chr2gnValC{
            constexpr MPL::Value<chr2gnVal,chr2gnVal::unity> unity{};
            constexpr MPL::Value<chr2gnVal,chr2gnVal::half> half{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,chr2gnVal> chr2gn{}; 
        ///Conversion Characteristic 2 Repeat Counter. 
        enum class chr2rptVal {
            acc1=0x00000000,     ///<Accumulate one sample.
            acc4=0x00000001,     ///<Accumulate four samples.
            acc8=0x00000002,     ///<Accumulate eight samples.
            acc16=0x00000003,     ///<Accumulate sixteen samples.
            acc32=0x00000004,     ///<Accumulate thirty-two samples (10-bit mode only).
            acc64=0x00000005,     ///<Accumulate sixty-four samples (10-bit mode only).
        };
        namespace chr2rptValC{
            constexpr MPL::Value<chr2rptVal,chr2rptVal::acc1> acc1{};
            constexpr MPL::Value<chr2rptVal,chr2rptVal::acc4> acc4{};
            constexpr MPL::Value<chr2rptVal,chr2rptVal::acc8> acc8{};
            constexpr MPL::Value<chr2rptVal,chr2rptVal::acc16> acc16{};
            constexpr MPL::Value<chr2rptVal,chr2rptVal::acc32> acc32{};
            constexpr MPL::Value<chr2rptVal,chr2rptVal::acc64> acc64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,chr2rptVal> chr2rpt{}; 
        ///Conversion Characteristic 2 Left-Shift Bits. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> chr2ls{}; 
        ///Conversion Characteristic 2 Resolution Selection. 
        enum class chr2rselVal {
            b10=0x00000000,     ///<Select 10-bit Mode.
            b12=0x00000001,     ///<Select 12-bit Mode (burst mode must be enabled).
        };
        namespace chr2rselValC{
            constexpr MPL::Value<chr2rselVal,chr2rselVal::b10> b10{};
            constexpr MPL::Value<chr2rselVal,chr2rselVal::b12> b12{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,chr2rselVal> chr2rsel{}; 
        ///Conversion Characteristic 2 Window Comparator Interrupt Enable. 
        enum class chr2wcienVal {
            disabled=0x00000000,     ///<Disable window comparison interrupts.
            enabled=0x00000001,     ///<Enabled window comparison interrupts.  The window comparator will be used to check the ADC result on channels that use this characteristic.
        };
        namespace chr2wcienValC{
            constexpr MPL::Value<chr2wcienVal,chr2wcienVal::disabled> disabled{};
            constexpr MPL::Value<chr2wcienVal,chr2wcienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,chr2wcienVal> chr2wcien{}; 
        ///Conversion Characteristic 3 Gain. 
        enum class chr3gnVal {
            unity=0x00000000,     ///<The on-chip PGA gain is 1.
            half=0x00000001,     ///<The on-chip PGA gain is 0.5.
        };
        namespace chr3gnValC{
            constexpr MPL::Value<chr3gnVal,chr3gnVal::unity> unity{};
            constexpr MPL::Value<chr3gnVal,chr3gnVal::half> half{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,chr3gnVal> chr3gn{}; 
        ///Conversion Characteristic 3 Repeat Counter. 
        enum class chr3rptVal {
            acc1=0x00000000,     ///<Accumulate one sample.
            acc4=0x00000001,     ///<Accumulate four samples.
            acc8=0x00000002,     ///<Accumulate eight samples.
            acc16=0x00000003,     ///<Accumulate sixteen samples.
            acc32=0x00000004,     ///<Accumulate thirty-two samples (10-bit mode only).
            acc64=0x00000005,     ///<Accumulate sixty-four samples (10-bit mode only).
        };
        namespace chr3rptValC{
            constexpr MPL::Value<chr3rptVal,chr3rptVal::acc1> acc1{};
            constexpr MPL::Value<chr3rptVal,chr3rptVal::acc4> acc4{};
            constexpr MPL::Value<chr3rptVal,chr3rptVal::acc8> acc8{};
            constexpr MPL::Value<chr3rptVal,chr3rptVal::acc16> acc16{};
            constexpr MPL::Value<chr3rptVal,chr3rptVal::acc32> acc32{};
            constexpr MPL::Value<chr3rptVal,chr3rptVal::acc64> acc64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,chr3rptVal> chr3rpt{}; 
        ///Conversion Characteristic 3 Left-Shift Bits. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> chr3ls{}; 
        ///Conversion Characteristic 3 Resolution Selection. 
        enum class chr3rselVal {
            b10=0x00000000,     ///<Select 10-bit Mode.
            b12=0x00000001,     ///<Select 12-bit Mode (burst mode must be enabled).
        };
        namespace chr3rselValC{
            constexpr MPL::Value<chr3rselVal,chr3rselVal::b10> b10{};
            constexpr MPL::Value<chr3rselVal,chr3rselVal::b12> b12{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,chr3rselVal> chr3rsel{}; 
        ///Conversion Characteristic 3 Window Comparator Interrupt Enable. 
        enum class chr3wcienVal {
            disabled=0x00000000,     ///<Disable window comparison interrupts.
            enabled=0x00000001,     ///<Enabled window comparison interrupts.  The window comparator will be used to check the ADC result on channels that use this characteristic.
        };
        namespace chr3wcienValC{
            constexpr MPL::Value<chr3wcienVal,chr3wcienVal::disabled> disabled{};
            constexpr MPL::Value<chr3wcienVal,chr3wcienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,chr3wcienVal> chr3wcien{}; 
    }
    namespace Nonechar10{    ///<Conversion Characteristic 0 and 1 Setup
        using Addr = Register::Address<0x4001a050,0xfe00fe00,0,unsigned>;
        ///Conversion Characteristic 0 Gain. 
        enum class chr0gnVal {
            unity=0x00000000,     ///<The on-chip PGA gain is 1.
            half=0x00000001,     ///<The on-chip PGA gain is 0.5.
        };
        namespace chr0gnValC{
            constexpr MPL::Value<chr0gnVal,chr0gnVal::unity> unity{};
            constexpr MPL::Value<chr0gnVal,chr0gnVal::half> half{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,chr0gnVal> chr0gn{}; 
        ///Conversion Characteristic 0 Repeat Counter. 
        enum class chr0rptVal {
            acc1=0x00000000,     ///<Accumulate one sample.
            acc4=0x00000001,     ///<Accumulate four samples.
            acc8=0x00000002,     ///<Accumulate eight samples.
            acc16=0x00000003,     ///<Accumulate sixteen samples.
            acc32=0x00000004,     ///<Accumulate thirty-two samples (10-bit mode only).
            acc64=0x00000005,     ///<Accumulate sixty-four samples (10-bit mode only).
        };
        namespace chr0rptValC{
            constexpr MPL::Value<chr0rptVal,chr0rptVal::acc1> acc1{};
            constexpr MPL::Value<chr0rptVal,chr0rptVal::acc4> acc4{};
            constexpr MPL::Value<chr0rptVal,chr0rptVal::acc8> acc8{};
            constexpr MPL::Value<chr0rptVal,chr0rptVal::acc16> acc16{};
            constexpr MPL::Value<chr0rptVal,chr0rptVal::acc32> acc32{};
            constexpr MPL::Value<chr0rptVal,chr0rptVal::acc64> acc64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,chr0rptVal> chr0rpt{}; 
        ///Conversion Characteristic 0 Left-Shift Bits. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> chr0ls{}; 
        ///Conversion Characteristic 0 Resolution Selection. 
        enum class chr0rselVal {
            b10=0x00000000,     ///<Select 10-bit Mode.
            b12=0x00000001,     ///<Select 12-bit Mode (burst mode must be enabled).
        };
        namespace chr0rselValC{
            constexpr MPL::Value<chr0rselVal,chr0rselVal::b10> b10{};
            constexpr MPL::Value<chr0rselVal,chr0rselVal::b12> b12{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,chr0rselVal> chr0rsel{}; 
        ///Conversion Characteristic 0 Window Comparator Interrupt Enable. 
        enum class chr0wcienVal {
            disabled=0x00000000,     ///<Disable window comparison interrupts.
            enabled=0x00000001,     ///<Enabled window comparison interrupts.  The window comparator will be used to check the ADC result on channels that use this characteristic.
        };
        namespace chr0wcienValC{
            constexpr MPL::Value<chr0wcienVal,chr0wcienVal::disabled> disabled{};
            constexpr MPL::Value<chr0wcienVal,chr0wcienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,chr0wcienVal> chr0wcien{}; 
        ///Conversion Characteristic 1 Gain. 
        enum class chr1gnVal {
            unity=0x00000000,     ///<The on-chip PGA gain is 1.
            half=0x00000001,     ///<The on-chip PGA gain is 0.5.
        };
        namespace chr1gnValC{
            constexpr MPL::Value<chr1gnVal,chr1gnVal::unity> unity{};
            constexpr MPL::Value<chr1gnVal,chr1gnVal::half> half{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,chr1gnVal> chr1gn{}; 
        ///Conversion Characteristic 1 Repeat Counter. 
        enum class chr1rptVal {
            acc1=0x00000000,     ///<Accumulate one sample.
            acc4=0x00000001,     ///<Accumulate four samples.
            acc8=0x00000002,     ///<Accumulate eight samples.
            acc16=0x00000003,     ///<Accumulate sixteen samples.
            acc32=0x00000004,     ///<Accumulate thirty-two samples (10-bit mode only).
            acc64=0x00000005,     ///<Accumulate sixty-four samples (10-bit mode only).
        };
        namespace chr1rptValC{
            constexpr MPL::Value<chr1rptVal,chr1rptVal::acc1> acc1{};
            constexpr MPL::Value<chr1rptVal,chr1rptVal::acc4> acc4{};
            constexpr MPL::Value<chr1rptVal,chr1rptVal::acc8> acc8{};
            constexpr MPL::Value<chr1rptVal,chr1rptVal::acc16> acc16{};
            constexpr MPL::Value<chr1rptVal,chr1rptVal::acc32> acc32{};
            constexpr MPL::Value<chr1rptVal,chr1rptVal::acc64> acc64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,chr1rptVal> chr1rpt{}; 
        ///Conversion Characteristic 1 Left-Shift Bits. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> chr1ls{}; 
        ///Conversion Characteristic 1 Resolution Selection. 
        enum class chr1rselVal {
            b10=0x00000000,     ///<Select 10-bit Mode.
            b12=0x00000001,     ///<Select 12-bit Mode (burst mode must be enabled).
        };
        namespace chr1rselValC{
            constexpr MPL::Value<chr1rselVal,chr1rselVal::b10> b10{};
            constexpr MPL::Value<chr1rselVal,chr1rselVal::b12> b12{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,chr1rselVal> chr1rsel{}; 
        ///Conversion Characteristic 1 Window Comparator Interrupt Enable. 
        enum class chr1wcienVal {
            disabled=0x00000000,     ///<Disable window comparison interrupts.
            enabled=0x00000001,     ///<Enabled window comparison interrupts.  The window comparator will be used to check the ADC result on channels that use this characteristic.
        };
        namespace chr1wcienValC{
            constexpr MPL::Value<chr1wcienVal,chr1wcienVal::disabled> disabled{};
            constexpr MPL::Value<chr1wcienVal,chr1wcienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,chr1wcienVal> chr1wcien{}; 
    }
    namespace Nonedata{    ///<Output Data Word
        using Addr = Register::Address<0x4001a060,0x00000000,0,unsigned>;
        ///Output Data Word. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonewclimits{    ///<Window Comparator Limits
        using Addr = Register::Address<0x4001a070,0x00000000,0,unsigned>;
        ///Less-Than Window Comparator Limit. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wclt{}; 
        ///Greater-Than Window Comparator Limit. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> wcgt{}; 
    }
    namespace Noneacc{    ///<Accumulator Initial Value
        using Addr = Register::Address<0x4001a080,0xffff0000,0,unsigned>;
        ///Accumulator Initial Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> acc{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x4001a090,0xffffffe0,0,unsigned>;
        ///Window Compare Interrupt. 
        enum class wciVal {
            notSet=0x00000000,     ///<Read: A window compare interrupt has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A window compare interrupt occurred. Write: Force a window compare interrupt.
        };
        namespace wciValC{
            constexpr MPL::Value<wciVal,wciVal::notSet> notSet{};
            constexpr MPL::Value<wciVal,wciVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wciVal> wci{}; 
        ///Single Conversion Complete Interrupt. 
        enum class scciVal {
            notSet=0x00000000,     ///<Read: A single data conversion interrupt has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A single data conversion interrupt occurred. Write: Force a single data conversion interrupt.
        };
        namespace scciValC{
            constexpr MPL::Value<scciVal,scciVal::notSet> notSet{};
            constexpr MPL::Value<scciVal,scciVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,scciVal> scci{}; 
        ///Scan Done Interrupt. 
        enum class sdiVal {
            notSet=0x00000000,     ///<Read: A scan done interrupt has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A scan done interrupt occurred. Write: Force a scan done interrupt.
        };
        namespace sdiValC{
            constexpr MPL::Value<sdiVal,sdiVal::notSet> notSet{};
            constexpr MPL::Value<sdiVal,sdiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sdiVal> sdi{}; 
        ///FIFO Overrun Interrupt. 
        enum class foriVal {
            notSet=0x00000000,     ///<Read: A data FIFO overrun interrupt has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A data FIFO overrun interrupt occurred. Write: Force a data FIFO overrun interrupt.
        };
        namespace foriValC{
            constexpr MPL::Value<foriVal,foriVal::notSet> notSet{};
            constexpr MPL::Value<foriVal,foriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,foriVal> fori{}; 
        ///FIFO Underrun Interrupt. 
        enum class furiVal {
            notSet=0x00000000,     ///<Read: A data FIFO underrun interrupt has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A data FIFO underrun interrupt occurred. Write: Force a data FIFO underrun interrupt.
        };
        namespace furiValC{
            constexpr MPL::Value<furiVal,furiVal::notSet> notSet{};
            constexpr MPL::Value<furiVal,furiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,furiVal> furi{}; 
    }
    namespace Nonefifostatus{    ///<FIFO Status
        using Addr = Register::Address<0x4001a0a0,0xffffffc0,0,unsigned>;
        ///FIFO Level. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fifolvl{}; 
        ///Data Packing Status. 
        enum class dpstsVal {
            lower=0x00000000,     ///<The next ADC conversion will be written to the lower half-word.
            upper=0x00000001,     ///<The next ADC conversion will be written to the upper half-word.
        };
        namespace dpstsValC{
            constexpr MPL::Value<dpstsVal,dpstsVal::lower> lower{};
            constexpr MPL::Value<dpstsVal,dpstsVal::upper> upper{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dpstsVal> dpsts{}; 
        ///Data Ready Flag. 
        enum class drdyfVal {
            notSet=0x00000000,     ///<New data is not produced yet.
            set=0x00000001,     ///<New data is ready.
        };
        namespace drdyfValC{
            constexpr MPL::Value<drdyfVal,drdyfVal::notSet> notSet{};
            constexpr MPL::Value<drdyfVal,drdyfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,drdyfVal> drdyf{}; 
    }
}
