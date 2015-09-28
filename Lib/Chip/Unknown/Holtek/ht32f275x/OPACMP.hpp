#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneopacr0{
        using Addr = Register::Address<0x40018000,0xfffffef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPA0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OPC0MS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A0OFM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> A0RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMP0S; 
    }
    namespace Noneofvcr0{
        using Addr = Register::Address<0x40018004,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> A0OF; 
    }
    namespace Nonecmpier0{
        using Addr = Register::Address<0x40018008,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CF0IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CR0IEN; 
    }
    namespace Nonecmprsr0{
        using Addr = Register::Address<0x4001800c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CF0RAW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CR0RAW; 
    }
    namespace Nonecmpisr0{
        using Addr = Register::Address<0x40018010,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CF0IS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CR0IS; 
    }
    namespace Nonecmpiclr0{
        using Addr = Register::Address<0x40018014,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CF0ICLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CR0ICLR; 
    }
    namespace Noneopacr1{
        using Addr = Register::Address<0x40018100,0xfffffef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPA1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OPC1MS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A1OFM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> A1RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMP1S; 
    }
    namespace Noneofvcr1{
        using Addr = Register::Address<0x40018104,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> A1OF; 
    }
    namespace Nonecmpier1{
        using Addr = Register::Address<0x40018108,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CF1IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CR1IEN; 
    }
    namespace Nonecmprsr1{
        using Addr = Register::Address<0x4001810c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CF1RAW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CR1RAW; 
    }
    namespace Nonecmpisr1{
        using Addr = Register::Address<0x40018110,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CF1IS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CR1IS; 
    }
    namespace Nonecmpiclr1{
        using Addr = Register::Address<0x40018114,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CF1ICLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CR1ICLR; 
    }
}
