#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-time clock
    namespace Nonetr{    ///<time register
        using Addr = Register::Address<0x40002800,0xff808080,0,unsigned>;
        ///AM/PM notation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Hour tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///Hour units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Minute tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Minute units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Second tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Second units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
    }
    namespace Nonedr{    ///<date register
        using Addr = Register::Address<0x40002804,0xff0000c0,0,unsigned>;
        ///Year tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> yt{}; 
        ///Year units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> yu{}; 
        ///Week day units
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> wdu{}; 
        ///Month tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mt{}; 
        ///Month units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mu{}; 
        ///Date tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Date units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> du{}; 
    }
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40002808,0xff000080,0,unsigned>;
        ///Wakeup clock selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> wcksel{}; 
        ///Time-stamp event active               edge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsedge{}; 
        ///Reference clock detection enable (50 or               60 Hz)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> refckon{}; 
        ///Bypass the shadow               registers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bypshad{}; 
        ///Hour format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fmt{}; 
        ///Alarm A enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alrae{}; 
        ///Alarm B enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alrbe{}; 
        ///Wakeup timer enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wute{}; 
        ///Time stamp enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tse{}; 
        ///Alarm A interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> alraie{}; 
        ///Alarm B interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alrbie{}; 
        ///Wakeup timer interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wutie{}; 
        ///Time-stamp interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tsie{}; 
        ///Add 1 hour (summer time               change)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> add1h{}; 
        ///Subtract 1 hour (winter time               change)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sub1h{}; 
        ///Backup
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> bkp{}; 
        ///Calibration output               selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cosel{}; 
        ///Output polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol{}; 
        ///Output selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> osel{}; 
        ///Calibration output enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> coe{}; 
    }
    namespace Noneisr{    ///<initialization and status           register
        using Addr = Register::Address<0x4000280c,0xfffe0000,0,unsigned>;
        ///Alarm A write flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> alrawf{}; 
        ///Alarm B write flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alrbwf{}; 
        ///Wakeup timer write flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wutwf{}; 
        ///Shift operation pending
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> shpf{}; 
        ///Initialization status flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> inits{}; 
        ///Registers synchronization               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsf{}; 
        ///Initialization flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> initf{}; 
        ///Initialization mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> init{}; 
        ///Alarm A flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alraf{}; 
        ///Alarm B flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alrbf{}; 
        ///Wakeup timer flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wutf{}; 
        ///Time-stamp flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tsf{}; 
        ///Time-stamp overflow flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tsovf{}; 
        ///Tamper detection flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tamp1f{}; 
        ///RTC_TAMP2 detection flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamp2f{}; 
        ///RTC_TAMP3 detection flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tamp3f{}; 
        ///Recalibration pending Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> recalpf{}; 
    }
    namespace Noneprer{    ///<prescaler register
        using Addr = Register::Address<0x40002810,0xff808000,0,unsigned>;
        ///Asynchronous prescaler               factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> predivA{}; 
        ///Synchronous prescaler               factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> predivS{}; 
    }
    namespace Nonewutr{    ///<wakeup timer register
        using Addr = Register::Address<0x40002814,0xffff0000,0,unsigned>;
        ///Wakeup auto-reload value               bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wut{}; 
    }
    namespace Nonealrmar{    ///<alarm A register
        using Addr = Register::Address<0x4000281c,0x00000000,0,unsigned>;
        ///Alarm A date mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> msk4{}; 
        ///Week day selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wdsel{}; 
        ///Date tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Date units or day in BCD               format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> du{}; 
        ///Alarm A hours mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> msk3{}; 
        ///AM/PM notation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Hour tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///Hour units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Alarm A minutes mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk2{}; 
        ///Minute tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Minute units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Alarm A seconds mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk1{}; 
        ///Second tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Second units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
    }
    namespace Nonealrmbr{    ///<alarm B register
        using Addr = Register::Address<0x40002820,0x00000000,0,unsigned>;
        ///Alarm B date mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> msk4{}; 
        ///Week day selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wdsel{}; 
        ///Date tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Date units or day in BCD               format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> du{}; 
        ///Alarm B hours mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> msk3{}; 
        ///AM/PM notation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Hour tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///Hour units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Alarm B minutes mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk2{}; 
        ///Minute tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Minute units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Alarm B seconds mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk1{}; 
        ///Second tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Second units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
    }
    namespace Nonewpr{    ///<write protection register
        using Addr = Register::Address<0x40002824,0xffffff00,0,unsigned>;
        ///Write protection key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace Nonessr{    ///<sub second register
        using Addr = Register::Address<0x40002828,0xffff0000,0,unsigned>;
        ///Sub second value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ss{}; 
    }
    namespace Noneshiftr{    ///<shift control register
        using Addr = Register::Address<0x4000282c,0x7fff8000,0,unsigned>;
        ///Add one second
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> add1s{}; 
        ///Subtract a fraction of a               second
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> subfs{}; 
    }
    namespace Nonetstr{    ///<time stamp time register
        using Addr = Register::Address<0x40002830,0xff808080,0,unsigned>;
        ///Second units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
        ///Second tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Minute units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Minute tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Hour units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Hour tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///AM/PM notation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace Nonetsdr{    ///<time stamp date register
        using Addr = Register::Address<0x40002834,0xffff00c0,0,unsigned>;
        ///Week day units
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> wdu{}; 
        ///Month tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mt{}; 
        ///Month units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mu{}; 
        ///Date tens in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Date units in BCD format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> du{}; 
    }
    namespace Nonetsssr{    ///<timestamp sub second register
        using Addr = Register::Address<0x40002838,0xffff0000,0,unsigned>;
        ///Sub second value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ss{}; 
    }
    namespace Nonecalr{    ///<calibration register
        using Addr = Register::Address<0x4000283c,0xffff1e00,0,unsigned>;
        ///Increase frequency of RTC by 488.5               ppm
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> calp{}; 
        ///Use an 8-second calibration cycle               period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> calw8{}; 
        ///Use a 16-second calibration cycle               period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> calw16{}; 
        ///Calibration minus
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> calm{}; 
    }
    namespace Nonetafcr{    ///<tamper and alternate function configuration           register
        using Addr = Register::Address<0x40002840,0xff030000,0,unsigned>;
        ///Tamper 1 detection enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tamp1e{}; 
        ///Active level for tamper 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tamp1trg{}; 
        ///Tamper interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tampie{}; 
        ///Tamper 2 detection enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tamp2e{}; 
        ///Active level for tamper 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tamp2trg{}; 
        ///Tamper 3 detection enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tamp3e{}; 
        ///Active level for tamper 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tamp3trg{}; 
        ///Activate timestamp on tamper detection               event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tampts{}; 
        ///Tamper sampling frequency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> tampfreq{}; 
        ///Tamper filter count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> tampflt{}; 
        ///Tamper precharge duration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> tampprch{}; 
        ///TAMPER pull-up disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tamppudis{}; 
        ///PC13 value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pc13value{}; 
        ///PC13 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pc13mode{}; 
        ///PC14 value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pc14value{}; 
        ///PC 14 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pc14mode{}; 
        ///PC15 value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pc15value{}; 
        ///PC15 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pc15mode{}; 
    }
    namespace Nonealrmassr{    ///<alarm A sub second register
        using Addr = Register::Address<0x40002844,0xf0ff8000,0,unsigned>;
        ///Mask the most-significant bits starting               at this bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> maskss{}; 
        ///Sub seconds value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> ss{}; 
    }
    namespace Nonealrmbssr{    ///<alarm B sub second register
        using Addr = Register::Address<0x40002848,0xf0ff8000,0,unsigned>;
        ///Mask the most-significant bits starting               at this bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> maskss{}; 
        ///Sub seconds value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> ss{}; 
    }
    namespace Nonebkp0r{    ///<backup register
        using Addr = Register::Address<0x40002850,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp1r{    ///<backup register
        using Addr = Register::Address<0x40002854,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp2r{    ///<backup register
        using Addr = Register::Address<0x40002858,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp3r{    ///<backup register
        using Addr = Register::Address<0x4000285c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp4r{    ///<backup register
        using Addr = Register::Address<0x40002860,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp5r{    ///<backup register
        using Addr = Register::Address<0x40002864,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp6r{    ///<backup register
        using Addr = Register::Address<0x40002868,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp7r{    ///<backup register
        using Addr = Register::Address<0x4000286c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp8r{    ///<backup register
        using Addr = Register::Address<0x40002870,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp9r{    ///<backup register
        using Addr = Register::Address<0x40002874,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp10r{    ///<backup register
        using Addr = Register::Address<0x40002878,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp11r{    ///<backup register
        using Addr = Register::Address<0x4000287c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp12r{    ///<backup register
        using Addr = Register::Address<0x40002880,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp13r{    ///<backup register
        using Addr = Register::Address<0x40002884,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp14r{    ///<backup register
        using Addr = Register::Address<0x40002888,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp15r{    ///<backup register
        using Addr = Register::Address<0x4000288c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp16r{    ///<backup register
        using Addr = Register::Address<0x40002890,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp17r{    ///<backup register
        using Addr = Register::Address<0x40002894,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp18r{    ///<backup register
        using Addr = Register::Address<0x40002898,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp19r{    ///<backup register
        using Addr = Register::Address<0x4000289c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp20r{    ///<backup register
        using Addr = Register::Address<0x400028a0,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp21r{    ///<backup register
        using Addr = Register::Address<0x400028a4,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp22r{    ///<backup register
        using Addr = Register::Address<0x400028a8,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp23r{    ///<backup register
        using Addr = Register::Address<0x400028ac,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp24r{    ///<backup register
        using Addr = Register::Address<0x400028b0,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp25r{    ///<backup register
        using Addr = Register::Address<0x400028b4,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp26r{    ///<backup register
        using Addr = Register::Address<0x400028b8,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp27r{    ///<backup register
        using Addr = Register::Address<0x400028bc,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp28r{    ///<backup register
        using Addr = Register::Address<0x400028c0,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp29r{    ///<backup register
        using Addr = Register::Address<0x400028c4,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp30r{    ///<backup register
        using Addr = Register::Address<0x400028c8,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp31r{    ///<backup register
        using Addr = Register::Address<0x400028cc,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
}
