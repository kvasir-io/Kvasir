#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Comparators
    namespace Nonecsr{    ///<comparator control and status
          register
        using Addr = Register::Address<0x40007c00,0x0300cf40,0,unsigned>;
        ///Suspend Timer Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tsusp{}; 
        namespace TsuspValC{
        }
        ///Channel acquisition interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> caif{}; 
        namespace CaifValC{
        }
        ///Channel Acquisition Interrupt Enable /
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> caie{}; 
        namespace CaieValC{
        }
        ///Select GPIO port PC3 as re-routed ADC
              input channel CH13.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rch13{}; 
        namespace Rch13ValC{
        }
        ///Select GPIO port PB0 as fast ADC input
              channel CH8.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> fch8{}; 
        namespace Fch8ValC{
        }
        ///Select GPIO port PA3 as fast ADC input
              channel CH3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fch3{}; 
        namespace Fch3ValC{
        }
        ///Comparator 2 output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> outsel{}; 
        namespace OutselValC{
        }
        ///Inverted input selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> insel{}; 
        namespace InselValC{
        }
        ///Window mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> wndwe{}; 
        namespace WndweValC{
        }
        ///VREFINT output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> vrefouten{}; 
        namespace VrefoutenValC{
        }
        ///Comparator 2 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cmp2out{}; 
        namespace Cmp2outValC{
        }
        ///Comparator 2 speed mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> speed{}; 
        namespace SpeedValC{
        }
        ///Comparator 1 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmp1out{}; 
        namespace Cmp1outValC{
        }
        ///SW1 analog switch enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sw1{}; 
        namespace Sw1ValC{
        }
        ///Comparator 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmp1en{}; 
        namespace Cmp1enValC{
        }
        ///400 kO pull-down resistor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd400k{}; 
        namespace Pd400kValC{
        }
        ///10 kO pull-down resistor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd10k{}; 
        namespace Pd10kValC{
        }
        ///400 kO pull-up resistor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu400k{}; 
        namespace Pu400kValC{
        }
        ///10 kO pull-up resistor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu10k{}; 
        namespace Pu10kValC{
        }
    }
}
