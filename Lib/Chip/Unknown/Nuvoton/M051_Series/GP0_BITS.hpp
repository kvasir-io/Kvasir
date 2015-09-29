#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Nonepx0Dout{    ///<Px.0 Data Output Value
        using Addr = Register::Address<0x50004400,0xfffffffe,0,unsigned>;
        ///P0.0 I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonepx1Dout{    ///<Px.1 Data Output Value
        using Addr = Register::Address<0x50004404,0xfffffffe,0,unsigned>;
        ///P0.1 I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonepx2Dout{    ///<Px.2 Data Output Value
        using Addr = Register::Address<0x50004408,0xfffffffe,0,unsigned>;
        ///P0.2 I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonepx3Dout{    ///<Px.3 Data Output Value
        using Addr = Register::Address<0x5000440c,0xfffffffe,0,unsigned>;
        ///P0.3 I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonepx4Dout{    ///<Px.4 Data Output Value
        using Addr = Register::Address<0x50004410,0xfffffffe,0,unsigned>;
        ///P0.4 I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonepx5Dout{    ///<Px.5 Data Output Value
        using Addr = Register::Address<0x50004414,0xfffffffe,0,unsigned>;
        ///P0.5 I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonepx6Dout{    ///<Px.6 Data Output Value
        using Addr = Register::Address<0x50004418,0xfffffffe,0,unsigned>;
        ///P0.6 I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonepx7Dout{    ///<Px.7 Data Output Value
        using Addr = Register::Address<0x5000441c,0xfffffffe,0,unsigned>;
        ///P0.7 I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
}
