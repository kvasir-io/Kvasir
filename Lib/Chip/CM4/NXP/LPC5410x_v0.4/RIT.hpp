#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Repetitive Interrupt Timer
    namespace Nonecompval{    ///<Compare value LSB register. Holds the 32 LSBs of the compare
						value.
        using Addr = Register::Address<0x40070000,0x00000000,0,unsigned>;
        ///Compare register. Holds the 32 LSBs of the value which is
								compared to the counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ricomp{}; 
        namespace RicompValC{
        }
    }
    namespace Nonemask{    ///<Mask LSB register. This register holds the 32 LSB s of the mask
						value. A 1 written to any bit will force the compare to be true for the
						corresponding bit of the counter and compare register.
        using Addr = Register::Address<0x40070004,0x00000000,0,unsigned>;
        ///Mask register. This register holds the 32 LSBs of the mask
								value. A one written to any bit overrides the result of the
								comparison for the corresponding bit of the counter and compare
								register (causes the comparison of the register bits to be always
								true).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rimask{}; 
        namespace RimaskValC{
        }
    }
    namespace Nonectrl{    ///<Control register.
        using Addr = Register::Address<0x40070008,0xfffffff0,0,unsigned>;
        ///Interrupt flag
        enum class RitintVal {
            match=0x00000001,     ///<This bit is set to 1 by hardware whenever the
										counter value equals the masked compare value specified by
										the contents of RICOMPVAL and RIMASK registers. Writing a 1
										to this bit will clear it to 0. Writing a 0 has no
										effect.
            nomtch=0x00000000,     ///<The counter value does not equal the masked compare
										value.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RitintVal> ritint{}; 
        namespace RitintValC{
            constexpr Register::FieldValue<decltype(ritint),RitintVal::match> match{};
            constexpr Register::FieldValue<decltype(ritint),RitintVal::nomtch> nomtch{};
        }
        ///Timer enable clear
        enum class RitenclrVal {
            clear=0x00000001,     ///<The timer will be cleared to 0 whenever the counter
										value equals the masked compare value specified by the
										contents of COMPVAL/COMPVAL_H and MASK/MASK_H registers.
										This will occur on the same clock that sets the interrupt
										flag.
            noclear=0x00000000,     ///<The timer will not be cleared to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RitenclrVal> ritenclr{}; 
        namespace RitenclrValC{
            constexpr Register::FieldValue<decltype(ritenclr),RitenclrVal::clear> clear{};
            constexpr Register::FieldValue<decltype(ritenclr),RitenclrVal::noclear> noclear{};
        }
        ///Timer enable for debug
        enum class RitenbrVal {
            halt=0x00000001,     ///<The timer is halted when the processor is halted
										for debugging.
            debug=0x00000000,     ///<Debug has no effect on the timer
										operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RitenbrVal> ritenbr{}; 
        namespace RitenbrValC{
            constexpr Register::FieldValue<decltype(ritenbr),RitenbrVal::halt> halt{};
            constexpr Register::FieldValue<decltype(ritenbr),RitenbrVal::debug> debug{};
        }
        ///Timer enable.
        enum class RitenVal {
            timerEnabled=0x00000001,     ///<Timer enabled. This can be overruled by a debug
										halt if enabled in bit 2.
            timerDisabled=0x00000000,     ///<Timer disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RitenVal> riten{}; 
        namespace RitenValC{
            constexpr Register::FieldValue<decltype(riten),RitenVal::timerEnabled> timerEnabled{};
            constexpr Register::FieldValue<decltype(riten),RitenVal::timerDisabled> timerDisabled{};
        }
    }
    namespace Nonecounter{    ///<Counter LSB register. 32 LSBs of the counter.
        using Addr = Register::Address<0x4007000c,0x00000000,0,unsigned>;
        ///32 LSBs of the up counter. Counts continuously unless RITEN
								bit in CTRL register is cleared or debug mode is entered (if enabled
								by the RITNEBR bit in RICTRL). Can be loaded to any value in
								software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ricounter{}; 
        namespace RicounterValC{
        }
    }
    namespace NonecompvalH{    ///<Compare value MSB register. Holds the 16 MSBs of the compare
						value.
        using Addr = Register::Address<0x40070010,0xffff0000,0,unsigned>;
        ///Compare value MSB register. Holds the 16 MSBs of the value
								which is compared to the counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ricomp{}; 
        namespace RicompValC{
        }
    }
    namespace NonemaskH{    ///<Mask MSB register. This register holds the 16 MSBs of the mask
						value. A 1 written to any bit will force a compare on the corresponding bit
						of the counter and compare register.
        using Addr = Register::Address<0x40070014,0xffff0000,0,unsigned>;
        ///Mask register. This register holds the 16 MSBs of the mask
								value. A one written to any bit overrides the result of the
								comparison for the corresponding bit of the counter and compare
								register (causes the comparison of the register bits to be always
								true).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rimask{}; 
        namespace RimaskValC{
        }
    }
    namespace NonecounterH{    ///<Counter MSB register. 16 MSBs of the counter.
        using Addr = Register::Address<0x4007001c,0xffff0000,0,unsigned>;
        ///16 LSBs of the up counter. Counts continuously unless RITEN
								bit in RICTRL register is cleared or debug mode is entered (if
								enabled by the RITNEBR bit in RICTRL). Can be loaded to any value in
								software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ricounter{}; 
        namespace RicounterValC{
        }
    }
}
