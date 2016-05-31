#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog-to-digital converter
    namespace AdcIsr{    ///<interrupt and status register
        using Addr = Register::Address<0x40012400,0xfffff760,0x00000000,unsigned>;
        ///ADC ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdy{}; 
        ///End of sampling flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmp{}; 
        ///End of conversion flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///End of sequence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eos{}; 
        ///ADC overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Analog watchdog flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd{}; 
        ///End Of Calibration flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eocal{}; 
    }
    namespace AdcIer{    ///<interrupt enable register
        using Addr = Register::Address<0x40012404,0xfffff760,0x00000000,unsigned>;
        ///ADC ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdyie{}; 
        ///End of sampling flag interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmpie{}; 
        ///End of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eocie{}; 
        ///End of conversion sequence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eosie{}; 
        ///Overrun interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovrie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///End of calibration interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eocalie{}; 
    }
    namespace AdcCr{    ///<control register
        using Addr = Register::Address<0x40012408,0x6fffffe8,0x00000000,unsigned>;
        ///ADC enable command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aden{}; 
        ///ADC disable command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addis{}; 
        ///ADC start conversion              command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adstart{}; 
        ///ADC stop conversion              command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adstp{}; 
        ///ADC Voltage Regulator              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> advregen{}; 
        ///ADC calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> adcal{}; 
    }
    namespace AdcCfgr1{    ///<configuration register 1
        using Addr = Register::Address<0x4001240c,0x833e0200,0x00000000,unsigned>;
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> awdch{}; 
        ///Analog watchdog enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awden{}; 
        ///Enable the watchdog on a single channel              or on all channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awdsgl{}; 
        ///Discontinuous mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> discen{}; 
        ///Auto-off mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> autoff{}; 
        ///Auto-delayed conversion              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> autdly{}; 
        ///Single / continuous conversion              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cont{}; 
        ///Overrun management mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovrmod{}; 
        ///External trigger enable and polarity              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> exten{}; 
        ///External trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> extsel{}; 
        ///Data alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> align{}; 
        ///Data resolution
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> res{}; 
        ///Scan sequence direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> scandir{}; 
        ///Direct memery access              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmacfg{}; 
        ///Direct memory access              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
    }
    namespace AdcCfgr2{    ///<configuration register 2
        using Addr = Register::Address<0x40012410,0x3ffffc02,0x00000000,unsigned>;
        ///Oversampler Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovse{}; 
        ///Oversampling ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> ovsr{}; 
        ///Oversampling shift
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,unsigned> ovss{}; 
        ///Triggered Oversampling
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tovs{}; 
        ///ADC clock mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ckmode{}; 
    }
    namespace AdcSmpr{    ///<sampling time register
        using Addr = Register::Address<0x40012414,0xfffffff8,0x00000000,unsigned>;
        ///Sampling time selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> smpr{}; 
    }
    namespace AdcTr{    ///<watchdog threshold register
        using Addr = Register::Address<0x40012420,0xf000f000,0x00000000,unsigned>;
        ///Analog watchdog higher              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> ht{}; 
        ///Analog watchdog lower              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lt{}; 
    }
    namespace AdcChselr{    ///<channel selection register
        using Addr = Register::Address<0x40012428,0xfff80000,0x00000000,unsigned>;
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> chsel18{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> chsel17{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> chsel16{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> chsel15{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> chsel14{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> chsel13{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> chsel12{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> chsel11{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chsel10{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> chsel9{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chsel8{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chsel7{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chsel6{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chsel5{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chsel4{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chsel3{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chsel2{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chsel1{}; 
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chsel0{}; 
    }
    namespace AdcDr{    ///<data register
        using Addr = Register::Address<0x40012440,0xffff0000,0x00000000,unsigned>;
        ///Converted data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCalfact{    ///<ADC Calibration factor
        using Addr = Register::Address<0x400124b4,0xffffff80,0x00000000,unsigned>;
        ///Calibration factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> calfact{}; 
    }
    namespace AdcCcr{    ///<ADC common configuration          register
        using Addr = Register::Address<0x40012708,0xfc03ffff,0x00000000,unsigned>;
        ///ADC prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> presc{}; 
        ///VREFINT enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vrefen{}; 
        ///Temperature sensor enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsen{}; 
        ///VLCD enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> vlcden{}; 
        ///Low Frequency Mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> lfmen{}; 
    }
}
