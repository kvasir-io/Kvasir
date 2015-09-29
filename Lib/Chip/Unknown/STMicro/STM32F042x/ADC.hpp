#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-digital converter
    namespace Noneisr{    ///<interrupt and status register
        using Addr = Register::Address<0x40012400,0xffffff60,0,unsigned>;
        ///Analog watchdog flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd{}; 
        ///ADC overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///End of sequence flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eos{}; 
        ///End of conversion flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///End of sampling flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmp{}; 
        ///ADC ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdy{}; 
    }
    namespace Noneier{    ///<interrupt enable register
        using Addr = Register::Address<0x40012404,0xffffff60,0,unsigned>;
        ///Analog watchdog interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Overrun interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovrie{}; 
        ///End of conversion sequence interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eosie{}; 
        ///End of conversion interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eocie{}; 
        ///End of sampling flag interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmpie{}; 
        ///ADC ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdyie{}; 
    }
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40012408,0x7fffffe8,0,unsigned>;
        ///ADC calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> adcal{}; 
        ///ADC stop conversion               command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adstp{}; 
        ///ADC start conversion               command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adstart{}; 
        ///ADC disable command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addis{}; 
        ///ADC enable command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aden{}; 
    }
    namespace Nonecfgr1{    ///<configuration register 1
        using Addr = Register::Address<0x4001240c,0x833e0200,0,unsigned>;
        ///Analog watchdog channel               selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> awdch{}; 
        ///Analog watchdog enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awden{}; 
        ///Enable the watchdog on a single channel               or on all channels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awdsgl{}; 
        ///Discontinuous mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> discen{}; 
        ///Auto-off mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> autoff{}; 
        ///Auto-delayed conversion               mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> autdly{}; 
        ///Single / continuous conversion               mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cont{}; 
        ///Overrun management mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovrmod{}; 
        ///External trigger enable and polarity               selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> exten{}; 
        ///External trigger selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> extsel{}; 
        ///Data alignment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> align{}; 
        ///Data resolution
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> res{}; 
        ///Scan sequence direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> scandir{}; 
        ///Direct memery access               configuration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmacfg{}; 
        ///Direct memory access               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
    }
    namespace Nonecfgr2{    ///<configuration register 2
        using Addr = Register::Address<0x40012410,0x3fffffff,0,unsigned>;
        ///JITOFF_D4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> jitoffD4{}; 
        ///JITOFF_D2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> jitoffD2{}; 
    }
    namespace Nonesmpr{    ///<sampling time register
        using Addr = Register::Address<0x40012414,0xfffffff8,0,unsigned>;
        ///Sampling time selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> smpr{}; 
    }
    namespace Nonetr{    ///<watchdog threshold register
        using Addr = Register::Address<0x40012420,0xf000f000,0,unsigned>;
        ///Analog watchdog higher               threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> ht{}; 
        ///Analog watchdog lower               threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lt{}; 
    }
    namespace Nonechselr{    ///<channel selection register
        using Addr = Register::Address<0x40012428,0xfff80000,0,unsigned>;
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> chsel18{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> chsel17{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> chsel16{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> chsel15{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> chsel14{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> chsel13{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> chsel12{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> chsel11{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chsel10{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> chsel9{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chsel8{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chsel7{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chsel6{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chsel5{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chsel4{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chsel3{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chsel2{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chsel1{}; 
        ///Channel-x selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chsel0{}; 
    }
    namespace Nonedr{    ///<data register
        using Addr = Register::Address<0x40012440,0xffff0000,0,unsigned>;
        ///Converted data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Noneccr{    ///<common configuration register
        using Addr = Register::Address<0x40012708,0xfe3fffff,0,unsigned>;
        ///VBAT enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> vbaten{}; 
        ///Temperature sensor enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsen{}; 
        ///Temperature sensor and VREFINT               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vrefen{}; 
    }
}
