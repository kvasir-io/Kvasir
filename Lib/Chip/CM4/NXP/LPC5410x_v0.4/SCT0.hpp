#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//State Configurable Timer/PWM 0 
    namespace Noneconfig{    ///<SCT configuration register
        using Addr = Register::Address<0x1c018000,0xfff98000,0,unsigned>;
        ///SCT operation
        enum class UnifyVal {
            dualCounter=0x00000000,     ///<Dual counter. The SCT operates as two 16-bit
										counters named L and H.
            unifiedCounter=0x00000001,     ///<Unified counter. The SCT operates as a unified
										32-bit counter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UnifyVal> unify{}; 
        namespace UnifyValC{
            constexpr Register::FieldValue<decltype(unify)::Type,UnifyVal::dualCounter> dualCounter{};
            constexpr Register::FieldValue<decltype(unify)::Type,UnifyVal::unifiedCounter> unifiedCounter{};
        }
        ///SCT clock mode
        enum class ClkmodeVal {
            systemClock=0x00000000,     ///<System clock. The system clock clocks the SCT and
										prescalers.
            prescaledSystemClo=0x00000001,     ///<Prescaled system clock. The SCT clock is the system
										clock, but the prescalers are enabled to count only when
										sampling of the input selected by the CKSEL field finds the
										selected edge. The minimum pulse width on the clock input is
										1 bus clock period. This mode is the high-performance
										sampled-clock mode.
            sctInput=0x00000002,     ///<SCT input. The input selected by CKSEL clocks the
										SCT and prescalers. The input is synchronized to the system
										clock and possibly inverted. The minimum pulse width on the
										clock input is 1 bus clock period. This mode is the
										low-power sampled-clock mode.
            prescaledSctInput=0x00000003,     ///<Prescaled SCT input. The SCT and prescalers are
										clocked by the input edge selected by the CKSEL field. In
										this mode, most of the SCT is clocked by the (selected
										polarity of the) input. The outputs are switched
										synchronously to the input clock. The input clock rate must
										be at least half the system clock rate and can be the same
										or faster than the system clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClkmodeVal> clkmode{}; 
        namespace ClkmodeValC{
            constexpr Register::FieldValue<decltype(clkmode)::Type,ClkmodeVal::systemClock> systemClock{};
            constexpr Register::FieldValue<decltype(clkmode)::Type,ClkmodeVal::prescaledSystemClo> prescaledSystemClo{};
            constexpr Register::FieldValue<decltype(clkmode)::Type,ClkmodeVal::sctInput> sctInput{};
            constexpr Register::FieldValue<decltype(clkmode)::Type,ClkmodeVal::prescaledSctInput> prescaledSctInput{};
        }
        ///SCT clock select
        enum class CkselVal {
            input0RisingEdges=0x00000000,     ///<Input 0 rising edges.
            input0FallingEdge=0x00000001,     ///<Input 0 falling edges.
            input1RisingEdges=0x00000002,     ///<Input 1 rising edges.
            input1FallingEdge=0x00000003,     ///<Input 1 falling edges.
            input2RisingEdges=0x00000004,     ///<Input 2 rising edges.
            input2FallingEdge=0x00000005,     ///<Input 2 falling edges.
            input3RisingEdges=0x00000006,     ///<Input 3 rising edges.
            input3FallingEdge=0x00000007,     ///<Input 3 falling edges.
            input4RisingEdges=0x00000008,     ///<Input 4 rising edges.
            input4FallingEdge=0x00000009,     ///<Input 4 falling edges.
            input5RisingEdges=0x0000000a,     ///<Input 5 rising edges.
            input5FallingEdge=0x0000000b,     ///<Input 5 falling edges.
            input6RisingEdges=0x0000000c,     ///<Input 6 rising edges.
            input6FallingEdge=0x0000000d,     ///<Input 6 falling edges.
            input7RisingEdges=0x0000000e,     ///<Input 7 rising edges.
            input7FallingEdge=0x0000000f,     ///<Input 7 falling edges.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,CkselVal> cksel{}; 
        namespace CkselValC{
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input0RisingEdges> input0RisingEdges{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input0FallingEdge> input0FallingEdge{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input1RisingEdges> input1RisingEdges{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input1FallingEdge> input1FallingEdge{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input2RisingEdges> input2RisingEdges{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input2FallingEdge> input2FallingEdge{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input3RisingEdges> input3RisingEdges{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input3FallingEdge> input3FallingEdge{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input4RisingEdges> input4RisingEdges{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input4FallingEdge> input4FallingEdge{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input5RisingEdges> input5RisingEdges{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input5FallingEdge> input5FallingEdge{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input6RisingEdges> input6RisingEdges{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input6FallingEdge> input6FallingEdge{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input7RisingEdges> input7RisingEdges{};
            constexpr Register::FieldValue<decltype(cksel)::Type,CkselVal::input7FallingEdge> input7FallingEdge{};
        }
        ///A 1 in this bit prevents the lower match registers from
								being reloaded from their respective reload registers. Software can
								write to set or clear this bit at any time. This bit applies to both
								the higher and lower registers when the UNIFY bit is
								set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> noreloadL{}; 
        ///A 1 in this bit prevents the higher match registers from
								being reloaded from their respective reload registers. Software can
								write to set or clear this bit at any time. This bit is not used
								when the UNIFY bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> noreloadH{}; 
        ///Synchronization for input n (bit 9 = input 0, bit 10 =
								input 1,..., bit 14 = input 5). A 1 in one of these bits subjects
								the corresponding input to synchronization to the SCT clock, before
								it is used to create an event. If an input is synchronous to the SCT
								clock, keep its bit 0 for faster response. When the CLKMODE field is
								1x, the bit in this field, corresponding to the input selected by
								the CKSEL field, is not used.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,9),Register::ReadWriteAccess,unsigned> insync{}; 
        ///A one in this bit causes a match on match register 0 to be
								treated as a de-facto LIMIT condition without the need to define an
								associated event. As with any LIMIT event, this automatic limit
								causes the counter to be cleared to zero in uni-directional mode or
								to change the direction of count in bi-directional mode. Software
								can write to set or clear this bit at any time. This bit applies to
								both the higher and lower registers when the UNIFY bit is
								set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> autolimitL{}; 
        ///A one in this bit will cause a match on match register 0 to
								be treated as a de-facto LIMIT condition without the need to define
								an associated event. As with any LIMIT event, this automatic limit
								causes the counter to be cleared to zero in uni-directional mode or
								to change the direction of count in bi-directional mode. Software
								can write to set or clear this bit at any time. This bit is not used
								when the UNIFY bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> autolimitH{}; 
    }
    namespace Nonectrl{    ///<SCT control register
        using Addr = Register::Address<0x1c018004,0xe000e000,0,unsigned>;
        ///This bit is 1 when the L or unified counter is counting
								down. Hardware sets this bit when the counter limit is reached and
								BIDIR is 1. Hardware clears this bit when the counter reaches 0 or
								when the counter is counting down and a limit condition
								occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> downL{}; 
        ///When this bit is 1 and HALT is 0, the L or unified counter
								does not run but I/O events related to the counter can occur. If
								such an event matches the mask in the Start register, this bit is
								cleared and counting resumes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stopL{}; 
        ///When this bit is 1, the L or unified counter does not run
								and no events can occur. A reset sets this bit. When the HALT_L bit
								is one, the STOP_L bit is cleared. In order to remove the halt
								condition and keep the SCT in the stop condition (not running), the
								halt and stop condition can be changed with one single write to this
								register. Once set, only software can clear this bit to restore
								counter operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> haltL{}; 
        ///Writing a 1 to this bit clears the L or unified counter.
								This bit always reads as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrctrL{}; 
        ///L or unified counter direction select
        enum class BidirlVal {
            unidirectional=0x00000000,     ///<Unidirectional. The counter counts up to its limit
										condition, then is cleared to zero.
            bidirectional=0x00000001,     ///<Bidirectional. The counter counts up to its limit,
										then counts down to a limit condition or to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BidirlVal> bidirL{}; 
        namespace BidirlValC{
            constexpr Register::FieldValue<decltype(bidirL)::Type,BidirlVal::unidirectional> unidirectional{};
            constexpr Register::FieldValue<decltype(bidirL)::Type,BidirlVal::bidirectional> bidirectional{};
        }
        ///Specifies the factor by which the SCT clock is prescaled to
								produce the L or unified counter clock. The counter clock is clocked
								at the rate of the SCT clock divided by PRE_L+1. Clear the counter
								(by writing a 1 to the CLRCTR bit) whenever changing the PRE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,5),Register::ReadWriteAccess,unsigned> preL{}; 
        ///This bit is 1 when the H counter is counting down. Hardware
								sets this bit when the counter limit is reached and BIDIR is 1.
								Hardware clears this bit when the counter reaches 0 or when the
								counter is counting down and a limit condition occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> downH{}; 
        ///When this bit is 1 and HALT is 0, the H counter does not
								run but I/O events related to the counter can occur. If such an
								event matches the mask in the Start register, this bit is cleared
								and counting resumes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> stopH{}; 
        ///When this bit is 1, the H counter does not run and no
								events can occur. A reset sets this bit. When the HALT_H bit is one,
								the STOP_H bit is cleared. In order to remove the halt condition and
								keep the SCT in the stop condition (not running), the halt and stop
								condition can be changed with one single write to this register.
								Once set, this bit can only be cleared by software to restore
								counter operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> haltH{}; 
        ///Writing a 1 to this bit clears the H counter. This bit
								always reads as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrctrH{}; 
        ///Direction select
        enum class BidirhVal {
            unidirectional=0x00000000,     ///<Unidirectional. The H counter counts up to its
										limit condition, then is cleared to zero.
            bidirectional=0x00000001,     ///<Bidirectional. The H counter counts up to its
										limit, then counts down to a limit condition or to
										0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,BidirhVal> bidirH{}; 
        namespace BidirhValC{
            constexpr Register::FieldValue<decltype(bidirH)::Type,BidirhVal::unidirectional> unidirectional{};
            constexpr Register::FieldValue<decltype(bidirH)::Type,BidirhVal::bidirectional> bidirectional{};
        }
        ///Specifies the factor by which the SCT clock is prescaled to
								produce the H counter clock. The counter clock is clocked at the
								rate of the SCT clock divided by PRELH+1. Clear the counter (by
								writing a 1 to the CLRCTR bit) whenever changing the PRE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,21),Register::ReadWriteAccess,unsigned> preH{}; 
    }
    namespace Nonelimit{    ///<SCT limit register
        using Addr = Register::Address<0x1c018008,0x00000000,0,unsigned>;
        ///If bit n is one, event n is used as a counter limit event
								for the L or unified counter (event 0 = bit 0, event 1 = bit 1, etc.
								The number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> limmskL{}; 
        ///If bit n is one, event n is used as a counter limit event
								for the H counter (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> limmskH{}; 
    }
    namespace Nonehalt{    ///<SCT halt condition register
        using Addr = Register::Address<0x1c01800c,0x00000000,0,unsigned>;
        ///If bit n is one, event n sets the HALT_L bit in the CTRL
								register (event 0 = bit 0, event 1 = bit 1, etc. The number of bits
								= number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haltmskL{}; 
        ///If bit n is one, event n sets the HALT_H bit in the CTRL
								register (event 0 = bit 16, event 1 = bit 17, etc. The number of
								bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> haltmskH{}; 
    }
    namespace Nonestop{    ///<SCT stop condition register
        using Addr = Register::Address<0x1c018010,0x00000000,0,unsigned>;
        ///If bit n is one, event n sets the STOP_L bit in the CTRL
								register (event 0 = bit 0, event 1 = bit 1, etc. The number of bits
								= number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> stopmskL{}; 
        ///If bit n is one, event n sets the STOP_H bit in the CTRL
								register (event 0 = bit 16, event 1 = bit 17, etc. The number of
								bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> stopmskH{}; 
    }
    namespace Nonestart{    ///<SCT start condition register
        using Addr = Register::Address<0x1c018014,0x00000000,0,unsigned>;
        ///If bit n is one, event n clears the STOP_L bit in the CTRL
								register (event 0 = bit 0, event 1 = bit 1, etc. The number of bits
								= number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> startmskL{}; 
        ///If bit n is one, event n clears the STOP_H bit in the CTRL
								register (event 0 = bit 16, event 1 = bit 17, etc. The number of
								bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> startmskH{}; 
    }
    namespace Nonecount{    ///<SCT counter register
        using Addr = Register::Address<0x1c018040,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit L counter value.
								When UNIFY = 1, read or write the lower 16 bits of the 32-bit
								unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctrL{}; 
        ///When UNIFY = 0, read or write the 16-bit H counter value.
								When UNIFY = 1, read or write the upper 16 bits of the 32-bit
								unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctrH{}; 
    }
    namespace Nonestate{    ///<SCT state register
        using Addr = Register::Address<0x1c018044,0xffe0ffe0,0,unsigned>;
        ///State variable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> stateL{}; 
        ///State variable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> stateH{}; 
    }
    namespace Noneinput{    ///<SCT input register
        using Addr = Register::Address<0x1c018048,0xffc0ffc0,0,unsigned>;
        ///Input 0 state.Direct read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ain0{}; 
        ///Input 1 state. Direct read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ain1{}; 
        ///Input 2 state. Direct read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ain2{}; 
        ///Input 3 state. Direct read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ain3{}; 
        ///Input 4 state. Direct read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ain4{}; 
        ///Input 5 state. Direct read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ain5{}; 
        ///Input 0 state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sin0{}; 
        ///Input 1 state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sin1{}; 
        ///Input 2 state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sin2{}; 
        ///Input 3 state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sin3{}; 
        ///Input 4 state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sin4{}; 
        ///Input 5 state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sin5{}; 
    }
    namespace Noneregmode{    ///<SCT match/capture registers mode register
        using Addr = Register::Address<0x1c01804c,0x00000000,0,unsigned>;
        ///Each bit controls one pair of match/capture registers
								(register 0 = bit 0, register 1 = bit 1,..., etc. 0 = registers
								operate as match registers. 1 = registers operate as capture
								registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> regmodL{}; 
        ///Each bit controls one pair of match/capture registers
								(register 0 = bit 16, register 1 = bit 17, etc. 0 = registers
								operate as match registers. 1 = registers operate as capture
								registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> regmodH{}; 
    }
    namespace Noneoutput{    ///<SCT output register
        using Addr = Register::Address<0x1c018050,0xffffff00,0,unsigned>;
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0
								makes the corresponding output LOW (output 0 = bit 0, output 1 = bit
								1, etc.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> out{}; 
    }
    namespace Noneoutputdirctrl{    ///<SCT output counter direction control register
        using Addr = Register::Address<0x1c018054,0xffff0000,0,unsigned>;
        ///Set/clear operation on output 0. Value 0x3 is reserved. Do
								not program this value.
        enum class Setclr0Val {
            independent=0x00000000,     ///<Independent. Set and clear do not depend on any
										counter.
            lReversed=0x00000001,     ///<L-Reversed. Set and clear are reversed when counter
										L or the unified counter is counting down.
            hReversed=0x00000002,     ///<H-Reversed. Set and clear are reversed when counter
										H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Setclr0Val> setclr0{}; 
        namespace Setclr0ValC{
            constexpr Register::FieldValue<decltype(setclr0)::Type,Setclr0Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr0)::Type,Setclr0Val::lReversed> lReversed{};
            constexpr Register::FieldValue<decltype(setclr0)::Type,Setclr0Val::hReversed> hReversed{};
        }
        ///Set/clear operation on output 1. See description of bit
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> setclr1{}; 
        ///Set/clear operation on output 2. See description of bit
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> setclr2{}; 
        ///Set/clear operation on output 3. See description of bit
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> setclr3{}; 
        ///Set/clear operation on output 4. See description of bit
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> setclr4{}; 
        ///Set/clear operation on output 5. See description of bit
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> setclr5{}; 
        ///Set/clear operation on output 6. See description of bit
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> setclr6{}; 
        ///Set/clear operation on output 7. See description of bit
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> setclr7{}; 
    }
    namespace Noneres{    ///<SCT conflict resolution register
        using Addr = Register::Address<0x1c018058,0xffff0000,0,unsigned>;
        ///Effect of simultaneous set and clear on output
								0.
        enum class O0resVal {
            noChange=0x00000000,     ///<No change.
            set=0x00000001,     ///<Set. Set output (or clear based on the SETCLR0
										field).
            clear=0x00000002,     ///<Clear. Clear output (or set based on the SETCLR0
										field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,O0resVal> o0res{}; 
        namespace O0resValC{
            constexpr Register::FieldValue<decltype(o0res)::Type,O0resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o0res)::Type,O0resVal::set> set{};
            constexpr Register::FieldValue<decltype(o0res)::Type,O0resVal::clear> clear{};
            constexpr Register::FieldValue<decltype(o0res)::Type,O0resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output
								1.
        enum class O1resVal {
            noChange=0x00000000,     ///<No change.
            set=0x00000001,     ///<Set. Set output (or clear based on the SETCLR1
										field).
            clear=0x00000002,     ///<Clear. Clear output (or set based on the SETCLR1
										field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,O1resVal> o1res{}; 
        namespace O1resValC{
            constexpr Register::FieldValue<decltype(o1res)::Type,O1resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o1res)::Type,O1resVal::set> set{};
            constexpr Register::FieldValue<decltype(o1res)::Type,O1resVal::clear> clear{};
            constexpr Register::FieldValue<decltype(o1res)::Type,O1resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output
								2.
        enum class O2resVal {
            noChange=0x00000000,     ///<No change.
            set=0x00000001,     ///<Set. Set output (or clear based on the SETCLR2
										field).
            clear=0x00000002,     ///<Clear. Clear output (or set based on the SETCLR2
										field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,O2resVal> o2res{}; 
        namespace O2resValC{
            constexpr Register::FieldValue<decltype(o2res)::Type,O2resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o2res)::Type,O2resVal::set> set{};
            constexpr Register::FieldValue<decltype(o2res)::Type,O2resVal::clear> clear{};
            constexpr Register::FieldValue<decltype(o2res)::Type,O2resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output
								3.
        enum class O3resVal {
            noChange=0x00000000,     ///<No change.
            set=0x00000001,     ///<Set. Set output (or clear based on the SETCLR3
										field).
            clear=0x00000002,     ///<Clear. Clear output (or set based on the SETCLR3
										field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,O3resVal> o3res{}; 
        namespace O3resValC{
            constexpr Register::FieldValue<decltype(o3res)::Type,O3resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o3res)::Type,O3resVal::set> set{};
            constexpr Register::FieldValue<decltype(o3res)::Type,O3resVal::clear> clear{};
            constexpr Register::FieldValue<decltype(o3res)::Type,O3resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output
								4.
        enum class O4resVal {
            noChange=0x00000000,     ///<No change.
            set=0x00000001,     ///<Set. Set output (or clear based on the SETCLR4
										field).
            clear=0x00000002,     ///<Clear. Clear output (or set based on the SETCLR4
										field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,O4resVal> o4res{}; 
        namespace O4resValC{
            constexpr Register::FieldValue<decltype(o4res)::Type,O4resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o4res)::Type,O4resVal::set> set{};
            constexpr Register::FieldValue<decltype(o4res)::Type,O4resVal::clear> clear{};
            constexpr Register::FieldValue<decltype(o4res)::Type,O4resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output
								5.
        enum class O5resVal {
            noChange=0x00000000,     ///<No change.
            set=0x00000001,     ///<Set. Set output (or clear based on the SETCLR5
										field).
            clear=0x00000002,     ///<Clear. Clear output (or set based on the SETCLR5
										field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,O5resVal> o5res{}; 
        namespace O5resValC{
            constexpr Register::FieldValue<decltype(o5res)::Type,O5resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o5res)::Type,O5resVal::set> set{};
            constexpr Register::FieldValue<decltype(o5res)::Type,O5resVal::clear> clear{};
            constexpr Register::FieldValue<decltype(o5res)::Type,O5resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output
								6.
        enum class O6resVal {
            noChange=0x00000000,     ///<No change.
            set=0x00000001,     ///<Set. Set output (or clear based on the SETCLR6
										field).
            clear=0x00000002,     ///<Clear. Clear output (or set based on the SETCLR6
										field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,O6resVal> o6res{}; 
        namespace O6resValC{
            constexpr Register::FieldValue<decltype(o6res)::Type,O6resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o6res)::Type,O6resVal::set> set{};
            constexpr Register::FieldValue<decltype(o6res)::Type,O6resVal::clear> clear{};
            constexpr Register::FieldValue<decltype(o6res)::Type,O6resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output
								7.
        enum class O7resVal {
            noChange=0x00000000,     ///<No change.
            set=0x00000001,     ///<Set. Set output (or clear based on the SETCLR7
										field).
            clear=0x00000002,     ///<Clear. Clear output (or set based on the SETCLR7
										field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,O7resVal> o7res{}; 
        namespace O7resValC{
            constexpr Register::FieldValue<decltype(o7res)::Type,O7resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o7res)::Type,O7resVal::set> set{};
            constexpr Register::FieldValue<decltype(o7res)::Type,O7resVal::clear> clear{};
            constexpr Register::FieldValue<decltype(o7res)::Type,O7resVal::toggleOutput> toggleOutput{};
        }
    }
    namespace Nonedmareq0{    ///<SCT DMA request 0 register
        using Addr = Register::Address<0x1c01805c,0x3fff0000,0,unsigned>;
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit
								0, event 1 = bit 1, etc. The number of bits = number of events in
								this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dev0{}; 
        ///A 1 in this bit makes the SCT set DMA request 0 when it
								loads the Match_L/Unified registers from the Reload_L/Unified
								registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> drl0{}; 
        ///This read-only bit indicates the state of DMA Request
								0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> drq0{}; 
    }
    namespace Nonedmareq1{    ///<SCT DMA request 1 register
        using Addr = Register::Address<0x1c018060,0x3fff0000,0,unsigned>;
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit
								0, event 1 = bit 1, etc. The number of bits = number of events in
								this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dev1{}; 
        ///A 1 in this bit makes the SCT set DMA request 1 when it
								loads the Match L/Unified registers from the Reload L/Unified
								registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> drl1{}; 
        ///This read-only bit indicates the state of DMA Request
								1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> drq1{}; 
    }
    namespace Noneeven{    ///<SCT event enable register
        using Addr = Register::Address<0x1c0180f0,0xffff0000,0,unsigned>;
        ///The SCT requests interrupt when bit n of this register and
								the event flag register are both one (event 0 = bit 0, event 1 = bit
								1, etc.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ien{}; 
    }
    namespace Noneevflag{    ///<SCT event flag register
        using Addr = Register::Address<0x1c0180f4,0xffff0000,0,unsigned>;
        ///Bit n is one if event n has occurred since reset or a 1 was
								last written to this bit (event 0 = bit 0, event 1 = bit 1,etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> flag{}; 
    }
    namespace Noneconen{    ///<SCT conflict enable register
        using Addr = Register::Address<0x1c0180f8,0xffffff00,0,unsigned>;
        ///The SCT requests an interrupt when bit n of this register
								and the SCT conflict flag register are both one (output 0 = bit 0,
								output 1 = bit 1, etc.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ncen{}; 
    }
    namespace Noneconflag{    ///<SCT conflict flag register
        using Addr = Register::Address<0x1c0180fc,0x3fffff00,0,unsigned>;
        ///Bit n is one if a no-change conflict event occurred on
								output n since reset or a 1 was last written to this bit (output 0 =
								bit 0, output 1 = bit 1, etc.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ncflag{}; 
        ///The most recent bus error from this SCT involved writing
								CTR L/Unified, STATE L/Unified, MATCH L/Unified, or the Output
								register when the L/U counter was not halted. A word write to
								certain L and H registers can be half successful and half
								unsuccessful.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> buserrl{}; 
        ///The most recent bus error from this SCT involved writing
								CTR H, STATE H, MATCH H, or the Output register when the H counter
								was not halted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> buserrh{}; 
    }
    namespace Nonematch0{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c018100,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch1{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c018104,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch2{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c018108,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch3{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c01810c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch4{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c018110,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch5{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c018114,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch6{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c018118,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch7{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c01811c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch8{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c018120,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch9{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c018124,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch10{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c018128,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch11{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c01812c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch12{    ///<SCT match value register of match channels 0 to 12; REGMOD0 to
						REGMODE12 = 0
        using Addr = Register::Address<0x1c018130,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the L counter. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be
								compared to the H counter. When UNIFY = 1, read or write the upper
								16 bits of the 32-bit value to be compared to the unified
								counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonecap0{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c018100,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap1{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c018104,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap2{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c018108,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap3{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c01810c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap4{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c018110,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap5{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c018114,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap6{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c018118,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap7{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c01811c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap8{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c018120,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap9{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c018124,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap10{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c018128,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap11{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c01812c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap12{    ///<SCT capture register of capture channel 0 to 12; REGMOD0 to
						REGMODE12 = 1
        using Addr = Register::Address<0x1c018130,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the lower 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this
								register was last captured. When UNIFY = 1, read the upper 16 bits
								of the 32-bit value at which this register was last
								captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonematchrel0{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c018200,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel1{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c018204,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel2{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c018208,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel3{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c01820c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel4{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c018210,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel5{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c018214,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel6{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c018218,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel7{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c01821c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel8{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c018220,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel9{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c018224,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel10{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c018228,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel11{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c01822c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel12{    ///<SCT match reload value register 0 to 12; REGMOD0 = 0 to REGMODE12 =
						0
        using Addr = Register::Address<0x1c018230,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded
								into the MATCHn_L register. When UNIFY = 1, read or write the lower
								16 bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into
								the MATCHn_H register. When UNIFY = 1, read or write the upper 16
								bits of the 32-bit value to be loaded into the MATCHn
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonecapctrl0{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c018200,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl1{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c018204,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl2{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c018208,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl3{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c01820c,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl4{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c018210,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl5{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c018214,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl6{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c018218,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl7{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c01821c,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl8{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c018220,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl9{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c018224,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl10{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c018228,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl11{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c01822c,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl12{    ///<SCT capture control register 0 to 12; REGMOD0 = 1 to REGMODE12 =
						1
        using Addr = Register::Address<0x1c018230,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or
								the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1
								= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0)
								register to be loaded (event 0 = bit 16, event 1 = bit 17, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Noneev0State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018300,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev1State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018308,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev2State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018310,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev3State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018318,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev4State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018320,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev5State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018328,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev6State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018330,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev7State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018338,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev8State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018340,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev9State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018348,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev10State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018350,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev11State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018358,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev12State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c018360,0xffffe000,0,unsigned>;
        ///If bit m is one, event n happens in state m of the counter
								selected by the HEVENT bit (m = state number; state 0 = bit 0, state
								1= bit 1, etc. The number of bits = number of events in this
								SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Noneev0Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c018304,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneev1Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01830c,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneev2Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c018314,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneev3Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01831c,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneev4Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c018324,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneev5Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01832c,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneev6Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c018334,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneev7Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01833c,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneev8Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c018344,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneev9Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01834c,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneev10Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c018354,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneev11Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01835c,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneev12Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c018364,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if
								any). A match can occur only when the counter selected by the HEVENT
								bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY =
								1.
        enum class HeventVal {
            lCounter=0x00000000,     ///<L counter. Selects the L state and the L match
										register selected by MATCHSEL.
            hCounter=0x00000001,     ///<H counter. Selects the H state and the H match
										register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::lCounter> lCounter{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::hCounter> hCounter{};
        }
        ///Input/output select
        enum class OutselVal {
            input=0x00000000,     ///<Input. Selects the input selected by
										IOSEL.
            output=0x00000001,     ///<Output. Selects the output selected by
										IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::input> input{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::output> output{};
        }
        ///Selects the input or output signal associated with this
								event (if any). Do not select an input in this register, if CLKMODE
								is 1x. In this case the clock input is an implicit ingredient of
								every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of
								edges on outputs lags the conditions that switch the outputs by one
								SCT clock). In order to guarantee proper edge/state detection, an
								input must have a minimum pulse width of at least one SCT clock
								period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used
								and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified
										match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition
										only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and
										I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state
								selected by HEVENT when this event is the highest-numbered event
								occurring for that state.
        enum class StateldVal {
            add=0x00000000,     ///<Add. STATEV value is added into STATE (the
										carry-out is ignored).
            load=0x00000001,     ///<Load. STATEV value is loaded into
										STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::add> add{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::load> load{};
        }
        ///This value is loaded into or added to the state selected by
								HEVENT, depending on STATELD, when this event is the
								highest-numbered event occurring for that state. If STATELD and
								STATEV are both zero, there is no change to the STATE
								value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match
								component to the triggering of this event, then a match is
								considered to be active whenever the counter value is GREATER THAN
								OR EQUAL TO the value specified in the match register when counting
								up, LESS THEN OR EQUAL TO the match value when counting down. If
								this bit is zero, a match is only be active during the cycle when
								the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only
								applies when the counters are operating in BIDIR mode. If BIDIR = 0,
								the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered
										regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during
										up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during
										down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
    }
    namespace Noneout0Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c018500,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
    }
    namespace Noneout1Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c018508,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
    }
    namespace Noneout2Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c018510,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
    }
    namespace Noneout3Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c018518,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
    }
    namespace Noneout4Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c018520,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
    }
    namespace Noneout5Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c018528,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
    }
    namespace Noneout6Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c018530,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
    }
    namespace Noneout7Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c018538,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
    }
    namespace Noneout0Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c018504,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
    namespace Noneout1Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01850c,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
    namespace Noneout2Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c018514,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
    namespace Noneout3Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01851c,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
    namespace Noneout4Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c018524,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
    namespace Noneout5Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01852c,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
    namespace Noneout6Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c018534,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
    namespace Noneout7Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01853c,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it
								if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1, etc. The
								number of bits = number of events in this SCT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
}
