#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ROM_entry{
        using Addr = Register::Address<0xf0002000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ENTRY; 
    }
    namespace ROM_tablemark{
        using Addr = Register::Address<0xf0002004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MARK; 
    }
    namespace ROM_sysaccess{
        using Addr = Register::Address<0xf0002fcc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SYSACCESS; 
    }
    namespace ROM_periphid4{
        using Addr = Register::Address<0xf0002fd0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace ROM_periphid5{
        using Addr = Register::Address<0xf0002fd4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace ROM_periphid6{
        using Addr = Register::Address<0xf0002fd8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace ROM_periphid7{
        using Addr = Register::Address<0xf0002fdc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace ROM_periphid0{
        using Addr = Register::Address<0xf0002fe0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace ROM_periphid1{
        using Addr = Register::Address<0xf0002fe4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace ROM_periphid2{
        using Addr = Register::Address<0xf0002fe8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace ROM_periphid3{
        using Addr = Register::Address<0xf0002fec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace ROM_compid0{
        using Addr = Register::Address<0xf0002ff0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMPID; 
    }
    namespace ROM_compid1{
        using Addr = Register::Address<0xf0002ff4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMPID; 
    }
    namespace ROM_compid2{
        using Addr = Register::Address<0xf0002ff8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMPID; 
    }
    namespace ROM_compid3{
        using Addr = Register::Address<0xf0002ffc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMPID; 
    }
}
