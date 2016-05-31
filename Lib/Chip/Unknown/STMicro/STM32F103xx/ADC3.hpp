#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog to digital converter
    namespace Adc3Sr{    ///<status register
        using Addr = Register::Address<0x40013c00,0xffffffe0,0x00000000,unsigned>;
        ///Regular channel start flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> strt{}; 
        ///Injected channel start              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jstrt{}; 
        ///Injected channel end of              conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jeoc{}; 
        ///Regular channel end of              conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///Analog watchdog flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> awd{}; 
    }
    namespace Adc3Cr1{    ///<control register 1
        using Addr = Register::Address<0x40013c04,0xff3f0000,0x00000000,unsigned>;
        ///Analog watchdog enable on regular              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awden{}; 
        ///Analog watchdog enable on injected              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jawden{}; 
        ///Discontinuous mode channel              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> discnum{}; 
        ///Discontinuous mode on injected              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> jdiscen{}; 
        ///Discontinuous mode on regular              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> discen{}; 
        ///Automatic injected group              conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jauto{}; 
        ///Enable the watchdog on a single channel              in scan mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awdsgl{}; 
        ///Scan mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> scan{}; 
        ///Interrupt enable for injected              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> jeocie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Interrupt enable for EOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eocie{}; 
        ///Analog watchdog channel select              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> awdch{}; 
    }
    namespace Adc3Cr2{    ///<control register 2
        using Addr = Register::Address<0x40013c08,0xff0106f0,0x00000000,unsigned>;
        ///Temperature sensor and VREFINT              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsvrefe{}; 
        ///Start conversion of regular              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> swstart{}; 
        ///Start conversion of injected              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///External trigger conversion mode for              regular channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> exttrig{}; 
        ///External event select for regular              group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> extsel{}; 
        ///External trigger conversion mode for              injected channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> jexttrig{}; 
        ///External event select for injected              group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///Data alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> align{}; 
        ///Direct memory access mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Reset calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rstcal{}; 
        ///A/D calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cal{}; 
        ///Continuous conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cont{}; 
        ///A/D converter ON / OFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adon{}; 
    }
    namespace Adc3Smpr1{    ///<sample time register 1
        using Addr = Register::Address<0x40013c0c,0xff000000,0x00000000,unsigned>;
        ///Channel 10 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> smp10{}; 
        ///Channel 11 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> smp11{}; 
        ///Channel 12 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> smp12{}; 
        ///Channel 13 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> smp13{}; 
        ///Channel 14 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> smp14{}; 
        ///Channel 15 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> smp15{}; 
        ///Channel 16 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> smp16{}; 
        ///Channel 17 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> smp17{}; 
    }
    namespace Adc3Smpr2{    ///<sample time register 2
        using Addr = Register::Address<0x40013c10,0xc0000000,0x00000000,unsigned>;
        ///Channel 0 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> smp0{}; 
        ///Channel 1 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> smp1{}; 
        ///Channel 2 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> smp2{}; 
        ///Channel 3 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> smp3{}; 
        ///Channel 4 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> smp4{}; 
        ///Channel 5 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> smp5{}; 
        ///Channel 6 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> smp6{}; 
        ///Channel 7 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> smp7{}; 
        ///Channel 8 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> smp8{}; 
        ///Channel 9 sample time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> smp9{}; 
    }
    namespace Adc3Jofr1{    ///<injected channel data offset register          x
        using Addr = Register::Address<0x40013c14,0xfffff000,0x00000000,unsigned>;
        ///Data offset for injected channel              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset1{}; 
    }
    namespace Adc3Jofr2{    ///<injected channel data offset register          x
        using Addr = Register::Address<0x40013c18,0xfffff000,0x00000000,unsigned>;
        ///Data offset for injected channel              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset2{}; 
    }
    namespace Adc3Jofr3{    ///<injected channel data offset register          x
        using Addr = Register::Address<0x40013c1c,0xfffff000,0x00000000,unsigned>;
        ///Data offset for injected channel              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset3{}; 
    }
    namespace Adc3Jofr4{    ///<injected channel data offset register          x
        using Addr = Register::Address<0x40013c20,0xfffff000,0x00000000,unsigned>;
        ///Data offset for injected channel              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset4{}; 
    }
    namespace Adc3Htr{    ///<watchdog higher threshold          register
        using Addr = Register::Address<0x40013c24,0xfffff000,0x00000000,unsigned>;
        ///Analog watchdog higher              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ht{}; 
    }
    namespace Adc3Ltr{    ///<watchdog lower threshold          register
        using Addr = Register::Address<0x40013c28,0xfffff000,0x00000000,unsigned>;
        ///Analog watchdog lower              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lt{}; 
    }
    namespace Adc3Sqr1{    ///<regular sequence register 1
        using Addr = Register::Address<0x40013c2c,0xff000000,0x00000000,unsigned>;
        ///Regular channel sequence              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> l{}; 
        ///16th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> sq16{}; 
        ///15th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> sq15{}; 
        ///14th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> sq14{}; 
        ///13th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq13{}; 
    }
    namespace Adc3Sqr2{    ///<regular sequence register 2
        using Addr = Register::Address<0x40013c30,0xc0000000,0x00000000,unsigned>;
        ///12th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> sq12{}; 
        ///11th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> sq11{}; 
        ///10th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> sq10{}; 
        ///9th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> sq9{}; 
        ///8th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> sq8{}; 
        ///7th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq7{}; 
    }
    namespace Adc3Sqr3{    ///<regular sequence register 3
        using Addr = Register::Address<0x40013c34,0xc0000000,0x00000000,unsigned>;
        ///6th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> sq6{}; 
        ///5th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> sq5{}; 
        ///4th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> sq4{}; 
        ///3rd conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> sq3{}; 
        ///2nd conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> sq2{}; 
        ///1st conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq1{}; 
    }
    namespace Adc3Jsqr{    ///<injected sequence register
        using Addr = Register::Address<0x40013c38,0xffc00000,0x00000000,unsigned>;
        ///Injected sequence length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> jl{}; 
        ///4th conversion in injected              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> jsq4{}; 
        ///3rd conversion in injected              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> jsq3{}; 
        ///2nd conversion in injected              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> jsq2{}; 
        ///1st conversion in injected              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> jsq1{}; 
    }
    namespace Adc3Jdr1{    ///<injected data register x
        using Addr = Register::Address<0x40013c3c,0xffff0000,0x00000000,unsigned>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Adc3Jdr2{    ///<injected data register x
        using Addr = Register::Address<0x40013c40,0xffff0000,0x00000000,unsigned>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Adc3Jdr3{    ///<injected data register x
        using Addr = Register::Address<0x40013c44,0xffff0000,0x00000000,unsigned>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Adc3Jdr4{    ///<injected data register x
        using Addr = Register::Address<0x40013c48,0xffff0000,0x00000000,unsigned>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Adc3Dr{    ///<regular data register
        using Addr = Register::Address<0x40013c4c,0xffff0000,0x00000000,unsigned>;
        ///Regular data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
