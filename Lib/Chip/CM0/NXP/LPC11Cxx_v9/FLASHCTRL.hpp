#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash programming firmware
    namespace Noneflashcfg{    ///<Flash memory access time configuration register
        using Addr = Register::Address<0x4003c010,0xfffffffc,0,unsigned>;
        ///Flash memory access time. FLASHTIM +1 is equal to the number of system clocks used for flash access.
        enum class FlashtimVal {
            v1SystemClockFlash=0x00000001,     ///<1 system clock flash access time (for system clock frequencies of up to 20 MHz).
            v2SystemClocksFlas=0x00000002,     ///<2 system clocks flash access time (for system clock frequencies of up to 40 MHz).
            v3SystemClocksFlas=0x00000003,     ///<3 system clocks flash access time (for system clock frequencies of up to 50 MHz).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,FlashtimVal> flashtim{}; 
        namespace FlashtimValC{
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v1SystemClockFlash> v1SystemClockFlash{};
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v2SystemClocksFlas> v2SystemClocksFlas{};
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v3SystemClocksFlas> v3SystemClocksFlas{};
        }
    }
    namespace Nonefmsstart{    ///<Signature start address register
        using Addr = Register::Address<0x4003c020,0xfffe0000,0,unsigned>;
        ///Signature generation start address (corresponds to AHB byte address bits[20:4]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
    }
    namespace Nonefmsstop{    ///<Signature stop-address register
        using Addr = Register::Address<0x4003c024,0xfffc0000,0,unsigned>;
        ///BIST stop address divided by 16 (corresponds to AHB byte address [20:4]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        ///Start control bit for signature generation.
        enum class SigstartVal {
            signatureGeneration=0x00000000,     ///<Signature generation is stopped
            initiateSignatureG=0x00000001,     ///<Initiate signature generation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,SigstartVal> sigStart{}; 
        namespace SigstartValC{
            constexpr Register::FieldValue<decltype(sigStart),SigstartVal::signatureGeneration> signatureGeneration{};
            constexpr Register::FieldValue<decltype(sigStart),SigstartVal::initiateSignatureG> initiateSignatureG{};
        }
    }
    namespace Nonefmsw0{    ///<Word 0 [31:0]
        using Addr = Register::Address<0x4003c02c,0x00000000,0,unsigned>;
        ///Word 0 of 128-bit signature (bits 31 to 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw0310{}; 
        namespace Sw0310ValC{
        }
    }
    namespace Nonefmsw1{    ///<Word 1 [63:32]
        using Addr = Register::Address<0x4003c030,0x00000000,0,unsigned>;
        ///Word 1 of 128-bit signature (bits 63 to 32).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw16332{}; 
        namespace Sw16332ValC{
        }
    }
    namespace Nonefmsw2{    ///<Word 2 [95:64]
        using Addr = Register::Address<0x4003c034,0x00000000,0,unsigned>;
        ///Word 2 of 128-bit signature (bits 95 to 64).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw29564{}; 
        namespace Sw29564ValC{
        }
    }
    namespace Nonefmsw3{    ///<Word 3 [127:96]
        using Addr = Register::Address<0x4003c038,0x00000000,0,unsigned>;
        ///Word 3 of 128-bit signature (bits 127 to 96).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw312796{}; 
        namespace Sw312796ValC{
        }
    }
    namespace Nonefmstat{    ///<Signature generation status register
        using Addr = Register::Address<0x4003cfe0,0xfffffffb,0,unsigned>;
        ///When 1, a previously started signature generation has completed. See FMSTATCLR register description for clearing this flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sigDone{}; 
        namespace SigdoneValC{
        }
    }
    namespace Nonefmstatclr{    ///<Signature generation status clear register
        using Addr = Register::Address<0x4003cfe8,0xfffffffb,0,unsigned>;
        ///Writing a 1 to this bits clears the signature generation completion flag (SIG_DONE) in the FMSTAT register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sigDoneClr{}; 
        namespace SigdoneclrValC{
        }
    }
}
