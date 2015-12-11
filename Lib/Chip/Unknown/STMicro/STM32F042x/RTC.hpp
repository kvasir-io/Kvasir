#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-time clock
    namespace Nonetr{    ///<time register
        using Addr = Register::Address<0x40002800,0xff808080,0,unsigned>;
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Hour tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///Hour units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Minute tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Minute units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Second tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Second units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
    }
    namespace Nonedr{    ///<date register
        using Addr = Register::Address<0x40002804,0xff0000c0,0,unsigned>;
        ///Year tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> yt{}; 
        ///Year units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> yu{}; 
        ///Week day units
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> wdu{}; 
        ///Month tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mt{}; 
        ///Month units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mu{}; 
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Date units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> du{}; 
    }
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40002808,0xff006687,0,unsigned>;
        ///Time-stamp event active               edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsedge{}; 
        ///RTC_REFIN reference clock detection               enable (50 or 60 Hz)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> refckon{}; 
        ///Bypass the shadow               registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bypshad{}; 
        ///Hour format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fmt{}; 
        ///Alarm A enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alrae{}; 
        ///timestamp enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tse{}; 
        ///Alarm A interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> alraie{}; 
        ///Time-stamp interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tsie{}; 
        ///Add 1 hour (summer time               change)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> add1h{}; 
        ///Subtract 1 hour (winter time               change)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sub1h{}; 
        ///Backup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> bkp{}; 
        ///Calibration output               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cosel{}; 
        ///Output polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol{}; 
        ///Output selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> osel{}; 
        ///Calibration output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> coe{}; 
    }
    namespace Noneisr{    ///<initialization and status           register
        using Addr = Register::Address<0x4000280c,0xfffe8606,0,unsigned>;
        ///Alarm A write flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> alrawf{}; 
        ///Shift operation pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> shpf{}; 
        ///Initialization status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> inits{}; 
        ///Registers synchronization               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsf{}; 
        ///Initialization flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> initf{}; 
        ///Initialization mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> init{}; 
        ///Alarm A flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alraf{}; 
        ///Time-stamp flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tsf{}; 
        ///Time-stamp overflow flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tsovf{}; 
        ///RTC_TAMP1 detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tamp1f{}; 
        ///RTC_TAMP2 detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamp2f{}; 
        ///Recalibration pending Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> recalpf{}; 
    }
    namespace Noneprer{    ///<prescaler register
        using Addr = Register::Address<0x40002810,0xff808000,0,unsigned>;
        ///Asynchronous prescaler               factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> predivA{}; 
        ///Synchronous prescaler               factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> predivS{}; 
    }
    namespace Nonealrmar{    ///<alarm A register
        using Addr = Register::Address<0x4000281c,0x00000000,0,unsigned>;
        ///Alarm A date mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> msk4{}; 
        ///Week day selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wdsel{}; 
        ///Date tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Date units or day in BCD               format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> du{}; 
        ///Alarm A hours mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> msk3{}; 
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Hour tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///Hour units in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Alarm A minutes mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk2{}; 
        ///Minute tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Minute units in BCD               format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Alarm A seconds mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk1{}; 
        ///Second tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Second units in BCD               format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
    }
    namespace Nonewpr{    ///<write protection register
        using Addr = Register::Address<0x40002824,0xffffff00,0,unsigned>;
        ///Write protection key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace Nonessr{    ///<sub second register
        using Addr = Register::Address<0x40002828,0xffff0000,0,unsigned>;
        ///Sub second value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ss{}; 
    }
    namespace Noneshiftr{    ///<shift control register
        using Addr = Register::Address<0x4000282c,0x7fff8000,0,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> add1s{}; 
        ///Subtract a fraction of a               second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> subfs{}; 
    }
    namespace Nonetstr{    ///<timestamp time register
        using Addr = Register::Address<0x40002830,0xff808080,0,unsigned>;
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Hour tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///Hour units in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Minute tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Minute units in BCD               format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Second tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Second units in BCD               format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
    }
    namespace Nonetsdr{    ///<timestamp date register
        using Addr = Register::Address<0x40002834,0xffff00c0,0,unsigned>;
        ///Week day units
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> wdu{}; 
        ///Month tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mt{}; 
        ///Month units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mu{}; 
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Date units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> du{}; 
    }
    namespace Nonetsssr{    ///<time-stamp sub second register
        using Addr = Register::Address<0x40002838,0xffff0000,0,unsigned>;
        ///Sub second value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ss{}; 
    }
    namespace Nonecalr{    ///<calibration register
        using Addr = Register::Address<0x4000283c,0xffff1e00,0,unsigned>;
        ///Use an 8-second calibration cycle               period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> calp{}; 
        ///Use a 16-second calibration cycle               period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> calw8{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> calw16{}; 
        ///Calibration minus
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> calm{}; 
    }
    namespace Nonetafcr{    ///<tamper and alternate function configuration           register
        using Addr = Register::Address<0x40002840,0xff030060,0,unsigned>;
        ///PC15 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pc15mode{}; 
        ///PC15 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pc15value{}; 
        ///PC14 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pc14mode{}; 
        ///PC14 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pc14value{}; 
        ///PC13 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pc13mode{}; 
        ///RTC_ALARM output type/PC13               value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pc13value{}; 
        ///RTC_TAMPx pull-up disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tampPudis{}; 
        ///RTC_TAMPx precharge               duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> tampPrch{}; 
        ///RTC_TAMPx filter count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> tampflt{}; 
        ///Tamper sampling frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> tampfreq{}; 
        ///Activate timestamp on tamper detection               event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tampts{}; 
        ///Active level for RTC_TAMP2               input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tamp2Trg{}; 
        ///RTC_TAMP2 input detection               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tamp2e{}; 
        ///Tamper interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tampie{}; 
        ///Active level for RTC_TAMP1               input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tamp1trg{}; 
        ///RTC_TAMP1 input detection               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tamp1e{}; 
    }
    namespace Nonealrmassr{    ///<alarm A sub second register
        using Addr = Register::Address<0x40002844,0xf0ff8000,0,unsigned>;
        ///Mask the most-significant bits starting               at this bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> maskss{}; 
        ///Sub seconds value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> ss{}; 
    }
    namespace Nonebkp0r{    ///<backup register
        using Addr = Register::Address<0x40002850,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp1r{    ///<backup register
        using Addr = Register::Address<0x40002854,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp2r{    ///<backup register
        using Addr = Register::Address<0x40002858,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp3r{    ///<backup register
        using Addr = Register::Address<0x4000285c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp4r{    ///<backup register
        using Addr = Register::Address<0x40002860,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
}
