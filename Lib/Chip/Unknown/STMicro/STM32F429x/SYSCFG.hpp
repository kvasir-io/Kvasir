#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration controller
    namespace Nonememrm{    ///<memory remap register
        using Addr = Register::Address<0x40013800,0xfffff2f8,0,unsigned>;
        ///Memory mapping selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> memMode{}; 
        ///Flash bank mode selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fbMode{}; 
        ///FMC memory mapping swap
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> swpFmc{}; 
    }
    namespace Nonepmc{    ///<peripheral mode configuration
          register
        using Addr = Register::Address<0x40013804,0xff78ffff,0,unsigned>;
        ///Ethernet PHY interface
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> miiRmiiSel{}; 
        ///ADC1DC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adc1dc2{}; 
        ///ADC2DC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adc2dc2{}; 
        ///ADC3DC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> adc3dc2{}; 
    }
    namespace Noneexticr1{    ///<external interrupt configuration register
          1
        using Addr = Register::Address<0x40013808,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
    }
    namespace Noneexticr2{    ///<external interrupt configuration register
          2
        using Addr = Register::Address<0x4001380c,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
    }
    namespace Noneexticr3{    ///<external interrupt configuration register
          3
        using Addr = Register::Address<0x40013810,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 8 to
              11)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        ///EXTI10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        ///EXTI x configuration (x = 8 to
              11)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        ///EXTI x configuration (x = 8 to
              11)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
    }
    namespace Noneexticr4{    ///<external interrupt configuration register
          4
        using Addr = Register::Address<0x40013814,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 12 to
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        ///EXTI x configuration (x = 12 to
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        ///EXTI x configuration (x = 12 to
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        ///EXTI x configuration (x = 12 to
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
    }
    namespace Nonecmpcr{    ///<Compensation cell control
          register
        using Addr = Register::Address<0x40013820,0xfffffefe,0,unsigned>;
        ///READY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ready{}; 
        ///Compensation cell
              power-down
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmpPd{}; 
    }
}
