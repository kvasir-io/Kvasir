#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Nonedout0{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004200,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout1{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004204,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout2{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004208,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout3{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000420c,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout4{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004210,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout5{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004214,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout6{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004218,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout7{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000421c,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout8{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004220,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout9{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004224,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout10{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004228,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout11{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000422c,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout12{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004230,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout13{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004234,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout14{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004238,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace Nonedout15{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000423c,0xfffffffe,0,unsigned>;
        ///GPIOxx I/O Pin Bit Output Control
Set this bit can control one GPIO pin output value
1 = Set corresponding GPIO bit to high
0 = Set corresponding GPIO bit to low
For example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
}
