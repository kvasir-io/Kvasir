#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Comparator
    namespace Nonecsr{    ///<control and status register
        using Addr = Register::Address<0x4001001c,0x00020080,0,unsigned>;
        ///Comparator 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp1en{}; 
        namespace Comp1enValC{
        }
        ///COMP1_INP_DAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> comp1InpDac{}; 
        namespace Comp1inpdacValC{
        }
        ///Comparator 1 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp1mode{}; 
        namespace Comp1modeValC{
        }
        ///Comparator 1 inverting input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp1insel{}; 
        namespace Comp1inselValC{
        }
        ///Comparator 1 output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> comp1outsel{}; 
        namespace Comp1outselValC{
        }
        ///Comparator 1 output
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> comp1pol{}; 
        namespace Comp1polValC{
        }
        ///Comparator 1 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> comp1hyst{}; 
        namespace Comp1hystValC{
        }
        ///Comparator 1 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> comp1out{}; 
        namespace Comp1outValC{
        }
        ///Comparator 1 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp1lock{}; 
        namespace Comp1lockValC{
        }
        ///Comparator 2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> comp2en{}; 
        namespace Comp2enValC{
        }
        ///Comparator 2 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> comp2mode{}; 
        namespace Comp2modeValC{
        }
        ///Comparator 2 inverting input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> comp2insel{}; 
        namespace Comp2inselValC{
        }
        ///Window mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> wndwen{}; 
        namespace WndwenValC{
        }
        ///Comparator 2 output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> comp2outsel{}; 
        namespace Comp2outselValC{
        }
        ///Comparator 2 output
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> comp2pol{}; 
        namespace Comp2polValC{
        }
        ///Comparator 2 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> comp2hyst{}; 
        namespace Comp2hystValC{
        }
        ///Comparator 2 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp2out{}; 
        namespace Comp2outValC{
        }
        ///Comparator 2 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp2lock{}; 
        namespace Comp2lockValC{
        }
    }
}
