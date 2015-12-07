#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash controller 
    namespace Nonefmsstart{    ///<Signature start address register
        using Addr = Register::Address<0x400bc020,0xfffe0000,0,unsigned>;
        ///Signature generation start address (corresponds to AHB byte address bits[20:4]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
    }
    namespace Nonefmsstop{    ///<Signature stop-address register
        using Addr = Register::Address<0x400bc024,0x7ffe0000,0,unsigned>;
        ///Stop address for signature generation (the word specified by STOPA is included in the address range). The address is in units of memory words, not bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> stopa{}; 
        namespace StopaValC{
        }
        ///When this bit is written to 1, signature generation starts. At the end of signature generation, this bit is automatically cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> strtbist{}; 
        namespace StrtbistValC{
        }
    }
    namespace Nonefmsw0{    ///<Signature word
        using Addr = Register::Address<0x400bc02c,0x00000000,0,unsigned>;
        ///32-bit signature.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sig{}; 
        namespace SigValC{
        }
    }
}
