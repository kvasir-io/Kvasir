#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration controller
    namespace Nonememrmp{    ///<memory remap register
        using Addr = Register::Address<0x40010000,0xfffffcfc,0,unsigned>;
        ///MEM_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> memMode{}; 
        namespace MemmodeValC{
        }
        ///BOOT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> bootMode{}; 
        namespace BootmodeValC{
        }
    }
    namespace Nonepmc{    ///<peripheral mode configuration
          register
        using Addr = Register::Address<0x40010004,0xfffffffe,0,unsigned>;
        ///USB pull-up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbPu{}; 
        namespace UsbpuValC{
        }
    }
    namespace Noneexticr1{    ///<external interrupt configuration register
          1
        using Addr = Register::Address<0x40010008,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        namespace Exti3ValC{
        }
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        namespace Exti2ValC{
        }
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        namespace Exti1ValC{
        }
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
        namespace Exti0ValC{
        }
    }
    namespace Noneexticr2{    ///<external interrupt configuration register
          2
        using Addr = Register::Address<0x4001000c,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        namespace Exti7ValC{
        }
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        namespace Exti6ValC{
        }
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        namespace Exti5ValC{
        }
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
        namespace Exti4ValC{
        }
    }
    namespace Noneexticr3{    ///<external interrupt configuration register
          3
        using Addr = Register::Address<0x40010010,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 8 to
              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        namespace Exti11ValC{
        }
        ///EXTI10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        namespace Exti10ValC{
        }
        ///EXTI x configuration (x = 8 to
              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        namespace Exti9ValC{
        }
        ///EXTI x configuration (x = 8 to
              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
        namespace Exti8ValC{
        }
    }
    namespace Noneexticr4{    ///<external interrupt configuration register
          4
        using Addr = Register::Address<0x40010014,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 12 to
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        namespace Exti15ValC{
        }
        ///EXTI14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        namespace Exti14ValC{
        }
        ///EXTI13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        namespace Exti13ValC{
        }
        ///EXTI12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
        namespace Exti12ValC{
        }
    }
}
