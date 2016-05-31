#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace GpaBitsDout0{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004200,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout1{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004204,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout2{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004208,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout3{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000420c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout4{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004210,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout5{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004214,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout6{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004218,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout7{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000421c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout8{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004220,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout9{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004224,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout10{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004228,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout11{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000422c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout12{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004230,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout13{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004234,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout14{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004238,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpaBitsDout15{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000423c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
}
