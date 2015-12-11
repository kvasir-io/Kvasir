#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//REAL-TIME CLOCK
    namespace Nonewtcr10{    ///<Control Register 10
        using Addr = Register::Address<0x4003b100,0xffffff02,0,unsigned char>;
        ///Transfer flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> trans{}; 
        ///Busy bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> busy{}; 
        ///Sub second generation/1-second generation counter reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scrst{}; 
        ///1-second clock output stop bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> scst{}; 
        ///RTC reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srst{}; 
        ///RTC count block operation bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> run{}; 
        ///Start bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> st{}; 
    }
    namespace Nonewtcr11{    ///<Control Register 11
        using Addr = Register::Address<0x4003b104,0xffffffe0,0,unsigned char>;
        ///Alarm year register enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> yen{}; 
        ///Alarm month register enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> moen{}; 
        ///Alarm day register enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> den{}; 
        ///Alarm hour register enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hen{}; 
        ///Alarm minute register enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mien{}; 
    }
    namespace Nonewtcr12{    ///<Control Register 12
        using Addr = Register::Address<0x4003b108,0xffffff00,0,unsigned char>;
        ///Year/month/date/hour/minute/second/day of the week counter value read completion interrupt flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intcri{}; 
        ///Time rewrite error interrupt flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> interi{}; 
        ///Alarm coincidence flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intali{}; 
        ///Timer underflow detection flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> inttmi{}; 
        ///Every hour flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inthi{}; 
        ///Every minute flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intmi{}; 
        ///Every second flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intsi{}; 
        ///Every 0.5-second flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intssi{}; 
    }
    namespace Nonewtcr13{    ///<Control Register 13
        using Addr = Register::Address<0x4003b10c,0xffffff00,0,unsigned char>;
        ///Year/month/date/hour/minute/second/day of the week counter value read completion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intcrie{}; 
        ///Time rewrite error interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> interie{}; 
        ///Alarm coincidence interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intalie{}; 
        ///Timer underflow interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> inttmie{}; 
        ///Every hour interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inthie{}; 
        ///Every minute interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intmie{}; 
        ///Every second interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intsie{}; 
        ///Every 0.5-second interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intssie{}; 
    }
    namespace Nonewtcr20{    ///<Control Register 20
        using Addr = Register::Address<0x4003b110,0xffffffc0,0,unsigned>;
        ///VBAT PORT save control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pwrite{}; 
        ///VBAT PORT recall control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pread{}; 
        ///Back up register save control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bwrite{}; 
        ///Back up register recall control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bread{}; 
        ///RTC setting save control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cwrite{}; 
        ///RTC setting recall control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cread{}; 
    }
    namespace Nonewtcr21{    ///<Control Register 21
        using Addr = Register::Address<0x4003b114,0xfffffff8,0,unsigned>;
        ///Timer counter operation bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tmrun{}; 
        ///Timer counter control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tmen{}; 
        ///Timer counter start bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmst{}; 
    }
    namespace Nonewtsr{    ///<Second Register
        using Addr = Register::Address<0x4003b11c,0xffffff80,0,unsigned char>;
        ///2nd digit of the second information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        ///1st digit of the second information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> s{}; 
    }
    namespace Nonewtmir{    ///<Minute Register
        using Addr = Register::Address<0x4003b120,0xffffff80,0,unsigned char>;
        ///2nd digit of the minute information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tmi{}; 
        ///1st digit of the minute information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Nonewthr{    ///<Hour register
        using Addr = Register::Address<0x4003b124,0xffffffc0,0,unsigned char>;
        ///2nd digit of the hour information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> th{}; 
        ///1st digit of the hour information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> h{}; 
    }
    namespace Nonewtdr{    ///<Day Register
        using Addr = Register::Address<0x4003b128,0xffffffc0,0,unsigned char>;
        ///2nd digit of the day information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> td{}; 
        ///1st digit of the day information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> d{}; 
    }
    namespace Nonewtdw{    ///<Day of the Week Register
        using Addr = Register::Address<0x4003b12c,0xfffffff8,0,unsigned char>;
        ///Day of the week information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dw{}; 
    }
    namespace Nonewtmor{    ///<Month Register
        using Addr = Register::Address<0x4003b130,0xffffffe0,0,unsigned char>;
        ///2nd digit of the month information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmo0{}; 
        ///1st digit of the month information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mo{}; 
    }
    namespace Nonewtyr{    ///<Year Register
        using Addr = Register::Address<0x4003b134,0xffffff00,0,unsigned char>;
        ///2nd digit of the year information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ty{}; 
        ///1st digit of the year information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> y{}; 
    }
    namespace Nonealmir{    ///<Alarm Minute Register
        using Addr = Register::Address<0x4003b138,0xffffff80,0,unsigned char>;
        ///2nd digit of the alarm-set minute information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tami{}; 
        ///1st digit of the alarm-set minute information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ami{}; 
    }
    namespace Nonealhr{    ///<Alarm Hour Register
        using Addr = Register::Address<0x4003b13c,0xffffffc0,0,unsigned char>;
        ///2nd digit of the alarm-set hour information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tah{}; 
        ///1st digit of the alarm-set hour information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ah{}; 
    }
    namespace Nonealdr{    ///<Alarm Date Register
        using Addr = Register::Address<0x4003b140,0xffffffc0,0,unsigned char>;
        ///2nd digit of the alarm-set date information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tad{}; 
        ///1st digit of the alarm-set date information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ad{}; 
    }
    namespace Nonealmor{    ///<Alarm Month Register
        using Addr = Register::Address<0x4003b144,0xffffffe0,0,unsigned char>;
        ///2nd digit of the alarm-set month information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tamo0{}; 
        ///1st digit of the alarm-set month information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> amo{}; 
    }
    namespace Nonealyr{    ///<Alarm Years Register
        using Addr = Register::Address<0x4003b148,0xffffff00,0,unsigned char>;
        ///2nd digit of the alarm-set year information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tay{}; 
        ///1st digit of the alarm-set year information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ay{}; 
    }
    namespace Nonewttr0{    ///<Timer Setting Register 0
        using Addr = Register::Address<0x4003b14c,0xffffff00,0,unsigned char>;
        ///Timer Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tm{}; 
    }
    namespace Nonewttr1{    ///<Timer Setting Register 1
        using Addr = Register::Address<0x4003b150,0xffffff00,0,unsigned char>;
        ///Timer Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tm{}; 
    }
    namespace Nonewttr2{    ///<Timer Setting Register 2
        using Addr = Register::Address<0x4003b154,0xfffffffc,0,unsigned char>;
        ///Timer Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> tm{}; 
    }
    namespace Nonewtcal0{    ///<Frequency Correction Value Setting Register 0
        using Addr = Register::Address<0x4003b158,0xffffff00,0,unsigned char>;
        ///Frequency correction value setting bits 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wtcal0{}; 
    }
    namespace Nonewtcal1{    ///<Frequency Correction Value Setting Register 1
        using Addr = Register::Address<0x4003b15c,0xfffffffc,0,unsigned char>;
        ///Frequency correction value setting bits 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wtcal1{}; 
    }
    namespace Nonewtcalen{    ///<Frequency Correction Enable Register
        using Addr = Register::Address<0x4003b160,0xfffffffe,0,unsigned char>;
        ///Frequency correction enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtcalen{}; 
    }
    namespace Nonewtdiv{    ///<Division Ratio Setting Register
        using Addr = Register::Address<0x4003b164,0xfffffff0,0,unsigned char>;
        ///Division ration setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wtdiv{}; 
    }
    namespace Nonewtdiven{    ///<Divider Output Enable Register
        using Addr = Register::Address<0x4003b168,0xfffffffc,0,unsigned char>;
        ///Divider state bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wtdivrdy{}; 
        ///Divider enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtdiven{}; 
    }
    namespace Nonewtcalprd{    ///<Frequency Correction Period Setting Register
        using Addr = Register::Address<0x4003b16c,0xffffffc0,0,unsigned char>;
        ///Frequency correction value setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> wtcalprd{}; 
    }
    namespace Nonewtcosel{    ///<RTCCO Output Selection Register
        using Addr = Register::Address<0x4003b170,0xfffffffe,0,unsigned char>;
        ///RTCCO output selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtcosel{}; 
    }
    namespace NonevbClkdiv{    ///<VB_CLKDIV Register
        using Addr = Register::Address<0x4003b174,0xffffff00,0,unsigned char>;
        ///Transfer clock set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonewtosccnt{    ///<WTOSCCNT Register
        using Addr = Register::Address<0x4003b178,0xfffffffc,0,unsigned char>;
        ///Cooperative operation control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soscntl{}; 
        ///Oscillation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soscex{}; 
    }
    namespace Noneccs{    ///<CCS Register
        using Addr = Register::Address<0x4003b17c,0xffffff00,0,unsigned char>;
        ///Oscillation sustain current set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccs{}; 
    }
    namespace Noneccb{    ///<CCB Register
        using Addr = Register::Address<0x4003b180,0xffffff00,0,unsigned char>;
        ///Oscillation boost current set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
    namespace Noneboost{    ///<BOOST Register
        using Addr = Register::Address<0x4003b188,0xfffffffc,0,unsigned char>;
        ///Oscillation boost time set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> boost{}; 
    }
    namespace Noneewkup{    ///<EWKUP Register
        using Addr = Register::Address<0x4003b18c,0xfffffffe,0,unsigned char>;
        ///Wakeup request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wup0{}; 
    }
    namespace Nonevdet{    ///<VDET Register
        using Addr = Register::Address<0x4003b190,0xffffff7f,0,unsigned char>;
        ///Power-on bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pon{}; 
    }
    namespace Nonehibrst{    ///<HIBRST Register
        using Addr = Register::Address<0x4003b198,0xfffffffe,0,unsigned char>;
        ///Hibernation start bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hibrst{}; 
    }
    namespace Nonevbpfr{    ///<Port Function Set Register
        using Addr = Register::Address<0x4003b19c,0xffffffc0,0,unsigned char>;
        ///Oscillation pin function set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> spsr{}; 
        ///Port function of P46/X0A pin set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vpfr3{}; 
        ///Port function of P47/X1A pin set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vpfr2{}; 
        ///Port function of P49/VWAKEUP pin set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vpfr1{}; 
        ///Port function of P48/VREGCTL pin set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vpfr0{}; 
    }
    namespace Nonevbpcr{    ///<Pull-up Set Register
        using Addr = Register::Address<0x4003b1a0,0xfffffff0,0,unsigned char>;
        ///P46/X0A pin pull-up set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vpcr3{}; 
        ///P47/X1A pin pull-up set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vpcr2{}; 
        ///P49/VWAKEUP pin pull-up set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vpcr1{}; 
        ///P48/VREGCTL pin pull-up set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vpcr0{}; 
    }
    namespace Nonevbddr{    ///<Port I/O Direction Set Register
        using Addr = Register::Address<0x4003b1a4,0xfffffff0,0,unsigned char>;
        ///Port direction of P46/X0A pin set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vddr3{}; 
        ///Port direction of P47/X1A pin set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vddr2{}; 
        ///Port direction of P49/VWAKEUP pin set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vddr1{}; 
        ///Port direction of P48/VREGCTL pin set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vddr0{}; 
    }
    namespace Nonevbdir{    ///<Port Input Data Register
        using Addr = Register::Address<0x4003b1a8,0xfffffff0,0,unsigned char>;
        ///Port input data of P46/X0A pin bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vdir3{}; 
        ///Port input data of P47/X1A pin bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vdir2{}; 
        ///Port input data of P49/VWAKEUP pin bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vdir1{}; 
        ///Port input data of P48/VREGCTL pin bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vdir0{}; 
    }
    namespace Nonevbdor{    ///<Port Output Data Register
        using Addr = Register::Address<0x4003b1ac,0xfffffff0,0,unsigned char>;
        ///Port output data of P46/X0A pin bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vdor3{}; 
        ///Port output data of P47/X1A pin bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vdor2{}; 
        ///Port output data of P49/VWAKEUP pin bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vdor1{}; 
        ///Port output data of P48/VREGCTL pin bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vdor0{}; 
    }
    namespace Nonevbpzr{    ///<Port Pseudo-Open Drain Set Register
        using Addr = Register::Address<0x4003b1b0,0xfffffffc,0,unsigned char>;
        ///P49/VWAKEUP pin pseudo-open drain set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vpzr1{}; 
        ///P48/VREGCTL pin pseudo-open drain set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vpzr0{}; 
    }
    namespace Nonebreg00{    ///<Backup Register
        using Addr = Register::Address<0x4003b200,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg01{    ///<Backup Register
        using Addr = Register::Address<0x4003b201,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg02{    ///<Backup Register
        using Addr = Register::Address<0x4003b202,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg03{    ///<Backup Register
        using Addr = Register::Address<0x4003b203,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg04{    ///<Backup Register
        using Addr = Register::Address<0x4003b204,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg05{    ///<Backup Register
        using Addr = Register::Address<0x4003b205,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg06{    ///<Backup Register
        using Addr = Register::Address<0x4003b206,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg07{    ///<Backup Register
        using Addr = Register::Address<0x4003b207,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg08{    ///<Backup Register
        using Addr = Register::Address<0x4003b208,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg09{    ///<Backup Register
        using Addr = Register::Address<0x4003b209,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg0a{    ///<Backup Register
        using Addr = Register::Address<0x4003b20a,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg0b{    ///<Backup Register
        using Addr = Register::Address<0x4003b20b,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg0c{    ///<Backup Register
        using Addr = Register::Address<0x4003b20c,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg0d{    ///<Backup Register
        using Addr = Register::Address<0x4003b20d,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg0e{    ///<Backup Register
        using Addr = Register::Address<0x4003b20e,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg0f{    ///<Backup Register
        using Addr = Register::Address<0x4003b20f,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg10{    ///<Backup Register
        using Addr = Register::Address<0x4003b210,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg11{    ///<Backup Register
        using Addr = Register::Address<0x4003b211,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg12{    ///<Backup Register
        using Addr = Register::Address<0x4003b212,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg13{    ///<Backup Register
        using Addr = Register::Address<0x4003b213,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg14{    ///<Backup Register
        using Addr = Register::Address<0x4003b214,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg15{    ///<Backup Register
        using Addr = Register::Address<0x4003b215,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg16{    ///<Backup Register
        using Addr = Register::Address<0x4003b216,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg17{    ///<Backup Register
        using Addr = Register::Address<0x4003b217,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg18{    ///<Backup Register
        using Addr = Register::Address<0x4003b218,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg19{    ///<Backup Register
        using Addr = Register::Address<0x4003b219,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg1a{    ///<Backup Register
        using Addr = Register::Address<0x4003b21a,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg1b{    ///<Backup Register
        using Addr = Register::Address<0x4003b21b,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg1c{    ///<Backup Register
        using Addr = Register::Address<0x4003b21c,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg1d{    ///<Backup Register
        using Addr = Register::Address<0x4003b21d,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg1e{    ///<Backup Register
        using Addr = Register::Address<0x4003b21e,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg1f{    ///<Backup Register
        using Addr = Register::Address<0x4003b21f,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg20{    ///<Backup Register
        using Addr = Register::Address<0x4003b220,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg21{    ///<Backup Register
        using Addr = Register::Address<0x4003b221,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg22{    ///<Backup Register
        using Addr = Register::Address<0x4003b222,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg23{    ///<Backup Register
        using Addr = Register::Address<0x4003b223,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg24{    ///<Backup Register
        using Addr = Register::Address<0x4003b224,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg25{    ///<Backup Register
        using Addr = Register::Address<0x4003b225,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg26{    ///<Backup Register
        using Addr = Register::Address<0x4003b226,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg27{    ///<Backup Register
        using Addr = Register::Address<0x4003b227,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg28{    ///<Backup Register
        using Addr = Register::Address<0x4003b228,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg29{    ///<Backup Register
        using Addr = Register::Address<0x4003b229,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg2a{    ///<Backup Register
        using Addr = Register::Address<0x4003b22a,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg2b{    ///<Backup Register
        using Addr = Register::Address<0x4003b22b,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg2c{    ///<Backup Register
        using Addr = Register::Address<0x4003b22c,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg2d{    ///<Backup Register
        using Addr = Register::Address<0x4003b22d,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg2e{    ///<Backup Register
        using Addr = Register::Address<0x4003b22e,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg2f{    ///<Backup Register
        using Addr = Register::Address<0x4003b22f,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg30{    ///<Backup Register
        using Addr = Register::Address<0x4003b230,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg31{    ///<Backup Register
        using Addr = Register::Address<0x4003b231,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg32{    ///<Backup Register
        using Addr = Register::Address<0x4003b232,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg33{    ///<Backup Register
        using Addr = Register::Address<0x4003b233,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg34{    ///<Backup Register
        using Addr = Register::Address<0x4003b234,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg35{    ///<Backup Register
        using Addr = Register::Address<0x4003b235,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg36{    ///<Backup Register
        using Addr = Register::Address<0x4003b236,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg37{    ///<Backup Register
        using Addr = Register::Address<0x4003b237,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg38{    ///<Backup Register
        using Addr = Register::Address<0x4003b238,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg39{    ///<Backup Register
        using Addr = Register::Address<0x4003b239,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg3a{    ///<Backup Register
        using Addr = Register::Address<0x4003b23a,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg3b{    ///<Backup Register
        using Addr = Register::Address<0x4003b23b,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg3c{    ///<Backup Register
        using Addr = Register::Address<0x4003b23c,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg3d{    ///<Backup Register
        using Addr = Register::Address<0x4003b23d,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg3e{    ///<Backup Register
        using Addr = Register::Address<0x4003b23e,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg3f{    ///<Backup Register
        using Addr = Register::Address<0x4003b23f,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg40{    ///<Backup Register
        using Addr = Register::Address<0x4003b240,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg41{    ///<Backup Register
        using Addr = Register::Address<0x4003b241,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg42{    ///<Backup Register
        using Addr = Register::Address<0x4003b242,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg43{    ///<Backup Register
        using Addr = Register::Address<0x4003b243,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg44{    ///<Backup Register
        using Addr = Register::Address<0x4003b244,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg45{    ///<Backup Register
        using Addr = Register::Address<0x4003b245,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg46{    ///<Backup Register
        using Addr = Register::Address<0x4003b246,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg47{    ///<Backup Register
        using Addr = Register::Address<0x4003b247,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg48{    ///<Backup Register
        using Addr = Register::Address<0x4003b248,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg49{    ///<Backup Register
        using Addr = Register::Address<0x4003b249,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg4a{    ///<Backup Register
        using Addr = Register::Address<0x4003b24a,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg4b{    ///<Backup Register
        using Addr = Register::Address<0x4003b24b,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg4c{    ///<Backup Register
        using Addr = Register::Address<0x4003b24c,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg4d{    ///<Backup Register
        using Addr = Register::Address<0x4003b24d,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg4e{    ///<Backup Register
        using Addr = Register::Address<0x4003b24e,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg4f{    ///<Backup Register
        using Addr = Register::Address<0x4003b24f,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg50{    ///<Backup Register
        using Addr = Register::Address<0x4003b250,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg51{    ///<Backup Register
        using Addr = Register::Address<0x4003b251,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg52{    ///<Backup Register
        using Addr = Register::Address<0x4003b252,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg53{    ///<Backup Register
        using Addr = Register::Address<0x4003b253,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg54{    ///<Backup Register
        using Addr = Register::Address<0x4003b254,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg55{    ///<Backup Register
        using Addr = Register::Address<0x4003b255,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg56{    ///<Backup Register
        using Addr = Register::Address<0x4003b256,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg57{    ///<Backup Register
        using Addr = Register::Address<0x4003b257,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg58{    ///<Backup Register
        using Addr = Register::Address<0x4003b258,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg59{    ///<Backup Register
        using Addr = Register::Address<0x4003b259,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg5a{    ///<Backup Register
        using Addr = Register::Address<0x4003b25a,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg5b{    ///<Backup Register
        using Addr = Register::Address<0x4003b25b,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg5c{    ///<Backup Register
        using Addr = Register::Address<0x4003b25c,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg5d{    ///<Backup Register
        using Addr = Register::Address<0x4003b25d,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg5e{    ///<Backup Register
        using Addr = Register::Address<0x4003b25e,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg5f{    ///<Backup Register
        using Addr = Register::Address<0x4003b25f,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg60{    ///<Backup Register
        using Addr = Register::Address<0x4003b260,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg61{    ///<Backup Register
        using Addr = Register::Address<0x4003b261,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg62{    ///<Backup Register
        using Addr = Register::Address<0x4003b262,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg63{    ///<Backup Register
        using Addr = Register::Address<0x4003b263,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg64{    ///<Backup Register
        using Addr = Register::Address<0x4003b264,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg65{    ///<Backup Register
        using Addr = Register::Address<0x4003b265,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg66{    ///<Backup Register
        using Addr = Register::Address<0x4003b266,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg67{    ///<Backup Register
        using Addr = Register::Address<0x4003b267,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg68{    ///<Backup Register
        using Addr = Register::Address<0x4003b268,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg69{    ///<Backup Register
        using Addr = Register::Address<0x4003b269,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg6a{    ///<Backup Register
        using Addr = Register::Address<0x4003b26a,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg6b{    ///<Backup Register
        using Addr = Register::Address<0x4003b26b,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg6c{    ///<Backup Register
        using Addr = Register::Address<0x4003b26c,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg6d{    ///<Backup Register
        using Addr = Register::Address<0x4003b26d,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg6e{    ///<Backup Register
        using Addr = Register::Address<0x4003b26e,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg6f{    ///<Backup Register
        using Addr = Register::Address<0x4003b26f,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg70{    ///<Backup Register
        using Addr = Register::Address<0x4003b270,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg71{    ///<Backup Register
        using Addr = Register::Address<0x4003b271,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg72{    ///<Backup Register
        using Addr = Register::Address<0x4003b272,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg73{    ///<Backup Register
        using Addr = Register::Address<0x4003b273,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg74{    ///<Backup Register
        using Addr = Register::Address<0x4003b274,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg75{    ///<Backup Register
        using Addr = Register::Address<0x4003b275,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg76{    ///<Backup Register
        using Addr = Register::Address<0x4003b276,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg77{    ///<Backup Register
        using Addr = Register::Address<0x4003b277,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg78{    ///<Backup Register
        using Addr = Register::Address<0x4003b278,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg79{    ///<Backup Register
        using Addr = Register::Address<0x4003b279,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg7a{    ///<Backup Register
        using Addr = Register::Address<0x4003b27a,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg7b{    ///<Backup Register
        using Addr = Register::Address<0x4003b27b,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg7c{    ///<Backup Register
        using Addr = Register::Address<0x4003b27c,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg7d{    ///<Backup Register
        using Addr = Register::Address<0x4003b27d,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg7e{    ///<Backup Register
        using Addr = Register::Address<0x4003b27e,0xffffffff,0,unsigned char>;
    }
    namespace Nonebreg7f{    ///<Backup Register
        using Addr = Register::Address<0x4003b27f,0xffffffff,0,unsigned char>;
    }
}
