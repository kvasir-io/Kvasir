#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-digital converter
    namespace Noneisr{    ///<interrupt and status register
        using Addr = Register::Address<0x40012400,0xfffff760,0,unsigned>;
        ///ADC ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdy{}; 
        namespace AdrdyValC{
        }
        ///End of sampling flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmp{}; 
        namespace EosmpValC{
        }
        ///End of conversion flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc{}; 
        namespace EocValC{
        }
        ///End of sequence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eos{}; 
        namespace EosValC{
        }
        ///ADC overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
        ///Analog watchdog flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd{}; 
        namespace AwdValC{
        }
        ///End Of Calibration flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eocal{}; 
        namespace EocalValC{
        }
    }
    namespace Noneier{    ///<interrupt enable register
        using Addr = Register::Address<0x40012404,0xfffff760,0,unsigned>;
        ///ADC ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdyie{}; 
        namespace AdrdyieValC{
        }
        ///End of sampling flag interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmpie{}; 
        namespace EosmpieValC{
        }
        ///End of conversion interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eocie{}; 
        namespace EocieValC{
        }
        ///End of conversion sequence interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eosie{}; 
        namespace EosieValC{
        }
        ///Overrun interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovrie{}; 
        namespace OvrieValC{
        }
        ///Analog watchdog interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awdie{}; 
        namespace AwdieValC{
        }
        ///End of calibration interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eocalie{}; 
        namespace EocalieValC{
        }
    }
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40012408,0x6fffffe8,0,unsigned>;
        ///ADC enable command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aden{}; 
        namespace AdenValC{
        }
        ///ADC disable command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addis{}; 
        namespace AddisValC{
        }
        ///ADC start conversion
              command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adstart{}; 
        namespace AdstartValC{
        }
        ///ADC stop conversion
              command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adstp{}; 
        namespace AdstpValC{
        }
        ///ADC Voltage Regulator
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> advregen{}; 
        namespace AdvregenValC{
        }
        ///ADC calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> adcal{}; 
        namespace AdcalValC{
        }
    }
    namespace Nonecfgr1{    ///<configuration register 1
        using Addr = Register::Address<0x4001240c,0x833e0200,0,unsigned>;
        ///Analog watchdog channel
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> awdch{}; 
        namespace AwdchValC{
        }
        ///Analog watchdog enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awden{}; 
        namespace AwdenValC{
        }
        ///Enable the watchdog on a single channel
              or on all channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awdsgl{}; 
        namespace AwdsglValC{
        }
        ///Discontinuous mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> discen{}; 
        namespace DiscenValC{
        }
        ///Auto-off mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> autoff{}; 
        namespace AutoffValC{
        }
        ///Auto-delayed conversion
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> autdly{}; 
        namespace AutdlyValC{
        }
        ///Single / continuous conversion
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cont{}; 
        namespace ContValC{
        }
        ///Overrun management mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovrmod{}; 
        namespace OvrmodValC{
        }
        ///External trigger enable and polarity
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> exten{}; 
        namespace ExtenValC{
        }
        ///External trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> extsel{}; 
        namespace ExtselValC{
        }
        ///Data alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> align{}; 
        namespace AlignValC{
        }
        ///Data resolution
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> res{}; 
        namespace ResValC{
        }
        ///Scan sequence direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> scandir{}; 
        namespace ScandirValC{
        }
        ///Direct memery access
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmacfg{}; 
        namespace DmacfgValC{
        }
        ///Direct memory access
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
    }
    namespace Nonecfgr2{    ///<configuration register 2
        using Addr = Register::Address<0x40012410,0x3ffffc02,0,unsigned>;
        ///Oversampler Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovse{}; 
        namespace OvseValC{
        }
        ///Oversampling ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> ovsr{}; 
        namespace OvsrValC{
        }
        ///Oversampling shift
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,unsigned> ovss{}; 
        namespace OvssValC{
        }
        ///Triggered Oversampling
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tovs{}; 
        namespace TovsValC{
        }
        ///ADC clock mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ckmode{}; 
        namespace CkmodeValC{
        }
    }
    namespace Nonesmpr{    ///<sampling time register
        using Addr = Register::Address<0x40012414,0xfffffff8,0,unsigned>;
        ///Sampling time selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> smpr{}; 
        namespace SmprValC{
        }
    }
    namespace Nonetr{    ///<watchdog threshold register
        using Addr = Register::Address<0x40012420,0xf000f000,0,unsigned>;
        ///Analog watchdog higher
              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> ht{}; 
        namespace HtValC{
        }
        ///Analog watchdog lower
              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lt{}; 
        namespace LtValC{
        }
    }
    namespace Nonechselr{    ///<channel selection register
        using Addr = Register::Address<0x40012428,0xfff80000,0,unsigned>;
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> chsel18{}; 
        namespace Chsel18ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> chsel17{}; 
        namespace Chsel17ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> chsel16{}; 
        namespace Chsel16ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> chsel15{}; 
        namespace Chsel15ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> chsel14{}; 
        namespace Chsel14ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> chsel13{}; 
        namespace Chsel13ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> chsel12{}; 
        namespace Chsel12ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> chsel11{}; 
        namespace Chsel11ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chsel10{}; 
        namespace Chsel10ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> chsel9{}; 
        namespace Chsel9ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chsel8{}; 
        namespace Chsel8ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chsel7{}; 
        namespace Chsel7ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chsel6{}; 
        namespace Chsel6ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chsel5{}; 
        namespace Chsel5ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chsel4{}; 
        namespace Chsel4ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chsel3{}; 
        namespace Chsel3ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chsel2{}; 
        namespace Chsel2ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chsel1{}; 
        namespace Chsel1ValC{
        }
        ///Channel-x selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chsel0{}; 
        namespace Chsel0ValC{
        }
    }
    namespace Nonedr{    ///<data register
        using Addr = Register::Address<0x40012440,0xffff0000,0,unsigned>;
        ///Converted data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Nonecalfact{    ///<ADC Calibration factor
        using Addr = Register::Address<0x400124b4,0xffffff80,0,unsigned>;
        ///Calibration factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> calfact{}; 
        namespace CalfactValC{
        }
    }
    namespace Noneccr{    ///<ADC common configuration
          register
        using Addr = Register::Address<0x40012708,0xfc03ffff,0,unsigned>;
        ///ADC prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> presc{}; 
        namespace PrescValC{
        }
        ///VREFINT enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vrefen{}; 
        namespace VrefenValC{
        }
        ///Temperature sensor enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsen{}; 
        namespace TsenValC{
        }
        ///VLCD enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> vlcden{}; 
        namespace VlcdenValC{
        }
        ///Low Frequency Mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> lfmen{}; 
        namespace LfmenValC{
        }
    }
}
