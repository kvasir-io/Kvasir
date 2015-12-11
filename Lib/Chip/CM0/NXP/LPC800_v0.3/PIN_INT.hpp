#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin interrupt and  pattern match engine
    namespace Noneisel{    ///<Pin Interrupt Mode register
        using Addr = Register::Address<0xa0004000,0xffffff00,0,unsigned>;
        ///Selects the interrupt mode for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Edge sensitive 1 = Level sensitive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pmode{}; 
    }
    namespace Noneienr{    ///<Pin interrupt level or rising edge interrupt enable register
        using Addr = Register::Address<0xa0004004,0xffffff00,0,unsigned>;
        ///Enables the rising edge or level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable rising edge or level interrupt. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> enrl{}; 
    }
    namespace Nonesienr{    ///<Pin interrupt level (rising edge) interrupt set register
        using Addr = Register::Address<0xa0004008,0xffffff00,0,unsigned>;
        ///Ones written to this address set bits in the IENR, thus enabling interrupts. Bit n sets bit n in the IENR register. 0 = No operation. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> setenrl{}; 
    }
    namespace Nonecienr{    ///<Pin interrupt level  or rising edge interrupt clear register
        using Addr = Register::Address<0xa000400c,0xffffff00,0,unsigned>;
        ///Ones written to this address clear bits in the IENR, thus disabling the interrupts. Bit n clears bit n in the IENR register. 0 = No operation. 1 = Disable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cenrl{}; 
    }
    namespace Noneienf{    ///<Pin interrupt active level or falling edge interrupt enable register
        using Addr = Register::Address<0xa0004010,0xffffff00,0,unsigned>;
        ///Enables the falling edge or configures the active level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable falling edge interrupt or set active interrupt level LOW. 1 = Enable falling edge interrupt enabled or set active interrupt level HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> enaf{}; 
    }
    namespace Nonesienf{    ///<Pin interrupt active level or falling edge interrupt set register
        using Addr = Register::Address<0xa0004014,0xffffff00,0,unsigned>;
        ///Ones written to this address set bits in the IENF, thus enabling interrupts. Bit n sets bit n in the IENF register. 0 = No operation. 1 = Select HIGH-active interrupt or enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> setenaf{}; 
    }
    namespace Nonecienf{    ///<Pin interrupt active level (falling edge) interrupt clear register
        using Addr = Register::Address<0xa0004018,0xffffff00,0,unsigned>;
        ///Ones written to this address clears bits in the IENF, thus disabling interrupts. Bit n clears bit n in the IENF register. 0 = No operation. 1 = LOW-active interrupt selected or falling edge interrupt disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cenaf{}; 
    }
    namespace Nonerise{    ///<Pin interrupt rising edge register
        using Addr = Register::Address<0xa000401c,0xffffff00,0,unsigned>;
        ///Rising edge detect. Bit n detects the rising edge of the pin selected in PINTSELn. Read 0: No rising edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a rising edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear rising edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdet{}; 
    }
    namespace Nonefall{    ///<Pin interrupt falling edge register
        using Addr = Register::Address<0xa0004020,0xffffff00,0,unsigned>;
        ///Falling edge detect. Bit n detects the falling edge of the pin selected in PINTSELn. Read 0: No falling edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a falling edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear falling edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fdet{}; 
    }
    namespace Noneist{    ///<Pin interrupt status register
        using Addr = Register::Address<0xa0004024,0xffffff00,0,unsigned>;
        ///Pin interrupt status. Bit n returns the status, clears the edge interrupt, or inverts the active level of the pin selected in PINTSELn. Read 0: interrupt is not being requested for this interrupt pin.  Write 0: no operation. Read 1: interrupt is being requested for this interrupt pin. Write 1 (edge-sensitive): clear rising- and falling-edge detection for this pin. Write 1 (level-sensitive): switch the active level for this pin (in the IENF register).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pstat{}; 
    }
    namespace Nonepmctrl{    ///<GPIO pattern match interrupt control register
        using Addr = Register::Address<0xa0004028,0x00fffffc,0,unsigned>;
        ///Specifies whether the 8 pin interrupts are controlled by the pin interrupt function or by the pattern match function.
        enum class SelpmatchVal {
            pinInterruptInter=0x00000000,     ///<Pin interrupt. Interrupts are driven in response to the standard pin interrupt function
            patternMatchInter=0x00000001,     ///<Pattern match. Interrupts are driven in response to pattern matches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SelpmatchVal> selPmatch{}; 
        namespace SelpmatchValC{
            constexpr Register::FieldValue<decltype(selPmatch)::Type,SelpmatchVal::pinInterruptInter> pinInterruptInter{};
            constexpr Register::FieldValue<decltype(selPmatch)::Type,SelpmatchVal::patternMatchInter> patternMatchInter{};
        }
        ///Enables the RxEv output to the ARM cpu and/or to a GPIO output when the specified boolean expression evaluates to true.
        enum class EnarxevVal {
            disabledRxevOutpu=0x00000000,     ///<Disabled. RxEv output to the cpu is disabled.
            enabledRxevOutput=0x00000001,     ///<Enabled. RxEv output to the cpu is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EnarxevVal> enaRxev{}; 
        namespace EnarxevValC{
            constexpr Register::FieldValue<decltype(enaRxev)::Type,EnarxevVal::disabledRxevOutpu> disabledRxevOutpu{};
            constexpr Register::FieldValue<decltype(enaRxev)::Type,EnarxevVal::enabledRxevOutput> enabledRxevOutput{};
        }
        ///This field displays the current state of pattern matches. A 1 in any bit of this field indicates that the corresponding product term is matched by the current state of the appropriate inputs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pmat{}; 
    }
    namespace Nonepmsrc{    ///<GPIO pattern match interrupt bit-slice source register
        using Addr = Register::Address<0xa000402c,0x000000ff,0,unsigned>;
        ///Selects the input source for bit slice 0
        enum class Src0Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 0.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 0.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 0.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 0.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 0.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 0.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 0.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Src0Val> src0{}; 
        namespace Src0ValC{
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src0)::Type,Src0Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 1
        enum class Src1Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 1.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 1.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 1.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 1.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 1.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 1.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 1.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,Src1Val> src1{}; 
        namespace Src1ValC{
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src1)::Type,Src1Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 2
        enum class Src2Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 2.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 2.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 2.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 2.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 2.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 2.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 2.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,Src2Val> src2{}; 
        namespace Src2ValC{
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src2)::Type,Src2Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 3
        enum class Src3Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 3.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 3.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 3.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 3.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 3.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 3.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 3.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,Src3Val> src3{}; 
        namespace Src3ValC{
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src3)::Type,Src3Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 4
        enum class Src4Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 4.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 4.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 4.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 4.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 4.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 4.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 4.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Src4Val> src4{}; 
        namespace Src4ValC{
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src4)::Type,Src4Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 5
        enum class Src5Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 5.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 5.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 5.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 5.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 5.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 5.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 5.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,Src5Val> src5{}; 
        namespace Src5ValC{
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src5)::Type,Src5Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 6
        enum class Src6Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 6.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 6.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 6.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 6.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 6.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 6.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 6.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,Src6Val> src6{}; 
        namespace Src6ValC{
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src6)::Type,Src6Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 7
        enum class Src7Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 7.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 7.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 7.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 7.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 7.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 7.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 7.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,Src7Val> src7{}; 
        namespace Src7ValC{
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src7)::Type,Src7Val::input7SelectsPin> input7SelectsPin{};
        }
    }
    namespace Nonepmcfg{    ///<GPIO pattern match interrupt bit slice configuration register
        using Addr = Register::Address<0xa0004030,0x00000080,0,unsigned>;
        ///A 1 in any bit of this field causes the corresponding bit slice to be the final component of a product term in the boolean expression.  This has two effects: 1. The interrupt request associated with this bit-slice will be asserted whenever a match to that product term is detected. 2. The next bit slice will start a new, independent product term in the boolean expression (i.e. an OR will be inserted in the boolean expression following the element controlled by this bit slice).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prodEndpts{}; 
        ///Specifies the match-contribution condition for bit slice 0.
        enum class Cfg0Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Cfg0Val> cfg0{}; 
        namespace Cfg0ValC{
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::constant1ThisBit> constant1ThisBit{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg0)::Type,Cfg0Val::eventMatchOccurs> eventMatchOccurs{};
        }
        ///Specifies the match-contribution condition for bit slice 1.
        enum class Cfg1Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,Cfg1Val> cfg1{}; 
        namespace Cfg1ValC{
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::constant1ThisBit> constant1ThisBit{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg1)::Type,Cfg1Val::eventMatchOccurs> eventMatchOccurs{};
        }
        ///Specifies the match-contribution condition for bit slice 2.
        enum class Cfg2Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,Cfg2Val> cfg2{}; 
        namespace Cfg2ValC{
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::constant1ThisBit> constant1ThisBit{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg2)::Type,Cfg2Val::eventMatchOccurs> eventMatchOccurs{};
        }
        ///Specifies the match-contribution condition for bit slice 3.
        enum class Cfg3Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,Cfg3Val> cfg3{}; 
        namespace Cfg3ValC{
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::constant1ThisBit> constant1ThisBit{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg3)::Type,Cfg3Val::eventMatchOccurs> eventMatchOccurs{};
        }
        ///Specifies the match-contribution condition for bit slice 4.
        enum class Cfg4Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Cfg4Val> cfg4{}; 
        namespace Cfg4ValC{
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::constant1ThisBit> constant1ThisBit{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg4)::Type,Cfg4Val::eventMatchOccurs> eventMatchOccurs{};
        }
        ///Specifies the match-contribution condition for bit slice 5.
        enum class Cfg5Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,Cfg5Val> cfg5{}; 
        namespace Cfg5ValC{
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::constant1ThisBit> constant1ThisBit{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg5)::Type,Cfg5Val::eventMatchOccurs> eventMatchOccurs{};
        }
        ///Specifies the match-contribution condition for bit slice 6.
        enum class Cfg6Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,Cfg6Val> cfg6{}; 
        namespace Cfg6ValC{
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::constant1ThisBit> constant1ThisBit{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg6)::Type,Cfg6Val::eventMatchOccurs> eventMatchOccurs{};
        }
        ///Specifies the match-contribution condition for bit slice 7.
        enum class Cfg7Val {
            constant1ThisBit=0x00000000,     ///<Constant 1. This bit slice always contributes to a product term match.
            risingEdgeMatchO=0x00000001,     ///<Rising edge. Match occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            fallingEdgeMatch=0x00000002,     ///<Falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            risingOrFallingEd=0x00000003,     ///<Rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices)
            eventMatchOccurs=0x00000007,     ///<Event. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,Cfg7Val> cfg7{}; 
        namespace Cfg7ValC{
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::constant1ThisBit> constant1ThisBit{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::risingEdgeMatchO> risingEdgeMatchO{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::fallingEdgeMatch> fallingEdgeMatch{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::risingOrFallingEd> risingOrFallingEd{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg7)::Type,Cfg7Val::eventMatchOccurs> eventMatchOccurs{};
        }
    }
}
