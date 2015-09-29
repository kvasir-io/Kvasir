#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10375 Chapter title=LPC13xx Flash memory
				programming firmware Modification date=4/20/2011 Major revision=2 Minor revision=1 
    namespace Noneflashcfg{    ///<Flash configuration register
        using Addr = Register::Address<0x4003c010,0xfffffffc,0,unsigned>;
        ///Flash memory access time. FLASHTIM +1 is equal to the number of system clocks used for flash access.
        enum class flashtimVal {
            v1SystemClockFlash=0x00000000,     ///<1 system clock flash access time (for system clock frequencies of up to 20 MHz).
            v2SystemClocksFlas=0x00000001,     ///<2 system clocks flash access time (for system clock frequencies of up to 40 MHz).
            v3SystemClocksFlas=0x00000002,     ///<3 system clocks flash access time (for system clock frequencies of up to 72 MHz).
            reserved=0x00000003,     ///<Reserved.
        };
        namespace flashtimValC{
            constexpr MPL::Value<flashtimVal,flashtimVal::v1SystemClockFlash> v1SystemClockFlash{};
            constexpr MPL::Value<flashtimVal,flashtimVal::v2SystemClocksFlas> v2SystemClocksFlas{};
            constexpr MPL::Value<flashtimVal,flashtimVal::v3SystemClocksFlas> v3SystemClocksFlas{};
            constexpr MPL::Value<flashtimVal,flashtimVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,flashtimVal> flashtim{}; 
    }
    namespace Nonefmsstart{    ///<Signature start address register
        using Addr = Register::Address<0x4003c020,0xfffe0000,0,unsigned>;
        ///Signature generation start address (corresponds to AHB byte address bits[20:4]).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace Nonefmsstop{    ///<Signature stop-address register
        using Addr = Register::Address<0x4003c024,0xfffc0000,0,unsigned>;
        ///BIST stop address divided by 16 (corresponds to AHB byte address [20:4]).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Start control bit for signature generation.
        enum class sigStartVal {
            signatureGeneration=0x00000000,     ///<Signature generation is stopped
            initiateSignatureG=0x00000001,     ///<Initiate signature generation
        };
        namespace sigStartValC{
            constexpr MPL::Value<sigStartVal,sigStartVal::signatureGeneration> signatureGeneration{};
            constexpr MPL::Value<sigStartVal,sigStartVal::initiateSignatureG> initiateSignatureG{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,sigStartVal> sigStart{}; 
    }
    namespace Nonefmsw0{    ///<Word 0 [31:0]
        using Addr = Register::Address<0x4003c02c,0x00000000,0,unsigned>;
        ///Word 0 of 128-bit signature (bits 31 to 0).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw0310{}; 
    }
    namespace Nonefmsw1{    ///<Word 1 [63:32]
        using Addr = Register::Address<0x4003c030,0x00000000,0,unsigned>;
        ///Word 1 of 128-bit signature (bits 63 to 32).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw16332{}; 
    }
    namespace Nonefmsw2{    ///<Word 2 [95:64]
        using Addr = Register::Address<0x4003c034,0x00000000,0,unsigned>;
        ///Word 2 of 128-bit signature (bits 95 to 64).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw29564{}; 
    }
    namespace Nonefmsw3{    ///<Word 3 [127:96]
        using Addr = Register::Address<0x4003c038,0x00000000,0,unsigned>;
        ///Word 3 of 128-bit signature (bits 127 to 96).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw312796{}; 
    }
    namespace Nonefmstat{    ///<Signature generation status register
        using Addr = Register::Address<0x4003cfe0,0xfffffffb,0,unsigned>;
        ///When 1, a previously started signature generation has completed. See FMSTATCLR register description for clearing this flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sigDone{}; 
    }
    namespace Nonefmstatclr{    ///<Signature generation status clear register
        using Addr = Register::Address<0x4003cfe8,0xfffffffb,0,unsigned>;
        ///Writing a 1 to this bits clears the signature generation completion flag (SIG_DONE) in the FMSTAT register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sigDoneClr{}; 
    }
}
