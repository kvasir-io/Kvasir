#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace GpeBitsDout0{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004300,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout1{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004304,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout2{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004308,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout3{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000430c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout4{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004310,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout5{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004314,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout6{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004318,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout7{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000431c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout8{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004320,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout9{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004324,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout10{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004328,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout11{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000432c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout12{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004330,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout13{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004334,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout14{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004338,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpeBitsDout15{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000433c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
}
