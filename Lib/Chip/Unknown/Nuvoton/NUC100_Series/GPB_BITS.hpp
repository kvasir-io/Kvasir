#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace GpbBitsDout0{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004240,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout1{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004244,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout2{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004248,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout3{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000424c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout4{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004250,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout5{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004254,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout6{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004258,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout7{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000425c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout8{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004260,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout9{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004264,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout10{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004268,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout11{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000426c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout12{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004270,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout13{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004274,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout14{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x50004278,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
    namespace GpbBitsDout15{    ///<GPIO Port Pin I/O Bit Output Control
        using Addr = Register::Address<0x5000427c,0xfffffffe,0x00000000,unsigned>;
        ///GPIOxx I/O Pin Bit Output ControlSet this bit can control one GPIO pin output value1 = Set corresponding GPIO bit to high0 = Set corresponding GPIO bit to lowFor example: write GPIOx0_DOUT will reflect the written value to bit GPIOx_DOUT[0], read GPIOx0_DOUT will return the valur of GPIOx_PIN[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout{}; 
    }
}
