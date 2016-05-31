#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace GpcBitsDout0{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004280,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout1{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004284,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout2{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004288,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout3{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000428c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout4{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004290,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout5{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004294,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout6{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004298,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout7{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000429c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout8{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042a0,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout9{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042a4,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout10{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042a8,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout11{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042ac,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout12{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042b0,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout13{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042b4,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout14{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042b8,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpcBitsDout15{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x500042bc,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
}
