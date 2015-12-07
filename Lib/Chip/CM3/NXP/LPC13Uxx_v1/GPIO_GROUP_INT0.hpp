#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPIO group interrupt 
    namespace Nonectrl{    ///<GPIO grouped interrupt control register
        using Addr = Register::Address<0x4005c000,0xfffffff8,0,unsigned>;
        ///Group interrupt status. This bit is cleared by writing a one to it. Writing zero has no effect.
        enum class Int_Val {
            noInterruptRequest=0x00000000,     ///<No interrupt request is pending.
            interruptRequestIs=0x00000001,     ///<Interrupt request is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Int_Val> int_{}; 
        namespace Int_ValC{
            constexpr Register::FieldValue<decltype(int_),Int_Val::noInterruptRequest> noInterruptRequest{};
            constexpr Register::FieldValue<decltype(int_),Int_Val::interruptRequestIs> interruptRequestIs{};
        }
        ///Combine enabled inputs for group interrupt
        enum class CombVal {
            orFunctionalityA=0x00000000,     ///<OR functionality: A grouped interrupt is generated when any one of the enabled inputs is active (based on its programmed polarity).
            andFunctionalityA=0x00000001,     ///<AND functionality: An interrupt is generated when all enabled bits are active (based on their programmed polarity).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CombVal> comb{}; 
        namespace CombValC{
            constexpr Register::FieldValue<decltype(comb),CombVal::orFunctionalityA> orFunctionalityA{};
            constexpr Register::FieldValue<decltype(comb),CombVal::andFunctionalityA> andFunctionalityA{};
        }
        ///Group interrupt trigger
        enum class TrigVal {
            edgeTriggered=0x00000000,     ///<Edge-triggered
            levelTriggered=0x00000001,     ///<Level-triggered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::edgeTriggered> edgeTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::levelTriggered> levelTriggered{};
        }
    }
    namespace NoneportPol0{    ///<GPIO grouped interrupt port 0 polarity register
        using Addr = Register::Address<0x4005c020,0x00000000,0,unsigned>;
        ///Configure pin polarity of port  pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1 . 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pol0{}; 
        namespace Pol0ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pol1{}; 
        namespace Pol1ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol2{}; 
        namespace Pol2ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pol3{}; 
        namespace Pol3ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pol4{}; 
        namespace Pol4ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pol5{}; 
        namespace Pol5ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pol6{}; 
        namespace Pol6ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pol7{}; 
        namespace Pol7ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pol8{}; 
        namespace Pol8ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pol9{}; 
        namespace Pol9ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pol10{}; 
        namespace Pol10ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pol11{}; 
        namespace Pol11ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pol12{}; 
        namespace Pol12ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pol13{}; 
        namespace Pol13ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pol14{}; 
        namespace Pol14ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pol15{}; 
        namespace Pol15ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol16{}; 
        namespace Pol16ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol17{}; 
        namespace Pol17ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol18{}; 
        namespace Pol18ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol19{}; 
        namespace Pol19ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol20{}; 
        namespace Pol20ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pol21{}; 
        namespace Pol21ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pol22{}; 
        namespace Pol22ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pol23{}; 
        namespace Pol23ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pol24{}; 
        namespace Pol24ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pol25{}; 
        namespace Pol25ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pol26{}; 
        namespace Pol26ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pol27{}; 
        namespace Pol27ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pol28{}; 
        namespace Pol28ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pol29{}; 
        namespace Pol29ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pol30{}; 
        namespace Pol30ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pol31{}; 
        namespace Pol31ValC{
        }
    }
    namespace NoneportPol1{    ///<GPIO grouped interrupt port 0 polarity register
        using Addr = Register::Address<0x4005c024,0x00000000,0,unsigned>;
        ///Configure pin polarity of port  pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1 . 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pol0{}; 
        namespace Pol0ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pol1{}; 
        namespace Pol1ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol2{}; 
        namespace Pol2ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pol3{}; 
        namespace Pol3ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pol4{}; 
        namespace Pol4ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pol5{}; 
        namespace Pol5ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pol6{}; 
        namespace Pol6ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pol7{}; 
        namespace Pol7ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pol8{}; 
        namespace Pol8ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pol9{}; 
        namespace Pol9ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pol10{}; 
        namespace Pol10ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pol11{}; 
        namespace Pol11ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pol12{}; 
        namespace Pol12ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pol13{}; 
        namespace Pol13ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pol14{}; 
        namespace Pol14ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pol15{}; 
        namespace Pol15ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol16{}; 
        namespace Pol16ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol17{}; 
        namespace Pol17ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol18{}; 
        namespace Pol18ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol19{}; 
        namespace Pol19ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol20{}; 
        namespace Pol20ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pol21{}; 
        namespace Pol21ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pol22{}; 
        namespace Pol22ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pol23{}; 
        namespace Pol23ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pol24{}; 
        namespace Pol24ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pol25{}; 
        namespace Pol25ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pol26{}; 
        namespace Pol26ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pol27{}; 
        namespace Pol27ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pol28{}; 
        namespace Pol28ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pol29{}; 
        namespace Pol29ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pol30{}; 
        namespace Pol30ValC{
        }
        ///Configure pin polarity of port 0/1 pins for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the pin is active LOW. If the level on this pin is LOW, the pin contributes to the group interrupt. 1 = the pin is active HIGH. If the level on this pin is HIGH, the pin contributes to the group interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pol31{}; 
        namespace Pol31ValC{
        }
    }
    namespace NoneportEna0{    ///<GPIO grouped interrupt port 0/1 enable register
        using Addr = Register::Address<0x4005c040,0x00000000,0,unsigned>;
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        namespace Ena0ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        namespace Ena1ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        namespace Ena2ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        namespace Ena3ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        namespace Ena4ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        namespace Ena5ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        namespace Ena6ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        namespace Ena7ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        namespace Ena8ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        namespace Ena9ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        namespace Ena10ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        namespace Ena11ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        namespace Ena12ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        namespace Ena13ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        namespace Ena14ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        namespace Ena15ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        namespace Ena16ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
        namespace Ena17ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ena18{}; 
        namespace Ena18ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ena19{}; 
        namespace Ena19ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ena20{}; 
        namespace Ena20ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ena21{}; 
        namespace Ena21ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ena22{}; 
        namespace Ena22ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ena23{}; 
        namespace Ena23ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ena24{}; 
        namespace Ena24ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ena25{}; 
        namespace Ena25ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ena26{}; 
        namespace Ena26ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ena27{}; 
        namespace Ena27ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ena28{}; 
        namespace Ena28ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ena29{}; 
        namespace Ena29ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ena30{}; 
        namespace Ena30ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ena31{}; 
        namespace Ena31ValC{
        }
    }
    namespace NoneportEna1{    ///<GPIO grouped interrupt port 0/1 enable register
        using Addr = Register::Address<0x4005c044,0x00000000,0,unsigned>;
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        namespace Ena0ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        namespace Ena1ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        namespace Ena2ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        namespace Ena3ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        namespace Ena4ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        namespace Ena5ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        namespace Ena6ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        namespace Ena7ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        namespace Ena8ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        namespace Ena9ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        namespace Ena10ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        namespace Ena11ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        namespace Ena12ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        namespace Ena13ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        namespace Ena14ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        namespace Ena15ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        namespace Ena16ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
        namespace Ena17ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ena18{}; 
        namespace Ena18ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ena19{}; 
        namespace Ena19ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ena20{}; 
        namespace Ena20ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ena21{}; 
        namespace Ena21ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ena22{}; 
        namespace Ena22ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ena23{}; 
        namespace Ena23ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ena24{}; 
        namespace Ena24ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ena25{}; 
        namespace Ena25ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ena26{}; 
        namespace Ena26ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ena27{}; 
        namespace Ena27ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ena28{}; 
        namespace Ena28ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ena29{}; 
        namespace Ena29ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ena30{}; 
        namespace Ena30ValC{
        }
        ///Enable port 0/1 pin for group interrupt. Bit n corresponds to pin P0/1_n of port 0/1. 0 = the port 0/1 pin is disabled and does not contribute to the grouped interrupt. 1 = the port 0/1 pin is enabled and contributes to the grouped interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ena31{}; 
        namespace Ena31ValC{
        }
    }
}
