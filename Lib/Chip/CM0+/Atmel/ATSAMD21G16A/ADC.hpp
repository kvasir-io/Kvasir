#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog Digital Converter
    namespace AdcAvgctrl{    ///<Average Control
        using Addr = Register::Address<0x42004002,0xffffff80,0,unsigned char>;
        ///Number of Samples to be Collected
        enum class SamplenumVal {
            v1=0x00000000,     ///<1 sample
            v2=0x00000001,     ///<2 samples
            v4=0x00000002,     ///<4 samples
            v8=0x00000003,     ///<8 samples
            v16=0x00000004,     ///<16 samples
            v32=0x00000005,     ///<32 samples
            v64=0x00000006,     ///<64 samples
            v128=0x00000007,     ///<128 samples
            v256=0x00000008,     ///<256 samples
            v512=0x00000009,     ///<512 samples
            v1024=0x0000000a,     ///<1024 samples
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SamplenumVal> samplenum{}; 
        namespace SamplenumValC{
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v1> v1{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v2> v2{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v4> v4{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v8> v8{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v16> v16{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v32> v32{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v64> v64{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v128> v128{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v256> v256{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v512> v512{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v1024> v1024{};
        }
        ///Adjusting Result / Division Coefficient
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> adjres{}; 
    }
    namespace AdcCalib{    ///<Calibration
        using Addr = Register::Address<0x42004028,0xfffff800,0,unsigned>;
        ///Linearity Calibration Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> linearityCal{}; 
        ///Bias Calibration Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> biasCal{}; 
    }
    namespace AdcCtrla{    ///<Control A
        using Addr = Register::Address<0x42004000,0xfffffff8,0,unsigned char>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> runstdby{}; 
    }
    namespace AdcCtrlb{    ///<Control B
        using Addr = Register::Address<0x42004004,0xfffff8c0,0,unsigned>;
        ///Differential Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> diffmode{}; 
        ///Left-Adjusted Result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> leftadj{}; 
        ///Free Running Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> freerun{}; 
        ///Digital Correction Logic Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> corren{}; 
        ///Conversion Result Resolution
        enum class ResselVal {
            v12bit=0x00000000,     ///<12-bit result
            v16bit=0x00000001,     ///<For averaging mode output
            v10bit=0x00000002,     ///<10-bit result
            v8bit=0x00000003,     ///<8-bit result
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ResselVal> ressel{}; 
        namespace ResselValC{
            constexpr Register::FieldValue<decltype(ressel)::Type,ResselVal::v12bit> v12bit{};
            constexpr Register::FieldValue<decltype(ressel)::Type,ResselVal::v16bit> v16bit{};
            constexpr Register::FieldValue<decltype(ressel)::Type,ResselVal::v10bit> v10bit{};
            constexpr Register::FieldValue<decltype(ressel)::Type,ResselVal::v8bit> v8bit{};
        }
        ///Prescaler Configuration
        enum class PrescalerVal {
            div4=0x00000000,     ///<Peripheral clock divided by 4
            div8=0x00000001,     ///<Peripheral clock divided by 8
            div16=0x00000002,     ///<Peripheral clock divided by 16
            div32=0x00000003,     ///<Peripheral clock divided by 32
            div64=0x00000004,     ///<Peripheral clock divided by 64
            div128=0x00000005,     ///<Peripheral clock divided by 128
            div256=0x00000006,     ///<Peripheral clock divided by 256
            div512=0x00000007,     ///<Peripheral clock divided by 512
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div4> div4{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div8> div8{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div16> div16{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div32> div32{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div64> div64{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div128> div128{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div256> div256{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div512> div512{};
        }
    }
    namespace AdcDbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4200402a,0xfffffffe,0,unsigned char>;
        ///Debug Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace AdcEvctrl{    ///<Event Control
        using Addr = Register::Address<0x42004014,0xffffffcc,0,unsigned char>;
        ///Start Conversion Event In
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> startei{}; 
        ///Synchronization Event In
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncei{}; 
        ///Result Ready Event Out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> resrdyeo{}; 
        ///Window Monitor Event Out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> winmoneo{}; 
    }
    namespace AdcGaincorr{    ///<Gain Correction
        using Addr = Register::Address<0x42004024,0xfffff000,0,unsigned>;
        ///Gain Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> gaincorr{}; 
    }
    namespace AdcInputctrl{    ///<Input Control
        using Addr = Register::Address<0x42004010,0xf000e0e0,0,unsigned>;
        ///Positive Mux Input Selection
        enum class MuxposVal {
            pin0=0x00000000,     ///<ADC AIN0 Pin
            pin1=0x00000001,     ///<ADC AIN1 Pin
            pin2=0x00000002,     ///<ADC AIN2 Pin
            pin3=0x00000003,     ///<ADC AIN3 Pin
            pin4=0x00000004,     ///<ADC AIN4 Pin
            pin5=0x00000005,     ///<ADC AIN5 Pin
            pin6=0x00000006,     ///<ADC AIN6 Pin
            pin7=0x00000007,     ///<ADC AIN7 Pin
            pin8=0x00000008,     ///<ADC AIN8 Pin
            pin9=0x00000009,     ///<ADC AIN9 Pin
            pin10=0x0000000a,     ///<ADC AIN10 Pin
            pin11=0x0000000b,     ///<ADC AIN11 Pin
            pin12=0x0000000c,     ///<ADC AIN12 Pin
            pin13=0x0000000d,     ///<ADC AIN13 Pin
            pin14=0x0000000e,     ///<ADC AIN14 Pin
            pin15=0x0000000f,     ///<ADC AIN15 Pin
            pin16=0x00000010,     ///<ADC AIN16 Pin
            pin17=0x00000011,     ///<ADC AIN17 Pin
            pin18=0x00000012,     ///<ADC AIN18 Pin
            pin19=0x00000013,     ///<ADC AIN19 Pin
            temp=0x00000018,     ///<Temperature Reference
            bandgap=0x00000019,     ///<Bandgap Voltage
            scaledcorevcc=0x0000001a,     ///<1/4  Scaled Core Supply
            scalediovcc=0x0000001b,     ///<1/4  Scaled I/O Supply
            dac=0x0000001c,     ///<DAC Output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,MuxposVal> muxpos{}; 
        namespace MuxposValC{
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin0> pin0{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin1> pin1{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin2> pin2{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin3> pin3{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin4> pin4{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin5> pin5{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin6> pin6{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin7> pin7{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin8> pin8{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin9> pin9{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin10> pin10{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin11> pin11{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin12> pin12{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin13> pin13{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin14> pin14{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin15> pin15{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin16> pin16{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin17> pin17{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin18> pin18{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin19> pin19{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::temp> temp{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::bandgap> bandgap{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::scaledcorevcc> scaledcorevcc{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::scalediovcc> scalediovcc{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::dac> dac{};
        }
        ///Negative Mux Input Selection
        enum class MuxnegVal {
            pin0=0x00000000,     ///<ADC AIN0 Pin
            pin1=0x00000001,     ///<ADC AIN1 Pin
            pin2=0x00000002,     ///<ADC AIN2 Pin
            pin3=0x00000003,     ///<ADC AIN3 Pin
            pin4=0x00000004,     ///<ADC AIN4 Pin
            pin5=0x00000005,     ///<ADC AIN5 Pin
            pin6=0x00000006,     ///<ADC AIN6 Pin
            pin7=0x00000007,     ///<ADC AIN7 Pin
            gnd=0x00000018,     ///<Internal Ground
            iognd=0x00000019,     ///<I/O Ground
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,MuxnegVal> muxneg{}; 
        namespace MuxnegValC{
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin0> pin0{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin1> pin1{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin2> pin2{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin3> pin3{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin4> pin4{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin5> pin5{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin6> pin6{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin7> pin7{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::gnd> gnd{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::iognd> iognd{};
        }
        ///Number of Input Channels Included in Scan
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> inputscan{}; 
        ///Positive Mux Setting Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> inputoffset{}; 
        ///Gain Factor Selection
        enum class GainVal {
            v1x=0x00000000,     ///<1x
            v2x=0x00000001,     ///<2x
            v4x=0x00000002,     ///<4x
            v8x=0x00000003,     ///<8x
            v16x=0x00000004,     ///<16x
            div2=0x0000000f,     ///<1/2x
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,GainVal> gain{}; 
        namespace GainValC{
            constexpr Register::FieldValue<decltype(gain)::Type,GainVal::v1x> v1x{};
            constexpr Register::FieldValue<decltype(gain)::Type,GainVal::v2x> v2x{};
            constexpr Register::FieldValue<decltype(gain)::Type,GainVal::v4x> v4x{};
            constexpr Register::FieldValue<decltype(gain)::Type,GainVal::v8x> v8x{};
            constexpr Register::FieldValue<decltype(gain)::Type,GainVal::v16x> v16x{};
            constexpr Register::FieldValue<decltype(gain)::Type,GainVal::div2> div2{};
        }
    }
    namespace AdcIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42004016,0xfffffff0,0,unsigned char>;
        ///Result Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> resrdy{}; 
        ///Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///Window Monitor Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> winmon{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
    }
    namespace AdcIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42004017,0xfffffff0,0,unsigned char>;
        ///Result Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> resrdy{}; 
        ///Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///Window Monitor Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> winmon{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
    }
    namespace AdcIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x42004018,0xfffffff0,0,unsigned char>;
        ///Result Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> resrdy{}; 
        ///Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///Window Monitor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> winmon{}; 
        ///Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
    }
    namespace AdcOffsetcorr{    ///<Offset Correction
        using Addr = Register::Address<0x42004026,0xfffff000,0,unsigned>;
        ///Offset Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offsetcorr{}; 
    }
    namespace AdcRefctrl{    ///<Reference Control
        using Addr = Register::Address<0x42004001,0xffffff70,0,unsigned char>;
        ///Reference Selection
        enum class RefselVal {
            int1v=0x00000000,     ///<1.0V voltage reference
            intvcc0=0x00000001,     ///<1/1.48 VDDANA
            intvcc1=0x00000002,     ///<1/2 VDDANA (only for VDDANA > 2.0V)
            arefa=0x00000003,     ///<External reference
            arefb=0x00000004,     ///<External reference
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,RefselVal> refsel{}; 
        namespace RefselValC{
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::int1v> int1v{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::intvcc0> intvcc0{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::intvcc1> intvcc1{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::arefa> arefa{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::arefb> arefb{};
        }
        ///Reference Buffer Offset Compensation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> refcomp{}; 
    }
    namespace AdcResult{    ///<Result
        using Addr = Register::Address<0x4200401a,0xffff0000,0,unsigned>;
        ///Result Conversion Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> result{}; 
    }
    namespace AdcSampctrl{    ///<Sampling Time Control
        using Addr = Register::Address<0x42004003,0xffffffc0,0,unsigned char>;
        ///Sampling Time Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> samplen{}; 
    }
    namespace AdcStatus{    ///<Status
        using Addr = Register::Address<0x42004019,0xffffff7f,0,unsigned char>;
        ///Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> syncbusy{}; 
    }
    namespace AdcSwtrig{    ///<Software Trigger
        using Addr = Register::Address<0x4200400c,0xfffffffc,0,unsigned char>;
        ///ADC Conversion Flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flush{}; 
        ///ADC Start Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace AdcWinctrl{    ///<Window Monitor Control
        using Addr = Register::Address<0x42004008,0xfffffff8,0,unsigned char>;
        ///Window Monitor Mode
        enum class WinmodeVal {
            disable=0x00000000,     ///<No window mode (default)
            mode1=0x00000001,     ///<Mode 1: RESULT > WINLT
            mode2=0x00000002,     ///<Mode 2: RESULT < WINUT
            mode3=0x00000003,     ///<Mode 3: WINLT < RESULT < WINUT
            mode4=0x00000004,     ///<Mode 4: !(WINLT < RESULT < WINUT)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,WinmodeVal> winmode{}; 
        namespace WinmodeValC{
            constexpr Register::FieldValue<decltype(winmode)::Type,WinmodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(winmode)::Type,WinmodeVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(winmode)::Type,WinmodeVal::mode2> mode2{};
            constexpr Register::FieldValue<decltype(winmode)::Type,WinmodeVal::mode3> mode3{};
            constexpr Register::FieldValue<decltype(winmode)::Type,WinmodeVal::mode4> mode4{};
        }
    }
    namespace AdcWinlt{    ///<Window Monitor Lower Threshold
        using Addr = Register::Address<0x4200401c,0xffff0000,0,unsigned>;
        ///Window Lower Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> winlt{}; 
    }
    namespace AdcWinut{    ///<Window Monitor Upper Threshold
        using Addr = Register::Address<0x42004020,0xffff0000,0,unsigned>;
        ///Window Upper Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> winut{}; 
    }
}
