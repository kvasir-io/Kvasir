#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//GPIO group interrupt 0
    namespace GpioGroupInt1Ctrl{    ///<GPIO grouped interrupt control register
        using Addr = Register::Address<0x40089000,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GpioGroupInt1PortPol0{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40089020,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol1{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40089024,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol2{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40089028,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol3{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x4008902c,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol4{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40089030,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol5{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40089034,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol6{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40089038,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol7{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x4008903c,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna0{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40089040,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna1{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40089044,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna2{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40089048,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna3{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x4008904c,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna4{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40089050,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna5{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40089054,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna6{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40089058,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna7{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x4008905c,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol0{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40089020,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol1{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40089024,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol2{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40089028,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol3{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x4008902c,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol4{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40089030,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol5{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40089034,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol6{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x40089038,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortPol7{    ///<GPIO grouped interrupt port  polarity register
        using Addr = Register::Address<0x4008903c,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna0{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40089040,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna1{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40089044,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna2{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40089048,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna3{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x4008904c,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna4{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40089050,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna5{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40089054,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna6{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x40089058,0x00000000,0x00000000,unsigned>;
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
    namespace GpioGroupInt1PortEna7{    ///<GPIO grouped interrupt port m enable register
        using Addr = Register::Address<0x4008905c,0x00000000,0x00000000,unsigned>;
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
