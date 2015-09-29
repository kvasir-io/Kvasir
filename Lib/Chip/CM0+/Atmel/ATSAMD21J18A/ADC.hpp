#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog Digital Converter
    namespace AdcAvgctrl{    ///<Average Control
        using Addr = Register::Address<0x42004002,0xffffff80,0,unsigned char>;
        ///Number of Samples to be Collected
        enum class samplenumVal {
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
        namespace samplenumValC{
            constexpr MPL::Value<samplenumVal,samplenumVal::v1> v1{};
            constexpr MPL::Value<samplenumVal,samplenumVal::v2> v2{};
            constexpr MPL::Value<samplenumVal,samplenumVal::v4> v4{};
            constexpr MPL::Value<samplenumVal,samplenumVal::v8> v8{};
            constexpr MPL::Value<samplenumVal,samplenumVal::v16> v16{};
            constexpr MPL::Value<samplenumVal,samplenumVal::v32> v32{};
            constexpr MPL::Value<samplenumVal,samplenumVal::v64> v64{};
            constexpr MPL::Value<samplenumVal,samplenumVal::v128> v128{};
            constexpr MPL::Value<samplenumVal,samplenumVal::v256> v256{};
            constexpr MPL::Value<samplenumVal,samplenumVal::v512> v512{};
            constexpr MPL::Value<samplenumVal,samplenumVal::v1024> v1024{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,samplenumVal> samplenum{}; 
        ///Adjusting Result / Division Coefficient
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> adjres{}; 
    }
    namespace AdcCalib{    ///<Calibration
        using Addr = Register::Address<0x42004028,0xfffff800,0,unsigned>;
        ///Linearity Calibration Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> linearityCal{}; 
        ///Bias Calibration Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> biasCal{}; 
    }
    namespace AdcCtrla{    ///<Control A
        using Addr = Register::Address<0x42004000,0xfffffff8,0,unsigned char>;
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> runstdby{}; 
    }
    namespace AdcCtrlb{    ///<Control B
        using Addr = Register::Address<0x42004004,0xfffff8c0,0,unsigned>;
        ///Differential Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> diffmode{}; 
        ///Left-Adjusted Result
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> leftadj{}; 
        ///Free Running Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> freerun{}; 
        ///Digital Correction Logic Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> corren{}; 
        ///Conversion Result Resolution
        enum class resselVal {
            v12bit=0x00000000,     ///<12-bit result
            v16bit=0x00000001,     ///<For averaging mode output
            v10bit=0x00000002,     ///<10-bit result
            v8bit=0x00000003,     ///<8-bit result
        };
        namespace resselValC{
            constexpr MPL::Value<resselVal,resselVal::v12bit> v12bit{};
            constexpr MPL::Value<resselVal,resselVal::v16bit> v16bit{};
            constexpr MPL::Value<resselVal,resselVal::v10bit> v10bit{};
            constexpr MPL::Value<resselVal,resselVal::v8bit> v8bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,resselVal> ressel{}; 
        ///Prescaler Configuration
        enum class prescalerVal {
            div4=0x00000000,     ///<Peripheral clock divided by 4
            div8=0x00000001,     ///<Peripheral clock divided by 8
            div16=0x00000002,     ///<Peripheral clock divided by 16
            div32=0x00000003,     ///<Peripheral clock divided by 32
            div64=0x00000004,     ///<Peripheral clock divided by 64
            div128=0x00000005,     ///<Peripheral clock divided by 128
            div256=0x00000006,     ///<Peripheral clock divided by 256
            div512=0x00000007,     ///<Peripheral clock divided by 512
        };
        namespace prescalerValC{
            constexpr MPL::Value<prescalerVal,prescalerVal::div4> div4{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div8> div8{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div16> div16{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div32> div32{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div64> div64{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div128> div128{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div256> div256{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div512> div512{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,prescalerVal> prescaler{}; 
    }
    namespace AdcDbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4200402a,0xfffffffe,0,unsigned char>;
        ///Debug Run
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace AdcEvctrl{    ///<Event Control
        using Addr = Register::Address<0x42004014,0xffffffcc,0,unsigned char>;
        ///Start Conversion Event In
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> startei{}; 
        ///Synchronization Event In
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncei{}; 
        ///Result Ready Event Out
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> resrdyeo{}; 
        ///Window Monitor Event Out
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> winmoneo{}; 
    }
    namespace AdcGaincorr{    ///<Gain Correction
        using Addr = Register::Address<0x42004024,0xfffff000,0,unsigned>;
        ///Gain Correction Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> gaincorr{}; 
    }
    namespace AdcInputctrl{    ///<Input Control
        using Addr = Register::Address<0x42004010,0xf000e0e0,0,unsigned>;
        ///Positive Mux Input Selection
        enum class muxposVal {
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
        namespace muxposValC{
            constexpr MPL::Value<muxposVal,muxposVal::pin0> pin0{};
            constexpr MPL::Value<muxposVal,muxposVal::pin1> pin1{};
            constexpr MPL::Value<muxposVal,muxposVal::pin2> pin2{};
            constexpr MPL::Value<muxposVal,muxposVal::pin3> pin3{};
            constexpr MPL::Value<muxposVal,muxposVal::pin4> pin4{};
            constexpr MPL::Value<muxposVal,muxposVal::pin5> pin5{};
            constexpr MPL::Value<muxposVal,muxposVal::pin6> pin6{};
            constexpr MPL::Value<muxposVal,muxposVal::pin7> pin7{};
            constexpr MPL::Value<muxposVal,muxposVal::pin8> pin8{};
            constexpr MPL::Value<muxposVal,muxposVal::pin9> pin9{};
            constexpr MPL::Value<muxposVal,muxposVal::pin10> pin10{};
            constexpr MPL::Value<muxposVal,muxposVal::pin11> pin11{};
            constexpr MPL::Value<muxposVal,muxposVal::pin12> pin12{};
            constexpr MPL::Value<muxposVal,muxposVal::pin13> pin13{};
            constexpr MPL::Value<muxposVal,muxposVal::pin14> pin14{};
            constexpr MPL::Value<muxposVal,muxposVal::pin15> pin15{};
            constexpr MPL::Value<muxposVal,muxposVal::pin16> pin16{};
            constexpr MPL::Value<muxposVal,muxposVal::pin17> pin17{};
            constexpr MPL::Value<muxposVal,muxposVal::pin18> pin18{};
            constexpr MPL::Value<muxposVal,muxposVal::pin19> pin19{};
            constexpr MPL::Value<muxposVal,muxposVal::temp> temp{};
            constexpr MPL::Value<muxposVal,muxposVal::bandgap> bandgap{};
            constexpr MPL::Value<muxposVal,muxposVal::scaledcorevcc> scaledcorevcc{};
            constexpr MPL::Value<muxposVal,muxposVal::scalediovcc> scalediovcc{};
            constexpr MPL::Value<muxposVal,muxposVal::dac> dac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,muxposVal> muxpos{}; 
        ///Negative Mux Input Selection
        enum class muxnegVal {
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
        namespace muxnegValC{
            constexpr MPL::Value<muxnegVal,muxnegVal::pin0> pin0{};
            constexpr MPL::Value<muxnegVal,muxnegVal::pin1> pin1{};
            constexpr MPL::Value<muxnegVal,muxnegVal::pin2> pin2{};
            constexpr MPL::Value<muxnegVal,muxnegVal::pin3> pin3{};
            constexpr MPL::Value<muxnegVal,muxnegVal::pin4> pin4{};
            constexpr MPL::Value<muxnegVal,muxnegVal::pin5> pin5{};
            constexpr MPL::Value<muxnegVal,muxnegVal::pin6> pin6{};
            constexpr MPL::Value<muxnegVal,muxnegVal::pin7> pin7{};
            constexpr MPL::Value<muxnegVal,muxnegVal::gnd> gnd{};
            constexpr MPL::Value<muxnegVal,muxnegVal::iognd> iognd{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,muxnegVal> muxneg{}; 
        ///Number of Input Channels Included in Scan
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> inputscan{}; 
        ///Positive Mux Setting Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> inputoffset{}; 
        ///Gain Factor Selection
        enum class gainVal {
            v1x=0x00000000,     ///<1x
            v2x=0x00000001,     ///<2x
            v4x=0x00000002,     ///<4x
            v8x=0x00000003,     ///<8x
            v16x=0x00000004,     ///<16x
            div2=0x0000000f,     ///<1/2x
        };
        namespace gainValC{
            constexpr MPL::Value<gainVal,gainVal::v1x> v1x{};
            constexpr MPL::Value<gainVal,gainVal::v2x> v2x{};
            constexpr MPL::Value<gainVal,gainVal::v4x> v4x{};
            constexpr MPL::Value<gainVal,gainVal::v8x> v8x{};
            constexpr MPL::Value<gainVal,gainVal::v16x> v16x{};
            constexpr MPL::Value<gainVal,gainVal::div2> div2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,gainVal> gain{}; 
    }
    namespace AdcIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42004016,0xfffffff0,0,unsigned char>;
        ///Result Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> resrdy{}; 
        ///Overrun Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///Window Monitor Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> winmon{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
    }
    namespace AdcIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42004017,0xfffffff0,0,unsigned char>;
        ///Result Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> resrdy{}; 
        ///Overrun Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///Window Monitor Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> winmon{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
    }
    namespace AdcIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x42004018,0xfffffff0,0,unsigned char>;
        ///Result Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> resrdy{}; 
        ///Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///Window Monitor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> winmon{}; 
        ///Synchronization Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
    }
    namespace AdcOffsetcorr{    ///<Offset Correction
        using Addr = Register::Address<0x42004026,0xfffff000,0,unsigned>;
        ///Offset Correction Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offsetcorr{}; 
    }
    namespace AdcRefctrl{    ///<Reference Control
        using Addr = Register::Address<0x42004001,0xffffff70,0,unsigned char>;
        ///Reference Selection
        enum class refselVal {
            int1v=0x00000000,     ///<1.0V voltage reference
            intvcc0=0x00000001,     ///<1/1.48 VDDANA
            intvcc1=0x00000002,     ///<1/2 VDDANA (only for VDDANA > 2.0V)
            arefa=0x00000003,     ///<External reference
            arefb=0x00000004,     ///<External reference
        };
        namespace refselValC{
            constexpr MPL::Value<refselVal,refselVal::int1v> int1v{};
            constexpr MPL::Value<refselVal,refselVal::intvcc0> intvcc0{};
            constexpr MPL::Value<refselVal,refselVal::intvcc1> intvcc1{};
            constexpr MPL::Value<refselVal,refselVal::arefa> arefa{};
            constexpr MPL::Value<refselVal,refselVal::arefb> arefb{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,refselVal> refsel{}; 
        ///Reference Buffer Offset Compensation Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> refcomp{}; 
    }
    namespace AdcResult{    ///<Result
        using Addr = Register::Address<0x4200401a,0xffff0000,0,unsigned>;
        ///Result Conversion Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> result{}; 
    }
    namespace AdcSampctrl{    ///<Sampling Time Control
        using Addr = Register::Address<0x42004003,0xffffffc0,0,unsigned char>;
        ///Sampling Time Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> samplen{}; 
    }
    namespace AdcStatus{    ///<Status
        using Addr = Register::Address<0x42004019,0xffffff7f,0,unsigned char>;
        ///Synchronization Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> syncbusy{}; 
    }
    namespace AdcSwtrig{    ///<Software Trigger
        using Addr = Register::Address<0x4200400c,0xfffffffc,0,unsigned char>;
        ///ADC Conversion Flush
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flush{}; 
        ///ADC Start Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace AdcWinctrl{    ///<Window Monitor Control
        using Addr = Register::Address<0x42004008,0xfffffff8,0,unsigned char>;
        ///Window Monitor Mode
        enum class winmodeVal {
            disable=0x00000000,     ///<No window mode (default)
            mode1=0x00000001,     ///<Mode 1: RESULT > WINLT
            mode2=0x00000002,     ///<Mode 2: RESULT < WINUT
            mode3=0x00000003,     ///<Mode 3: WINLT < RESULT < WINUT
            mode4=0x00000004,     ///<Mode 4: !(WINLT < RESULT < WINUT)
        };
        namespace winmodeValC{
            constexpr MPL::Value<winmodeVal,winmodeVal::disable> disable{};
            constexpr MPL::Value<winmodeVal,winmodeVal::mode1> mode1{};
            constexpr MPL::Value<winmodeVal,winmodeVal::mode2> mode2{};
            constexpr MPL::Value<winmodeVal,winmodeVal::mode3> mode3{};
            constexpr MPL::Value<winmodeVal,winmodeVal::mode4> mode4{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,winmodeVal> winmode{}; 
    }
    namespace AdcWinlt{    ///<Window Monitor Lower Threshold
        using Addr = Register::Address<0x4200401c,0xffff0000,0,unsigned>;
        ///Window Lower Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> winlt{}; 
    }
    namespace AdcWinut{    ///<Window Monitor Upper Threshold
        using Addr = Register::Address<0x42004020,0xffff0000,0,unsigned>;
        ///Window Upper Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> winut{}; 
    }
}
