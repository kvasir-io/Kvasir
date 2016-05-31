#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// Flash controller 
    namespace FlashctrlFlashcfg{    ///<Flash configuration register
        using Addr = Register::Address<0x40040010,0x00000000,0x00000000,unsigned>;
        ///Flash memory access time. FLASHTIM +1 is equal to the number of system clocks used for flash access.
        enum class FlashtimVal {
            v1SystemClockFlash=0x00000000,     ///<1 system clock flash access time (for system clock frequencies of up to 20 MHz).
            v2SystemClocksFlas=0x00000001,     ///<2 system clocks flash access time (for system clock frequencies of up to 30 MHz).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,FlashtimVal> flashtim{}; 
        namespace FlashtimValC{
            constexpr Register::FieldValue<decltype(flashtim)::Type,FlashtimVal::v1SystemClockFlash> v1SystemClockFlash{};
            constexpr Register::FieldValue<decltype(flashtim)::Type,FlashtimVal::v2SystemClocksFlas> v2SystemClocksFlas{};
        }
        ///Reserved. User software must not change the value of these bits. Bits 31:2 must be written back exactly as read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FlashctrlFmsstart{    ///<Signature start address register
        using Addr = Register::Address<0x40040020,0x00000000,0x00000000,unsigned>;
        ///Signature generation start address (corresponds to AHB byte address bits[20:4]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,17),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FlashctrlFmsstop{    ///<Signature stop-address register
        using Addr = Register::Address<0x40040024,0x00000000,0x00000000,unsigned>;
        ///Stop address for signature generation (the word specified by STOPA is included in the address range). The address is in units of memory words, not bytes.  If the option bistprotection=1, bits 2:0 cannot be written and are forced to 111.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> stopa{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When this bit is written to 1, signature generation starts. At the end of signature generation, this bit is automatically cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> strtbist{}; 
    }
    namespace FlashctrlFmsw0{    ///<Signature Word 
        using Addr = Register::Address<0x4004002c,0x00000000,0x00000000,unsigned>;
        ///32-bit signature.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sig{}; 
    }
}
