#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet system control
    namespace NoneethMode{    ///<Mode Select Register
        using Addr = Register::Address<0x40066000,0xeffffcfe,0,unsigned>;
        ///Select either of the system time counter pulse outputs of the Ethernet-MAC PTP function to output to E_PPS0_PPS1 pin
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ppssel{}; 
        ///reset signal against Ethernet-MAC (ch.1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rst1{}; 
        ///reset signal against Ethernet-MAC (ch.0)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rst0{}; 
        ///Mode selector
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ifmode{}; 
    }
    namespace NoneethClkg{    ///<Clock Gating Register
        using Addr = Register::Address<0x40066008,0xfffffffc,0,unsigned>;
        ///Select the system clock supply to Ethernet-MAC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> macen{}; 
    }
}
