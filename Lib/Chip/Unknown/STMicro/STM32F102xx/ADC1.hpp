#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog to digital converter
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40012400,0xffffffe0,0,unsigned>;
        ///Regular channel start flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> strt{}; 
        ///Injected channel start
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jstrt{}; 
        ///Injected channel end of
              conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jeoc{}; 
        ///Regular channel end of
              conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///Analog watchdog flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> awd{}; 
    }
    namespace Nonecr1{    ///<control register 1
        using Addr = Register::Address<0x40012404,0xff300000,0,unsigned>;
        ///Analog watchdog enable on regular
              channels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awden{}; 
        ///Analog watchdog enable on injected
              channels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jawden{}; 
        ///Dual mode selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dualmod{}; 
        ///Discontinuous mode channel
              count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> discnum{}; 
        ///Discontinuous mode on injected
              channels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> jdiscen{}; 
        ///Discontinuous mode on regular
              channels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> discen{}; 
        ///Automatic injected group
              conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jauto{}; 
        ///Enable the watchdog on a single channel
              in scan mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awdsgl{}; 
        ///Scan mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> scan{}; 
        ///Interrupt enable for injected
              channels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> jeocie{}; 
        ///Analog watchdog interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Interrupt enable for EOC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eocie{}; 
        ///Analog watchdog channel select
              bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> awdch{}; 
    }
    namespace Nonecr2{    ///<control register 2
        using Addr = Register::Address<0x40012408,0xff0106f0,0,unsigned>;
        ///Temperature sensor and VREFINT
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsvrefe{}; 
        ///Start conversion of regular
              channels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> swstart{}; 
        ///Start conversion of injected
              channels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///External trigger conversion mode for
              regular channels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> exttrig{}; 
        ///External event select for regular
              group
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> extsel{}; 
        ///External trigger conversion mode for
              injected channels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> jexttrig{}; 
        ///External event select for injected
              group
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///Data alignment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> align{}; 
        ///Direct memory access mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Reset calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rstcal{}; 
        ///A/D calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cal{}; 
        ///Continuous conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cont{}; 
        ///A/D converter ON / OFF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adon{}; 
    }
    namespace Nonesmpr1{    ///<sample time register 1
        using Addr = Register::Address<0x4001240c,0x00000000,0,unsigned>;
        ///Sample time bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> smpxX{}; 
    }
    namespace Nonesmpr2{    ///<sample time register 2
        using Addr = Register::Address<0x40012410,0x00000000,0,unsigned>;
        ///Sample time bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> smpxX{}; 
    }
    namespace Nonejofr1{    ///<injected channel data offset register
          x
        using Addr = Register::Address<0x40012414,0xfffff000,0,unsigned>;
        ///Data offset for injected channel
              x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset1{}; 
    }
    namespace Nonejofr2{    ///<injected channel data offset register
          x
        using Addr = Register::Address<0x40012418,0xfffff000,0,unsigned>;
        ///Data offset for injected channel
              x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset2{}; 
    }
    namespace Nonejofr3{    ///<injected channel data offset register
          x
        using Addr = Register::Address<0x4001241c,0xfffff000,0,unsigned>;
        ///Data offset for injected channel
              x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset3{}; 
    }
    namespace Nonejofr4{    ///<injected channel data offset register
          x
        using Addr = Register::Address<0x40012420,0xfffff000,0,unsigned>;
        ///Data offset for injected channel
              x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset4{}; 
    }
    namespace Nonehtr{    ///<watchdog higher threshold
          register
        using Addr = Register::Address<0x40012424,0xfffff000,0,unsigned>;
        ///Analog watchdog higher
              threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ht{}; 
    }
    namespace Noneltr{    ///<watchdog lower threshold
          register
        using Addr = Register::Address<0x40012428,0xfffff000,0,unsigned>;
        ///Analog watchdog lower
              threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lt{}; 
    }
    namespace Nonesqr1{    ///<regular sequence register 1
        using Addr = Register::Address<0x4001242c,0xff000000,0,unsigned>;
        ///Regular channel sequence
              length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> l{}; 
        ///16th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> sq16{}; 
        ///15th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> sq15{}; 
        ///14th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> sq14{}; 
        ///13th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq13{}; 
    }
    namespace Nonesqr2{    ///<regular sequence register 2
        using Addr = Register::Address<0x40012430,0xc0000000,0,unsigned>;
        ///12th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> sq12{}; 
        ///11th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> sq11{}; 
        ///10th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> sq10{}; 
        ///9th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> sq9{}; 
        ///8th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> sq8{}; 
        ///7th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq7{}; 
    }
    namespace Nonesqr3{    ///<regular sequence register 3
        using Addr = Register::Address<0x40012434,0xc0000000,0,unsigned>;
        ///6th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> sq6{}; 
        ///5th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> sq5{}; 
        ///4th conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> sq4{}; 
        ///3rd conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> sq3{}; 
        ///2nd conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> sq2{}; 
        ///1st conversion in regular
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq1{}; 
    }
    namespace Nonejsqr{    ///<injected sequence register
        using Addr = Register::Address<0x40012438,0xffc00000,0,unsigned>;
        ///Injected sequence length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> jl{}; 
        ///4th conversion in injected
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> jsq4{}; 
        ///3rd conversion in injected
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> jsq3{}; 
        ///2nd conversion in injected
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> jsq2{}; 
        ///1st conversion in injected
              sequence
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> jsq1{}; 
    }
    namespace Nonejdr1{    ///<injected data register x
        using Addr = Register::Address<0x4001243c,0xffff0000,0,unsigned>;
        ///Injected data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Nonejdr2{    ///<injected data register x
        using Addr = Register::Address<0x40012440,0xffff0000,0,unsigned>;
        ///Injected data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Nonejdr3{    ///<injected data register x
        using Addr = Register::Address<0x40012444,0xffff0000,0,unsigned>;
        ///Injected data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Nonejdr4{    ///<injected data register x
        using Addr = Register::Address<0x40012448,0xffff0000,0,unsigned>;
        ///Injected data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Nonedr{    ///<regular data register
        using Addr = Register::Address<0x4001244c,0xffff0000,0,unsigned>;
        ///Regular data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
