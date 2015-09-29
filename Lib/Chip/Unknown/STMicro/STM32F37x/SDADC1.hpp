#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Sigma-delta analog-to-digital
      converter
    namespace Nonecr1{    ///<control register 1
        using Addr = Register::Address<0x40016000,0x7ffc20e0,0,unsigned>;
        ///End of calibration interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eocalie{}; 
        ///Injected end of conversion interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jeocie{}; 
        ///Injected data overrun interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular end of conversion interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Regular data overrun interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Reference voltage
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> refv{}; 
        ///Slow clock mode enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slowck{}; 
        ///Enter Standby mode when
              idle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sbi{}; 
        ///Enter power down mode when
              idle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdi{}; 
        ///Launch a injected conversion
              synchronously with SDADC1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Launch regular conversion synchronously
              with SDADC1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///DMA channel enabled to read data for the
              injected channel group
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///DMA channel enabled to read data for the
              regular channel
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Initialization mode
              request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace Nonecr2{    ///<control register 2
        using Addr = Register::Address<0x40016004,0xfe301088,0,unsigned>;
        ///Fast conversion mode
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Software start of a conversion on the
              regular channel
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Continuous mode selection for regular
              conversions
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Regular channel selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> rch{}; 
        ///Start a conversion of the injected group
              of channels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///Trigger enable and trigger edge
              selection for injected conversions
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Trigger signal selection for launching
              injected conversions
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///Delay start of injected
              conversions.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jds{}; 
        ///Continuous mode selection for injected
              conversions
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jcont{}; 
        ///Start calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> startcalib{}; 
        ///Number of calibration sequences to be
              performed (number of valid
              configurations)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> calibcnt{}; 
        ///SDADC enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adon{}; 
    }
    namespace Noneisr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016008,0x7fff0fe0,0,unsigned>;
        ///Initialization mode is
              ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> initrdy{}; 
        ///Stabilization in progress
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> stabip{}; 
        ///Regular conversion in progress
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Injected conversion in progress
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Calibration in progress
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> calibip{}; 
        ///Regular conversion overrun
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///End of regular conversion
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///Injected conversion overrun
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///End of injected conversion
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jeocf{}; 
        ///End of calibration flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eocalf{}; 
    }
    namespace Noneclrisr{    ///<interrupt and status clear
          register
        using Addr = Register::Address<0x4001600c,0xffffffea,0,unsigned>;
        ///Clear the regular conversion overrun
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
        ///Clear the end of calibration
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clreocalf{}; 
    }
    namespace Nonejchgr{    ///<injected channel group selection
          register
        using Addr = Register::Address<0x40016014,0xfffffe00,0,unsigned>;
        ///Injected channel group
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace Noneconf0r{    ///<configuration 0 register
        using Addr = Register::Address<0x40016020,0x338ff000,0,unsigned>;
        ///Common mode for configuration
              0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> common0{}; 
        ///Single-ended mode for configuration
              0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> se0{}; 
        ///Gain setting for configuration
              0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> gain0{}; 
        ///Twelve-bit calibration offset for
              configuration 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset0{}; 
    }
    namespace Noneconf1r{    ///<configuration 1 register
        using Addr = Register::Address<0x40016024,0x338ff000,0,unsigned>;
        ///Common mode for configuration
              1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> common1{}; 
        ///Single-ended mode for configuration
              1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> se1{}; 
        ///Gain setting for configuration
              1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> gain1{}; 
        ///Twelve-bit calibration offset for
              configuration 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset1{}; 
    }
    namespace Noneconf2r{    ///<configuration 2 register
        using Addr = Register::Address<0x40016028,0x338ff000,0,unsigned>;
        ///Common mode for configuration
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> common2{}; 
        ///Single-ended mode for configuration
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> se2{}; 
        ///Gain setting for configuration
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> gain2{}; 
        ///Twelve-bit calibration offset for
              configuration 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset2{}; 
    }
    namespace Noneconfchr1{    ///<channel configuration register
          1
        using Addr = Register::Address<0x40016040,0xcccccccc,0,unsigned>;
        ///CONFCH7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> confch7{}; 
        ///CONFCH6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> confch6{}; 
        ///CONFCH5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> confch5{}; 
        ///CONFCH4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> confch4{}; 
        ///CONFCH3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> confch3{}; 
        ///CONFCH2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> confch2{}; 
        ///CONFCH1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> confch1{}; 
        ///CONFCH0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> confch0{}; 
    }
    namespace Noneconfchr2{    ///<channel configuration register
          2
        using Addr = Register::Address<0x40016044,0xfffffffc,0,unsigned>;
        ///Channel 8 configuration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> confch8{}; 
    }
    namespace Nonejdatar{    ///<data register for injected
          group
        using Addr = Register::Address<0x40016060,0xe1ff0000,0,unsigned>;
        ///Injected channel most recently
              converted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> jdatach{}; 
        ///Injected group conversion
              data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Nonerdatar{    ///<data register for the regular
          channel
        using Addr = Register::Address<0x40016064,0xffff0000,0,unsigned>;
        ///Regular channel conversion
              data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
    namespace Nonejdata12r{    ///<SDADC1 and SDADC2 injected data
          register
        using Addr = Register::Address<0x40016070,0x00000000,0,unsigned>;
        ///Injected group conversion data for
              SDADC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> jdata2{}; 
        ///Injected group conversion data for
              SDADC1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata1{}; 
    }
    namespace Nonerdata12r{    ///<SDADC1 and SDADC2 regular data
          register
        using Addr = Register::Address<0x40016074,0x00000000,0,unsigned>;
        ///Regular conversion data for
              SDADC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> rdata2{}; 
        ///Regular conversion data for
              SDADC1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rdata1{}; 
    }
    namespace Nonejdata13r{    ///<SDADC1 and SDADC3 injected data
          register
        using Addr = Register::Address<0x40016078,0x00000000,0,unsigned>;
        ///Injected group conversion data for
              SDADC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> jdata3{}; 
        ///Injected group conversion data for
              SDADC1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata1{}; 
    }
    namespace Nonerdata13r{    ///<SDADC1 and SDADC3 regular data
          register
        using Addr = Register::Address<0x4001607c,0x00000000,0,unsigned>;
        ///Regular conversion data for
              SDADC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> rdata3{}; 
        ///Regular conversion data for
              SDADC1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rdata1{}; 
    }
}
