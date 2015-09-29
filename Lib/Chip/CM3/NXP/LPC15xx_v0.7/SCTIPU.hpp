#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// SCT Input Processing Unit (IPU) 
    namespace NonesampleCtrl{    ///<SCT IPU sample control register. Contains the input mux selects,  latch/sample-enable mux selects, and sample overrride bits for the  SAMPLE module.
        using Addr = Register::Address<0x400b8000,0xffff0000,0,unsigned>;
        ///Select SCT IPU input source for output channel 0.
        enum class in0selVal {
            sampeInA0Select=0x00000000,     ///<SAMPE_IN_A0. Select input SAMPLE_IN_A0.
            sampeInB0Select=0x00000001,     ///<SAMPE_IN_B0. Select input SAMPLE_IN_B0.
        };
        namespace in0selValC{
            constexpr MPL::Value<in0selVal,in0selVal::sampeInA0Select> sampeInA0Select{};
            constexpr MPL::Value<in0selVal,in0selVal::sampeInB0Select> sampeInB0Select{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,in0selVal> in0sel{}; 
        ///Select SCT IPU input source for output channel 1.
        enum class in1selVal {
            sampeInA1Select=0x00000000,     ///<SAMPE_IN_A1. Select input SAMPLE_IN_A1.
            sampeInB1Select=0x00000001,     ///<SAMPE_IN_B1. Select input SAMPLE_IN_B1.
        };
        namespace in1selValC{
            constexpr MPL::Value<in1selVal,in1selVal::sampeInA1Select> sampeInA1Select{};
            constexpr MPL::Value<in1selVal,in1selVal::sampeInB1Select> sampeInB1Select{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,in1selVal> in1sel{}; 
        ///Select SCT IPU input source for output channel 2.
        enum class in2selVal {
            sampeInA2Select=0x00000000,     ///<SAMPE_IN_A2. Select input SAMPLE_IN_A2.
            sampeInB2Select=0x00000001,     ///<SAMPE_IN_B2. Select input SAMPLE_IN_B2.
        };
        namespace in2selValC{
            constexpr MPL::Value<in2selVal,in2selVal::sampeInA2Select> sampeInA2Select{};
            constexpr MPL::Value<in2selVal,in2selVal::sampeInB2Select> sampeInB2Select{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,in2selVal> in2sel{}; 
        ///Select. SCT IPU input source for output channel 3.
        enum class in3selVal {
            sampeInA3Select=0x00000000,     ///<SAMPE_IN_A3. Select input SAMPLE_IN_A3.
            sampeInB3Select=0x00000001,     ///<SAMPE_IN_B3. Select input SAMPLE_IN_B3.
        };
        namespace in3selValC{
            constexpr MPL::Value<in3selVal,in3selVal::sampeInA3Select> sampeInA3Select{};
            constexpr MPL::Value<in3selVal,in3selVal::sampeInB3Select> sampeInB3Select{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,in3selVal> in3sel{}; 
        ///Select the sample enable input as the latch/sample-enable control for the Sample_Output(0)  latch. Depending on the value of the corresponding LATCHn_EN bit, this latch is transparent when the LATCHn_EN bit is 1 or latched when the LATCHn_EN bit is 0.
        enum class sampleEn0selVal {
            selectsSampleEnabl=0x00000000,     ///<Selects Sample_Enable_A as the latch/sample-enable control for the Sample_Output(0)  latch.
            selectsSampleEnabl=0x00000001,     ///<Selects Sample_Enable_B as the latch/sample-enable control for the Sample_Output(0)  latch.
            selectsSampleEnabl=0x00000002,     ///<Selects Sample_Enable_C as the latch/sample-enable control for the Sample_Output(0)  latch.
            selectsSampleEnabl=0x00000003,     ///<Selects Sample_Enable_D as the latch/sample-enable control for the Sample_Output(0)  latch.
        };
        namespace sampleEn0selValC{
            constexpr MPL::Value<sampleEn0selVal,sampleEn0selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr MPL::Value<sampleEn0selVal,sampleEn0selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr MPL::Value<sampleEn0selVal,sampleEn0selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr MPL::Value<sampleEn0selVal,sampleEn0selVal::selectsSampleEnabl> selectsSampleEnabl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,sampleEn0selVal> sampleEn0sel{}; 
        ///Select the sample enable input as the latch/sample-enable control for the Sample_Output(1)  latch. Depending on the value of the corresponding LATCHn_EN bit, this latch is transparent when the LATCHn_EN bit is 1 or latched when the LATCHn_EN bit is 0.
        enum class sampleEn1selVal {
            selectsSampleEnabl=0x00000000,     ///<Selects Sample_Enable_A as the latch/sample-enable control for the Sample_Output(1)  latch.
            selectsSampleEnabl=0x00000001,     ///<Selects Sample_Enable_B as the latch/sample-enable control for the Sample_Output(1)  latch.
            selectsSampleEnabl=0x00000002,     ///<Selects Sample_Enable_C as the latch/sample-enable control for the Sample_Output(1)  latch.
            selectsSampleEnabl=0x00000003,     ///<Selects Sample_Enable_D as the latch/sample-enable control for the Sample_Output(1)  latch.
        };
        namespace sampleEn1selValC{
            constexpr MPL::Value<sampleEn1selVal,sampleEn1selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr MPL::Value<sampleEn1selVal,sampleEn1selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr MPL::Value<sampleEn1selVal,sampleEn1selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr MPL::Value<sampleEn1selVal,sampleEn1selVal::selectsSampleEnabl> selectsSampleEnabl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,sampleEn1selVal> sampleEn1sel{}; 
        ///Select the sample enable input as the latch/sample-enable control for the Sample_Output(2)  latch. Depending on the value of the corresponding LATCHn_EN bit, this latch is transparent when the LATCHn_EN bit is 1 or latched when the LATCHn_EN bit is 0.
        enum class sampleEn2selVal {
            selectsSampleEnabl=0x00000000,     ///<Selects Sample_Enable_A as the latch/sample-enable control for the Sample_Output(2)  latch.
            selectsSampleEnabl=0x00000001,     ///<Selects Sample_Enable_B as the latch/sample-enable control for the Sample_Output(2)  latch.
            selectsSampleEnabl=0x00000002,     ///<Selects Sample_Enable_C as the latch/sample-enable control for the Sample_Output(2)  latch.
            selectsSampleEnabl=0x00000003,     ///<Selects Sample_Enable_D as the latch/sample-enable control for the Sample_Output(2)  latch.
        };
        namespace sampleEn2selValC{
            constexpr MPL::Value<sampleEn2selVal,sampleEn2selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr MPL::Value<sampleEn2selVal,sampleEn2selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr MPL::Value<sampleEn2selVal,sampleEn2selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr MPL::Value<sampleEn2selVal,sampleEn2selVal::selectsSampleEnabl> selectsSampleEnabl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,sampleEn2selVal> sampleEn2sel{}; 
        ///Select the sample enable input as the latch/sample-enable control for the Sample_Output(3)  latch. Depending on the value of the corresponding LATCHn_EN bit, this latch is transparent when the LATCHn_EN bit is 1 or latched when the LATCHn_EN bit is 0.
        enum class sampleEn3selVal {
            selectsSampleEnabl=0x00000000,     ///<Selects Sample_Enable_A as the latch/sample-enable control for the Sample_Output(3)  latch.
            selectsSampleEnabl=0x00000001,     ///<Selects Sample_Enable_B as the latch/sample-enable control for the Sample_Output(3)  latch.
            selectsSampleEnabl=0x00000002,     ///<Selects Sample_Enable_C as the latch/sample-enable control for the Sample_Output(3)  latch.
            selectsSampleEnabl=0x00000003,     ///<Selects Sample_Enable_D as the latch/sample-enable control for the Sample_Output(3)  latch.
        };
        namespace sampleEn3selValC{
            constexpr MPL::Value<sampleEn3selVal,sampleEn3selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr MPL::Value<sampleEn3selVal,sampleEn3selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr MPL::Value<sampleEn3selVal,sampleEn3selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr MPL::Value<sampleEn3selVal,sampleEn3selVal::selectsSampleEnabl> selectsSampleEnabl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,sampleEn3selVal> sampleEn3sel{}; 
        ///Enable latch for output channel 0.
        enum class latchen0Val {
            transparentModeSa=0x00000000,     ///<Transparent mode. Sample_Output(0) latch is forced into transparent mode. The selected Sample_Input is passed directly through to Sample_Output(0). The sample-enable control line selected  for this latch has no effect.
            latchedModeTheSa=0x00000001,     ///<Latched mode. The Sample_Output(0) latch is operational and will sample or latch based on the state of  the selected sample-enable control signal.
        };
        namespace latchen0ValC{
            constexpr MPL::Value<latchen0Val,latchen0Val::transparentModeSa> transparentModeSa{};
            constexpr MPL::Value<latchen0Val,latchen0Val::latchedModeTheSa> latchedModeTheSa{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,latchen0Val> latchen0{}; 
        ///Enable latch for output channel 1.
        enum class latchen1Val {
            transparentModeSa=0x00000000,     ///<Transparent mode. Sample_Output(1) latch is forced into transparent mode. The selected Sample_Input is passed directly through to Sample_Output(1). The sample-enable control line selected  for this latch has no effect.
            latchedModeTheSa=0x00000001,     ///<Latched mode. The Sample_Output(1) latch is operational and will sample or latch based on the state of  the selected sample-enable control signal.
        };
        namespace latchen1ValC{
            constexpr MPL::Value<latchen1Val,latchen1Val::transparentModeSa> transparentModeSa{};
            constexpr MPL::Value<latchen1Val,latchen1Val::latchedModeTheSa> latchedModeTheSa{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,latchen1Val> latchen1{}; 
        ///Enable latch for output channel 2.
        enum class latchen2Val {
            transparentModeSa=0x00000000,     ///<Transparent mode. Sample_Output(2) latch is forced into transparent mode. The selected Sample_Input is passed directly through to Sample_Output(2). The sample-enable control line selected  for this latch has no effect.
            latchedModeTheSa=0x00000001,     ///<Latched mode. The Sample_Output(2) latch is operational and will sample or latch based on the state of  the selected sample-enable control signal.
        };
        namespace latchen2ValC{
            constexpr MPL::Value<latchen2Val,latchen2Val::transparentModeSa> transparentModeSa{};
            constexpr MPL::Value<latchen2Val,latchen2Val::latchedModeTheSa> latchedModeTheSa{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,latchen2Val> latchen2{}; 
        ///Enable latch for output channel 3.
        enum class latchen3Val {
            transparentModeSa=0x00000000,     ///<Transparent mode. Sample_Output(3) latch is forced into transparent mode. The selected Sample_Input is passed directly through to Sample_Output(3). The sample-enable control line selected  for this latch has no effect.
            latchedModeTheSa=0x00000001,     ///<Latched mode. The Sample_Output(3) latch is operational and will sample or latch based on the state of  the selected sample-enable control signal.
        };
        namespace latchen3ValC{
            constexpr MPL::Value<latchen3Val,latchen3Val::transparentModeSa> transparentModeSa{};
            constexpr MPL::Value<latchen3Val,latchen3Val::latchedModeTheSa> latchedModeTheSa{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,latchen3Val> latchen3{}; 
    }
    namespace NoneabortEnable0{    ///<SCT IPU abort enable  register: Selects which input source  contributes to ORed Abort Output 0.
        using Addr = Register::Address<0x400b8020,0xfffffe00,0,unsigned>;
        ///Enable abort source SCT_ABORT0.
        enum class ena0Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena0ValC{
            constexpr MPL::Value<ena0Val,ena0Val::disabled> disabled{};
            constexpr MPL::Value<ena0Val,ena0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ena0Val> ena0{}; 
        ///Enable abort source SCT_ABORT1.
        enum class ena1Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena1ValC{
            constexpr MPL::Value<ena1Val,ena1Val::disabled> disabled{};
            constexpr MPL::Value<ena1Val,ena1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ena1Val> ena1{}; 
        ///Enable abort source ACMP0 output.
        enum class ena2Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena2ValC{
            constexpr MPL::Value<ena2Val,ena2Val::disabled> disabled{};
            constexpr MPL::Value<ena2Val,ena2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ena2Val> ena2{}; 
        ///Enable abort source ACMP1 output.
        enum class ena3Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena3ValC{
            constexpr MPL::Value<ena3Val,ena3Val::disabled> disabled{};
            constexpr MPL::Value<ena3Val,ena3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ena3Val> ena3{}; 
        ///Enable abort source ACMP2 output.
        enum class ena4Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena4ValC{
            constexpr MPL::Value<ena4Val,ena4Val::disabled> disabled{};
            constexpr MPL::Value<ena4Val,ena4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ena4Val> ena4{}; 
        ///Enable abort source ACMP3 output.
        enum class ena5Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena5ValC{
            constexpr MPL::Value<ena5Val,ena5Val::disabled> disabled{};
            constexpr MPL::Value<ena5Val,ena5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ena5Val> ena5{}; 
        ///Enable abort source SCT0_OUT9.
        enum class ena6Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena6ValC{
            constexpr MPL::Value<ena6Val,ena6Val::disabled> disabled{};
            constexpr MPL::Value<ena6Val,ena6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ena6Val> ena6{}; 
        ///Enable abort source ADC0_THCMP_IRQ.
        enum class ena7Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena7ValC{
            constexpr MPL::Value<ena7Val,ena7Val::disabled> disabled{};
            constexpr MPL::Value<ena7Val,ena7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ena7Val> ena7{}; 
        ///Enable abort source ADC1_THCMP_IRQ.
        enum class ena8Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena8ValC{
            constexpr MPL::Value<ena8Val,ena8Val::disabled> disabled{};
            constexpr MPL::Value<ena8Val,ena8Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ena8Val> ena8{}; 
    }
    namespace NoneabortEnable1{    ///<SCT IPU abort enable  register: Selects which input source  contributes to ORed Abort Output 0.
        using Addr = Register::Address<0x400b8040,0xfffffe00,0,unsigned>;
        ///Enable abort source SCT_ABORT0.
        enum class ena0Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena0ValC{
            constexpr MPL::Value<ena0Val,ena0Val::disabled> disabled{};
            constexpr MPL::Value<ena0Val,ena0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ena0Val> ena0{}; 
        ///Enable abort source SCT_ABORT1.
        enum class ena1Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena1ValC{
            constexpr MPL::Value<ena1Val,ena1Val::disabled> disabled{};
            constexpr MPL::Value<ena1Val,ena1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ena1Val> ena1{}; 
        ///Enable abort source ACMP0 output.
        enum class ena2Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena2ValC{
            constexpr MPL::Value<ena2Val,ena2Val::disabled> disabled{};
            constexpr MPL::Value<ena2Val,ena2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ena2Val> ena2{}; 
        ///Enable abort source ACMP1 output.
        enum class ena3Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena3ValC{
            constexpr MPL::Value<ena3Val,ena3Val::disabled> disabled{};
            constexpr MPL::Value<ena3Val,ena3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ena3Val> ena3{}; 
        ///Enable abort source ACMP2 output.
        enum class ena4Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena4ValC{
            constexpr MPL::Value<ena4Val,ena4Val::disabled> disabled{};
            constexpr MPL::Value<ena4Val,ena4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ena4Val> ena4{}; 
        ///Enable abort source ACMP3 output.
        enum class ena5Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena5ValC{
            constexpr MPL::Value<ena5Val,ena5Val::disabled> disabled{};
            constexpr MPL::Value<ena5Val,ena5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ena5Val> ena5{}; 
        ///Enable abort source SCT0_OUT9.
        enum class ena6Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena6ValC{
            constexpr MPL::Value<ena6Val,ena6Val::disabled> disabled{};
            constexpr MPL::Value<ena6Val,ena6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ena6Val> ena6{}; 
        ///Enable abort source ADC0_THCMP_IRQ.
        enum class ena7Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena7ValC{
            constexpr MPL::Value<ena7Val,ena7Val::disabled> disabled{};
            constexpr MPL::Value<ena7Val,ena7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ena7Val> ena7{}; 
        ///Enable abort source ADC1_THCMP_IRQ.
        enum class ena8Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena8ValC{
            constexpr MPL::Value<ena8Val,ena8Val::disabled> disabled{};
            constexpr MPL::Value<ena8Val,ena8Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ena8Val> ena8{}; 
    }
    namespace NoneabortEnable2{    ///<SCT IPU abort enable  register: Selects which input source  contributes to ORed Abort Output 0.
        using Addr = Register::Address<0x400b8060,0xfffffe00,0,unsigned>;
        ///Enable abort source SCT_ABORT0.
        enum class ena0Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena0ValC{
            constexpr MPL::Value<ena0Val,ena0Val::disabled> disabled{};
            constexpr MPL::Value<ena0Val,ena0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ena0Val> ena0{}; 
        ///Enable abort source SCT_ABORT1.
        enum class ena1Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena1ValC{
            constexpr MPL::Value<ena1Val,ena1Val::disabled> disabled{};
            constexpr MPL::Value<ena1Val,ena1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ena1Val> ena1{}; 
        ///Enable abort source ACMP0 output.
        enum class ena2Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena2ValC{
            constexpr MPL::Value<ena2Val,ena2Val::disabled> disabled{};
            constexpr MPL::Value<ena2Val,ena2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ena2Val> ena2{}; 
        ///Enable abort source ACMP1 output.
        enum class ena3Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena3ValC{
            constexpr MPL::Value<ena3Val,ena3Val::disabled> disabled{};
            constexpr MPL::Value<ena3Val,ena3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ena3Val> ena3{}; 
        ///Enable abort source ACMP2 output.
        enum class ena4Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena4ValC{
            constexpr MPL::Value<ena4Val,ena4Val::disabled> disabled{};
            constexpr MPL::Value<ena4Val,ena4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ena4Val> ena4{}; 
        ///Enable abort source ACMP3 output.
        enum class ena5Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena5ValC{
            constexpr MPL::Value<ena5Val,ena5Val::disabled> disabled{};
            constexpr MPL::Value<ena5Val,ena5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ena5Val> ena5{}; 
        ///Enable abort source SCT0_OUT9.
        enum class ena6Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena6ValC{
            constexpr MPL::Value<ena6Val,ena6Val::disabled> disabled{};
            constexpr MPL::Value<ena6Val,ena6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ena6Val> ena6{}; 
        ///Enable abort source ADC0_THCMP_IRQ.
        enum class ena7Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena7ValC{
            constexpr MPL::Value<ena7Val,ena7Val::disabled> disabled{};
            constexpr MPL::Value<ena7Val,ena7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ena7Val> ena7{}; 
        ///Enable abort source ADC1_THCMP_IRQ.
        enum class ena8Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena8ValC{
            constexpr MPL::Value<ena8Val,ena8Val::disabled> disabled{};
            constexpr MPL::Value<ena8Val,ena8Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ena8Val> ena8{}; 
    }
    namespace NoneabortEnable3{    ///<SCT IPU abort enable  register: Selects which input source  contributes to ORed Abort Output 0.
        using Addr = Register::Address<0x400b8080,0xfffffe00,0,unsigned>;
        ///Enable abort source SCT_ABORT0.
        enum class ena0Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena0ValC{
            constexpr MPL::Value<ena0Val,ena0Val::disabled> disabled{};
            constexpr MPL::Value<ena0Val,ena0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ena0Val> ena0{}; 
        ///Enable abort source SCT_ABORT1.
        enum class ena1Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena1ValC{
            constexpr MPL::Value<ena1Val,ena1Val::disabled> disabled{};
            constexpr MPL::Value<ena1Val,ena1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ena1Val> ena1{}; 
        ///Enable abort source ACMP0 output.
        enum class ena2Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena2ValC{
            constexpr MPL::Value<ena2Val,ena2Val::disabled> disabled{};
            constexpr MPL::Value<ena2Val,ena2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ena2Val> ena2{}; 
        ///Enable abort source ACMP1 output.
        enum class ena3Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena3ValC{
            constexpr MPL::Value<ena3Val,ena3Val::disabled> disabled{};
            constexpr MPL::Value<ena3Val,ena3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ena3Val> ena3{}; 
        ///Enable abort source ACMP2 output.
        enum class ena4Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena4ValC{
            constexpr MPL::Value<ena4Val,ena4Val::disabled> disabled{};
            constexpr MPL::Value<ena4Val,ena4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ena4Val> ena4{}; 
        ///Enable abort source ACMP3 output.
        enum class ena5Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena5ValC{
            constexpr MPL::Value<ena5Val,ena5Val::disabled> disabled{};
            constexpr MPL::Value<ena5Val,ena5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ena5Val> ena5{}; 
        ///Enable abort source SCT0_OUT9.
        enum class ena6Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena6ValC{
            constexpr MPL::Value<ena6Val,ena6Val::disabled> disabled{};
            constexpr MPL::Value<ena6Val,ena6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ena6Val> ena6{}; 
        ///Enable abort source ADC0_THCMP_IRQ.
        enum class ena7Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena7ValC{
            constexpr MPL::Value<ena7Val,ena7Val::disabled> disabled{};
            constexpr MPL::Value<ena7Val,ena7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ena7Val> ena7{}; 
        ///Enable abort source ADC1_THCMP_IRQ.
        enum class ena8Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena8ValC{
            constexpr MPL::Value<ena8Val,ena8Val::disabled> disabled{};
            constexpr MPL::Value<ena8Val,ena8Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ena8Val> ena8{}; 
    }
    namespace NoneabortSource0{    ///<SCT IPU abort source  register: Status register indicating which input source caused abort output 0.
        using Addr = Register::Address<0x400b8024,0xfffffe00,0,unsigned>;
        ///Source SCT_ABORT0 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class act0Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act0ValC{
            constexpr MPL::Value<act0Val,act0Val::notActivated> notActivated{};
            constexpr MPL::Value<act0Val,act0Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,act0Val> act0{}; 
        ///Source SCT_ABORT1 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class act1Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act1ValC{
            constexpr MPL::Value<act1Val,act1Val::notActivated> notActivated{};
            constexpr MPL::Value<act1Val,act1Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,act1Val> act1{}; 
        ///Source ACMP0 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act2Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act2ValC{
            constexpr MPL::Value<act2Val,act2Val::notActivated> notActivated{};
            constexpr MPL::Value<act2Val,act2Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,act2Val> act2{}; 
        ///Source ACMP1 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act3Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act3ValC{
            constexpr MPL::Value<act3Val,act3Val::notActivated> notActivated{};
            constexpr MPL::Value<act3Val,act3Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,act3Val> act3{}; 
        ///Source ACMP2 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act4Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act4ValC{
            constexpr MPL::Value<act4Val,act4Val::notActivated> notActivated{};
            constexpr MPL::Value<act4Val,act4Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,act4Val> act4{}; 
        ///Source ACMP3 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act5Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act5ValC{
            constexpr MPL::Value<act5Val,act5Val::notActivated> notActivated{};
            constexpr MPL::Value<act5Val,act5Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,act5Val> act5{}; 
        ///Source SCT0_OUT9 activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act6Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act6ValC{
            constexpr MPL::Value<act6Val,act6Val::notActivated> notActivated{};
            constexpr MPL::Value<act6Val,act6Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,act6Val> act6{}; 
        ///Source ADC0_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act7Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act7ValC{
            constexpr MPL::Value<act7Val,act7Val::notActivated> notActivated{};
            constexpr MPL::Value<act7Val,act7Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,act7Val> act7{}; 
        ///Source ADC1_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act8Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act8ValC{
            constexpr MPL::Value<act8Val,act8Val::notActivated> notActivated{};
            constexpr MPL::Value<act8Val,act8Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,act8Val> act8{}; 
    }
    namespace NoneabortSource1{    ///<SCT IPU abort source  register: Status register indicating which input source caused abort output 0.
        using Addr = Register::Address<0x400b8044,0xfffffe00,0,unsigned>;
        ///Source SCT_ABORT0 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class act0Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act0ValC{
            constexpr MPL::Value<act0Val,act0Val::notActivated> notActivated{};
            constexpr MPL::Value<act0Val,act0Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,act0Val> act0{}; 
        ///Source SCT_ABORT1 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class act1Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act1ValC{
            constexpr MPL::Value<act1Val,act1Val::notActivated> notActivated{};
            constexpr MPL::Value<act1Val,act1Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,act1Val> act1{}; 
        ///Source ACMP0 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act2Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act2ValC{
            constexpr MPL::Value<act2Val,act2Val::notActivated> notActivated{};
            constexpr MPL::Value<act2Val,act2Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,act2Val> act2{}; 
        ///Source ACMP1 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act3Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act3ValC{
            constexpr MPL::Value<act3Val,act3Val::notActivated> notActivated{};
            constexpr MPL::Value<act3Val,act3Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,act3Val> act3{}; 
        ///Source ACMP2 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act4Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act4ValC{
            constexpr MPL::Value<act4Val,act4Val::notActivated> notActivated{};
            constexpr MPL::Value<act4Val,act4Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,act4Val> act4{}; 
        ///Source ACMP3 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act5Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act5ValC{
            constexpr MPL::Value<act5Val,act5Val::notActivated> notActivated{};
            constexpr MPL::Value<act5Val,act5Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,act5Val> act5{}; 
        ///Source SCT0_OUT9 activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act6Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act6ValC{
            constexpr MPL::Value<act6Val,act6Val::notActivated> notActivated{};
            constexpr MPL::Value<act6Val,act6Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,act6Val> act6{}; 
        ///Source ADC0_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act7Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act7ValC{
            constexpr MPL::Value<act7Val,act7Val::notActivated> notActivated{};
            constexpr MPL::Value<act7Val,act7Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,act7Val> act7{}; 
        ///Source ADC1_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act8Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act8ValC{
            constexpr MPL::Value<act8Val,act8Val::notActivated> notActivated{};
            constexpr MPL::Value<act8Val,act8Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,act8Val> act8{}; 
    }
    namespace NoneabortSource2{    ///<SCT IPU abort source  register: Status register indicating which input source caused abort output 0.
        using Addr = Register::Address<0x400b8064,0xfffffe00,0,unsigned>;
        ///Source SCT_ABORT0 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class act0Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act0ValC{
            constexpr MPL::Value<act0Val,act0Val::notActivated> notActivated{};
            constexpr MPL::Value<act0Val,act0Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,act0Val> act0{}; 
        ///Source SCT_ABORT1 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class act1Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act1ValC{
            constexpr MPL::Value<act1Val,act1Val::notActivated> notActivated{};
            constexpr MPL::Value<act1Val,act1Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,act1Val> act1{}; 
        ///Source ACMP0 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act2Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act2ValC{
            constexpr MPL::Value<act2Val,act2Val::notActivated> notActivated{};
            constexpr MPL::Value<act2Val,act2Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,act2Val> act2{}; 
        ///Source ACMP1 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act3Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act3ValC{
            constexpr MPL::Value<act3Val,act3Val::notActivated> notActivated{};
            constexpr MPL::Value<act3Val,act3Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,act3Val> act3{}; 
        ///Source ACMP2 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act4Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act4ValC{
            constexpr MPL::Value<act4Val,act4Val::notActivated> notActivated{};
            constexpr MPL::Value<act4Val,act4Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,act4Val> act4{}; 
        ///Source ACMP3 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act5Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act5ValC{
            constexpr MPL::Value<act5Val,act5Val::notActivated> notActivated{};
            constexpr MPL::Value<act5Val,act5Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,act5Val> act5{}; 
        ///Source SCT0_OUT9 activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act6Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act6ValC{
            constexpr MPL::Value<act6Val,act6Val::notActivated> notActivated{};
            constexpr MPL::Value<act6Val,act6Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,act6Val> act6{}; 
        ///Source ADC0_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act7Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act7ValC{
            constexpr MPL::Value<act7Val,act7Val::notActivated> notActivated{};
            constexpr MPL::Value<act7Val,act7Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,act7Val> act7{}; 
        ///Source ADC1_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act8Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act8ValC{
            constexpr MPL::Value<act8Val,act8Val::notActivated> notActivated{};
            constexpr MPL::Value<act8Val,act8Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,act8Val> act8{}; 
    }
    namespace NoneabortSource3{    ///<SCT IPU abort source  register: Status register indicating which input source caused abort output 0.
        using Addr = Register::Address<0x400b8084,0xfffffe00,0,unsigned>;
        ///Source SCT_ABORT0 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class act0Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act0ValC{
            constexpr MPL::Value<act0Val,act0Val::notActivated> notActivated{};
            constexpr MPL::Value<act0Val,act0Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,act0Val> act0{}; 
        ///Source SCT_ABORT1 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class act1Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act1ValC{
            constexpr MPL::Value<act1Val,act1Val::notActivated> notActivated{};
            constexpr MPL::Value<act1Val,act1Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,act1Val> act1{}; 
        ///Source ACMP0 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act2Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act2ValC{
            constexpr MPL::Value<act2Val,act2Val::notActivated> notActivated{};
            constexpr MPL::Value<act2Val,act2Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,act2Val> act2{}; 
        ///Source ACMP1 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act3Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act3ValC{
            constexpr MPL::Value<act3Val,act3Val::notActivated> notActivated{};
            constexpr MPL::Value<act3Val,act3Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,act3Val> act3{}; 
        ///Source ACMP2 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act4Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act4ValC{
            constexpr MPL::Value<act4Val,act4Val::notActivated> notActivated{};
            constexpr MPL::Value<act4Val,act4Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,act4Val> act4{}; 
        ///Source ACMP3 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act5Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act5ValC{
            constexpr MPL::Value<act5Val,act5Val::notActivated> notActivated{};
            constexpr MPL::Value<act5Val,act5Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,act5Val> act5{}; 
        ///Source SCT0_OUT9 activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act6Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act6ValC{
            constexpr MPL::Value<act6Val,act6Val::notActivated> notActivated{};
            constexpr MPL::Value<act6Val,act6Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,act6Val> act6{}; 
        ///Source ADC0_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act7Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act7ValC{
            constexpr MPL::Value<act7Val,act7Val::notActivated> notActivated{};
            constexpr MPL::Value<act7Val,act7Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,act7Val> act7{}; 
        ///Source ADC1_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class act8Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        namespace act8ValC{
            constexpr MPL::Value<act8Val,act8Val::notActivated> notActivated{};
            constexpr MPL::Value<act8Val,act8Val::activated> activated{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,act8Val> act8{}; 
    }
}
