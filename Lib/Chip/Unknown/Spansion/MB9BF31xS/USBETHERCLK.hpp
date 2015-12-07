#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB/Ethernet Clock
    namespace Noneuccr{    ///<USB/Ethernet-PLL Clock Control Register
        using Addr = Register::Address<0x40036000,0xfffffff0,0,unsigned char>;
        ///USB1 clock output enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ucen1{}; 
        namespace Ucen1ValC{
        }
        ///USB1 clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ucsel1{}; 
        namespace Ucsel1ValC{
        }
        ///USB0 clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ucsel0{}; 
        namespace Ucsel0ValC{
        }
        ///USB0 clock output enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ucen0{}; 
        namespace Ucen0ValC{
        }
    }
    namespace Noneupcr1{    ///<USB/Ethernet-PLL Control Register 1
        using Addr = Register::Address<0x40036004,0xfffffffc,0,unsigned char>;
        ///USB/Ethernet-PLL input clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> upinc{}; 
        namespace UpincValC{
        }
        ///USB/Ethernet-PLL oscillation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> upllen{}; 
        namespace UpllenValC{
        }
    }
    namespace Noneupcr2{    ///<USB/Ethernet-PLL Control Register 2
        using Addr = Register::Address<0x40036008,0xfffffff8,0,unsigned char>;
        ///USB/Ethernet-PLL oscillation stabilization wait time setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> upowt{}; 
        namespace UpowtValC{
        }
    }
    namespace Noneupcr3{    ///<USB/Ethernet-PLL Control Register 3
        using Addr = Register::Address<0x4003600c,0xffffffe0,0,unsigned char>;
        ///Frequency division ratio (K) setting bit of the USB/Ethernet-PLL clock 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> upllk{}; 
        namespace UpllkValC{
        }
    }
    namespace Noneupcr4{    ///<USB/Ethernet-PLL Control Register 4
        using Addr = Register::Address<0x40036010,0xffffff80,0,unsigned char>;
        ///Frequency division ratio (N) setting bit of the USB/Ethernet-PLL clock 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> uplln{}; 
        namespace UpllnValC{
        }
    }
    namespace Noneupcr5{    ///<USB/Ethernet-PLL Control Register 5
        using Addr = Register::Address<0x40036024,0xfffffff0,0,unsigned char>;
        ///Frequency division ratio (M) setting bit of the USB/Ethernet-PLL clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> upllm{}; 
        namespace UpllmValC{
        }
    }
    namespace Noneupcr6{    ///<USB/Ethernet-PLL Setting Register 6
        using Addr = Register::Address<0x40036028,0xfffffff0,0,unsigned char>;
        ///CLKPLL division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ubsr{}; 
        namespace UbsrValC{
        }
    }
    namespace Noneupcr7{    ///<USB/Ethernet-PLL Setting Register 7
        using Addr = Register::Address<0x4003602c,0xfffffffe,0,unsigned char>;
        ///USB/Ethernet-PLL control bit in Timer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epllen{}; 
        namespace EpllenValC{
        }
    }
    namespace NoneupStr{    ///<USB/Ethernet-PLL Status Register
        using Addr = Register::Address<0x40036014,0xfffffffe,0,unsigned char>;
        ///USB/Ethernet-PLL oscillation stabilization bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uprdy{}; 
        namespace UprdyValC{
        }
    }
    namespace NoneupintEnr{    ///<USB/Ethernet-PLL Interrupt Source Enable Register
        using Addr = Register::Address<0x40036018,0xfffffffe,0,unsigned char>;
        ///USB/Ethernet-PLL oscillation stabilization wait complete interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> upcse{}; 
        namespace UpcseValC{
        }
    }
    namespace NoneupintStr{    ///<USB/Ethernet-PLL Interrupt Source Status Register
        using Addr = Register::Address<0x40036020,0xfffffffe,0,unsigned char>;
        ///USB/Ethernet-PLL interrupt source status bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> upcsi{}; 
        namespace UpcsiValC{
        }
    }
    namespace NoneupintClr{    ///<USB/Ethernet-PLL Interrupt Source Clear Register
        using Addr = Register::Address<0x4003601c,0xfffffffe,0,unsigned char>;
        ///USB/Ethernet-PLL oscillation stabilization interrupt source clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> upcsc{}; 
        namespace UpcscValC{
        }
    }
    namespace Noneusben0{    ///<USB0 Enable Register
        using Addr = Register::Address<0x40036030,0xfffffffe,0,unsigned char>;
        ///USB0 enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usben0{}; 
        namespace Usben0ValC{
        }
    }
    namespace Noneusben1{    ///<USB1 Enable Register
        using Addr = Register::Address<0x40036034,0xfffffffe,0,unsigned char>;
        ///USB1 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usben1{}; 
        namespace Usben1ValC{
        }
    }
}
