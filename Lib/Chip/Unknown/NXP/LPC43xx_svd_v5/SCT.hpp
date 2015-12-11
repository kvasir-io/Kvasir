#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx State Configurable Timer (SCT) Modification date=1/18/2011 Major revision=0 Minor revision=7 
    namespace Noneconfig{    ///<SCT configuration register
        using Addr = Register::Address<0x40000000,0xfffe0000,0,unsigned>;
        ///SCT operation
        enum class UnifyVal {
            v16BitCounters=0x00000000,     ///<The SCT operates as two 16-bit counters named L and H.
            v32BitUnified=0x00000001,     ///<The SCT operates as a unified 32-bit counter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UnifyVal> unify{}; 
        namespace UnifyValC{
            constexpr Register::FieldValue<decltype(unify)::Type,UnifyVal::v16BitCounters> v16BitCounters{};
            constexpr Register::FieldValue<decltype(unify)::Type,UnifyVal::v32BitUnified> v32BitUnified{};
        }
        ///SCT clock mode
        enum class ClkmodeVal {
            busClock=0x00000000,     ///<The SCT and prescaler(s) are clocked by the bus clock.
            highPerformance=0x00000001,     ///<The SCT clock is the bus clock, but the prescaler(s) is (are) enabledto count only when sampling of the input selected by the CKSEfield finds the selected edge. The minimum pulse width on theclock input is 1 bus clock period. This is the highperformance sampled-clock mode.
            lowPower=0x00000002,     ///<The SCT and prescaler(s) are clocked by the input selected by CKSEL, synchronized to the bus clock and possibly inverted. The minimum pulse width on the clock input is 1 bus clock  period. This is the low-power sampled-clock mode.
            inputEdge=0x00000003,     ///<The SCT and prescaler(s) are clocked by the input edge selected by the CKSEL field. In this mode the following is true: Most of the SCT is clocked by the (selected polarity of the)  input. Outputs are switched synchronously to the input clock. The input clock rate must be at least half the bus clock rate and  can be faster than the bus clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClkmodeVal> clkmode{}; 
        namespace ClkmodeValC{
            constexpr Register::FieldValue<decltype(clkmode)::Type,ClkmodeVal::busClock> busClock{};
            constexpr Register::FieldValue<decltype(clkmode)::Type,ClkmodeVal::highPerformance> highPerformance{};
            constexpr Register::FieldValue<decltype(clkmode)::Type,ClkmodeVal::lowPower> lowPower{};
            constexpr Register::FieldValue<decltype(clkmode)::Type,ClkmodeVal::inputEdge> inputEdge{};
        }
        ///SCT clock select
        enum class ClkselVal {
            inp0Rising=0x00000000,     ///<Rising edges on input 0.
            inp0Falling=0x00000001,     ///<Falling edges on input 0.
            inp1Rising=0x00000002,     ///<Rising edges on input 1.
            inp1Falling=0x00000003,     ///<Falling edges on input 1.
            inp2Rising=0x00000004,     ///<Rising edges on input 2.
            inp2Falling=0x00000005,     ///<Falling edges on input 2.
            inp3Rising=0x00000006,     ///<Rising edges on input 3.
            inp3Falling=0x00000007,     ///<Falling edges on input 3.
            inp4Rising=0x00000008,     ///<Rising edges on input 4.
            inp4Falling=0x00000009,     ///<Falling edges on input 4.
            inp5Rising=0x0000000a,     ///<Rising edges on input 5.
            inp5Falling=0x0000000b,     ///<Falling edges on input 5.
            inp6Rising=0x0000000c,     ///<Rising edges on input 6.
            inp6Falling=0x0000000d,     ///<Falling edges on input 6.
            inp7Rising=0x0000000e,     ///<Rising edges on input 7.
            inp7Falling=0x0000000f,     ///<Falling edges on input 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,ClkselVal> clksel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp0Rising> inp0Rising{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp0Falling> inp0Falling{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp1Rising> inp1Rising{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp1Falling> inp1Falling{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp2Rising> inp2Rising{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp2Falling> inp2Falling{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp3Rising> inp3Rising{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp3Falling> inp3Falling{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp4Rising> inp4Rising{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp4Falling> inp4Falling{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp5Rising> inp5Rising{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp5Falling> inp5Falling{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp6Rising> inp6Rising{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp6Falling> inp6Falling{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp7Rising> inp7Rising{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::inp7Falling> inp7Falling{};
        }
        ///A 1 in this bit prevents the lower match registers from being  reloaded from their respective reload registers. Software can  write to set or clear this bit at any time. This bit applies to both the  higher and lower registers when the UNIFY bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> norelaodlNoreloadu{}; 
        ///A 1 in this bit prevents the higher match registers from being  reloaded from their respective reload registers. Software can  write to set or clear this bit at any time. This bit is not used when  the UNIFY bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> noreloadh{}; 
        ///Synchronization for input n (bit 9 = input 0, bit 10 = input 1,..., bit 16 = input 7). A 1 in one of these bits subjects the corresponding input to  synchronization to the SCT clock, before it is used to create an  event. If an input is synchronous to the SCT clock, keep its bit 0 for  faster response. When the CKMODE field is 1x, the bit in this field, corresponding  to the input selected by the CKSEL field, is not used.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,9),Register::ReadWriteAccess,unsigned> insyncn{}; 
    }
    namespace Nonectrl{    ///<SCT control register
        using Addr = Register::Address<0x40000004,0xe000e000,0,unsigned>;
        ///This bit is 1 when the L or unified counter is counting down. It is set by hardware  when the counter's limit is reached and BIDIR is 1. It is cleared by  hardware when the counter reaches 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> downL{}; 
        ///When this bit is 1 and HALT is 0, the L or unified counter does not run but I/O  events related to the counter can occur. If such an event matches  the mask in the Start register, this bit is cleared and counting  resumes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stopL{}; 
        ///When this bit is 1, the L or unified counter does not run and no events can occur.  This bit is set by reset.  Once set, this bit can only be cleared by software to restore counter operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> haltL{}; 
        ///Writing a 1 to this bit clears the L or unified counter. This bit always reads as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrctrL{}; 
        ///L or unified counter direction select
        enum class BidirlVal {
            clear=0x00000000,     ///<The counter counts up to its limit condition, then is cleared to zero.
            countdown=0x00000001,     ///<The counter counts up to its limit, then counts down to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BidirlVal> bidirL{}; 
        namespace BidirlValC{
            constexpr Register::FieldValue<decltype(bidirL)::Type,BidirlVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bidirL)::Type,BidirlVal::countdown> countdown{};
        }
        ///Specifies the factor by which the SCT clock is prescaled to produce the  L or unified counter clock. The counter clock will be clocked at the rate of the SCT  clock divided by PRE_L+1. Clear the counter (by writing a 1  to the CLRCTR bit) whenever changing the PRE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,5),Register::ReadWriteAccess,unsigned> preL{}; 
        ///This bit is 1 when the H counter is counting down. It is set by hardware  when the counter's limit is reached and BIDIR is 1. It is cleared by  hardware when the counter reaches 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> downH{}; 
        ///When this bit is 1 and HALT is 0, the H counter does not run but I/O  events related to the counter can occur. If such an event matches  the mask in the Start register, this bit is cleared and counting  resumes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> stopH{}; 
        ///When this bit is 1, the H counter does not run and no events can occur.  This bit is set by reset. Once set, this bit can only be cleared by software to restore counter operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> haltH{}; 
        ///Writing a 1 to this bit clears the H counter. This bit always reads as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrctrH{}; 
        ///Direction select
        enum class BidirhVal {
            clear=0x00000000,     ///<The H counter counts up to its limit condition, then is cleared to zero.
            countdown=0x00000001,     ///<The H counter counts up to its limit, then counts down to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,BidirhVal> bidirH{}; 
        namespace BidirhValC{
            constexpr Register::FieldValue<decltype(bidirH)::Type,BidirhVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bidirH)::Type,BidirhVal::countdown> countdown{};
        }
        ///Specifies the factor by which the SCT clock is prescaled to produce the  H counter clock. The counter clock will be clocked at the rate of the SCT  clock divided by PRELH+1. Clear the counter (by writing a 1  to the CLRCTR bit) whenever changing the PRE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,21),Register::ReadWriteAccess,unsigned> preH{}; 
    }
    namespace Nonelimit{    ///<SCT limit register
        using Addr = Register::Address<0x40000008,0x00000000,0,unsigned>;
        ///If bit n is one, event n is used as a counter limit for the L or unified counter (event 0 = bit 0, event 1 = bit 1, event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> limmskL{}; 
        ///If bit n is one, event n is used as a counter limit for the H counter (event 0 = bit 16, event 1 = bit 17, event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> limmskH{}; 
    }
    namespace Nonehalt{    ///<SCT halt condition register
        using Addr = Register::Address<0x4000000c,0x00000000,0,unsigned>;
        ///If bit n is one, event n sets the HALT_L bit in the SCTCTRL register (event 0 = bit 0, event 1 = bit 1, event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haltmskL{}; 
        ///If bit n is one, event n sets the HALT_H bit in the SCTCTRL register (event 0 = bit 16, event 1 = bit 17, event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> haltmskH{}; 
    }
    namespace Nonestop{    ///<SCT stop condition register
        using Addr = Register::Address<0x40000010,0x00000000,0,unsigned>;
        ///If bit n is one, event n sets the STOP_L bit in the SCTCTRL register (event 0 = bit 0, event 1 = bit 1, event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> stopmskL{}; 
        ///If bit n is one, event n sets the STOP_H bit in the SCTCTRL register (event 0 = bit 16, event 1 = bit 17, event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> stopmskH{}; 
    }
    namespace Nonestart{    ///<SCT start condition register
        using Addr = Register::Address<0x40000014,0x00000000,0,unsigned>;
        ///If bit n is one, event n clears the STOP_L bit in the SCTCTRL register (event 0 = bit 0, event 1 = bit 1, event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> startmskL{}; 
        ///If bit n is one, event n clears the STOP_H bit in the SCTCTRL register (event 0 = bit 16, event 1 = bit 17, event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> startmskH{}; 
    }
    namespace Nonecount{    ///<SCT counter register
        using Addr = Register::Address<0x40000040,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit L counter value. When UNIFY = 1, read or write the lower 16 bits of the 32-bit unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctrL{}; 
        ///When UNIFY = 0, read or write the 16-bit H counter value. When UNIFY = 1, read or write the upper 16 bits of the 32-bit unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctrH{}; 
    }
    namespace Nonestate{    ///<SCT state register
        using Addr = Register::Address<0x40000044,0xffe0ffe0,0,unsigned>;
        ///State variable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> stateL{}; 
        ///State variable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> stateH{}; 
    }
    namespace Noneinput{    ///<SCT input register
        using Addr = Register::Address<0x40000048,0xff00ff00,0,unsigned>;
        ///Real-time status of input 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ain0{}; 
        ///Real-time status of input 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ain1{}; 
        ///Real-time status of input 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ain2{}; 
        ///Real-time status of input 3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ain3{}; 
        ///Real-time status of input 4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ain4{}; 
        ///Real-time status of input 5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ain5{}; 
        ///Real-time status of input 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ain6{}; 
        ///Real-time status of input 7.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ain7{}; 
        ///Input 0 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sin0{}; 
        ///Input 1 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sin1{}; 
        ///Input 2 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sin2{}; 
        ///Input 3 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sin3{}; 
        ///Input 4 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sin4{}; 
        ///Input 5 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sin5{}; 
        ///Input 6 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sin6{}; 
        ///Input 7 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sin7{}; 
    }
    namespace Noneregmode{    ///<SCT match/capture registers mode register
        using Addr = Register::Address<0x4000004c,0x00000000,0,unsigned>;
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> regmodL0{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> regmodL1{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> regmodL2{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> regmodL3{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> regmodL4{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> regmodL5{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> regmodL6{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> regmodL7{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> regmodL8{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> regmodL9{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> regmodL10{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> regmodL11{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> regmodL12{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> regmodL13{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> regmodL14{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> regmodL15{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> regmodH16{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> regmodH17{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> regmodH18{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> regmodH19{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> regmodH20{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> regmodH21{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> regmodH22{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> regmodH23{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> regmodH24{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> regmodH25{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> regmodH26{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> regmodH27{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> regmodH28{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> regmodH29{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> regmodH30{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> regmodH31{}; 
    }
    namespace Noneoutput{    ///<SCT output register
        using Addr = Register::Address<0x40000050,0xffff0000,0,unsigned>;
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> out0{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> out1{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> out2{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> out3{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> out4{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> out5{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> out6{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> out7{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> out8{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> out9{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> out10{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> out11{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> out12{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> out13{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> out14{}; 
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> out15{}; 
    }
    namespace Noneoutputdirctrl{    ///<SCT output counter direction control register
        using Addr = Register::Address<0x40000054,0x00000000,0,unsigned>;
        ///Set/clear operation on output 0. Value 0x3 is reserved. Do not program this value.
        enum class Setclr0Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Setclr0Val> setclr0{}; 
        namespace Setclr0ValC{
            constexpr Register::FieldValue<decltype(setclr0)::Type,Setclr0Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr0)::Type,Setclr0Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr0)::Type,Setclr0Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 1. Value 0x3 is reserved. Do not program this value.
        enum class Setclr1Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Setclr1Val> setclr1{}; 
        namespace Setclr1ValC{
            constexpr Register::FieldValue<decltype(setclr1)::Type,Setclr1Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr1)::Type,Setclr1Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr1)::Type,Setclr1Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 2. Value 0x3 is reserved. Do not program this value.
        enum class Setclr2Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Setclr2Val> setclr2{}; 
        namespace Setclr2ValC{
            constexpr Register::FieldValue<decltype(setclr2)::Type,Setclr2Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr2)::Type,Setclr2Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr2)::Type,Setclr2Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 3. Value 0x3 is reserved. Do not program this value.
        enum class Setclr3Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Setclr3Val> setclr3{}; 
        namespace Setclr3ValC{
            constexpr Register::FieldValue<decltype(setclr3)::Type,Setclr3Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr3)::Type,Setclr3Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr3)::Type,Setclr3Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 4. Value 0x3 is reserved. Do not program this value.
        enum class Setclr4Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Setclr4Val> setclr4{}; 
        namespace Setclr4ValC{
            constexpr Register::FieldValue<decltype(setclr4)::Type,Setclr4Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr4)::Type,Setclr4Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr4)::Type,Setclr4Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 5. Value 0x3 is reserved. Do not program this value.
        enum class Setclr5Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Setclr5Val> setclr5{}; 
        namespace Setclr5ValC{
            constexpr Register::FieldValue<decltype(setclr5)::Type,Setclr5Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr5)::Type,Setclr5Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr5)::Type,Setclr5Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 6. Value 0x3 is reserved. Do not program this value.
        enum class Setclr6Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Setclr6Val> setclr6{}; 
        namespace Setclr6ValC{
            constexpr Register::FieldValue<decltype(setclr6)::Type,Setclr6Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr6)::Type,Setclr6Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr6)::Type,Setclr6Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 7. Value 0x3 is reserved. Do not program this value.
        enum class Setclr7Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Setclr7Val> setclr7{}; 
        namespace Setclr7ValC{
            constexpr Register::FieldValue<decltype(setclr7)::Type,Setclr7Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr7)::Type,Setclr7Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr7)::Type,Setclr7Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 8. Value 0x3 is reserved. Do not program this value.
        enum class Setclr8Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Setclr8Val> setclr8{}; 
        namespace Setclr8ValC{
            constexpr Register::FieldValue<decltype(setclr8)::Type,Setclr8Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr8)::Type,Setclr8Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr8)::Type,Setclr8Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 9. Value 0x3 is reserved. Do not program this value.
        enum class Setclr9Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Setclr9Val> setclr9{}; 
        namespace Setclr9ValC{
            constexpr Register::FieldValue<decltype(setclr9)::Type,Setclr9Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr9)::Type,Setclr9Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr9)::Type,Setclr9Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 5. Value 0x3 is reserved. Do not program this value.
        enum class Setclr10Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Setclr10Val> setclr10{}; 
        namespace Setclr10ValC{
            constexpr Register::FieldValue<decltype(setclr10)::Type,Setclr10Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr10)::Type,Setclr10Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr10)::Type,Setclr10Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 11. Value 0x3 is reserved. Do not program this value.
        enum class Setclr11Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,Setclr11Val> setclr11{}; 
        namespace Setclr11ValC{
            constexpr Register::FieldValue<decltype(setclr11)::Type,Setclr11Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr11)::Type,Setclr11Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr11)::Type,Setclr11Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 12. Value 0x3 is reserved. Do not program this value.
        enum class Setclr12Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Setclr12Val> setclr12{}; 
        namespace Setclr12ValC{
            constexpr Register::FieldValue<decltype(setclr12)::Type,Setclr12Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr12)::Type,Setclr12Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr12)::Type,Setclr12Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 13. Value 0x3 is reserved. Do not program this value.
        enum class Setclr13Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Setclr13Val> setclr13{}; 
        namespace Setclr13ValC{
            constexpr Register::FieldValue<decltype(setclr13)::Type,Setclr13Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr13)::Type,Setclr13Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr13)::Type,Setclr13Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 14. Value 0x3 is reserved. Do not program this value.
        enum class Setclr14Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,Setclr14Val> setclr14{}; 
        namespace Setclr14ValC{
            constexpr Register::FieldValue<decltype(setclr14)::Type,Setclr14Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr14)::Type,Setclr14Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr14)::Type,Setclr14Val::reverseH> reverseH{};
        }
        ///Set/clear operation on output 15. Value 0x3 is reserved. Do not program this value.
        enum class Setclr15Val {
            independent=0x00000000,     ///<Set and clear do not depend on any counter.
            reverseL=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            reverseH=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,Setclr15Val> setclr15{}; 
        namespace Setclr15ValC{
            constexpr Register::FieldValue<decltype(setclr15)::Type,Setclr15Val::independent> independent{};
            constexpr Register::FieldValue<decltype(setclr15)::Type,Setclr15Val::reverseL> reverseL{};
            constexpr Register::FieldValue<decltype(setclr15)::Type,Setclr15Val::reverseH> reverseH{};
        }
    }
    namespace Noneres{    ///<SCT conflict resolution register
        using Addr = Register::Address<0x40000058,0x00000000,0,unsigned>;
        ///Effect of simultaneous set and clear on output 0.
        enum class O0resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR0 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR0 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,O0resVal> o0res{}; 
        namespace O0resValC{
            constexpr Register::FieldValue<decltype(o0res)::Type,O0resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o0res)::Type,O0resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o0res)::Type,O0resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o0res)::Type,O0resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 1.
        enum class O1resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR1 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR1 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,O1resVal> o1res{}; 
        namespace O1resValC{
            constexpr Register::FieldValue<decltype(o1res)::Type,O1resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o1res)::Type,O1resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o1res)::Type,O1resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o1res)::Type,O1resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 2.
        enum class O2resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR2 field).
            clearOutputNOrS=0x00000002,     ///<Clear output n (or set based on the SETCLR2 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,O2resVal> o2res{}; 
        namespace O2resValC{
            constexpr Register::FieldValue<decltype(o2res)::Type,O2resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o2res)::Type,O2resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o2res)::Type,O2resVal::clearOutputNOrS> clearOutputNOrS{};
            constexpr Register::FieldValue<decltype(o2res)::Type,O2resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 3.
        enum class O3resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR3 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR3 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,O3resVal> o3res{}; 
        namespace O3resValC{
            constexpr Register::FieldValue<decltype(o3res)::Type,O3resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o3res)::Type,O3resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o3res)::Type,O3resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o3res)::Type,O3resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 4.
        enum class O4resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR4 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR4 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,O4resVal> o4res{}; 
        namespace O4resValC{
            constexpr Register::FieldValue<decltype(o4res)::Type,O4resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o4res)::Type,O4resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o4res)::Type,O4resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o4res)::Type,O4resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 5.
        enum class O5resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR5 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR5 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,O5resVal> o5res{}; 
        namespace O5resValC{
            constexpr Register::FieldValue<decltype(o5res)::Type,O5resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o5res)::Type,O5resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o5res)::Type,O5resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o5res)::Type,O5resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 6.
        enum class O6resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR6 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR6 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,O6resVal> o6res{}; 
        namespace O6resValC{
            constexpr Register::FieldValue<decltype(o6res)::Type,O6resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o6res)::Type,O6resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o6res)::Type,O6resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o6res)::Type,O6resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 7.
        enum class O7resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR7 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR7 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,O7resVal> o7res{}; 
        namespace O7resValC{
            constexpr Register::FieldValue<decltype(o7res)::Type,O7resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o7res)::Type,O7resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o7res)::Type,O7resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o7res)::Type,O7resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 8.
        enum class O8resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR8 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR8 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,O8resVal> o8res{}; 
        namespace O8resValC{
            constexpr Register::FieldValue<decltype(o8res)::Type,O8resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o8res)::Type,O8resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o8res)::Type,O8resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o8res)::Type,O8resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 9.
        enum class O9resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR9 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR9 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,O9resVal> o9res{}; 
        namespace O9resValC{
            constexpr Register::FieldValue<decltype(o9res)::Type,O9resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o9res)::Type,O9resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o9res)::Type,O9resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o9res)::Type,O9resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 10.
        enum class O10resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR10 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR10 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,O10resVal> o10res{}; 
        namespace O10resValC{
            constexpr Register::FieldValue<decltype(o10res)::Type,O10resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o10res)::Type,O10resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o10res)::Type,O10resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o10res)::Type,O10resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 11.
        enum class O11resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR11 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR11 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,O11resVal> o11res{}; 
        namespace O11resValC{
            constexpr Register::FieldValue<decltype(o11res)::Type,O11resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o11res)::Type,O11resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o11res)::Type,O11resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o11res)::Type,O11resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 12.
        enum class O12resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR12 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR12 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,O12resVal> o12res{}; 
        namespace O12resValC{
            constexpr Register::FieldValue<decltype(o12res)::Type,O12resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o12res)::Type,O12resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o12res)::Type,O12resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o12res)::Type,O12resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 13.
        enum class O13resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR13 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR13 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,O13resVal> o13res{}; 
        namespace O13resValC{
            constexpr Register::FieldValue<decltype(o13res)::Type,O13resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o13res)::Type,O13resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o13res)::Type,O13resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o13res)::Type,O13resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 14.
        enum class O14resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR14 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR14 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,O14resVal> o14res{}; 
        namespace O14resValC{
            constexpr Register::FieldValue<decltype(o14res)::Type,O14resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o14res)::Type,O14resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o14res)::Type,O14resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o14res)::Type,O14resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 15.
        enum class O15resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR15 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR15 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,O15resVal> o15res{}; 
        namespace O15resValC{
            constexpr Register::FieldValue<decltype(o15res)::Type,O15resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o15res)::Type,O15resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o15res)::Type,O15resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o15res)::Type,O15resVal::toggleOutput> toggleOutput{};
        }
    }
    namespace Nonedmareq0{    ///<SCT DMA request 0 register
        using Addr = Register::Address<0x4000005c,0x3fff0000,0,unsigned>;
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dev00{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dev01{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dev02{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dev03{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dev04{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dev05{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dev06{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dev07{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dev08{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dev09{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dev010{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dev011{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dev012{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dev013{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dev014{}; 
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dev015{}; 
        ///A 1 in this bit makes the SCT set DMA request 0 when it loads the  Match_L/Unified registers from the Reload_L/Unified registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> drl0{}; 
        ///This read-only bit indicates the state of DMA Request 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> drq0{}; 
    }
    namespace Nonedmareq1{    ///<SCT DMA request 1 register
        using Addr = Register::Address<0x40000060,0x3fff0000,0,unsigned>;
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dev10{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dev11{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dev12{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dev13{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dev14{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dev15{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dev16{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dev17{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dev18{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dev19{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dev110{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dev111{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dev112{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dev113{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dev114{}; 
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dev115{}; 
        ///A 1 in this bit makes the SCT set DMA request 1 when it loads the  Match L/Unified registers from the Reload L/Unified registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> drl1{}; 
        ///This read-only bit indicates the state of DMA Request 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> drq1{}; 
    }
    namespace Noneeven{    ///<SCT event enable register
        using Addr = Register::Address<0x400000f0,0xffff0000,0,unsigned>;
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ien0{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ien1{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ien2{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ien3{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ien4{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ien5{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ien6{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ien7{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ien8{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ien9{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ien10{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ien11{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ien12{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ien13{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ien14{}; 
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ien15{}; 
    }
    namespace Noneevflag{    ///<SCT event flag register
        using Addr = Register::Address<0x400000f4,0xffff0000,0,unsigned>;
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flag0{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flag1{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flag2{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> flag3{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flag4{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> flag5{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flag6{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flag7{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> flag8{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> flag9{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> flag10{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> flag11{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> flag12{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> flag13{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> flag14{}; 
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> flag15{}; 
    }
    namespace Noneconen{    ///<SCT conflict enable register
        using Addr = Register::Address<0x400000f8,0xffff0000,0,unsigned>;
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ncen0{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncen1{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ncen2{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ncen3{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ncen4{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ncen5{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ncen6{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ncen7{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ncen8{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ncen9{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ncen10{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ncen11{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ncen12{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ncen13{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ncen14{}; 
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ncen15{}; 
    }
    namespace Noneconflag{    ///<SCT conflict flag register
        using Addr = Register::Address<0x400000fc,0x3fff0000,0,unsigned>;
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ncflag0{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncflag1{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ncflag2{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ncflag3{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ncflag4{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ncflag5{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ncflag6{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ncflag7{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ncflag8{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ncflag9{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ncflag10{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ncflag11{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ncflag12{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ncflag13{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ncflag14{}; 
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ncflag15{}; 
        ///The most recent bus error from this SCT involved writing CTR  L/Unified, STATE L/Unified, MATCH L/Unified, or the Output register when the  L/U counter was not halted. Note that a word write to certain L  and H registers can be half successful and half unsuccessful.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> buserrl{}; 
        ///The most recent bus error from this SCT involved writing CTR H,  STATE H, MATCH H, or the Output register when the H  counter was not halted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> buserrh{}; 
    }
    namespace Nonematch0{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x40000100,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch1{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x40000104,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch2{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x40000108,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch3{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x4000010c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch4{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x40000110,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch5{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x40000114,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch6{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x40000118,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch7{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x4000011c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch8{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x40000120,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch9{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x40000124,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch10{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x40000128,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch11{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x4000012c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch12{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x40000130,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch13{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x40000134,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch14{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x40000138,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch15{    ///<SCT match value register of match channel n; REGMODn = 0
        using Addr = Register::Address<0x4000013c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonecap0{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x40000100,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap1{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x40000104,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap2{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x40000108,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap3{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x4000010c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap4{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x40000110,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap5{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x40000114,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap6{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x40000118,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap7{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x4000011c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap8{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x40000120,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap9{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x40000124,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap10{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x40000128,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap11{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x4000012c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap12{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x40000130,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap13{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x40000134,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap14{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x40000138,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap15{    ///<SCT capture register of capture channel n; REGMODn = 1
        using Addr = Register::Address<0x4000013c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonematchrel0{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x40000200,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel1{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x40000204,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel2{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x40000208,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel3{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x4000020c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel4{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x40000210,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel5{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x40000214,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel6{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x40000218,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel7{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x4000021c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel8{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x40000220,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel9{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x40000224,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel10{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x40000228,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel11{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x4000022c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel12{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x40000230,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel13{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x40000234,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel14{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x40000238,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel15{    ///<SCT match reload value register ; REGMODn = 0
        using Addr = Register::Address<0x4000023c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the SCTMATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the SCTMATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonecapctrl0{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x40000200,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl1{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x40000204,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl2{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x40000208,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl3{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x4000020c,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl4{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x40000210,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl5{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x40000214,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl6{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x40000218,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl7{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x4000021c,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl8{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x40000220,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl9{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x40000224,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl10{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x40000228,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl11{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x4000022c,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl12{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x40000230,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl13{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x40000234,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl14{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x40000238,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Nonecapctrl15{    ///<SCT capture control register ; REGMODn = 1
        using Addr = Register::Address<0x4000023c,0x00000000,0,unsigned>;
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capconnL0{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capconnL1{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capconnL2{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capconnL3{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> capconnL4{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> capconnL5{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> capconnL6{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> capconnL7{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> capconnL8{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> capconnL9{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> capconnL10{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> capconnL11{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> capconnL12{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> capconnL13{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> capconnL14{}; 
        ///If bit m is one, event m causes the SCTCAPn_L (UNIFY = 0) or the SCTCAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> capconnL15{}; 
        ///If bit m is one, event m causes the SCTCAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Noneevstatemsk0{    ///<SCT event state register
        using Addr = Register::Address<0x40000300,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk1{    ///<SCT event state register
        using Addr = Register::Address<0x40000308,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk2{    ///<SCT event state register
        using Addr = Register::Address<0x40000310,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk3{    ///<SCT event state register
        using Addr = Register::Address<0x40000318,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk4{    ///<SCT event state register
        using Addr = Register::Address<0x40000320,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk5{    ///<SCT event state register
        using Addr = Register::Address<0x40000328,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk6{    ///<SCT event state register
        using Addr = Register::Address<0x40000330,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk7{    ///<SCT event state register
        using Addr = Register::Address<0x40000338,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk8{    ///<SCT event state register
        using Addr = Register::Address<0x40000340,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk9{    ///<SCT event state register
        using Addr = Register::Address<0x40000348,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk10{    ///<SCT event state register
        using Addr = Register::Address<0x40000350,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk11{    ///<SCT event state register
        using Addr = Register::Address<0x40000358,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk12{    ///<SCT event state register
        using Addr = Register::Address<0x40000360,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk13{    ///<SCT event state register
        using Addr = Register::Address<0x40000368,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk14{    ///<SCT event state register
        using Addr = Register::Address<0x40000370,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevstatemsk15{    ///<SCT event state register
        using Addr = Register::Address<0x40000378,0x00000000,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statemskn0{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statemskn1{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statemskn2{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statemskn3{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statemskn4{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statemskn5{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statemskn6{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statemskn7{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statemskn8{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statemskn9{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statemskn10{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statemskn11{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statemskn12{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statemskn13{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statemskn14{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statemskn15{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> statemskn16{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> statemskn17{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> statemskn18{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> statemskn19{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> statemskn20{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> statemskn21{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> statemskn22{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> statemskn23{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> statemskn24{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> statemskn25{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> statemskn26{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> statemskn27{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> statemskn28{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> statemskn29{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> statemskn30{}; 
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> statemskn31{}; 
    }
    namespace Noneevctrl0{    ///<SCT event control register 
        using Addr = Register::Address<0x40000304,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl1{    ///<SCT event control register 
        using Addr = Register::Address<0x4000030c,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl2{    ///<SCT event control register 
        using Addr = Register::Address<0x40000314,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl3{    ///<SCT event control register 
        using Addr = Register::Address<0x4000031c,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl4{    ///<SCT event control register 
        using Addr = Register::Address<0x40000324,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl5{    ///<SCT event control register 
        using Addr = Register::Address<0x4000032c,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl6{    ///<SCT event control register 
        using Addr = Register::Address<0x40000334,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl7{    ///<SCT event control register 
        using Addr = Register::Address<0x4000033c,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl8{    ///<SCT event control register 
        using Addr = Register::Address<0x40000344,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl9{    ///<SCT event control register 
        using Addr = Register::Address<0x4000034c,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl10{    ///<SCT event control register 
        using Addr = Register::Address<0x40000354,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl11{    ///<SCT event control register 
        using Addr = Register::Address<0x4000035c,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl12{    ///<SCT event control register 
        using Addr = Register::Address<0x40000364,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl13{    ///<SCT event control register 
        using Addr = Register::Address<0x4000036c,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl14{    ///<SCT event control register 
        using Addr = Register::Address<0x40000374,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneevctrl15{    ///<SCT event control register 
        using Addr = Register::Address<0x4000037c,0xfff00000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheOutputS=0x00000000,     ///<Selects the output selected by IOSEL.
            selectsTheInputSe=0x00000001,     ///<Selects the input selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
        }
        ///Selects the input or output signal associated with this event (if  any). If CKMODE is 1x, the clock input is an implicit ingredient of  every event, and should not be selected in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (Note that the detection of edges on outputs will lag the conditions that switch the outputs by one SCT clock). An input must have a minimum pulse width of at least one SCT  clock period in order to guarantee proper edge/state detection.
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
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
    }
    namespace Noneoutputset0{    ///<SCT output set register
        using Addr = Register::Address<0x40000500,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset1{    ///<SCT output set register
        using Addr = Register::Address<0x40000508,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset2{    ///<SCT output set register
        using Addr = Register::Address<0x40000510,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset3{    ///<SCT output set register
        using Addr = Register::Address<0x40000518,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset4{    ///<SCT output set register
        using Addr = Register::Address<0x40000520,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset5{    ///<SCT output set register
        using Addr = Register::Address<0x40000528,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset6{    ///<SCT output set register
        using Addr = Register::Address<0x40000530,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset7{    ///<SCT output set register
        using Addr = Register::Address<0x40000538,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset8{    ///<SCT output set register
        using Addr = Register::Address<0x40000540,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset9{    ///<SCT output set register
        using Addr = Register::Address<0x40000548,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset10{    ///<SCT output set register
        using Addr = Register::Address<0x40000550,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset11{    ///<SCT output set register
        using Addr = Register::Address<0x40000558,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset12{    ///<SCT output set register
        using Addr = Register::Address<0x40000560,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset13{    ///<SCT output set register
        using Addr = Register::Address<0x40000568,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset14{    ///<SCT output set register
        using Addr = Register::Address<0x40000570,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputset15{    ///<SCT output set register
        using Addr = Register::Address<0x40000578,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setn0{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setn1{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setn2{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setn3{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setn4{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setn5{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setn6{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setn7{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setn8{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setn9{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setn10{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setn11{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setn12{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setn13{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setn14{}; 
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setn15{}; 
    }
    namespace Noneoutputclr0{    ///<SCT output  clear register
        using Addr = Register::Address<0x40000504,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr1{    ///<SCT output  clear register
        using Addr = Register::Address<0x4000050c,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr2{    ///<SCT output  clear register
        using Addr = Register::Address<0x40000514,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr3{    ///<SCT output  clear register
        using Addr = Register::Address<0x4000051c,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr4{    ///<SCT output  clear register
        using Addr = Register::Address<0x40000524,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr5{    ///<SCT output  clear register
        using Addr = Register::Address<0x4000052c,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr6{    ///<SCT output  clear register
        using Addr = Register::Address<0x40000534,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr7{    ///<SCT output  clear register
        using Addr = Register::Address<0x4000053c,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr8{    ///<SCT output  clear register
        using Addr = Register::Address<0x40000544,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr9{    ///<SCT output  clear register
        using Addr = Register::Address<0x4000054c,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr10{    ///<SCT output  clear register
        using Addr = Register::Address<0x40000554,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr11{    ///<SCT output  clear register
        using Addr = Register::Address<0x4000055c,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr12{    ///<SCT output  clear register
        using Addr = Register::Address<0x40000564,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr13{    ///<SCT output  clear register
        using Addr = Register::Address<0x4000056c,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr14{    ///<SCT output  clear register
        using Addr = Register::Address<0x40000574,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
    namespace Noneoutputclr15{    ///<SCT output  clear register
        using Addr = Register::Address<0x4000057c,0xffff0000,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrn0{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrn1{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrn2{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrn3{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrn4{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrn5{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrn6{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrn7{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrn8{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrn9{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrn10{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrn11{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrn12{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrn13{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrn14{}; 
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrn15{}; 
    }
}
