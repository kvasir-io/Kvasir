#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace GpdBitsDout0{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042c0,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout1{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042c4,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout2{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042c8,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout3{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042cc,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout4{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042d0,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout5{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042d4,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout6{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042d8,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout7{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042dc,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout8{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042e0,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout9{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042e4,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout10{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042e8,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout11{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042ec,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout12{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042f0,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout13{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042f4,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout14{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042f8,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpdBitsDout15{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042fc,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
}
