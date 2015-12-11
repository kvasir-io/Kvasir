#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPIO group interrupt 0
    namespace Nonectrl{    ///<GPIO grouped interrupt control register
        using Addr = Register::Address<0x40088000,0xfffffff8,0,unsigned>;
        ///Group interrupt status. This bit is cleared by writing a one to it. Writing zero has no effect.
        enum class Int_Val {
            noInterruptRequest=0x00000000,     ///<No interrupt request is pending.
            interruptRequestIs=0x00000001,     ///<Interrupt request is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Int_Val> int_{}; 
        namespace Int_ValC{
            constexpr Register::FieldValue<decltype(int_)::Type,Int_Val::noInterruptRequest> noInterruptRequest{};
            constexpr Register::FieldValue<decltype(int_)::Type,Int_Val::interruptRequestIs> interruptRequestIs{};
        }
        }
        ///Combine enabled inputs for group interrupt
        enum class CombVal {
            orFunctionalityA=0x00000000,     ///<OR functionality: A grouped interrupt is generated when any one of the enabled inputs is active (based on its programmed polarity).
            andFunctionalityA=0x00000001,     ///<AND functionality: An interrupt is generated when all enabled bits are active (based on their programmed polarity).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CombVal> comb{}; 
        namespace CombValC{
            constexpr Register::FieldValue<decltype(comb)::Type,CombVal::orFunctionalityA> orFunctionalityA{};
            constexpr Register::FieldValue<decltype(comb)::Type,CombVal::andFunctionalityA> andFunctionalityA{};
        }
        }
        ///Group interrupt trigger
        enum class TrigVal {
            edgeTriggered=0x00000000,     ///<Edge-triggered
            levelTriggered=0x00000001,     ///<Level-triggered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::edgeTriggered> edgeTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::levelTriggered> levelTriggered{};
        }
        }
    }
    namespace NoneportPol0{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40088020,0x00000000,0,unsigned>;
        ///Configure pin polarity of port  pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m . 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pol0{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pol1{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol2{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pol3{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pol4{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pol5{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pol6{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pol7{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pol8{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pol9{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pol10{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pol11{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pol12{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pol13{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pol14{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pol15{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol16{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol17{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol18{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol19{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol20{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pol21{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pol22{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pol23{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pol24{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pol25{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pol26{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pol27{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pol28{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pol29{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pol30{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pol31{}; 
    }
    namespace NoneportPol1{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40088024,0x00000000,0,unsigned>;
        ///Configure pin polarity of port  pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m . 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pol0{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pol1{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol2{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pol3{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pol4{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pol5{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pol6{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pol7{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pol8{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pol9{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pol10{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pol11{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pol12{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pol13{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pol14{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pol15{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol16{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol17{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol18{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol19{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol20{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pol21{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pol22{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pol23{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pol24{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pol25{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pol26{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pol27{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pol28{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pol29{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pol30{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pol31{}; 
    }
    namespace NoneportPol2{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40088028,0x00000000,0,unsigned>;
        ///Configure pin polarity of port  pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m . 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pol0{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pol1{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol2{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pol3{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pol4{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pol5{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pol6{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pol7{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pol8{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pol9{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pol10{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pol11{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pol12{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pol13{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pol14{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pol15{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol16{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol17{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol18{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol19{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol20{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pol21{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pol22{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pol23{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pol24{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pol25{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pol26{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pol27{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pol28{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pol29{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pol30{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pol31{}; 
    }
    namespace NoneportPol3{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x4008802c,0x00000000,0,unsigned>;
        ///Configure pin polarity of port  pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m . 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pol0{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pol1{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol2{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pol3{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pol4{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pol5{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pol6{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pol7{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pol8{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pol9{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pol10{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pol11{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pol12{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pol13{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pol14{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pol15{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol16{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol17{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol18{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol19{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol20{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pol21{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pol22{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pol23{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pol24{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pol25{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pol26{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pol27{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pol28{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pol29{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pol30{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pol31{}; 
    }
    namespace NoneportPol4{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40088030,0x00000000,0,unsigned>;
        ///Configure pin polarity of port  pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m . 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pol0{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pol1{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol2{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pol3{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pol4{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pol5{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pol6{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pol7{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pol8{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pol9{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pol10{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pol11{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pol12{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pol13{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pol14{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pol15{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol16{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol17{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol18{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol19{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol20{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pol21{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pol22{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pol23{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pol24{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pol25{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pol26{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pol27{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pol28{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pol29{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pol30{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pol31{}; 
    }
    namespace NoneportPol5{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40088034,0x00000000,0,unsigned>;
        ///Configure pin polarity of port  pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m . 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pol0{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pol1{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol2{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pol3{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pol4{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pol5{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pol6{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pol7{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pol8{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pol9{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pol10{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pol11{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pol12{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pol13{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pol14{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pol15{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol16{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol17{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol18{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol19{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol20{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pol21{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pol22{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pol23{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pol24{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pol25{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pol26{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pol27{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pol28{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pol29{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pol30{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pol31{}; 
    }
    namespace NoneportPol6{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40088038,0x00000000,0,unsigned>;
        ///Configure pin polarity of port  pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m . 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pol0{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pol1{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol2{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pol3{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pol4{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pol5{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pol6{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pol7{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pol8{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pol9{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pol10{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pol11{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pol12{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pol13{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pol14{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pol15{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol16{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol17{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol18{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol19{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol20{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pol21{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pol22{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pol23{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pol24{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pol25{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pol26{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pol27{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pol28{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pol29{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pol30{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pol31{}; 
    }
    namespace NoneportPol7{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x4008803c,0x00000000,0,unsigned>;
        ///Configure pin polarity of port  pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m . 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pol0{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pol1{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol2{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pol3{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pol4{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pol5{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pol6{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pol7{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pol8{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pol9{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pol10{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pol11{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pol12{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pol13{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pol14{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pol15{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol16{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol17{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol18{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol19{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol20{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pol21{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pol22{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pol23{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pol24{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pol25{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pol26{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pol27{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pol28{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pol29{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pol30{}; 
        ///Configure pin polarity of port m pins for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pol31{}; 
    }
    namespace NoneportEna0{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40088040,0x00000000,0,unsigned>;
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ena18{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ena19{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ena20{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ena21{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ena22{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ena23{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ena24{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ena25{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ena26{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ena27{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ena28{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ena29{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ena30{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ena31{}; 
    }
    namespace NoneportEna1{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40088044,0x00000000,0,unsigned>;
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ena18{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ena19{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ena20{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ena21{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ena22{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ena23{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ena24{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ena25{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ena26{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ena27{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ena28{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ena29{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ena30{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ena31{}; 
    }
    namespace NoneportEna2{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40088048,0x00000000,0,unsigned>;
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ena18{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ena19{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ena20{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ena21{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ena22{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ena23{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ena24{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ena25{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ena26{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ena27{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ena28{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ena29{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ena30{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ena31{}; 
    }
    namespace NoneportEna3{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x4008804c,0x00000000,0,unsigned>;
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ena18{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ena19{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ena20{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ena21{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ena22{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ena23{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ena24{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ena25{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ena26{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ena27{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ena28{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ena29{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ena30{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ena31{}; 
    }
    namespace NoneportEna4{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40088050,0x00000000,0,unsigned>;
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ena18{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ena19{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ena20{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ena21{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ena22{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ena23{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ena24{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ena25{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ena26{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ena27{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ena28{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ena29{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ena30{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ena31{}; 
    }
    namespace NoneportEna5{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40088054,0x00000000,0,unsigned>;
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ena18{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ena19{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ena20{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ena21{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ena22{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ena23{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ena24{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ena25{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ena26{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ena27{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ena28{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ena29{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ena30{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ena31{}; 
    }
    namespace NoneportEna6{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40088058,0x00000000,0,unsigned>;
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ena18{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ena19{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ena20{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ena21{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ena22{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ena23{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ena24{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ena25{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ena26{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ena27{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ena28{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ena29{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ena30{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ena31{}; 
    }
    namespace NoneportEna7{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x4008805c,0x00000000,0,unsigned>;
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ena18{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ena19{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ena20{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ena21{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ena22{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ena23{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ena24{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ena25{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ena26{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ena27{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ena28{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ena29{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ena30{}; 
        ///Enable port m pin for group interrupt. Bit n corresponds to pin GPIOm[n] of port m. 0 = the port m pin is disabled and does not contribute to the grouped interrupt. 1 = the port m pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ena31{}; 
    }
}
