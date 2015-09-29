#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin interrupt and  pattern match engine
    namespace Noneisel{    ///<Pin Interrupt Mode register
        using Addr = Register::Address<0xa0004000,0xffffff00,0,unsigned>;
        ///Selects the interrupt mode for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Edge sensitive 1 = Level sensitive
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pmode{}; 
    }
    namespace Noneienr{    ///<Pin interrupt level or rising edge interrupt enable register
        using Addr = Register::Address<0xa0004004,0xffffff00,0,unsigned>;
        ///Enables the rising edge or level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable rising edge or level interrupt. 1 = Enable rising edge or level interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> enrl{}; 
    }
    namespace Nonesienr{    ///<Pin interrupt level (rising edge) interrupt set register
        using Addr = Register::Address<0xa0004008,0xffffff00,0,unsigned>;
        ///Ones written to this address set bits in the IENR, thus enabling interrupts. Bit n sets bit n in the IENR register. 0 = No operation. 1 = Enable rising edge or level interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> setenrl{}; 
    }
    namespace Nonecienr{    ///<Pin interrupt level  or rising edge interrupt clear register
        using Addr = Register::Address<0xa000400c,0xffffff00,0,unsigned>;
        ///Ones written to this address clear bits in the IENR, thus disabling the interrupts. Bit n clears bit n in the IENR register. 0 = No operation. 1 = Disable rising edge or level interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cenrl{}; 
    }
    namespace Noneienf{    ///<Pin interrupt active level or falling edge interrupt enable register
        using Addr = Register::Address<0xa0004010,0xffffff00,0,unsigned>;
        ///Enables the falling edge or configures the active level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable falling edge interrupt or set active interrupt level LOW. 1 = Enable falling edge interrupt enabled or set active interrupt level HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> enaf{}; 
    }
    namespace Nonesienf{    ///<Pin interrupt active level or falling edge interrupt set register
        using Addr = Register::Address<0xa0004014,0xffffff00,0,unsigned>;
        ///Ones written to this address set bits in the IENF, thus enabling interrupts. Bit n sets bit n in the IENF register. 0 = No operation. 1 = Select HIGH-active interrupt or enable falling edge interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> setenaf{}; 
    }
    namespace Nonecienf{    ///<Pin interrupt active level (falling edge) interrupt clear register
        using Addr = Register::Address<0xa0004018,0xffffff00,0,unsigned>;
        ///Ones written to this address clears bits in the IENF, thus disabling interrupts. Bit n clears bit n in the IENF register. 0 = No operation. 1 = LOW-active interrupt selected or falling edge interrupt disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cenaf{}; 
    }
    namespace Nonerise{    ///<Pin interrupt rising edge register
        using Addr = Register::Address<0xa000401c,0xffffff00,0,unsigned>;
        ///Rising edge detect. Bit n detects the rising edge of the pin selected in PINTSELn. Read 0: No rising edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a rising edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear rising edge detection for this pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdet{}; 
    }
    namespace Nonefall{    ///<Pin interrupt falling edge register
        using Addr = Register::Address<0xa0004020,0xffffff00,0,unsigned>;
        ///Falling edge detect. Bit n detects the falling edge of the pin selected in PINTSELn. Read 0: No falling edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a falling edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear falling edge detection for this pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fdet{}; 
    }
    namespace Noneist{    ///<Pin interrupt status register
        using Addr = Register::Address<0xa0004024,0xffffff00,0,unsigned>;
        ///Pin interrupt status. Bit n returns the status, clears the edge interrupt, or inverts the active level of the pin selected in PINTSELn. Read 0: interrupt is not being requested for this interrupt pin.  Write 0: no operation. Read 1: interrupt is being requested for this interrupt pin. Write 1 (edge-sensitive): clear rising- and falling-edge detection for this pin. Write 1 (level-sensitive): switch the active level for this pin (in the IENF register).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pstat{}; 
    }
    namespace Nonepmctrl{    ///<GPIO pattern match interrupt control register
        using Addr = Register::Address<0xa0004028,0x00fffffc,0,unsigned>;
        ///Specifies whether the 8 pin interrupts are controlled by the pin interrupt function or by the pattern match function.
        enum class selPmatchVal {
            pinInterruptInter=0x00000000,     ///<Pin interrupt. Interrupts are driven in response to the standard pin interrupt function
            patternMatchInter=0x00000001,     ///<Pattern match. Interrupts are driven in response to pattern matches.
        };
        namespace selPmatchValC{
            constexpr MPL::Value<selPmatchVal,selPmatchVal::pinInterruptInter> pinInterruptInter{};
            constexpr MPL::Value<selPmatchVal,selPmatchVal::patternMatchInter> patternMatchInter{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,selPmatchVal> selPmatch{}; 
        ///Enables the RxEv output to the ARM cpu and/or to a GPIO output when the specified boolean expression evaluates to true.
        enum class enaRxevVal {
            disabledRxevOutpu=0x00000000,     ///<Disabled. RxEv output to the cpu is disabled.
            enabledRxevOutput=0x00000001,     ///<Enabled. RxEv output to the cpu is enabled.
        };
        namespace enaRxevValC{
            constexpr MPL::Value<enaRxevVal,enaRxevVal::disabledRxevOutpu> disabledRxevOutpu{};
            constexpr MPL::Value<enaRxevVal,enaRxevVal::enabledRxevOutput> enabledRxevOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,enaRxevVal> enaRxev{}; 
        ///This field displays the current state of pattern matches. A 1 in any bit of this field indicates that the corresponding product term is matched by the current state of the appropriate inputs.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pmat{}; 
    }
    namespace Nonepmsrc{    ///<GPIO pattern match interrupt bit-slice source register
        using Addr = Register::Address<0xa000402c,0x000000ff,0,unsigned>;
        ///Selects the input source for bit slice 0
        enum class src0Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 0.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 0.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 0.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 0.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 0.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 0.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 0.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 0.
        };
        namespace src0ValC{
            constexpr MPL::Value<src0Val,src0Val::input0SelectsPin> input0SelectsPin{};
            constexpr MPL::Value<src0Val,src0Val::input1SelectsPin> input1SelectsPin{};
            constexpr MPL::Value<src0Val,src0Val::input2SelectsPin> input2SelectsPin{};
            constexpr MPL::Value<src0Val,src0Val::input3SelectsPin> input3SelectsPin{};
            constexpr MPL::Value<src0Val,src0Val::input4SelectsPin> input4SelectsPin{};
            constexpr MPL::Value<src0Val,src0Val::input5SelectsPin> input5SelectsPin{};
            constexpr MPL::Value<src0Val,src0Val::input6SelectsPin> input6SelectsPin{};
            constexpr MPL::Value<src0Val,src0Val::input7SelectsPin> input7SelectsPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,src0Val> src0{}; 
        ///Selects the input source for bit slice 1
        enum class src1Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 1.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 1.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 1.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 1.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 1.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 1.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 1.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 1.
        };
        namespace src1ValC{
            constexpr MPL::Value<src1Val,src1Val::input0SelectsPin> input0SelectsPin{};
            constexpr MPL::Value<src1Val,src1Val::input1SelectsPin> input1SelectsPin{};
            constexpr MPL::Value<src1Val,src1Val::input2SelectsPin> input2SelectsPin{};
            constexpr MPL::Value<src1Val,src1Val::input3SelectsPin> input3SelectsPin{};
            constexpr MPL::Value<src1Val,src1Val::input4SelectsPin> input4SelectsPin{};
            constexpr MPL::Value<src1Val,src1Val::input5SelectsPin> input5SelectsPin{};
            constexpr MPL::Value<src1Val,src1Val::input6SelectsPin> input6SelectsPin{};
            constexpr MPL::Value<src1Val,src1Val::input7SelectsPin> input7SelectsPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,src1Val> src1{}; 
        ///Selects the input source for bit slice 2
        enum class src2Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 2.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 2.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 2.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 2.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 2.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 2.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 2.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 2.
        };
        namespace src2ValC{
            constexpr MPL::Value<src2Val,src2Val::input0SelectsPin> input0SelectsPin{};
            constexpr MPL::Value<src2Val,src2Val::input1SelectsPin> input1SelectsPin{};
            constexpr MPL::Value<src2Val,src2Val::input2SelectsPin> input2SelectsPin{};
            constexpr MPL::Value<src2Val,src2Val::input3SelectsPin> input3SelectsPin{};
            constexpr MPL::Value<src2Val,src2Val::input4SelectsPin> input4SelectsPin{};
            constexpr MPL::Value<src2Val,src2Val::input5SelectsPin> input5SelectsPin{};
            constexpr MPL::Value<src2Val,src2Val::input6SelectsPin> input6SelectsPin{};
            constexpr MPL::Value<src2Val,src2Val::input7SelectsPin> input7SelectsPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,src2Val> src2{}; 
        ///Selects the input source for bit slice 3
        enum class src3Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 3.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 3.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 3.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 3.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 3.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 3.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 3.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 3.
        };
        namespace src3ValC{
            constexpr MPL::Value<src3Val,src3Val::input0SelectsPin> input0SelectsPin{};
            constexpr MPL::Value<src3Val,src3Val::input1SelectsPin> input1SelectsPin{};
            constexpr MPL::Value<src3Val,src3Val::input2SelectsPin> input2SelectsPin{};
            constexpr MPL::Value<src3Val,src3Val::input3SelectsPin> input3SelectsPin{};
            constexpr MPL::Value<src3Val,src3Val::input4SelectsPin> input4SelectsPin{};
            constexpr MPL::Value<src3Val,src3Val::input5SelectsPin> input5SelectsPin{};
            constexpr MPL::Value<src3Val,src3Val::input6SelectsPin> input6SelectsPin{};
            constexpr MPL::Value<src3Val,src3Val::input7SelectsPin> input7SelectsPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,src3Val> src3{}; 
        ///Selects the input source for bit slice 4
        enum class src4Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 4.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 4.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 4.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 4.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 4.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 4.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 4.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 4.
        };
        namespace src4ValC{
            constexpr MPL::Value<src4Val,src4Val::input0SelectsPin> input0SelectsPin{};
            constexpr MPL::Value<src4Val,src4Val::input1SelectsPin> input1SelectsPin{};
            constexpr MPL::Value<src4Val,src4Val::input2SelectsPin> input2SelectsPin{};
            constexpr MPL::Value<src4Val,src4Val::input3SelectsPin> input3SelectsPin{};
            constexpr MPL::Value<src4Val,src4Val::input4SelectsPin> input4SelectsPin{};
            constexpr MPL::Value<src4Val,src4Val::input5SelectsPin> input5SelectsPin{};
            constexpr MPL::Value<src4Val,src4Val::input6SelectsPin> input6SelectsPin{};
            constexpr MPL::Value<src4Val,src4Val::input7SelectsPin> input7SelectsPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,src4Val> src4{}; 
        ///Selects the input source for bit slice 5
        enum class src5Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 5.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 5.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 5.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 5.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 5.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 5.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 5.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 5.
        };
        namespace src5ValC{
            constexpr MPL::Value<src5Val,src5Val::input0SelectsPin> input0SelectsPin{};
            constexpr MPL::Value<src5Val,src5Val::input1SelectsPin> input1SelectsPin{};
            constexpr MPL::Value<src5Val,src5Val::input2SelectsPin> input2SelectsPin{};
            constexpr MPL::Value<src5Val,src5Val::input3SelectsPin> input3SelectsPin{};
            constexpr MPL::Value<src5Val,src5Val::input4SelectsPin> input4SelectsPin{};
            constexpr MPL::Value<src5Val,src5Val::input5SelectsPin> input5SelectsPin{};
            constexpr MPL::Value<src5Val,src5Val::input6SelectsPin> input6SelectsPin{};
            constexpr MPL::Value<src5Val,src5Val::input7SelectsPin> input7SelectsPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,src5Val> src5{}; 
        ///Selects the input source for bit slice 6
        enum class src6Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 6.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 6.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 6.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 6.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 6.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 6.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 6.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 6.
        };
        namespace src6ValC{
            constexpr MPL::Value<src6Val,src6Val::input0SelectsPin> input0SelectsPin{};
            constexpr MPL::Value<src6Val,src6Val::input1SelectsPin> input1SelectsPin{};
            constexpr MPL::Value<src6Val,src6Val::input2SelectsPin> input2SelectsPin{};
            constexpr MPL::Value<src6Val,src6Val::input3SelectsPin> input3SelectsPin{};
            constexpr MPL::Value<src6Val,src6Val::input4SelectsPin> input4SelectsPin{};
            constexpr MPL::Value<src6Val,src6Val::input5SelectsPin> input5SelectsPin{};
            constexpr MPL::Value<src6Val,src6Val::input6SelectsPin> input6SelectsPin{};
            constexpr MPL::Value<src6Val,src6Val::input7SelectsPin> input7SelectsPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,src6Val> src6{}; 
        ///Selects the input source for bit slice 7
        enum class src7Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 7.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 7.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 7.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 7.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 7.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 7.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 7.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 7.
        };
        namespace src7ValC{
            constexpr MPL::Value<src7Val,src7Val::input0SelectsPin> input0SelectsPin{};
            constexpr MPL::Value<src7Val,src7Val::input1SelectsPin> input1SelectsPin{};
            constexpr MPL::Value<src7Val,src7Val::input2SelectsPin> input2SelectsPin{};
            constexpr MPL::Value<src7Val,src7Val::input3SelectsPin> input3SelectsPin{};
            constexpr MPL::Value<src7Val,src7Val::input4SelectsPin> input4SelectsPin{};
            constexpr MPL::Value<src7Val,src7Val::input5SelectsPin> input5SelectsPin{};
            constexpr MPL::Value<src7Val,src7Val::input6SelectsPin> input6SelectsPin{};
            constexpr MPL::Value<src7Val,src7Val::input7SelectsPin> input7SelectsPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,src7Val> src7{}; 
    }
    namespace Nonepmcfg{    ///<GPIO pattern match interrupt bit slice configuration register
        using Addr = Register::Address<0xa0004030,0x00000080,0,unsigned>;
        ///A 1 in any bit of this field causes the corresponding bit slice to be the final component of a product term in the boolean expression.  This has two effects: 1. The interrupt request associated with this bit-slice will be asserted whenever a match to that product term is detected. 2. The next bit slice will start a new, independent product term in the boolean expression (i.e. an OR will be inserted in the boolean expression following the element controlled by this bit slice).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prodEndpts{}; 
        ///Specifies the match-contribution condition for bit slice 0.
        enum class cfg0Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        namespace cfg0ValC{
            constexpr MPL::Value<cfg0Val,cfg0Val::constant1ThisBit> constant1ThisBit{};
            constexpr MPL::Value<cfg0Val,cfg0Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr MPL::Value<cfg0Val,cfg0Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr MPL::Value<cfg0Val,cfg0Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr MPL::Value<cfg0Val,cfg0Val::highLevelMatchF> highLevelMatchF{};
            constexpr MPL::Value<cfg0Val,cfg0Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr MPL::Value<cfg0Val,cfg0Val::constant0ThisBit> constant0ThisBit{};
            constexpr MPL::Value<cfg0Val,cfg0Val::eventMatchOccurs> eventMatchOccurs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,cfg0Val> cfg0{}; 
        ///Specifies the match-contribution condition for bit slice 1.
        enum class cfg1Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        namespace cfg1ValC{
            constexpr MPL::Value<cfg1Val,cfg1Val::constant1ThisBit> constant1ThisBit{};
            constexpr MPL::Value<cfg1Val,cfg1Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr MPL::Value<cfg1Val,cfg1Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr MPL::Value<cfg1Val,cfg1Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr MPL::Value<cfg1Val,cfg1Val::highLevelMatchF> highLevelMatchF{};
            constexpr MPL::Value<cfg1Val,cfg1Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr MPL::Value<cfg1Val,cfg1Val::constant0ThisBit> constant0ThisBit{};
            constexpr MPL::Value<cfg1Val,cfg1Val::eventMatchOccurs> eventMatchOccurs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,cfg1Val> cfg1{}; 
        ///Specifies the match-contribution condition for bit slice 2.
        enum class cfg2Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        namespace cfg2ValC{
            constexpr MPL::Value<cfg2Val,cfg2Val::constant1ThisBit> constant1ThisBit{};
            constexpr MPL::Value<cfg2Val,cfg2Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr MPL::Value<cfg2Val,cfg2Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr MPL::Value<cfg2Val,cfg2Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr MPL::Value<cfg2Val,cfg2Val::highLevelMatchF> highLevelMatchF{};
            constexpr MPL::Value<cfg2Val,cfg2Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr MPL::Value<cfg2Val,cfg2Val::constant0ThisBit> constant0ThisBit{};
            constexpr MPL::Value<cfg2Val,cfg2Val::eventMatchOccurs> eventMatchOccurs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,cfg2Val> cfg2{}; 
        ///Specifies the match-contribution condition for bit slice 3.
        enum class cfg3Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        namespace cfg3ValC{
            constexpr MPL::Value<cfg3Val,cfg3Val::constant1ThisBit> constant1ThisBit{};
            constexpr MPL::Value<cfg3Val,cfg3Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr MPL::Value<cfg3Val,cfg3Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr MPL::Value<cfg3Val,cfg3Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr MPL::Value<cfg3Val,cfg3Val::highLevelMatchF> highLevelMatchF{};
            constexpr MPL::Value<cfg3Val,cfg3Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr MPL::Value<cfg3Val,cfg3Val::constant0ThisBit> constant0ThisBit{};
            constexpr MPL::Value<cfg3Val,cfg3Val::eventMatchOccurs> eventMatchOccurs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,cfg3Val> cfg3{}; 
        ///Specifies the match-contribution condition for bit slice 4.
        enum class cfg4Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        namespace cfg4ValC{
            constexpr MPL::Value<cfg4Val,cfg4Val::constant1ThisBit> constant1ThisBit{};
            constexpr MPL::Value<cfg4Val,cfg4Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr MPL::Value<cfg4Val,cfg4Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr MPL::Value<cfg4Val,cfg4Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr MPL::Value<cfg4Val,cfg4Val::highLevelMatchF> highLevelMatchF{};
            constexpr MPL::Value<cfg4Val,cfg4Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr MPL::Value<cfg4Val,cfg4Val::constant0ThisBit> constant0ThisBit{};
            constexpr MPL::Value<cfg4Val,cfg4Val::eventMatchOccurs> eventMatchOccurs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,cfg4Val> cfg4{}; 
        ///Specifies the match-contribution condition for bit slice 5.
        enum class cfg5Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        namespace cfg5ValC{
            constexpr MPL::Value<cfg5Val,cfg5Val::constant1ThisBit> constant1ThisBit{};
            constexpr MPL::Value<cfg5Val,cfg5Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr MPL::Value<cfg5Val,cfg5Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr MPL::Value<cfg5Val,cfg5Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr MPL::Value<cfg5Val,cfg5Val::highLevelMatchF> highLevelMatchF{};
            constexpr MPL::Value<cfg5Val,cfg5Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr MPL::Value<cfg5Val,cfg5Val::constant0ThisBit> constant0ThisBit{};
            constexpr MPL::Value<cfg5Val,cfg5Val::eventMatchOccurs> eventMatchOccurs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,cfg5Val> cfg5{}; 
        ///Specifies the match-contribution condition for bit slice 6.
        enum class cfg6Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        namespace cfg6ValC{
            constexpr MPL::Value<cfg6Val,cfg6Val::constant1ThisBit> constant1ThisBit{};
            constexpr MPL::Value<cfg6Val,cfg6Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr MPL::Value<cfg6Val,cfg6Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr MPL::Value<cfg6Val,cfg6Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr MPL::Value<cfg6Val,cfg6Val::highLevelMatchF> highLevelMatchF{};
            constexpr MPL::Value<cfg6Val,cfg6Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr MPL::Value<cfg6Val,cfg6Val::constant0ThisBit> constant0ThisBit{};
            constexpr MPL::Value<cfg6Val,cfg6Val::eventMatchOccurs> eventMatchOccurs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,cfg6Val> cfg6{}; 
        ///Specifies the match-contribution condition for bit slice 7.
        enum class cfg7Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        namespace cfg7ValC{
            constexpr MPL::Value<cfg7Val,cfg7Val::constant1ThisBit> constant1ThisBit{};
            constexpr MPL::Value<cfg7Val,cfg7Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr MPL::Value<cfg7Val,cfg7Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr MPL::Value<cfg7Val,cfg7Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr MPL::Value<cfg7Val,cfg7Val::highLevelMatchF> highLevelMatchF{};
            constexpr MPL::Value<cfg7Val,cfg7Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr MPL::Value<cfg7Val,cfg7Val::constant0ThisBit> constant0ThisBit{};
            constexpr MPL::Value<cfg7Val,cfg7Val::eventMatchOccurs> eventMatchOccurs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,cfg7Val> cfg7{}; 
    }
}
