#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// Flash controller 
    namespace Noneflashcfg{    ///<Flash configuration register
        using Addr = Register::Address<0x40040010,0xfffffffc,0,unsigned>;
        ///Flash memory access time. FLASHTIM +1 is equal to the number of system clocks used for flash access.
        enum class FlashtimVal {
            v1SystemClockFlash=0x00000000,     ///<1 system clock flash access time (for system clock frequencies of up to 20 MHz).
            v2SystemClocksFlas=0x00000001,     ///<2 system clocks flash access time (for system clock frequencies of up to 30 MHz).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,FlashtimVal> flashtim{}; 
        namespace FlashtimValC{
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v1SystemClockFlash> v1SystemClockFlash{};
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v2SystemClocksFlas> v2SystemClocksFlas{};
        }
    }
    namespace Nonefmsstart{    ///<Signature start address register
        using Addr = Register::Address<0x40040020,0xfffe0000,0,unsigned>;
        ///Signature generation start address (corresponds to AHB byte address bits[20:4]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
    }
    namespace Nonefmsstop{    ///<Signature stop-address register
        using Addr = Register::Address<0x40040024,0x7ffe0000,0,unsigned>;
        ///Stop address for signature generation (the word specified by STOPA is included in the address range). The address is in units of memory words, not bytes.  If the option bistprotection=1, bits 2:0 cannot be written and are forced to 111.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> stopa{}; 
        namespace StopaValC{
        }
        ///When this bit is written to 1, signature generation starts. At the end of signature generation, this bit is automatically cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> strtbist{}; 
        namespace StrtbistValC{
        }
    }
    namespace Nonefmsw0{    ///<Signature Word 
        using Addr = Register::Address<0x4004002c,0x00000000,0,unsigned>;
        ///32-bit signature.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sig{}; 
        namespace SigValC{
        }
    }
}
