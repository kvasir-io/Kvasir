#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Comparator
    namespace Nonecomp1Csr{    ///<control and status register
        using Addr = Register::Address<0x4001001c,0x3fe04380,0,unsigned>;
        ///Comparator 1 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp1en{}; 
        ///COMP1_INP_DAC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> comp1InpDac{}; 
        ///Comparator 1 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp1mode{}; 
        ///Comparator 1 inverting input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp1insel{}; 
        ///Comparator 1 output
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp1OutSel{}; 
        ///Comparator 1 output
              polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp1pol{}; 
        ///Comparator 1 hysteresis
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp1hyst{}; 
        ///Comparator 1 blanking
              source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp1Blanking{}; 
        ///Comparator 1 output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp1out{}; 
        ///Comparator 1 lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp1lock{}; 
    }
    namespace Nonecomp2Csr{    ///<control and status register
        using Addr = Register::Address<0x40010020,0x3fe04102,0,unsigned>;
        ///Comparator 2 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp2en{}; 
        ///Comparator 2 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp2mode{}; 
        ///Comparator 2 inverting input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp2insel{}; 
        ///Comparator 2 non inverted input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp2inpsel{}; 
        ///Comparator 1inverting input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> comp2inmsel{}; 
        ///Comparator 2 output
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp2OutSel{}; 
        ///Comparator 2 output
              polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp2pol{}; 
        ///Comparator 2 hysteresis
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp2hyst{}; 
        ///Comparator 2 blanking
              source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp2Blanking{}; 
        ///Comparator 2 output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp2out{}; 
        ///Comparator 2 lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp2lock{}; 
    }
    namespace Nonecomp3Csr{    ///<control and status register
        using Addr = Register::Address<0x40010024,0x3fe04302,0,unsigned>;
        ///Comparator 3 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp3en{}; 
        ///Comparator 3 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp3mode{}; 
        ///Comparator 3 inverting input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp3insel{}; 
        ///Comparator 3 non inverted input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp3inpsel{}; 
        ///Comparator 3 output
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp3OutSel{}; 
        ///Comparator 3 output
              polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp3pol{}; 
        ///Comparator 3 hysteresis
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp3hyst{}; 
        ///Comparator 3 blanking
              source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp3Blanking{}; 
        ///Comparator 3 output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp3out{}; 
        ///Comparator 3 lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp3lock{}; 
    }
    namespace Nonecomp4Csr{    ///<control and status register
        using Addr = Register::Address<0x40010028,0x3fe04102,0,unsigned>;
        ///Comparator 4 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp4en{}; 
        ///Comparator 4 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp4mode{}; 
        ///Comparator 4 inverting input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp4insel{}; 
        ///Comparator 4 non inverted input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp4inpsel{}; 
        ///Comparator 4 window mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> com4winmode{}; 
        ///Comparator 4 output
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp4OutSel{}; 
        ///Comparator 4 output
              polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp4pol{}; 
        ///Comparator 4 hysteresis
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp4hyst{}; 
        ///Comparator 4 blanking
              source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp4Blanking{}; 
        ///Comparator 4 output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp4out{}; 
        ///Comparator 4 lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp4lock{}; 
    }
    namespace Nonecomp5Csr{    ///<control and status register
        using Addr = Register::Address<0x4001002c,0x3fe04302,0,unsigned>;
        ///Comparator 5 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp5en{}; 
        ///Comparator 5 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp5mode{}; 
        ///Comparator 5 inverting input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp5insel{}; 
        ///Comparator 5 non inverted input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp5inpsel{}; 
        ///Comparator 5 output
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp5OutSel{}; 
        ///Comparator 5 output
              polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp5pol{}; 
        ///Comparator 5 hysteresis
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp5hyst{}; 
        ///Comparator 5 blanking
              source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp5Blanking{}; 
        ///Comparator51 output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp5out{}; 
        ///Comparator 5 lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp5lock{}; 
    }
    namespace Nonecomp6Csr{    ///<control and status register
        using Addr = Register::Address<0x40010030,0x3fe04102,0,unsigned>;
        ///Comparator 6 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp6en{}; 
        ///Comparator 6 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp6mode{}; 
        ///Comparator 6 inverting input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp6insel{}; 
        ///Comparator 6 non inverted input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp6inpsel{}; 
        ///Comparator 6 window mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> com6winmode{}; 
        ///Comparator 6 output
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp6OutSel{}; 
        ///Comparator 6 output
              polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp6pol{}; 
        ///Comparator 6 hysteresis
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp6hyst{}; 
        ///Comparator 6 blanking
              source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp6Blanking{}; 
        ///Comparator 6 output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp6out{}; 
        ///Comparator 6 lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp6lock{}; 
    }
    namespace Nonecomp7Csr{    ///<control and status register
        using Addr = Register::Address<0x40010034,0x3fe04302,0,unsigned>;
        ///Comparator 7 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp7en{}; 
        ///Comparator 7 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp7mode{}; 
        ///Comparator 7 inverting input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp7insel{}; 
        ///Comparator 7 non inverted input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp7inpsel{}; 
        ///Comparator 7 output
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp7OutSel{}; 
        ///Comparator 7 output
              polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp7pol{}; 
        ///Comparator 7 hysteresis
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp7hyst{}; 
        ///Comparator 7 blanking
              source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp7Blanking{}; 
        ///Comparator 7 output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> comp7out{}; 
        ///Comparator 7 lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp7lock{}; 
    }
}
