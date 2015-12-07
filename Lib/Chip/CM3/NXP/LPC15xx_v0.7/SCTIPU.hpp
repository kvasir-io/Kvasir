#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// SCT Input Processing Unit (IPU) 
    namespace NonesampleCtrl{    ///<SCT IPU sample control register. Contains the input mux selects,  latch/sample-enable mux selects, and sample overrride bits for the  SAMPLE module.
        using Addr = Register::Address<0x400b8000,0xffff0000,0,unsigned>;
        ///Select SCT IPU input source for output channel 0.
        enum class In0selVal {
            sampeInA0Select=0x00000000,     ///<SAMPE_IN_A0. Select input SAMPLE_IN_A0.
            sampeInB0Select=0x00000001,     ///<SAMPE_IN_B0. Select input SAMPLE_IN_B0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,In0selVal> in0sel{}; 
        namespace In0selValC{
            constexpr Register::FieldValue<decltype(in0sel),In0selVal::sampeInA0Select> sampeInA0Select{};
            constexpr Register::FieldValue<decltype(in0sel),In0selVal::sampeInB0Select> sampeInB0Select{};
        }
        ///Select SCT IPU input source for output channel 1.
        enum class In1selVal {
            sampeInA1Select=0x00000000,     ///<SAMPE_IN_A1. Select input SAMPLE_IN_A1.
            sampeInB1Select=0x00000001,     ///<SAMPE_IN_B1. Select input SAMPLE_IN_B1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,In1selVal> in1sel{}; 
        namespace In1selValC{
            constexpr Register::FieldValue<decltype(in1sel),In1selVal::sampeInA1Select> sampeInA1Select{};
            constexpr Register::FieldValue<decltype(in1sel),In1selVal::sampeInB1Select> sampeInB1Select{};
        }
        ///Select SCT IPU input source for output channel 2.
        enum class In2selVal {
            sampeInA2Select=0x00000000,     ///<SAMPE_IN_A2. Select input SAMPLE_IN_A2.
            sampeInB2Select=0x00000001,     ///<SAMPE_IN_B2. Select input SAMPLE_IN_B2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,In2selVal> in2sel{}; 
        namespace In2selValC{
            constexpr Register::FieldValue<decltype(in2sel),In2selVal::sampeInA2Select> sampeInA2Select{};
            constexpr Register::FieldValue<decltype(in2sel),In2selVal::sampeInB2Select> sampeInB2Select{};
        }
        ///Select. SCT IPU input source for output channel 3.
        enum class In3selVal {
            sampeInA3Select=0x00000000,     ///<SAMPE_IN_A3. Select input SAMPLE_IN_A3.
            sampeInB3Select=0x00000001,     ///<SAMPE_IN_B3. Select input SAMPLE_IN_B3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,In3selVal> in3sel{}; 
        namespace In3selValC{
            constexpr Register::FieldValue<decltype(in3sel),In3selVal::sampeInA3Select> sampeInA3Select{};
            constexpr Register::FieldValue<decltype(in3sel),In3selVal::sampeInB3Select> sampeInB3Select{};
        }
        ///Select the sample enable input as the latch/sample-enable control for the Sample_Output(0)  latch. Depending on the value of the corresponding LATCHn_EN bit, this latch is transparent when the LATCHn_EN bit is 1 or latched when the LATCHn_EN bit is 0.
        enum class Sampleen0selVal {
            selectsSampleEnabl=0x00000000,     ///<Selects Sample_Enable_A as the latch/sample-enable control for the Sample_Output(0)  latch.
            selectsSampleEnabl=0x00000001,     ///<Selects Sample_Enable_B as the latch/sample-enable control for the Sample_Output(0)  latch.
            selectsSampleEnabl=0x00000002,     ///<Selects Sample_Enable_C as the latch/sample-enable control for the Sample_Output(0)  latch.
            selectsSampleEnabl=0x00000003,     ///<Selects Sample_Enable_D as the latch/sample-enable control for the Sample_Output(0)  latch.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Sampleen0selVal> sampleEn0sel{}; 
        namespace Sampleen0selValC{
            constexpr Register::FieldValue<decltype(sampleEn0sel),Sampleen0selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr Register::FieldValue<decltype(sampleEn0sel),Sampleen0selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr Register::FieldValue<decltype(sampleEn0sel),Sampleen0selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr Register::FieldValue<decltype(sampleEn0sel),Sampleen0selVal::selectsSampleEnabl> selectsSampleEnabl{};
        }
        ///Select the sample enable input as the latch/sample-enable control for the Sample_Output(1)  latch. Depending on the value of the corresponding LATCHn_EN bit, this latch is transparent when the LATCHn_EN bit is 1 or latched when the LATCHn_EN bit is 0.
        enum class Sampleen1selVal {
            selectsSampleEnabl=0x00000000,     ///<Selects Sample_Enable_A as the latch/sample-enable control for the Sample_Output(1)  latch.
            selectsSampleEnabl=0x00000001,     ///<Selects Sample_Enable_B as the latch/sample-enable control for the Sample_Output(1)  latch.
            selectsSampleEnabl=0x00000002,     ///<Selects Sample_Enable_C as the latch/sample-enable control for the Sample_Output(1)  latch.
            selectsSampleEnabl=0x00000003,     ///<Selects Sample_Enable_D as the latch/sample-enable control for the Sample_Output(1)  latch.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Sampleen1selVal> sampleEn1sel{}; 
        namespace Sampleen1selValC{
            constexpr Register::FieldValue<decltype(sampleEn1sel),Sampleen1selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr Register::FieldValue<decltype(sampleEn1sel),Sampleen1selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr Register::FieldValue<decltype(sampleEn1sel),Sampleen1selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr Register::FieldValue<decltype(sampleEn1sel),Sampleen1selVal::selectsSampleEnabl> selectsSampleEnabl{};
        }
        ///Select the sample enable input as the latch/sample-enable control for the Sample_Output(2)  latch. Depending on the value of the corresponding LATCHn_EN bit, this latch is transparent when the LATCHn_EN bit is 1 or latched when the LATCHn_EN bit is 0.
        enum class Sampleen2selVal {
            selectsSampleEnabl=0x00000000,     ///<Selects Sample_Enable_A as the latch/sample-enable control for the Sample_Output(2)  latch.
            selectsSampleEnabl=0x00000001,     ///<Selects Sample_Enable_B as the latch/sample-enable control for the Sample_Output(2)  latch.
            selectsSampleEnabl=0x00000002,     ///<Selects Sample_Enable_C as the latch/sample-enable control for the Sample_Output(2)  latch.
            selectsSampleEnabl=0x00000003,     ///<Selects Sample_Enable_D as the latch/sample-enable control for the Sample_Output(2)  latch.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Sampleen2selVal> sampleEn2sel{}; 
        namespace Sampleen2selValC{
            constexpr Register::FieldValue<decltype(sampleEn2sel),Sampleen2selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr Register::FieldValue<decltype(sampleEn2sel),Sampleen2selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr Register::FieldValue<decltype(sampleEn2sel),Sampleen2selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr Register::FieldValue<decltype(sampleEn2sel),Sampleen2selVal::selectsSampleEnabl> selectsSampleEnabl{};
        }
        ///Select the sample enable input as the latch/sample-enable control for the Sample_Output(3)  latch. Depending on the value of the corresponding LATCHn_EN bit, this latch is transparent when the LATCHn_EN bit is 1 or latched when the LATCHn_EN bit is 0.
        enum class Sampleen3selVal {
            selectsSampleEnabl=0x00000000,     ///<Selects Sample_Enable_A as the latch/sample-enable control for the Sample_Output(3)  latch.
            selectsSampleEnabl=0x00000001,     ///<Selects Sample_Enable_B as the latch/sample-enable control for the Sample_Output(3)  latch.
            selectsSampleEnabl=0x00000002,     ///<Selects Sample_Enable_C as the latch/sample-enable control for the Sample_Output(3)  latch.
            selectsSampleEnabl=0x00000003,     ///<Selects Sample_Enable_D as the latch/sample-enable control for the Sample_Output(3)  latch.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Sampleen3selVal> sampleEn3sel{}; 
        namespace Sampleen3selValC{
            constexpr Register::FieldValue<decltype(sampleEn3sel),Sampleen3selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr Register::FieldValue<decltype(sampleEn3sel),Sampleen3selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr Register::FieldValue<decltype(sampleEn3sel),Sampleen3selVal::selectsSampleEnabl> selectsSampleEnabl{};
            constexpr Register::FieldValue<decltype(sampleEn3sel),Sampleen3selVal::selectsSampleEnabl> selectsSampleEnabl{};
        }
        ///Enable latch for output channel 0.
        enum class Latchen0Val {
            transparentModeSa=0x00000000,     ///<Transparent mode. Sample_Output(0) latch is forced into transparent mode. The selected Sample_Input is passed directly through to Sample_Output(0). The sample-enable control line selected  for this latch has no effect.
            latchedModeTheSa=0x00000001,     ///<Latched mode. The Sample_Output(0) latch is operational and will sample or latch based on the state of  the selected sample-enable control signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Latchen0Val> latchen0{}; 
        namespace Latchen0ValC{
            constexpr Register::FieldValue<decltype(latchen0),Latchen0Val::transparentModeSa> transparentModeSa{};
            constexpr Register::FieldValue<decltype(latchen0),Latchen0Val::latchedModeTheSa> latchedModeTheSa{};
        }
        ///Enable latch for output channel 1.
        enum class Latchen1Val {
            transparentModeSa=0x00000000,     ///<Transparent mode. Sample_Output(1) latch is forced into transparent mode. The selected Sample_Input is passed directly through to Sample_Output(1). The sample-enable control line selected  for this latch has no effect.
            latchedModeTheSa=0x00000001,     ///<Latched mode. The Sample_Output(1) latch is operational and will sample or latch based on the state of  the selected sample-enable control signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Latchen1Val> latchen1{}; 
        namespace Latchen1ValC{
            constexpr Register::FieldValue<decltype(latchen1),Latchen1Val::transparentModeSa> transparentModeSa{};
            constexpr Register::FieldValue<decltype(latchen1),Latchen1Val::latchedModeTheSa> latchedModeTheSa{};
        }
        ///Enable latch for output channel 2.
        enum class Latchen2Val {
            transparentModeSa=0x00000000,     ///<Transparent mode. Sample_Output(2) latch is forced into transparent mode. The selected Sample_Input is passed directly through to Sample_Output(2). The sample-enable control line selected  for this latch has no effect.
            latchedModeTheSa=0x00000001,     ///<Latched mode. The Sample_Output(2) latch is operational and will sample or latch based on the state of  the selected sample-enable control signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Latchen2Val> latchen2{}; 
        namespace Latchen2ValC{
            constexpr Register::FieldValue<decltype(latchen2),Latchen2Val::transparentModeSa> transparentModeSa{};
            constexpr Register::FieldValue<decltype(latchen2),Latchen2Val::latchedModeTheSa> latchedModeTheSa{};
        }
        ///Enable latch for output channel 3.
        enum class Latchen3Val {
            transparentModeSa=0x00000000,     ///<Transparent mode. Sample_Output(3) latch is forced into transparent mode. The selected Sample_Input is passed directly through to Sample_Output(3). The sample-enable control line selected  for this latch has no effect.
            latchedModeTheSa=0x00000001,     ///<Latched mode. The Sample_Output(3) latch is operational and will sample or latch based on the state of  the selected sample-enable control signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Latchen3Val> latchen3{}; 
        namespace Latchen3ValC{
            constexpr Register::FieldValue<decltype(latchen3),Latchen3Val::transparentModeSa> transparentModeSa{};
            constexpr Register::FieldValue<decltype(latchen3),Latchen3Val::latchedModeTheSa> latchedModeTheSa{};
        }
    }
    namespace NoneabortEnable0{    ///<SCT IPU abort enable  register: Selects which input source  contributes to ORed Abort Output 0.
        using Addr = Register::Address<0x400b8020,0xfffffe00,0,unsigned>;
        ///Enable abort source SCT_ABORT0.
        enum class Ena0Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ena0Val> ena0{}; 
        namespace Ena0ValC{
            constexpr Register::FieldValue<decltype(ena0),Ena0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena0),Ena0Val::enabled> enabled{};
        }
        ///Enable abort source SCT_ABORT1.
        enum class Ena1Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ena1Val> ena1{}; 
        namespace Ena1ValC{
            constexpr Register::FieldValue<decltype(ena1),Ena1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena1),Ena1Val::enabled> enabled{};
        }
        ///Enable abort source ACMP0 output.
        enum class Ena2Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ena2Val> ena2{}; 
        namespace Ena2ValC{
            constexpr Register::FieldValue<decltype(ena2),Ena2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena2),Ena2Val::enabled> enabled{};
        }
        ///Enable abort source ACMP1 output.
        enum class Ena3Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ena3Val> ena3{}; 
        namespace Ena3ValC{
            constexpr Register::FieldValue<decltype(ena3),Ena3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena3),Ena3Val::enabled> enabled{};
        }
        ///Enable abort source ACMP2 output.
        enum class Ena4Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ena4Val> ena4{}; 
        namespace Ena4ValC{
            constexpr Register::FieldValue<decltype(ena4),Ena4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena4),Ena4Val::enabled> enabled{};
        }
        ///Enable abort source ACMP3 output.
        enum class Ena5Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ena5Val> ena5{}; 
        namespace Ena5ValC{
            constexpr Register::FieldValue<decltype(ena5),Ena5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena5),Ena5Val::enabled> enabled{};
        }
        ///Enable abort source SCT0_OUT9.
        enum class Ena6Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ena6Val> ena6{}; 
        namespace Ena6ValC{
            constexpr Register::FieldValue<decltype(ena6),Ena6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena6),Ena6Val::enabled> enabled{};
        }
        ///Enable abort source ADC0_THCMP_IRQ.
        enum class Ena7Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ena7Val> ena7{}; 
        namespace Ena7ValC{
            constexpr Register::FieldValue<decltype(ena7),Ena7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena7),Ena7Val::enabled> enabled{};
        }
        ///Enable abort source ADC1_THCMP_IRQ.
        enum class Ena8Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ena8Val> ena8{}; 
        namespace Ena8ValC{
            constexpr Register::FieldValue<decltype(ena8),Ena8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena8),Ena8Val::enabled> enabled{};
        }
    }
    namespace NoneabortEnable1{    ///<SCT IPU abort enable  register: Selects which input source  contributes to ORed Abort Output 0.
        using Addr = Register::Address<0x400b8040,0xfffffe00,0,unsigned>;
        ///Enable abort source SCT_ABORT0.
        enum class Ena0Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ena0Val> ena0{}; 
        namespace Ena0ValC{
            constexpr Register::FieldValue<decltype(ena0),Ena0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena0),Ena0Val::enabled> enabled{};
        }
        ///Enable abort source SCT_ABORT1.
        enum class Ena1Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ena1Val> ena1{}; 
        namespace Ena1ValC{
            constexpr Register::FieldValue<decltype(ena1),Ena1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena1),Ena1Val::enabled> enabled{};
        }
        ///Enable abort source ACMP0 output.
        enum class Ena2Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ena2Val> ena2{}; 
        namespace Ena2ValC{
            constexpr Register::FieldValue<decltype(ena2),Ena2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena2),Ena2Val::enabled> enabled{};
        }
        ///Enable abort source ACMP1 output.
        enum class Ena3Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ena3Val> ena3{}; 
        namespace Ena3ValC{
            constexpr Register::FieldValue<decltype(ena3),Ena3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena3),Ena3Val::enabled> enabled{};
        }
        ///Enable abort source ACMP2 output.
        enum class Ena4Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ena4Val> ena4{}; 
        namespace Ena4ValC{
            constexpr Register::FieldValue<decltype(ena4),Ena4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena4),Ena4Val::enabled> enabled{};
        }
        ///Enable abort source ACMP3 output.
        enum class Ena5Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ena5Val> ena5{}; 
        namespace Ena5ValC{
            constexpr Register::FieldValue<decltype(ena5),Ena5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena5),Ena5Val::enabled> enabled{};
        }
        ///Enable abort source SCT0_OUT9.
        enum class Ena6Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ena6Val> ena6{}; 
        namespace Ena6ValC{
            constexpr Register::FieldValue<decltype(ena6),Ena6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena6),Ena6Val::enabled> enabled{};
        }
        ///Enable abort source ADC0_THCMP_IRQ.
        enum class Ena7Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ena7Val> ena7{}; 
        namespace Ena7ValC{
            constexpr Register::FieldValue<decltype(ena7),Ena7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena7),Ena7Val::enabled> enabled{};
        }
        ///Enable abort source ADC1_THCMP_IRQ.
        enum class Ena8Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ena8Val> ena8{}; 
        namespace Ena8ValC{
            constexpr Register::FieldValue<decltype(ena8),Ena8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena8),Ena8Val::enabled> enabled{};
        }
    }
    namespace NoneabortEnable2{    ///<SCT IPU abort enable  register: Selects which input source  contributes to ORed Abort Output 0.
        using Addr = Register::Address<0x400b8060,0xfffffe00,0,unsigned>;
        ///Enable abort source SCT_ABORT0.
        enum class Ena0Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ena0Val> ena0{}; 
        namespace Ena0ValC{
            constexpr Register::FieldValue<decltype(ena0),Ena0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena0),Ena0Val::enabled> enabled{};
        }
        ///Enable abort source SCT_ABORT1.
        enum class Ena1Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ena1Val> ena1{}; 
        namespace Ena1ValC{
            constexpr Register::FieldValue<decltype(ena1),Ena1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena1),Ena1Val::enabled> enabled{};
        }
        ///Enable abort source ACMP0 output.
        enum class Ena2Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ena2Val> ena2{}; 
        namespace Ena2ValC{
            constexpr Register::FieldValue<decltype(ena2),Ena2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena2),Ena2Val::enabled> enabled{};
        }
        ///Enable abort source ACMP1 output.
        enum class Ena3Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ena3Val> ena3{}; 
        namespace Ena3ValC{
            constexpr Register::FieldValue<decltype(ena3),Ena3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena3),Ena3Val::enabled> enabled{};
        }
        ///Enable abort source ACMP2 output.
        enum class Ena4Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ena4Val> ena4{}; 
        namespace Ena4ValC{
            constexpr Register::FieldValue<decltype(ena4),Ena4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena4),Ena4Val::enabled> enabled{};
        }
        ///Enable abort source ACMP3 output.
        enum class Ena5Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ena5Val> ena5{}; 
        namespace Ena5ValC{
            constexpr Register::FieldValue<decltype(ena5),Ena5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena5),Ena5Val::enabled> enabled{};
        }
        ///Enable abort source SCT0_OUT9.
        enum class Ena6Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ena6Val> ena6{}; 
        namespace Ena6ValC{
            constexpr Register::FieldValue<decltype(ena6),Ena6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena6),Ena6Val::enabled> enabled{};
        }
        ///Enable abort source ADC0_THCMP_IRQ.
        enum class Ena7Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ena7Val> ena7{}; 
        namespace Ena7ValC{
            constexpr Register::FieldValue<decltype(ena7),Ena7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena7),Ena7Val::enabled> enabled{};
        }
        ///Enable abort source ADC1_THCMP_IRQ.
        enum class Ena8Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ena8Val> ena8{}; 
        namespace Ena8ValC{
            constexpr Register::FieldValue<decltype(ena8),Ena8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena8),Ena8Val::enabled> enabled{};
        }
    }
    namespace NoneabortEnable3{    ///<SCT IPU abort enable  register: Selects which input source  contributes to ORed Abort Output 0.
        using Addr = Register::Address<0x400b8080,0xfffffe00,0,unsigned>;
        ///Enable abort source SCT_ABORT0.
        enum class Ena0Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ena0Val> ena0{}; 
        namespace Ena0ValC{
            constexpr Register::FieldValue<decltype(ena0),Ena0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena0),Ena0Val::enabled> enabled{};
        }
        ///Enable abort source SCT_ABORT1.
        enum class Ena1Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ena1Val> ena1{}; 
        namespace Ena1ValC{
            constexpr Register::FieldValue<decltype(ena1),Ena1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena1),Ena1Val::enabled> enabled{};
        }
        ///Enable abort source ACMP0 output.
        enum class Ena2Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ena2Val> ena2{}; 
        namespace Ena2ValC{
            constexpr Register::FieldValue<decltype(ena2),Ena2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena2),Ena2Val::enabled> enabled{};
        }
        ///Enable abort source ACMP1 output.
        enum class Ena3Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ena3Val> ena3{}; 
        namespace Ena3ValC{
            constexpr Register::FieldValue<decltype(ena3),Ena3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena3),Ena3Val::enabled> enabled{};
        }
        ///Enable abort source ACMP2 output.
        enum class Ena4Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ena4Val> ena4{}; 
        namespace Ena4ValC{
            constexpr Register::FieldValue<decltype(ena4),Ena4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena4),Ena4Val::enabled> enabled{};
        }
        ///Enable abort source ACMP3 output.
        enum class Ena5Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ena5Val> ena5{}; 
        namespace Ena5ValC{
            constexpr Register::FieldValue<decltype(ena5),Ena5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena5),Ena5Val::enabled> enabled{};
        }
        ///Enable abort source SCT0_OUT9.
        enum class Ena6Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ena6Val> ena6{}; 
        namespace Ena6ValC{
            constexpr Register::FieldValue<decltype(ena6),Ena6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena6),Ena6Val::enabled> enabled{};
        }
        ///Enable abort source ADC0_THCMP_IRQ.
        enum class Ena7Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ena7Val> ena7{}; 
        namespace Ena7ValC{
            constexpr Register::FieldValue<decltype(ena7),Ena7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena7),Ena7Val::enabled> enabled{};
        }
        ///Enable abort source ADC1_THCMP_IRQ.
        enum class Ena8Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ena8Val> ena8{}; 
        namespace Ena8ValC{
            constexpr Register::FieldValue<decltype(ena8),Ena8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena8),Ena8Val::enabled> enabled{};
        }
    }
    namespace NoneabortSource0{    ///<SCT IPU abort source  register: Status register indicating which input source caused abort output 0.
        using Addr = Register::Address<0x400b8024,0xfffffe00,0,unsigned>;
        ///Source SCT_ABORT0 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class Act0Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Act0Val> act0{}; 
        namespace Act0ValC{
            constexpr Register::FieldValue<decltype(act0),Act0Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act0),Act0Val::activated> activated{};
        }
        ///Source SCT_ABORT1 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class Act1Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Act1Val> act1{}; 
        namespace Act1ValC{
            constexpr Register::FieldValue<decltype(act1),Act1Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act1),Act1Val::activated> activated{};
        }
        ///Source ACMP0 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act2Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Act2Val> act2{}; 
        namespace Act2ValC{
            constexpr Register::FieldValue<decltype(act2),Act2Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act2),Act2Val::activated> activated{};
        }
        ///Source ACMP1 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act3Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Act3Val> act3{}; 
        namespace Act3ValC{
            constexpr Register::FieldValue<decltype(act3),Act3Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act3),Act3Val::activated> activated{};
        }
        ///Source ACMP2 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act4Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Act4Val> act4{}; 
        namespace Act4ValC{
            constexpr Register::FieldValue<decltype(act4),Act4Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act4),Act4Val::activated> activated{};
        }
        ///Source ACMP3 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act5Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Act5Val> act5{}; 
        namespace Act5ValC{
            constexpr Register::FieldValue<decltype(act5),Act5Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act5),Act5Val::activated> activated{};
        }
        ///Source SCT0_OUT9 activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act6Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Act6Val> act6{}; 
        namespace Act6ValC{
            constexpr Register::FieldValue<decltype(act6),Act6Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act6),Act6Val::activated> activated{};
        }
        ///Source ADC0_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act7Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Act7Val> act7{}; 
        namespace Act7ValC{
            constexpr Register::FieldValue<decltype(act7),Act7Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act7),Act7Val::activated> activated{};
        }
        ///Source ADC1_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act8Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Act8Val> act8{}; 
        namespace Act8ValC{
            constexpr Register::FieldValue<decltype(act8),Act8Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act8),Act8Val::activated> activated{};
        }
    }
    namespace NoneabortSource1{    ///<SCT IPU abort source  register: Status register indicating which input source caused abort output 0.
        using Addr = Register::Address<0x400b8044,0xfffffe00,0,unsigned>;
        ///Source SCT_ABORT0 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class Act0Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Act0Val> act0{}; 
        namespace Act0ValC{
            constexpr Register::FieldValue<decltype(act0),Act0Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act0),Act0Val::activated> activated{};
        }
        ///Source SCT_ABORT1 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class Act1Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Act1Val> act1{}; 
        namespace Act1ValC{
            constexpr Register::FieldValue<decltype(act1),Act1Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act1),Act1Val::activated> activated{};
        }
        ///Source ACMP0 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act2Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Act2Val> act2{}; 
        namespace Act2ValC{
            constexpr Register::FieldValue<decltype(act2),Act2Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act2),Act2Val::activated> activated{};
        }
        ///Source ACMP1 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act3Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Act3Val> act3{}; 
        namespace Act3ValC{
            constexpr Register::FieldValue<decltype(act3),Act3Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act3),Act3Val::activated> activated{};
        }
        ///Source ACMP2 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act4Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Act4Val> act4{}; 
        namespace Act4ValC{
            constexpr Register::FieldValue<decltype(act4),Act4Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act4),Act4Val::activated> activated{};
        }
        ///Source ACMP3 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act5Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Act5Val> act5{}; 
        namespace Act5ValC{
            constexpr Register::FieldValue<decltype(act5),Act5Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act5),Act5Val::activated> activated{};
        }
        ///Source SCT0_OUT9 activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act6Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Act6Val> act6{}; 
        namespace Act6ValC{
            constexpr Register::FieldValue<decltype(act6),Act6Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act6),Act6Val::activated> activated{};
        }
        ///Source ADC0_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act7Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Act7Val> act7{}; 
        namespace Act7ValC{
            constexpr Register::FieldValue<decltype(act7),Act7Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act7),Act7Val::activated> activated{};
        }
        ///Source ADC1_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act8Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Act8Val> act8{}; 
        namespace Act8ValC{
            constexpr Register::FieldValue<decltype(act8),Act8Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act8),Act8Val::activated> activated{};
        }
    }
    namespace NoneabortSource2{    ///<SCT IPU abort source  register: Status register indicating which input source caused abort output 0.
        using Addr = Register::Address<0x400b8064,0xfffffe00,0,unsigned>;
        ///Source SCT_ABORT0 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class Act0Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Act0Val> act0{}; 
        namespace Act0ValC{
            constexpr Register::FieldValue<decltype(act0),Act0Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act0),Act0Val::activated> activated{};
        }
        ///Source SCT_ABORT1 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class Act1Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Act1Val> act1{}; 
        namespace Act1ValC{
            constexpr Register::FieldValue<decltype(act1),Act1Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act1),Act1Val::activated> activated{};
        }
        ///Source ACMP0 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act2Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Act2Val> act2{}; 
        namespace Act2ValC{
            constexpr Register::FieldValue<decltype(act2),Act2Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act2),Act2Val::activated> activated{};
        }
        ///Source ACMP1 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act3Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Act3Val> act3{}; 
        namespace Act3ValC{
            constexpr Register::FieldValue<decltype(act3),Act3Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act3),Act3Val::activated> activated{};
        }
        ///Source ACMP2 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act4Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Act4Val> act4{}; 
        namespace Act4ValC{
            constexpr Register::FieldValue<decltype(act4),Act4Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act4),Act4Val::activated> activated{};
        }
        ///Source ACMP3 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act5Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Act5Val> act5{}; 
        namespace Act5ValC{
            constexpr Register::FieldValue<decltype(act5),Act5Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act5),Act5Val::activated> activated{};
        }
        ///Source SCT0_OUT9 activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act6Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Act6Val> act6{}; 
        namespace Act6ValC{
            constexpr Register::FieldValue<decltype(act6),Act6Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act6),Act6Val::activated> activated{};
        }
        ///Source ADC0_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act7Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Act7Val> act7{}; 
        namespace Act7ValC{
            constexpr Register::FieldValue<decltype(act7),Act7Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act7),Act7Val::activated> activated{};
        }
        ///Source ADC1_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act8Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Act8Val> act8{}; 
        namespace Act8ValC{
            constexpr Register::FieldValue<decltype(act8),Act8Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act8),Act8Val::activated> activated{};
        }
    }
    namespace NoneabortSource3{    ///<SCT IPU abort source  register: Status register indicating which input source caused abort output 0.
        using Addr = Register::Address<0x400b8084,0xfffffe00,0,unsigned>;
        ///Source SCT_ABORT0 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class Act0Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Act0Val> act0{}; 
        namespace Act0ValC{
            constexpr Register::FieldValue<decltype(act0),Act0Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act0),Act0Val::activated> activated{};
        }
        ///Source SCT_ABORT1 activated. This bit is set by hardware when the source is actived. Write 0 to clear. This function can be assigned to any pin via the PINASSIGN10 register in the switch matrix.
        enum class Act1Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Act1Val> act1{}; 
        namespace Act1ValC{
            constexpr Register::FieldValue<decltype(act1),Act1Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act1),Act1Val::activated> activated{};
        }
        ///Source ACMP0 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act2Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Act2Val> act2{}; 
        namespace Act2ValC{
            constexpr Register::FieldValue<decltype(act2),Act2Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act2),Act2Val::activated> activated{};
        }
        ///Source ACMP1 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act3Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Act3Val> act3{}; 
        namespace Act3ValC{
            constexpr Register::FieldValue<decltype(act3),Act3Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act3),Act3Val::activated> activated{};
        }
        ///Source ACMP2 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act4Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Act4Val> act4{}; 
        namespace Act4ValC{
            constexpr Register::FieldValue<decltype(act4),Act4Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act4),Act4Val::activated> activated{};
        }
        ///Source ACMP3 output activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act5Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Act5Val> act5{}; 
        namespace Act5ValC{
            constexpr Register::FieldValue<decltype(act5),Act5Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act5),Act5Val::activated> activated{};
        }
        ///Source SCT0_OUT9 activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act6Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Act6Val> act6{}; 
        namespace Act6ValC{
            constexpr Register::FieldValue<decltype(act6),Act6Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act6),Act6Val::activated> activated{};
        }
        ///Source ADC0_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act7Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Act7Val> act7{}; 
        namespace Act7ValC{
            constexpr Register::FieldValue<decltype(act7),Act7Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act7),Act7Val::activated> activated{};
        }
        ///Source ADC1_THCMP_IRQ activated. This bit is set by hardware when the source is actived. Write 0 to clear.
        enum class Act8Val {
            notActivated=0x00000000,     ///<Not activated.
            activated=0x00000001,     ///<Activated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Act8Val> act8{}; 
        namespace Act8ValC{
            constexpr Register::FieldValue<decltype(act8),Act8Val::notActivated> notActivated{};
            constexpr Register::FieldValue<decltype(act8),Act8Val::activated> activated{};
        }
    }
}
