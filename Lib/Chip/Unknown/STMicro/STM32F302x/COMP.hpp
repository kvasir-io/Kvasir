#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Comparator
    namespace Nonecomp2Csr{    ///<control and status register
        using Addr = Register::Address<0x40010024,0x3fe04102,0,unsigned>;
        ///Comparator 2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp2en{}; 
        namespace Comp2enValC{
        }
        ///Comparator 2 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp2mode{}; 
        namespace Comp2modeValC{
        }
        ///Comparator 2 inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp2insel{}; 
        namespace Comp2inselValC{
        }
        ///Comparator 2 non inverted input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp2inpsel{}; 
        namespace Comp2inpselValC{
        }
        ///Comparator 1inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> comp2inmsel{}; 
        namespace Comp2inmselValC{
        }
        ///Comparator 2 output               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp2OutSel{}; 
        namespace Comp2outselValC{
        }
        ///Comparator 2 output               polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp2pol{}; 
        namespace Comp2polValC{
        }
        ///Comparator 2 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp2hyst{}; 
        namespace Comp2hystValC{
        }
        ///Comparator 2 blanking               source
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
    namespace Nonecomp4Csr{    ///<control and status register
        using Addr = Register::Address<0x4001002c,0x3fe04102,0,unsigned>;
        ///Comparator 4 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp4en{}; 
        namespace Comp4enValC{
        }
        ///Comparator 4 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp4mode{}; 
        namespace Comp4modeValC{
        }
        ///Comparator 4 inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp4insel{}; 
        namespace Comp4inselValC{
        }
        ///Comparator 4 non inverted input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp4inpsel{}; 
        namespace Comp4inpselValC{
        }
        ///Comparator 4 window mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> com4winmode{}; 
        namespace Com4winmodeValC{
        }
        ///Comparator 4 output               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp4OutSel{}; 
        namespace Comp4outselValC{
        }
        ///Comparator 4 output               polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp4pol{}; 
        namespace Comp4polValC{
        }
        ///Comparator 4 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp4hyst{}; 
        namespace Comp4hystValC{
        }
        ///Comparator 4 blanking               source
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
    namespace Nonecomp6Csr{    ///<control and status register
        using Addr = Register::Address<0x40010034,0x3fe04102,0,unsigned>;
        ///Comparator 6 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp6en{}; 
        namespace Comp6enValC{
        }
        ///Comparator 6 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp6mode{}; 
        namespace Comp6modeValC{
        }
        ///Comparator 6 inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp6insel{}; 
        namespace Comp6inselValC{
        }
        ///Comparator 6 non inverted input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp6inpsel{}; 
        namespace Comp6inpselValC{
        }
        ///Comparator 6 window mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> com6winmode{}; 
        namespace Com6winmodeValC{
        }
        ///Comparator 6 output               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp6OutSel{}; 
        namespace Comp6outselValC{
        }
        ///Comparator 6 output               polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp6pol{}; 
        namespace Comp6polValC{
        }
        ///Comparator 6 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp6hyst{}; 
        namespace Comp6hystValC{
        }
        ///Comparator 6 blanking               source
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
}
