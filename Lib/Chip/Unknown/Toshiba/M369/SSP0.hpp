#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr0{
        using Addr = Register::Address<0x40040000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> FRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCR; 
    }
    namespace Nonecr1{
        using Addr = Register::Address<0x40040004,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SOD; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x40040008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x4004000c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TNF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BSY; 
    }
    namespace Nonecpsr{
        using Addr = Register::Address<0x40040010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CPSDVSR; 
    }
    namespace Noneimsc{
        using Addr = Register::Address<0x40040014,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RORIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXIM; 
    }
    namespace Noneris{
        using Addr = Register::Address<0x40040018,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RORRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXRIS; 
    }
    namespace Nonemis{
        using Addr = Register::Address<0x4004001c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RORMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXMIS; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x40040020,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RORIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTIC; 
    }
    namespace Nonedmacr{
        using Addr = Register::Address<0x40040024,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXDMAE; 
    }
}
