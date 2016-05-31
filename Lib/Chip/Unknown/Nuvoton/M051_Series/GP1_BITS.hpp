#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace Gp1BitsPx0Dout{    ///<Px.0 Data Output Value
        using Addr = Register::Address<0x50004420,0xfffffffe,0x00000000,unsigned>;
        ///P0.0 I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Gp1BitsPx1Dout{    ///<Px.1 Data Output Value
        using Addr = Register::Address<0x50004424,0xfffffffe,0x00000000,unsigned>;
        ///P0.1 I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Gp1BitsPx2Dout{    ///<Px.2 Data Output Value
        using Addr = Register::Address<0x50004428,0xfffffffe,0x00000000,unsigned>;
        ///P0.2 I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Gp1BitsPx3Dout{    ///<Px.3 Data Output Value
        using Addr = Register::Address<0x5000442c,0xfffffffe,0x00000000,unsigned>;
        ///P0.3 I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Gp1BitsPx4Dout{    ///<Px.4 Data Output Value
        using Addr = Register::Address<0x50004430,0xfffffffe,0x00000000,unsigned>;
        ///P0.4 I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Gp1BitsPx5Dout{    ///<Px.5 Data Output Value
        using Addr = Register::Address<0x50004434,0xfffffffe,0x00000000,unsigned>;
        ///P0.5 I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Gp1BitsPx6Dout{    ///<Px.6 Data Output Value
        using Addr = Register::Address<0x50004438,0xfffffffe,0x00000000,unsigned>;
        ///P0.6 I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Gp1BitsPx7Dout{    ///<Px.7 Data Output Value
        using Addr = Register::Address<0x5000443c,0xfffffffe,0x00000000,unsigned>;
        ///P0.7 I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
}
