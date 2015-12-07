#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Comparator
    namespace Nonecomp1Csr{    ///<control and status register
        using Addr = Register::Address<0x4001001c,0x3fe04380,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp1OutSel{}; 
        namespace Comp1outselValC{
        }
        ///Comparator 1 output
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp1pol{}; 
        namespace Comp1polValC{
        }
        ///Comparator 1 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp1hyst{}; 
        namespace Comp1hystValC{
        }
        ///Comparator 1 blanking
              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp1Blanking{}; 
        namespace Comp1blankingValC{
        }
        ///Comparator 1 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp1out{}; 
        namespace Comp1outValC{
        }
        ///Comparator 1 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp1lock{}; 
        namespace Comp1lockValC{
        }
    }
    namespace Nonecomp2Csr{    ///<control and status register
        using Addr = Register::Address<0x40010020,0x3fe04102,0,unsigned>;
        ///Comparator 2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp2en{}; 
        namespace Comp2enValC{
        }
        ///Comparator 2 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp2mode{}; 
        namespace Comp2modeValC{
        }
        ///Comparator 2 inverting input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp2insel{}; 
        namespace Comp2inselValC{
        }
        ///Comparator 2 non inverted input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp2inpsel{}; 
        namespace Comp2inpselValC{
        }
        ///Comparator 1inverting input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> comp2inmsel{}; 
        namespace Comp2inmselValC{
        }
        ///Comparator 2 output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp2OutSel{}; 
        namespace Comp2outselValC{
        }
        ///Comparator 2 output
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp2pol{}; 
        namespace Comp2polValC{
        }
        ///Comparator 2 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp2hyst{}; 
        namespace Comp2hystValC{
        }
        ///Comparator 2 blanking
              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp2Blanking{}; 
        namespace Comp2blankingValC{
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
    namespace Nonecomp3Csr{    ///<control and status register
        using Addr = Register::Address<0x40010024,0x3fe04302,0,unsigned>;
        ///Comparator 3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp3en{}; 
        namespace Comp3enValC{
        }
        ///Comparator 3 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp3mode{}; 
        namespace Comp3modeValC{
        }
        ///Comparator 3 inverting input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp3insel{}; 
        namespace Comp3inselValC{
        }
        ///Comparator 3 non inverted input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp3inpsel{}; 
        namespace Comp3inpselValC{
        }
        ///Comparator 3 output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp3OutSel{}; 
        namespace Comp3outselValC{
        }
        ///Comparator 3 output
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp3pol{}; 
        namespace Comp3polValC{
        }
        ///Comparator 3 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp3hyst{}; 
        namespace Comp3hystValC{
        }
        ///Comparator 3 blanking
              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp3Blanking{}; 
        namespace Comp3blankingValC{
        }
        ///Comparator 3 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp3out{}; 
        namespace Comp3outValC{
        }
        ///Comparator 3 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp3lock{}; 
        namespace Comp3lockValC{
        }
    }
    namespace Nonecomp4Csr{    ///<control and status register
        using Addr = Register::Address<0x40010028,0x3fe04102,0,unsigned>;
        ///Comparator 4 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp4en{}; 
        namespace Comp4enValC{
        }
        ///Comparator 4 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp4mode{}; 
        namespace Comp4modeValC{
        }
        ///Comparator 4 inverting input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp4insel{}; 
        namespace Comp4inselValC{
        }
        ///Comparator 4 non inverted input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp4inpsel{}; 
        namespace Comp4inpselValC{
        }
        ///Comparator 4 window mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> com4winmode{}; 
        namespace Com4winmodeValC{
        }
        ///Comparator 4 output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp4OutSel{}; 
        namespace Comp4outselValC{
        }
        ///Comparator 4 output
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp4pol{}; 
        namespace Comp4polValC{
        }
        ///Comparator 4 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp4hyst{}; 
        namespace Comp4hystValC{
        }
        ///Comparator 4 blanking
              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp4Blanking{}; 
        namespace Comp4blankingValC{
        }
        ///Comparator 4 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp4out{}; 
        namespace Comp4outValC{
        }
        ///Comparator 4 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp4lock{}; 
        namespace Comp4lockValC{
        }
    }
    namespace Nonecomp5Csr{    ///<control and status register
        using Addr = Register::Address<0x4001002c,0x3fe04302,0,unsigned>;
        ///Comparator 5 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp5en{}; 
        namespace Comp5enValC{
        }
        ///Comparator 5 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp5mode{}; 
        namespace Comp5modeValC{
        }
        ///Comparator 5 inverting input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp5insel{}; 
        namespace Comp5inselValC{
        }
        ///Comparator 5 non inverted input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp5inpsel{}; 
        namespace Comp5inpselValC{
        }
        ///Comparator 5 output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp5OutSel{}; 
        namespace Comp5outselValC{
        }
        ///Comparator 5 output
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp5pol{}; 
        namespace Comp5polValC{
        }
        ///Comparator 5 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp5hyst{}; 
        namespace Comp5hystValC{
        }
        ///Comparator 5 blanking
              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp5Blanking{}; 
        namespace Comp5blankingValC{
        }
        ///Comparator51 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp5out{}; 
        namespace Comp5outValC{
        }
        ///Comparator 5 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp5lock{}; 
        namespace Comp5lockValC{
        }
    }
    namespace Nonecomp6Csr{    ///<control and status register
        using Addr = Register::Address<0x40010030,0x3fe04102,0,unsigned>;
        ///Comparator 6 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp6en{}; 
        namespace Comp6enValC{
        }
        ///Comparator 6 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp6mode{}; 
        namespace Comp6modeValC{
        }
        ///Comparator 6 inverting input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp6insel{}; 
        namespace Comp6inselValC{
        }
        ///Comparator 6 non inverted input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp6inpsel{}; 
        namespace Comp6inpselValC{
        }
        ///Comparator 6 window mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> com6winmode{}; 
        namespace Com6winmodeValC{
        }
        ///Comparator 6 output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp6OutSel{}; 
        namespace Comp6outselValC{
        }
        ///Comparator 6 output
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp6pol{}; 
        namespace Comp6polValC{
        }
        ///Comparator 6 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp6hyst{}; 
        namespace Comp6hystValC{
        }
        ///Comparator 6 blanking
              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp6Blanking{}; 
        namespace Comp6blankingValC{
        }
        ///Comparator 6 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp6out{}; 
        namespace Comp6outValC{
        }
        ///Comparator 6 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp6lock{}; 
        namespace Comp6lockValC{
        }
    }
    namespace Nonecomp7Csr{    ///<control and status register
        using Addr = Register::Address<0x40010034,0x3fe04302,0,unsigned>;
        ///Comparator 7 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp7en{}; 
        namespace Comp7enValC{
        }
        ///Comparator 7 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp7mode{}; 
        namespace Comp7modeValC{
        }
        ///Comparator 7 inverting input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp7insel{}; 
        namespace Comp7inselValC{
        }
        ///Comparator 7 non inverted input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp7inpsel{}; 
        namespace Comp7inpselValC{
        }
        ///Comparator 7 output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp7OutSel{}; 
        namespace Comp7outselValC{
        }
        ///Comparator 7 output
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp7pol{}; 
        namespace Comp7polValC{
        }
        ///Comparator 7 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp7hyst{}; 
        namespace Comp7hystValC{
        }
        ///Comparator 7 blanking
              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp7Blanking{}; 
        namespace Comp7blankingValC{
        }
        ///Comparator 7 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp7out{}; 
        namespace Comp7outValC{
        }
        ///Comparator 7 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp7lock{}; 
        namespace Comp7lockValC{
        }
    }
}
