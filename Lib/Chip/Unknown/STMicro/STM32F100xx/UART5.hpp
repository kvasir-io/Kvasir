#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesr{
        using Addr = Register::Address<0x40005000,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LBD; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x40005004,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> DR; 
    }
    namespace Nonebrr{
        using Addr = Register::Address<0x40005008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DIV_Fraction; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> DIV_Mantissa; 
    }
    namespace Nonecr1{
        using Addr = Register::Address<0x4000500c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDLEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXNEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UE; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40005010,0xffff8f90>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LBDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LBDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LINEN; 
    }
    namespace Nonecr3{
        using Addr = Register::Address<0x40005014,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IRLP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMAT; 
    }
}
