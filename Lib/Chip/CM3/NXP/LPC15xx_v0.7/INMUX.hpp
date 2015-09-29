#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Input multiplexing (INMUX) 
    namespace Nonesct0Inmux0{    ///<Pinmux register for SCT0 input 0
        using Addr = Register::Address<0x40014000,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT0 inputs 0 to 6.  0 = 	PIO0_2 (external pin) 1	 = PIO0_3 (external pin) 2	 = PIO0_17 (external pin) 3	 = PIO0_30 (external pin) 4	 = PIO1_6 (external pin) 5	 = PIO1_7 (external pin) 6	 = PIO1_12 (external pin) 7 = 	PIO1_13 (external pin) 8	 = SCT1_OUT4 (large SCT1 output 4) 9 = 	SCT2_OUT4 (companion small SCT2 output 4) 10 = 	SCT2_OUT5 (companion small SCT2 output 5) 11	 = ADC0_THCMP_IRQ () 12	 = ADC1_THCMP_IRQ () 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16	 = COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20 = 	SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22 = 	DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        enum class inpNVal {
            pio02=0x00000000,     ///<PIO0_2 (external pin)
            pio03=0x00000001,     ///<PIO0_3 (external pin)
            pio017=0x00000002,     ///<PIO0_17 (external pin)
            pio030=0x00000003,     ///<PIO0_30 (external pin)
            pio16=0x00000004,     ///<PIO1_6 (external pin)
            pio17=0x00000005,     ///<PIO1_7 (external pin)
            pio112=0x00000006,     ///<PIO1_12 (external pin)
            pio113=0x00000007,     ///<PIO1_13 (external pin)
            sct1Out4=0x00000008,     ///<SCT1_OUT4 (large SCT1 output 4)
            sct2Out4=0x00000009,     ///<SCT2_OUT4 (small SCT2 output 4)
            sct2Out5=0x0000000a,     ///<SCT2_OUT5 (small SCT2 output 5)
            adc0ThcmpIrq=0x0000000b,     ///<ADC0_THCMP_IRQ (ADC0 threshold compare interrupt)
            adc1ThcmpIrq=0x0000000c,     ///<ADC1_THCMP_IRQ (ADC1 threshold compare interrupt)
            acmp0Out=0x0000000d,     ///<ACMP0_OUT (One output from each analog comparator)
            acmp1Out=0x0000000e,     ///<ACMP1_OUT (One output from each analog comparator)
            acmp2Out=0x0000000f,     ///<ACMP2_OUT (One output from each analog comparator)
            acmp3Out=0x00000010,     ///<ACMP3_OUT (One output from each analog comparator)
            sctipuAbort=0x00000011,     ///<SCTIPU_ABORT
            sctipuSample0=0x00000012,     ///<SCTIPU_SAMPLE0
            sctipuSample1=0x00000013,     ///<SCTIPU_SAMPLE1
            sctipuSample2=0x00000014,     ///<SCTIPU_SAMPLE2
            sctipuSample3=0x00000015,     ///<SCTIPU_SAMPLE3
            debugHalted=0x00000016,     ///<ARM DEBUG HALTED
        };
        namespace inpNValC{
            constexpr MPL::Value<inpNVal,inpNVal::pio02> pio02{};
            constexpr MPL::Value<inpNVal,inpNVal::pio03> pio03{};
            constexpr MPL::Value<inpNVal,inpNVal::pio017> pio017{};
            constexpr MPL::Value<inpNVal,inpNVal::pio030> pio030{};
            constexpr MPL::Value<inpNVal,inpNVal::pio16> pio16{};
            constexpr MPL::Value<inpNVal,inpNVal::pio17> pio17{};
            constexpr MPL::Value<inpNVal,inpNVal::pio112> pio112{};
            constexpr MPL::Value<inpNVal,inpNVal::pio113> pio113{};
            constexpr MPL::Value<inpNVal,inpNVal::sct1Out4> sct1Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out4> sct2Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out5> sct2Out5{};
            constexpr MPL::Value<inpNVal,inpNVal::adc0ThcmpIrq> adc0ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::adc1ThcmpIrq> adc1ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp0Out> acmp0Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp1Out> acmp1Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp2Out> acmp2Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp3Out> acmp3Out{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuAbort> sctipuAbort{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample0> sctipuSample0{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample1> sctipuSample1{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample2> sctipuSample2{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample3> sctipuSample3{};
            constexpr MPL::Value<inpNVal,inpNVal::debugHalted> debugHalted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,inpNVal> inpN{}; 
    }
    namespace Nonesct0Inmux1{    ///<Pinmux register for SCT0 input 0
        using Addr = Register::Address<0x40014004,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT0 inputs 0 to 6.  0 = 	PIO0_2 (external pin) 1	 = PIO0_3 (external pin) 2	 = PIO0_17 (external pin) 3	 = PIO0_30 (external pin) 4	 = PIO1_6 (external pin) 5	 = PIO1_7 (external pin) 6	 = PIO1_12 (external pin) 7 = 	PIO1_13 (external pin) 8	 = SCT1_OUT4 (large SCT1 output 4) 9 = 	SCT2_OUT4 (companion small SCT2 output 4) 10 = 	SCT2_OUT5 (companion small SCT2 output 5) 11	 = ADC0_THCMP_IRQ () 12	 = ADC1_THCMP_IRQ () 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16	 = COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20 = 	SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22 = 	DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        enum class inpNVal {
            pio02=0x00000000,     ///<PIO0_2 (external pin)
            pio03=0x00000001,     ///<PIO0_3 (external pin)
            pio017=0x00000002,     ///<PIO0_17 (external pin)
            pio030=0x00000003,     ///<PIO0_30 (external pin)
            pio16=0x00000004,     ///<PIO1_6 (external pin)
            pio17=0x00000005,     ///<PIO1_7 (external pin)
            pio112=0x00000006,     ///<PIO1_12 (external pin)
            pio113=0x00000007,     ///<PIO1_13 (external pin)
            sct1Out4=0x00000008,     ///<SCT1_OUT4 (large SCT1 output 4)
            sct2Out4=0x00000009,     ///<SCT2_OUT4 (small SCT2 output 4)
            sct2Out5=0x0000000a,     ///<SCT2_OUT5 (small SCT2 output 5)
            adc0ThcmpIrq=0x0000000b,     ///<ADC0_THCMP_IRQ (ADC0 threshold compare interrupt)
            adc1ThcmpIrq=0x0000000c,     ///<ADC1_THCMP_IRQ (ADC1 threshold compare interrupt)
            acmp0Out=0x0000000d,     ///<ACMP0_OUT (One output from each analog comparator)
            acmp1Out=0x0000000e,     ///<ACMP1_OUT (One output from each analog comparator)
            acmp2Out=0x0000000f,     ///<ACMP2_OUT (One output from each analog comparator)
            acmp3Out=0x00000010,     ///<ACMP3_OUT (One output from each analog comparator)
            sctipuAbort=0x00000011,     ///<SCTIPU_ABORT
            sctipuSample0=0x00000012,     ///<SCTIPU_SAMPLE0
            sctipuSample1=0x00000013,     ///<SCTIPU_SAMPLE1
            sctipuSample2=0x00000014,     ///<SCTIPU_SAMPLE2
            sctipuSample3=0x00000015,     ///<SCTIPU_SAMPLE3
            debugHalted=0x00000016,     ///<ARM DEBUG HALTED
        };
        namespace inpNValC{
            constexpr MPL::Value<inpNVal,inpNVal::pio02> pio02{};
            constexpr MPL::Value<inpNVal,inpNVal::pio03> pio03{};
            constexpr MPL::Value<inpNVal,inpNVal::pio017> pio017{};
            constexpr MPL::Value<inpNVal,inpNVal::pio030> pio030{};
            constexpr MPL::Value<inpNVal,inpNVal::pio16> pio16{};
            constexpr MPL::Value<inpNVal,inpNVal::pio17> pio17{};
            constexpr MPL::Value<inpNVal,inpNVal::pio112> pio112{};
            constexpr MPL::Value<inpNVal,inpNVal::pio113> pio113{};
            constexpr MPL::Value<inpNVal,inpNVal::sct1Out4> sct1Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out4> sct2Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out5> sct2Out5{};
            constexpr MPL::Value<inpNVal,inpNVal::adc0ThcmpIrq> adc0ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::adc1ThcmpIrq> adc1ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp0Out> acmp0Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp1Out> acmp1Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp2Out> acmp2Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp3Out> acmp3Out{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuAbort> sctipuAbort{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample0> sctipuSample0{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample1> sctipuSample1{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample2> sctipuSample2{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample3> sctipuSample3{};
            constexpr MPL::Value<inpNVal,inpNVal::debugHalted> debugHalted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,inpNVal> inpN{}; 
    }
    namespace Nonesct0Inmux2{    ///<Pinmux register for SCT0 input 0
        using Addr = Register::Address<0x40014008,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT0 inputs 0 to 6.  0 = 	PIO0_2 (external pin) 1	 = PIO0_3 (external pin) 2	 = PIO0_17 (external pin) 3	 = PIO0_30 (external pin) 4	 = PIO1_6 (external pin) 5	 = PIO1_7 (external pin) 6	 = PIO1_12 (external pin) 7 = 	PIO1_13 (external pin) 8	 = SCT1_OUT4 (large SCT1 output 4) 9 = 	SCT2_OUT4 (companion small SCT2 output 4) 10 = 	SCT2_OUT5 (companion small SCT2 output 5) 11	 = ADC0_THCMP_IRQ () 12	 = ADC1_THCMP_IRQ () 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16	 = COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20 = 	SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22 = 	DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        enum class inpNVal {
            pio02=0x00000000,     ///<PIO0_2 (external pin)
            pio03=0x00000001,     ///<PIO0_3 (external pin)
            pio017=0x00000002,     ///<PIO0_17 (external pin)
            pio030=0x00000003,     ///<PIO0_30 (external pin)
            pio16=0x00000004,     ///<PIO1_6 (external pin)
            pio17=0x00000005,     ///<PIO1_7 (external pin)
            pio112=0x00000006,     ///<PIO1_12 (external pin)
            pio113=0x00000007,     ///<PIO1_13 (external pin)
            sct1Out4=0x00000008,     ///<SCT1_OUT4 (large SCT1 output 4)
            sct2Out4=0x00000009,     ///<SCT2_OUT4 (small SCT2 output 4)
            sct2Out5=0x0000000a,     ///<SCT2_OUT5 (small SCT2 output 5)
            adc0ThcmpIrq=0x0000000b,     ///<ADC0_THCMP_IRQ (ADC0 threshold compare interrupt)
            adc1ThcmpIrq=0x0000000c,     ///<ADC1_THCMP_IRQ (ADC1 threshold compare interrupt)
            acmp0Out=0x0000000d,     ///<ACMP0_OUT (One output from each analog comparator)
            acmp1Out=0x0000000e,     ///<ACMP1_OUT (One output from each analog comparator)
            acmp2Out=0x0000000f,     ///<ACMP2_OUT (One output from each analog comparator)
            acmp3Out=0x00000010,     ///<ACMP3_OUT (One output from each analog comparator)
            sctipuAbort=0x00000011,     ///<SCTIPU_ABORT
            sctipuSample0=0x00000012,     ///<SCTIPU_SAMPLE0
            sctipuSample1=0x00000013,     ///<SCTIPU_SAMPLE1
            sctipuSample2=0x00000014,     ///<SCTIPU_SAMPLE2
            sctipuSample3=0x00000015,     ///<SCTIPU_SAMPLE3
            debugHalted=0x00000016,     ///<ARM DEBUG HALTED
        };
        namespace inpNValC{
            constexpr MPL::Value<inpNVal,inpNVal::pio02> pio02{};
            constexpr MPL::Value<inpNVal,inpNVal::pio03> pio03{};
            constexpr MPL::Value<inpNVal,inpNVal::pio017> pio017{};
            constexpr MPL::Value<inpNVal,inpNVal::pio030> pio030{};
            constexpr MPL::Value<inpNVal,inpNVal::pio16> pio16{};
            constexpr MPL::Value<inpNVal,inpNVal::pio17> pio17{};
            constexpr MPL::Value<inpNVal,inpNVal::pio112> pio112{};
            constexpr MPL::Value<inpNVal,inpNVal::pio113> pio113{};
            constexpr MPL::Value<inpNVal,inpNVal::sct1Out4> sct1Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out4> sct2Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out5> sct2Out5{};
            constexpr MPL::Value<inpNVal,inpNVal::adc0ThcmpIrq> adc0ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::adc1ThcmpIrq> adc1ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp0Out> acmp0Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp1Out> acmp1Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp2Out> acmp2Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp3Out> acmp3Out{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuAbort> sctipuAbort{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample0> sctipuSample0{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample1> sctipuSample1{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample2> sctipuSample2{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample3> sctipuSample3{};
            constexpr MPL::Value<inpNVal,inpNVal::debugHalted> debugHalted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,inpNVal> inpN{}; 
    }
    namespace Nonesct0Inmux3{    ///<Pinmux register for SCT0 input 0
        using Addr = Register::Address<0x4001400c,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT0 inputs 0 to 6.  0 = 	PIO0_2 (external pin) 1	 = PIO0_3 (external pin) 2	 = PIO0_17 (external pin) 3	 = PIO0_30 (external pin) 4	 = PIO1_6 (external pin) 5	 = PIO1_7 (external pin) 6	 = PIO1_12 (external pin) 7 = 	PIO1_13 (external pin) 8	 = SCT1_OUT4 (large SCT1 output 4) 9 = 	SCT2_OUT4 (companion small SCT2 output 4) 10 = 	SCT2_OUT5 (companion small SCT2 output 5) 11	 = ADC0_THCMP_IRQ () 12	 = ADC1_THCMP_IRQ () 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16	 = COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20 = 	SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22 = 	DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        enum class inpNVal {
            pio02=0x00000000,     ///<PIO0_2 (external pin)
            pio03=0x00000001,     ///<PIO0_3 (external pin)
            pio017=0x00000002,     ///<PIO0_17 (external pin)
            pio030=0x00000003,     ///<PIO0_30 (external pin)
            pio16=0x00000004,     ///<PIO1_6 (external pin)
            pio17=0x00000005,     ///<PIO1_7 (external pin)
            pio112=0x00000006,     ///<PIO1_12 (external pin)
            pio113=0x00000007,     ///<PIO1_13 (external pin)
            sct1Out4=0x00000008,     ///<SCT1_OUT4 (large SCT1 output 4)
            sct2Out4=0x00000009,     ///<SCT2_OUT4 (small SCT2 output 4)
            sct2Out5=0x0000000a,     ///<SCT2_OUT5 (small SCT2 output 5)
            adc0ThcmpIrq=0x0000000b,     ///<ADC0_THCMP_IRQ (ADC0 threshold compare interrupt)
            adc1ThcmpIrq=0x0000000c,     ///<ADC1_THCMP_IRQ (ADC1 threshold compare interrupt)
            acmp0Out=0x0000000d,     ///<ACMP0_OUT (One output from each analog comparator)
            acmp1Out=0x0000000e,     ///<ACMP1_OUT (One output from each analog comparator)
            acmp2Out=0x0000000f,     ///<ACMP2_OUT (One output from each analog comparator)
            acmp3Out=0x00000010,     ///<ACMP3_OUT (One output from each analog comparator)
            sctipuAbort=0x00000011,     ///<SCTIPU_ABORT
            sctipuSample0=0x00000012,     ///<SCTIPU_SAMPLE0
            sctipuSample1=0x00000013,     ///<SCTIPU_SAMPLE1
            sctipuSample2=0x00000014,     ///<SCTIPU_SAMPLE2
            sctipuSample3=0x00000015,     ///<SCTIPU_SAMPLE3
            debugHalted=0x00000016,     ///<ARM DEBUG HALTED
        };
        namespace inpNValC{
            constexpr MPL::Value<inpNVal,inpNVal::pio02> pio02{};
            constexpr MPL::Value<inpNVal,inpNVal::pio03> pio03{};
            constexpr MPL::Value<inpNVal,inpNVal::pio017> pio017{};
            constexpr MPL::Value<inpNVal,inpNVal::pio030> pio030{};
            constexpr MPL::Value<inpNVal,inpNVal::pio16> pio16{};
            constexpr MPL::Value<inpNVal,inpNVal::pio17> pio17{};
            constexpr MPL::Value<inpNVal,inpNVal::pio112> pio112{};
            constexpr MPL::Value<inpNVal,inpNVal::pio113> pio113{};
            constexpr MPL::Value<inpNVal,inpNVal::sct1Out4> sct1Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out4> sct2Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out5> sct2Out5{};
            constexpr MPL::Value<inpNVal,inpNVal::adc0ThcmpIrq> adc0ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::adc1ThcmpIrq> adc1ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp0Out> acmp0Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp1Out> acmp1Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp2Out> acmp2Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp3Out> acmp3Out{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuAbort> sctipuAbort{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample0> sctipuSample0{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample1> sctipuSample1{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample2> sctipuSample2{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample3> sctipuSample3{};
            constexpr MPL::Value<inpNVal,inpNVal::debugHalted> debugHalted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,inpNVal> inpN{}; 
    }
    namespace Nonesct0Inmux4{    ///<Pinmux register for SCT0 input 0
        using Addr = Register::Address<0x40014010,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT0 inputs 0 to 6.  0 = 	PIO0_2 (external pin) 1	 = PIO0_3 (external pin) 2	 = PIO0_17 (external pin) 3	 = PIO0_30 (external pin) 4	 = PIO1_6 (external pin) 5	 = PIO1_7 (external pin) 6	 = PIO1_12 (external pin) 7 = 	PIO1_13 (external pin) 8	 = SCT1_OUT4 (large SCT1 output 4) 9 = 	SCT2_OUT4 (companion small SCT2 output 4) 10 = 	SCT2_OUT5 (companion small SCT2 output 5) 11	 = ADC0_THCMP_IRQ () 12	 = ADC1_THCMP_IRQ () 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16	 = COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20 = 	SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22 = 	DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        enum class inpNVal {
            pio02=0x00000000,     ///<PIO0_2 (external pin)
            pio03=0x00000001,     ///<PIO0_3 (external pin)
            pio017=0x00000002,     ///<PIO0_17 (external pin)
            pio030=0x00000003,     ///<PIO0_30 (external pin)
            pio16=0x00000004,     ///<PIO1_6 (external pin)
            pio17=0x00000005,     ///<PIO1_7 (external pin)
            pio112=0x00000006,     ///<PIO1_12 (external pin)
            pio113=0x00000007,     ///<PIO1_13 (external pin)
            sct1Out4=0x00000008,     ///<SCT1_OUT4 (large SCT1 output 4)
            sct2Out4=0x00000009,     ///<SCT2_OUT4 (small SCT2 output 4)
            sct2Out5=0x0000000a,     ///<SCT2_OUT5 (small SCT2 output 5)
            adc0ThcmpIrq=0x0000000b,     ///<ADC0_THCMP_IRQ (ADC0 threshold compare interrupt)
            adc1ThcmpIrq=0x0000000c,     ///<ADC1_THCMP_IRQ (ADC1 threshold compare interrupt)
            acmp0Out=0x0000000d,     ///<ACMP0_OUT (One output from each analog comparator)
            acmp1Out=0x0000000e,     ///<ACMP1_OUT (One output from each analog comparator)
            acmp2Out=0x0000000f,     ///<ACMP2_OUT (One output from each analog comparator)
            acmp3Out=0x00000010,     ///<ACMP3_OUT (One output from each analog comparator)
            sctipuAbort=0x00000011,     ///<SCTIPU_ABORT
            sctipuSample0=0x00000012,     ///<SCTIPU_SAMPLE0
            sctipuSample1=0x00000013,     ///<SCTIPU_SAMPLE1
            sctipuSample2=0x00000014,     ///<SCTIPU_SAMPLE2
            sctipuSample3=0x00000015,     ///<SCTIPU_SAMPLE3
            debugHalted=0x00000016,     ///<ARM DEBUG HALTED
        };
        namespace inpNValC{
            constexpr MPL::Value<inpNVal,inpNVal::pio02> pio02{};
            constexpr MPL::Value<inpNVal,inpNVal::pio03> pio03{};
            constexpr MPL::Value<inpNVal,inpNVal::pio017> pio017{};
            constexpr MPL::Value<inpNVal,inpNVal::pio030> pio030{};
            constexpr MPL::Value<inpNVal,inpNVal::pio16> pio16{};
            constexpr MPL::Value<inpNVal,inpNVal::pio17> pio17{};
            constexpr MPL::Value<inpNVal,inpNVal::pio112> pio112{};
            constexpr MPL::Value<inpNVal,inpNVal::pio113> pio113{};
            constexpr MPL::Value<inpNVal,inpNVal::sct1Out4> sct1Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out4> sct2Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out5> sct2Out5{};
            constexpr MPL::Value<inpNVal,inpNVal::adc0ThcmpIrq> adc0ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::adc1ThcmpIrq> adc1ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp0Out> acmp0Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp1Out> acmp1Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp2Out> acmp2Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp3Out> acmp3Out{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuAbort> sctipuAbort{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample0> sctipuSample0{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample1> sctipuSample1{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample2> sctipuSample2{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample3> sctipuSample3{};
            constexpr MPL::Value<inpNVal,inpNVal::debugHalted> debugHalted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,inpNVal> inpN{}; 
    }
    namespace Nonesct0Inmux5{    ///<Pinmux register for SCT0 input 0
        using Addr = Register::Address<0x40014014,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT0 inputs 0 to 6.  0 = 	PIO0_2 (external pin) 1	 = PIO0_3 (external pin) 2	 = PIO0_17 (external pin) 3	 = PIO0_30 (external pin) 4	 = PIO1_6 (external pin) 5	 = PIO1_7 (external pin) 6	 = PIO1_12 (external pin) 7 = 	PIO1_13 (external pin) 8	 = SCT1_OUT4 (large SCT1 output 4) 9 = 	SCT2_OUT4 (companion small SCT2 output 4) 10 = 	SCT2_OUT5 (companion small SCT2 output 5) 11	 = ADC0_THCMP_IRQ () 12	 = ADC1_THCMP_IRQ () 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16	 = COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20 = 	SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22 = 	DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        enum class inpNVal {
            pio02=0x00000000,     ///<PIO0_2 (external pin)
            pio03=0x00000001,     ///<PIO0_3 (external pin)
            pio017=0x00000002,     ///<PIO0_17 (external pin)
            pio030=0x00000003,     ///<PIO0_30 (external pin)
            pio16=0x00000004,     ///<PIO1_6 (external pin)
            pio17=0x00000005,     ///<PIO1_7 (external pin)
            pio112=0x00000006,     ///<PIO1_12 (external pin)
            pio113=0x00000007,     ///<PIO1_13 (external pin)
            sct1Out4=0x00000008,     ///<SCT1_OUT4 (large SCT1 output 4)
            sct2Out4=0x00000009,     ///<SCT2_OUT4 (small SCT2 output 4)
            sct2Out5=0x0000000a,     ///<SCT2_OUT5 (small SCT2 output 5)
            adc0ThcmpIrq=0x0000000b,     ///<ADC0_THCMP_IRQ (ADC0 threshold compare interrupt)
            adc1ThcmpIrq=0x0000000c,     ///<ADC1_THCMP_IRQ (ADC1 threshold compare interrupt)
            acmp0Out=0x0000000d,     ///<ACMP0_OUT (One output from each analog comparator)
            acmp1Out=0x0000000e,     ///<ACMP1_OUT (One output from each analog comparator)
            acmp2Out=0x0000000f,     ///<ACMP2_OUT (One output from each analog comparator)
            acmp3Out=0x00000010,     ///<ACMP3_OUT (One output from each analog comparator)
            sctipuAbort=0x00000011,     ///<SCTIPU_ABORT
            sctipuSample0=0x00000012,     ///<SCTIPU_SAMPLE0
            sctipuSample1=0x00000013,     ///<SCTIPU_SAMPLE1
            sctipuSample2=0x00000014,     ///<SCTIPU_SAMPLE2
            sctipuSample3=0x00000015,     ///<SCTIPU_SAMPLE3
            debugHalted=0x00000016,     ///<ARM DEBUG HALTED
        };
        namespace inpNValC{
            constexpr MPL::Value<inpNVal,inpNVal::pio02> pio02{};
            constexpr MPL::Value<inpNVal,inpNVal::pio03> pio03{};
            constexpr MPL::Value<inpNVal,inpNVal::pio017> pio017{};
            constexpr MPL::Value<inpNVal,inpNVal::pio030> pio030{};
            constexpr MPL::Value<inpNVal,inpNVal::pio16> pio16{};
            constexpr MPL::Value<inpNVal,inpNVal::pio17> pio17{};
            constexpr MPL::Value<inpNVal,inpNVal::pio112> pio112{};
            constexpr MPL::Value<inpNVal,inpNVal::pio113> pio113{};
            constexpr MPL::Value<inpNVal,inpNVal::sct1Out4> sct1Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out4> sct2Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out5> sct2Out5{};
            constexpr MPL::Value<inpNVal,inpNVal::adc0ThcmpIrq> adc0ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::adc1ThcmpIrq> adc1ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp0Out> acmp0Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp1Out> acmp1Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp2Out> acmp2Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp3Out> acmp3Out{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuAbort> sctipuAbort{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample0> sctipuSample0{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample1> sctipuSample1{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample2> sctipuSample2{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample3> sctipuSample3{};
            constexpr MPL::Value<inpNVal,inpNVal::debugHalted> debugHalted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,inpNVal> inpN{}; 
    }
    namespace Nonesct0Inmux6{    ///<Pinmux register for SCT0 input 0
        using Addr = Register::Address<0x40014018,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT0 inputs 0 to 6.  0 = 	PIO0_2 (external pin) 1	 = PIO0_3 (external pin) 2	 = PIO0_17 (external pin) 3	 = PIO0_30 (external pin) 4	 = PIO1_6 (external pin) 5	 = PIO1_7 (external pin) 6	 = PIO1_12 (external pin) 7 = 	PIO1_13 (external pin) 8	 = SCT1_OUT4 (large SCT1 output 4) 9 = 	SCT2_OUT4 (companion small SCT2 output 4) 10 = 	SCT2_OUT5 (companion small SCT2 output 5) 11	 = ADC0_THCMP_IRQ () 12	 = ADC1_THCMP_IRQ () 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16	 = COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20 = 	SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22 = 	DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        enum class inpNVal {
            pio02=0x00000000,     ///<PIO0_2 (external pin)
            pio03=0x00000001,     ///<PIO0_3 (external pin)
            pio017=0x00000002,     ///<PIO0_17 (external pin)
            pio030=0x00000003,     ///<PIO0_30 (external pin)
            pio16=0x00000004,     ///<PIO1_6 (external pin)
            pio17=0x00000005,     ///<PIO1_7 (external pin)
            pio112=0x00000006,     ///<PIO1_12 (external pin)
            pio113=0x00000007,     ///<PIO1_13 (external pin)
            sct1Out4=0x00000008,     ///<SCT1_OUT4 (large SCT1 output 4)
            sct2Out4=0x00000009,     ///<SCT2_OUT4 (small SCT2 output 4)
            sct2Out5=0x0000000a,     ///<SCT2_OUT5 (small SCT2 output 5)
            adc0ThcmpIrq=0x0000000b,     ///<ADC0_THCMP_IRQ (ADC0 threshold compare interrupt)
            adc1ThcmpIrq=0x0000000c,     ///<ADC1_THCMP_IRQ (ADC1 threshold compare interrupt)
            acmp0Out=0x0000000d,     ///<ACMP0_OUT (One output from each analog comparator)
            acmp1Out=0x0000000e,     ///<ACMP1_OUT (One output from each analog comparator)
            acmp2Out=0x0000000f,     ///<ACMP2_OUT (One output from each analog comparator)
            acmp3Out=0x00000010,     ///<ACMP3_OUT (One output from each analog comparator)
            sctipuAbort=0x00000011,     ///<SCTIPU_ABORT
            sctipuSample0=0x00000012,     ///<SCTIPU_SAMPLE0
            sctipuSample1=0x00000013,     ///<SCTIPU_SAMPLE1
            sctipuSample2=0x00000014,     ///<SCTIPU_SAMPLE2
            sctipuSample3=0x00000015,     ///<SCTIPU_SAMPLE3
            debugHalted=0x00000016,     ///<ARM DEBUG HALTED
        };
        namespace inpNValC{
            constexpr MPL::Value<inpNVal,inpNVal::pio02> pio02{};
            constexpr MPL::Value<inpNVal,inpNVal::pio03> pio03{};
            constexpr MPL::Value<inpNVal,inpNVal::pio017> pio017{};
            constexpr MPL::Value<inpNVal,inpNVal::pio030> pio030{};
            constexpr MPL::Value<inpNVal,inpNVal::pio16> pio16{};
            constexpr MPL::Value<inpNVal,inpNVal::pio17> pio17{};
            constexpr MPL::Value<inpNVal,inpNVal::pio112> pio112{};
            constexpr MPL::Value<inpNVal,inpNVal::pio113> pio113{};
            constexpr MPL::Value<inpNVal,inpNVal::sct1Out4> sct1Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out4> sct2Out4{};
            constexpr MPL::Value<inpNVal,inpNVal::sct2Out5> sct2Out5{};
            constexpr MPL::Value<inpNVal,inpNVal::adc0ThcmpIrq> adc0ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::adc1ThcmpIrq> adc1ThcmpIrq{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp0Out> acmp0Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp1Out> acmp1Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp2Out> acmp2Out{};
            constexpr MPL::Value<inpNVal,inpNVal::acmp3Out> acmp3Out{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuAbort> sctipuAbort{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample0> sctipuSample0{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample1> sctipuSample1{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample2> sctipuSample2{};
            constexpr MPL::Value<inpNVal,inpNVal::sctipuSample3> sctipuSample3{};
            constexpr MPL::Value<inpNVal,inpNVal::debugHalted> debugHalted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,inpNVal> inpN{}; 
    }
    namespace Nonesct1Inmux0{    ///<Pinmux register for SCT1 input 0
        using Addr = Register::Address<0x40014020,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT1 inputs 0 to 6.  0	 = PIO0_15 (external pin) 1	 = PIO0_16 (external pin) 2	 = PIO0_21 (external pin) 3	 = PIO0_31 (external pin) 4	 = PIO1_4 (external pin) 5 = PIO1_5 (external pin) 6	 = PIO1_15 (external pin) 7	 = PIO1_16 (external pin) 8	 = SCT0_OUT4 (large SCT0 output 4) 9	 = SCT3_OUT4 (small companion SCT3 output 4) 10 = 	SCT3_OUT5 (small companion SCT3 output 5) 11 = 	ADC0_THCMP_IRQ 12	 = ADC1_THCMP_IRQ 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16 = A	COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20	 = SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22	 = DEBUG_HALTED DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonesct1Inmux1{    ///<Pinmux register for SCT1 input 0
        using Addr = Register::Address<0x40014024,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT1 inputs 0 to 6.  0	 = PIO0_15 (external pin) 1	 = PIO0_16 (external pin) 2	 = PIO0_21 (external pin) 3	 = PIO0_31 (external pin) 4	 = PIO1_4 (external pin) 5 = PIO1_5 (external pin) 6	 = PIO1_15 (external pin) 7	 = PIO1_16 (external pin) 8	 = SCT0_OUT4 (large SCT0 output 4) 9	 = SCT3_OUT4 (small companion SCT3 output 4) 10 = 	SCT3_OUT5 (small companion SCT3 output 5) 11 = 	ADC0_THCMP_IRQ 12	 = ADC1_THCMP_IRQ 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16 = A	COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20	 = SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22	 = DEBUG_HALTED DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonesct1Inmux2{    ///<Pinmux register for SCT1 input 0
        using Addr = Register::Address<0x40014028,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT1 inputs 0 to 6.  0	 = PIO0_15 (external pin) 1	 = PIO0_16 (external pin) 2	 = PIO0_21 (external pin) 3	 = PIO0_31 (external pin) 4	 = PIO1_4 (external pin) 5 = PIO1_5 (external pin) 6	 = PIO1_15 (external pin) 7	 = PIO1_16 (external pin) 8	 = SCT0_OUT4 (large SCT0 output 4) 9	 = SCT3_OUT4 (small companion SCT3 output 4) 10 = 	SCT3_OUT5 (small companion SCT3 output 5) 11 = 	ADC0_THCMP_IRQ 12	 = ADC1_THCMP_IRQ 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16 = A	COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20	 = SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22	 = DEBUG_HALTED DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonesct1Inmux3{    ///<Pinmux register for SCT1 input 0
        using Addr = Register::Address<0x4001402c,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT1 inputs 0 to 6.  0	 = PIO0_15 (external pin) 1	 = PIO0_16 (external pin) 2	 = PIO0_21 (external pin) 3	 = PIO0_31 (external pin) 4	 = PIO1_4 (external pin) 5 = PIO1_5 (external pin) 6	 = PIO1_15 (external pin) 7	 = PIO1_16 (external pin) 8	 = SCT0_OUT4 (large SCT0 output 4) 9	 = SCT3_OUT4 (small companion SCT3 output 4) 10 = 	SCT3_OUT5 (small companion SCT3 output 5) 11 = 	ADC0_THCMP_IRQ 12	 = ADC1_THCMP_IRQ 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16 = A	COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20	 = SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22	 = DEBUG_HALTED DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonesct1Inmux4{    ///<Pinmux register for SCT1 input 0
        using Addr = Register::Address<0x40014030,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT1 inputs 0 to 6.  0	 = PIO0_15 (external pin) 1	 = PIO0_16 (external pin) 2	 = PIO0_21 (external pin) 3	 = PIO0_31 (external pin) 4	 = PIO1_4 (external pin) 5 = PIO1_5 (external pin) 6	 = PIO1_15 (external pin) 7	 = PIO1_16 (external pin) 8	 = SCT0_OUT4 (large SCT0 output 4) 9	 = SCT3_OUT4 (small companion SCT3 output 4) 10 = 	SCT3_OUT5 (small companion SCT3 output 5) 11 = 	ADC0_THCMP_IRQ 12	 = ADC1_THCMP_IRQ 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16 = A	COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20	 = SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22	 = DEBUG_HALTED DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonesct1Inmux5{    ///<Pinmux register for SCT1 input 0
        using Addr = Register::Address<0x40014034,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT1 inputs 0 to 6.  0	 = PIO0_15 (external pin) 1	 = PIO0_16 (external pin) 2	 = PIO0_21 (external pin) 3	 = PIO0_31 (external pin) 4	 = PIO1_4 (external pin) 5 = PIO1_5 (external pin) 6	 = PIO1_15 (external pin) 7	 = PIO1_16 (external pin) 8	 = SCT0_OUT4 (large SCT0 output 4) 9	 = SCT3_OUT4 (small companion SCT3 output 4) 10 = 	SCT3_OUT5 (small companion SCT3 output 5) 11 = 	ADC0_THCMP_IRQ 12	 = ADC1_THCMP_IRQ 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16 = A	COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20	 = SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22	 = DEBUG_HALTED DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonesct1Inmux6{    ///<Pinmux register for SCT1 input 0
        using Addr = Register::Address<0x40014038,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT1 inputs 0 to 6.  0	 = PIO0_15 (external pin) 1	 = PIO0_16 (external pin) 2	 = PIO0_21 (external pin) 3	 = PIO0_31 (external pin) 4	 = PIO1_4 (external pin) 5 = PIO1_5 (external pin) 6	 = PIO1_15 (external pin) 7	 = PIO1_16 (external pin) 8	 = SCT0_OUT4 (large SCT0 output 4) 9	 = SCT3_OUT4 (small companion SCT3 output 4) 10 = 	SCT3_OUT5 (small companion SCT3 output 5) 11 = 	ADC0_THCMP_IRQ 12	 = ADC1_THCMP_IRQ 13	 = COMP0_OUT (One output from each analog comparator) 14	 = COMP1_OUT 15	 = COMP2_OUT 16 = A	COMP3_OUT 17	 = SCTIPU_ABORT 18	 = SCTIPU_SAMPLE0 19	 = SCTIPU_SAMPLE1 20	 = SCTIPU_SAMPLE2 21	 = SCTIPU_SAMPLE3 22	 = DEBUG_HALTED DEBUG_HALTED (from ARM Cortex CoreSight Debugger)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonesct2Inmux0{    ///<Pinmux register for SCT2 input 0
        using Addr = Register::Address<0x40014040,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT2 inputs 0 to 2.  0	 = P0_4 (external pin) 1	 = P0_27 (external pin) 2	 = P1_18 (external pin) 3	 = P1_19 (external pin) 4	 = SCT0_OUT4 5	= SCT0_OUT5 6	= SCT0_OUT7 7 = 	SCT0_OUT8 8	 = ADC0_THCMP_IRQ 9	= ADC1_THCMP_IRQ 10	 = COMP0_OUT (One output from each analog comparator) 11	 = COMP1_OUT 12	 = COMP2_OUT 13	 = COMP3_OUT 14	 = SCTIPU_ABORT 15	 = SCTIPU_SAMPLE0 16	 = SCTIPU_SAMPLE1 17	 = SCTIPU_SAMPLE2 18	 = SCTIPU_SAMPLE3 19	 = USB_FRAME_TOGGLE 20	 = DEBUG_HALTED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonesct2Inmux1{    ///<Pinmux register for SCT2 input 0
        using Addr = Register::Address<0x40014044,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT2 inputs 0 to 2.  0	 = P0_4 (external pin) 1	 = P0_27 (external pin) 2	 = P1_18 (external pin) 3	 = P1_19 (external pin) 4	 = SCT0_OUT4 5	= SCT0_OUT5 6	= SCT0_OUT7 7 = 	SCT0_OUT8 8	 = ADC0_THCMP_IRQ 9	= ADC1_THCMP_IRQ 10	 = COMP0_OUT (One output from each analog comparator) 11	 = COMP1_OUT 12	 = COMP2_OUT 13	 = COMP3_OUT 14	 = SCTIPU_ABORT 15	 = SCTIPU_SAMPLE0 16	 = SCTIPU_SAMPLE1 17	 = SCTIPU_SAMPLE2 18	 = SCTIPU_SAMPLE3 19	 = USB_FRAME_TOGGLE 20	 = DEBUG_HALTED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonesct2Inmux2{    ///<Pinmux register for SCT2 input 0
        using Addr = Register::Address<0x40014048,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT2 inputs 0 to 2.  0	 = P0_4 (external pin) 1	 = P0_27 (external pin) 2	 = P1_18 (external pin) 3	 = P1_19 (external pin) 4	 = SCT0_OUT4 5	= SCT0_OUT5 6	= SCT0_OUT7 7 = 	SCT0_OUT8 8	 = ADC0_THCMP_IRQ 9	= ADC1_THCMP_IRQ 10	 = COMP0_OUT (One output from each analog comparator) 11	 = COMP1_OUT 12	 = COMP2_OUT 13	 = COMP3_OUT 14	 = SCTIPU_ABORT 15	 = SCTIPU_SAMPLE0 16	 = SCTIPU_SAMPLE1 17	 = SCTIPU_SAMPLE2 18	 = SCTIPU_SAMPLE3 19	 = USB_FRAME_TOGGLE 20	 = DEBUG_HALTED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonesct3Inmux0{    ///<Pinmux register for SCT3 input 0
        using Addr = Register::Address<0x40014060,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT3 inputs 0 to 2.   0	 = PIO0_7 1	 = PIO1_11 2	 = PIO1_21 3	 = PIO1_22 4	 = SCT1_OUT4 5	 = SCT1_OUT5 6	 = SCT1_OUT7 7	 = SCT1_OUT8 8	 = ADC0_THCMP_IRQ 9	 = ADC1_THCMP_IRQ 10	 = COMP0_OUT 11	 = COMP1_OUT 12	 = COMP2_OUT 13	 = COMP3_OUT 14	 = SCTIPU_ABORT3 15	 = SCTIPU_SAMPLE0 16	 = SCTIPU_SAMPLE1 17	 = SCTIPU_SAMPLE2 18	 = SCTIPU_SAMPLE3 19	 = USB_FRAME_TOGGLE 20	 = DEBUG_HALTED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonesct3Inmux1{    ///<Pinmux register for SCT3 input 0
        using Addr = Register::Address<0x40014064,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT3 inputs 0 to 2.   0	 = PIO0_7 1	 = PIO1_11 2	 = PIO1_21 3	 = PIO1_22 4	 = SCT1_OUT4 5	 = SCT1_OUT5 6	 = SCT1_OUT7 7	 = SCT1_OUT8 8	 = ADC0_THCMP_IRQ 9	 = ADC1_THCMP_IRQ 10	 = COMP0_OUT 11	 = COMP1_OUT 12	 = COMP2_OUT 13	 = COMP3_OUT 14	 = SCTIPU_ABORT3 15	 = SCTIPU_SAMPLE0 16	 = SCTIPU_SAMPLE1 17	 = SCTIPU_SAMPLE2 18	 = SCTIPU_SAMPLE3 19	 = USB_FRAME_TOGGLE 20	 = DEBUG_HALTED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonesct3Inmux2{    ///<Pinmux register for SCT3 input 0
        using Addr = Register::Address<0x40014068,0xffffffe0,0,unsigned>;
        ///Input number (decimal value) to SCT3 inputs 0 to 2.   0	 = PIO0_7 1	 = PIO1_11 2	 = PIO1_21 3	 = PIO1_22 4	 = SCT1_OUT4 5	 = SCT1_OUT5 6	 = SCT1_OUT7 7	 = SCT1_OUT8 8	 = ADC0_THCMP_IRQ 9	 = ADC1_THCMP_IRQ 10	 = COMP0_OUT 11	 = COMP1_OUT 12	 = COMP2_OUT 13	 = COMP3_OUT 14	 = SCTIPU_ABORT3 15	 = SCTIPU_SAMPLE0 16	 = SCTIPU_SAMPLE1 17	 = SCTIPU_SAMPLE2 18	 = SCTIPU_SAMPLE3 19	 = USB_FRAME_TOGGLE 20	 = DEBUG_HALTED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace Nonepintsel0{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400140c0,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO1_31 correspond to numbers 0 to 63).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel1{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400140c4,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO1_31 correspond to numbers 0 to 63).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel2{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400140c8,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO1_31 correspond to numbers 0 to 63).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel3{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400140cc,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO1_31 correspond to numbers 0 to 63).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel4{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400140d0,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO1_31 correspond to numbers 0 to 63).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel5{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400140d4,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO1_31 correspond to numbers 0 to 63).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel6{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400140d8,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO1_31 correspond to numbers 0 to 63).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace Nonepintsel7{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400140dc,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to PIO1_31 correspond to numbers 0 to 63).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
    }
    namespace NonedmaItrigInmux0{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x400140e0,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux1{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x400140e4,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux2{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x400140e8,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux3{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x400140ec,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux4{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x400140f0,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux5{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x400140f4,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux6{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x400140f8,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux7{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x400140fc,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux8{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x40014100,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux9{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x40014104,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux10{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x40014108,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux11{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x4001410c,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux12{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x40014110,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux13{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x40014114,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux14{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x40014118,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux15{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x4001411c,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux16{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x40014120,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigInmux17{    ///<Trigger input for DMA channel 0 select register.
        using Addr = Register::Address<0x40014124,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n.   0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = ADC1_SEQA_IRQ 3 = 	ADC1_SEQB_IRQ 4	 = SCT0_DMA0 5	 = SCT0_DMA1 6	 = SCT1_DMA0 7 = 	SCT1_DMA1 8 = 	SCT2_DMA0 9 = 	SCT2_DMA1 10	 = SCT3_DMA0 11	 = SCT3_DMA1 12	 = COMP0_OUT (One output from each analog comparator) 13	 = COMP1_OUT 14	 = COMP2_OUT 15 = 	COMP3_OUT 16	 = SDMA_TRIGOUT_A 17	 = SDMA_TRIGOUT_B 18	 = SDMA_TRIGOUT_C 19 = 	SDMA_TRIGOUT_D
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaInmuxInmux0{    ///<DMA trigger input select register.
        using Addr = Register::Address<0x40014140,0xffffffe0,0,unsigned>;
        ///DMA trigger output number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
    }
    namespace NonedmaInmuxInmux1{    ///<DMA trigger input select register.
        using Addr = Register::Address<0x40014144,0xffffffe0,0,unsigned>;
        ///DMA trigger output number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
    }
    namespace NonedmaInmuxInmux2{    ///<DMA trigger input select register.
        using Addr = Register::Address<0x40014148,0xffffffe0,0,unsigned>;
        ///DMA trigger output number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
    }
    namespace NonedmaInmuxInmux3{    ///<DMA trigger input select register.
        using Addr = Register::Address<0x4001414c,0xffffffe0,0,unsigned>;
        ///DMA trigger output number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
    }
    namespace NonefreqmeasRef{    ///<Clock selection for frequency measurement function reference clock
        using Addr = Register::Address<0x40014160,0xfffffff0,0,unsigned>;
        ///Clock source number (decimal value) for frequency measure function target clock: 0	 = System oscilator (MAIN_OSC) 1 = 	IRC 2	 = WDOSC 3	 = 32KHZOSC 4	 = USB_FTOGGLE 5	 = PIO0_5 6	 = PIO0_19 7	 = PIO0_30 8 = PIO1_27
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clkin{}; 
    }
    namespace NonefreqmeasTarget{    ///<Clock selection for frequency measurement function target clock
        using Addr = Register::Address<0x40014164,0xfffffff0,0,unsigned>;
        ///Clock source number (decimal value) for frequency measure function target clock: 0	 = System oscillator (MAIN_OSC) 1 = 	IRC 2	 = WDOSC 3	 = 32KHZOSC 4	 = USB_FTOGGLE 5	 = PIO0_5 6	 = PIO0_19 7	 = PIO0_30 8 = PIO1_27
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clkin{}; 
    }
}
