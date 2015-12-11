#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High Resolution Timer: TIMD
    namespace Nonetimdcr{    ///<Timerx Control Register
        using Addr = Register::Address<0x40017600,0x00090380,0,unsigned>;
        ///Update Gating
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> updgat{}; 
        ///Preload enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> preen{}; 
        ///AC Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> dacsync{}; 
        ///Master Timer update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mstu{}; 
        ///TEU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> teu{}; 
        ///TDU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tdu{}; 
        ///TCU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tcu{}; 
        ///TBU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tbu{}; 
        ///Timerx reset update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txrstu{}; 
        ///Timer x Repetition update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txrepu{}; 
        ///Delayed CMP4 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> delcmp4{}; 
        ///Delayed CMP2 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> delcmp2{}; 
        ///Synchronization Starts Timer
              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> syncstrtx{}; 
        ///Synchronization Resets Timer
              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> syncrstx{}; 
        ///Push-Pull mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pshpll{}; 
        ///Half mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> half{}; 
        ///Re-triggerable mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> retrig{}; 
        ///Continuous mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cont{}; 
        ///HRTIM Timer x Clock
              prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ckPscx{}; 
    }
    namespace Nonetimdisr{    ///<Timerx Interrupt Status
          Register
        using Addr = Register::Address<0x40017604,0xfff08020,0,unsigned>;
        ///Output 2 State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> o2stat{}; 
        ///Output 1 State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> o1stat{}; 
        ///Idle Push Pull Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ippstat{}; 
        ///Current Push Pull Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cppstat{}; 
        ///Delayed Protection Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dlyprt{}; 
        ///Reset Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rst{}; 
        ///Output 2 Reset Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rstx2{}; 
        ///Output 2 Set Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setx2{}; 
        ///Output 1 Reset Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rstx1{}; 
        ///Output 1 Set Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setx1{}; 
        ///Capture2 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cpt2{}; 
        ///Capture1 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpt1{}; 
        ///Update Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> upd{}; 
        ///Repetition Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rep{}; 
        ///Compare 4 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp4{}; 
        ///Compare 3 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmp3{}; 
        ///Compare 2 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmp2{}; 
        ///Compare 1 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmp1{}; 
    }
    namespace Nonetimdicr{    ///<Timerx Interrupt Clear
          Register
        using Addr = Register::Address<0x40017608,0xffff8020,0,unsigned>;
        ///Delayed Protection Flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dlyprtc{}; 
        ///Reset Interrupt flag Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rstc{}; 
        ///Output 2 Reset flag Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rstx2c{}; 
        ///Output 2 Set flag Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> set2xc{}; 
        ///Output 1 Reset flag Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rstx1c{}; 
        ///Output 1 Set flag Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> set1xc{}; 
        ///Capture2 Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cpt2c{}; 
        ///Capture1 Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpt1c{}; 
        ///Update Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> updc{}; 
        ///Repetition Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> repc{}; 
        ///Compare 4 Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp4c{}; 
        ///Compare 3 Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmp3c{}; 
        ///Compare 2 Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmp2c{}; 
        ///Compare 1 Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmp1c{}; 
    }
    namespace Nonetimddier5{    ///<TIMxDIER5
        using Addr = Register::Address<0x4001760c,0x80208020,0,unsigned>;
        ///DLYPRTDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dlyprtde{}; 
        ///RSTDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rstde{}; 
        ///RSTx2DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rstx2de{}; 
        ///SETx2DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setx2de{}; 
        ///RSTx1DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rstx1de{}; 
        ///SET1xDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> set1xde{}; 
        ///CPT2DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cpt2de{}; 
        ///CPT1DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cpt1de{}; 
        ///UPDDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> updde{}; 
        ///REPDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> repde{}; 
        ///CMP4DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cmp4de{}; 
        ///CMP3DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cmp3de{}; 
        ///CMP2DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmp2de{}; 
        ///CMP1DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cmp1de{}; 
        ///DLYPRTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dlyprtie{}; 
        ///RSTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rstie{}; 
        ///RSTx2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rstx2ie{}; 
        ///SETx2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setx2ie{}; 
        ///RSTx1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rstx1ie{}; 
        ///SET1xIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> set1xie{}; 
        ///CPT2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cpt2ie{}; 
        ///CPT1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpt1ie{}; 
        ///UPDIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> updie{}; 
        ///REPIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> repie{}; 
        ///CMP4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp4ie{}; 
        ///CMP3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmp3ie{}; 
        ///CMP2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmp2ie{}; 
        ///CMP1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmp1ie{}; 
    }
    namespace Nonecntdr{    ///<Timerx Counter Register
        using Addr = Register::Address<0x40017610,0xffff0000,0,unsigned>;
        ///Timerx Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntx{}; 
    }
    namespace Noneperdr{    ///<Timerx Period Register
        using Addr = Register::Address<0x40017614,0xffff0000,0,unsigned>;
        ///Timerx Period value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> perx{}; 
    }
    namespace Nonerepdr{    ///<Timerx Repetition Register
        using Addr = Register::Address<0x40017618,0xffffff00,0,unsigned>;
        ///Timerx Repetition counter
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> repx{}; 
    }
    namespace Nonecmp1dr{    ///<Timerx Compare 1 Register
        using Addr = Register::Address<0x4001761c,0xffff0000,0,unsigned>;
        ///Timerx Compare 1 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp1x{}; 
    }
    namespace Nonecmp1cdr{    ///<Timerx Compare 1 Compound
          Register
        using Addr = Register::Address<0x40017620,0xff000000,0,unsigned>;
        ///Timerx Repetition value (aliased from
              HRTIM_REPx register)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> repx{}; 
        ///Timerx Compare 1 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp1x{}; 
    }
    namespace Nonecmp2dr{    ///<Timerx Compare 2 Register
        using Addr = Register::Address<0x40017624,0xffff0000,0,unsigned>;
        ///Timerx Compare 2 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp2x{}; 
    }
    namespace Nonecmp3dr{    ///<Timerx Compare 3 Register
        using Addr = Register::Address<0x40017628,0xffff0000,0,unsigned>;
        ///Timerx Compare 3 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp3x{}; 
    }
    namespace Nonecmp4dr{    ///<Timerx Compare 4 Register
        using Addr = Register::Address<0x4001762c,0xffff0000,0,unsigned>;
        ///Timerx Compare 4 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp4x{}; 
    }
    namespace Nonecpt1dr{    ///<Timerx Capture 1 Register
        using Addr = Register::Address<0x40017630,0xffff0000,0,unsigned>;
        ///Timerx Capture 1 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cpt1x{}; 
    }
    namespace Nonecpt2dr{    ///<Timerx Capture 2 Register
        using Addr = Register::Address<0x40017634,0xffff0000,0,unsigned>;
        ///Timerx Capture 2 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cpt2x{}; 
    }
    namespace Nonedtdr{    ///<Timerx Deadtime Register
        using Addr = Register::Address<0x40017638,0x3c002000,0,unsigned>;
        ///Deadtime Falling Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dtflkx{}; 
        ///Deadtime Falling Sign Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dtfslkx{}; 
        ///Sign Deadtime Falling
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> sdtfx{}; 
        ///Deadtime Falling value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> dtfx{}; 
        ///Deadtime Rising Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dtrlkx{}; 
        ///Deadtime Rising Sign Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtrslkx{}; 
        ///Deadtime Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> dtprsc{}; 
        ///Sign Deadtime Rising value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdtrx{}; 
        ///Deadtime Rising value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> dtrx{}; 
    }
    namespace Nonesetd1r{    ///<Timerx Output1 Set Register
        using Addr = Register::Address<0x4001763c,0x00000000,0,unsigned>;
        ///Registers update (transfer preload to
              active)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> update{}; 
        ///External Event 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> extevnt10{}; 
        ///External Event 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> extevnt9{}; 
        ///External Event 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> extevnt8{}; 
        ///External Event 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> extevnt7{}; 
        ///External Event 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> extevnt6{}; 
        ///External Event 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> extevnt5{}; 
        ///External Event 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> extevnt4{}; 
        ///External Event 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> extevnt3{}; 
        ///External Event 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> extevnt2{}; 
        ///External Event 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> extevnt1{}; 
        ///Timer Event 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> timevnt9{}; 
        ///Timer Event 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timevnt8{}; 
        ///Timer Event 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> timevnt7{}; 
        ///Timer Event 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> timevnt6{}; 
        ///Timer Event 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> timevnt5{}; 
        ///Timer Event 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timevnt4{}; 
        ///Timer Event 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timevnt3{}; 
        ///Timer Event 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timevnt2{}; 
        ///Timer Event 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timevnt1{}; 
        ///Master Compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mstcmp4{}; 
        ///Master Compare 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mstcmp3{}; 
        ///Master Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mstcmp2{}; 
        ///Master Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstcmp1{}; 
        ///Master Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mstper{}; 
        ///Timer A compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmp4{}; 
        ///Timer A compare 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmp3{}; 
        ///Timer A compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmp2{}; 
        ///Timer A compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///Timer A Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per{}; 
        ///Timer A resynchronizaton
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resync{}; 
        ///Software Set trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sst{}; 
    }
    namespace Nonerstd1r{    ///<Timerx Output1 Reset Register
        using Addr = Register::Address<0x40017640,0x00000000,0,unsigned>;
        ///UPDATE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> update{}; 
        ///EXTEVNT10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> extevnt10{}; 
        ///EXTEVNT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> extevnt9{}; 
        ///EXTEVNT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> extevnt8{}; 
        ///EXTEVNT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> extevnt7{}; 
        ///EXTEVNT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> extevnt6{}; 
        ///EXTEVNT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> extevnt5{}; 
        ///EXTEVNT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> extevnt4{}; 
        ///EXTEVNT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> extevnt3{}; 
        ///EXTEVNT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> extevnt2{}; 
        ///EXTEVNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> extevnt1{}; 
        ///TIMEVNT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> timevnt9{}; 
        ///TIMEVNT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timevnt8{}; 
        ///TIMEVNT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> timevnt7{}; 
        ///TIMEVNT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> timevnt6{}; 
        ///TIMEVNT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> timevnt5{}; 
        ///TIMEVNT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timevnt4{}; 
        ///TIMEVNT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timevnt3{}; 
        ///TIMEVNT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timevnt2{}; 
        ///TIMEVNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timevnt1{}; 
        ///MSTCMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mstcmp4{}; 
        ///MSTCMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mstcmp3{}; 
        ///MSTCMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mstcmp2{}; 
        ///MSTCMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstcmp1{}; 
        ///MSTPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mstper{}; 
        ///CMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmp4{}; 
        ///CMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmp3{}; 
        ///CMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmp2{}; 
        ///CMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///PER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per{}; 
        ///RESYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resync{}; 
        ///SRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srt{}; 
    }
    namespace Nonesetd2r{    ///<Timerx Output2 Set Register
        using Addr = Register::Address<0x40017644,0x00000000,0,unsigned>;
        ///UPDATE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> update{}; 
        ///EXTEVNT10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> extevnt10{}; 
        ///EXTEVNT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> extevnt9{}; 
        ///EXTEVNT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> extevnt8{}; 
        ///EXTEVNT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> extevnt7{}; 
        ///EXTEVNT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> extevnt6{}; 
        ///EXTEVNT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> extevnt5{}; 
        ///EXTEVNT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> extevnt4{}; 
        ///EXTEVNT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> extevnt3{}; 
        ///EXTEVNT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> extevnt2{}; 
        ///EXTEVNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> extevnt1{}; 
        ///TIMEVNT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> timevnt9{}; 
        ///TIMEVNT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timevnt8{}; 
        ///TIMEVNT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> timevnt7{}; 
        ///TIMEVNT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> timevnt6{}; 
        ///TIMEVNT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> timevnt5{}; 
        ///TIMEVNT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timevnt4{}; 
        ///TIMEVNT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timevnt3{}; 
        ///TIMEVNT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timevnt2{}; 
        ///TIMEVNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timevnt1{}; 
        ///MSTCMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mstcmp4{}; 
        ///MSTCMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mstcmp3{}; 
        ///MSTCMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mstcmp2{}; 
        ///MSTCMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstcmp1{}; 
        ///MSTPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mstper{}; 
        ///CMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmp4{}; 
        ///CMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmp3{}; 
        ///CMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmp2{}; 
        ///CMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///PER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per{}; 
        ///RESYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resync{}; 
        ///SST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sst{}; 
    }
    namespace Nonerstd2r{    ///<Timerx Output2 Reset Register
        using Addr = Register::Address<0x40017648,0x00000000,0,unsigned>;
        ///UPDATE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> update{}; 
        ///EXTEVNT10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> extevnt10{}; 
        ///EXTEVNT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> extevnt9{}; 
        ///EXTEVNT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> extevnt8{}; 
        ///EXTEVNT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> extevnt7{}; 
        ///EXTEVNT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> extevnt6{}; 
        ///EXTEVNT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> extevnt5{}; 
        ///EXTEVNT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> extevnt4{}; 
        ///EXTEVNT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> extevnt3{}; 
        ///EXTEVNT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> extevnt2{}; 
        ///EXTEVNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> extevnt1{}; 
        ///TIMEVNT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> timevnt9{}; 
        ///TIMEVNT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timevnt8{}; 
        ///TIMEVNT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> timevnt7{}; 
        ///TIMEVNT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> timevnt6{}; 
        ///TIMEVNT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> timevnt5{}; 
        ///TIMEVNT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timevnt4{}; 
        ///TIMEVNT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timevnt3{}; 
        ///TIMEVNT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timevnt2{}; 
        ///TIMEVNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timevnt1{}; 
        ///MSTCMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mstcmp4{}; 
        ///MSTCMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mstcmp3{}; 
        ///MSTCMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mstcmp2{}; 
        ///MSTCMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstcmp1{}; 
        ///MSTPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mstper{}; 
        ///CMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmp4{}; 
        ///CMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmp3{}; 
        ///CMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmp2{}; 
        ///CMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///PER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per{}; 
        ///RESYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resync{}; 
        ///SRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srt{}; 
    }
    namespace Noneeefdr1{    ///<Timerx External Event Filtering Register
          1
        using Addr = Register::Address<0x4001764c,0xe0820820,0,unsigned>;
        ///External Event 5 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> ee5fltr{}; 
        ///External Event 5 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ee5ltch{}; 
        ///External Event 4 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,19),Register::ReadWriteAccess,unsigned> ee4fltr{}; 
        ///External Event 4 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ee4ltch{}; 
        ///External Event 3 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> ee3fltr{}; 
        ///External Event 3 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ee3ltch{}; 
        ///External Event 2 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,7),Register::ReadWriteAccess,unsigned> ee2fltr{}; 
        ///External Event 2 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ee2ltch{}; 
        ///External Event 1 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> ee1fltr{}; 
        ///External Event 1 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ee1ltch{}; 
    }
    namespace Noneeefdr2{    ///<Timerx External Event Filtering Register
          2
        using Addr = Register::Address<0x40017650,0xe0820820,0,unsigned>;
        ///External Event 10 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> ee10fltr{}; 
        ///External Event 10 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ee10ltch{}; 
        ///External Event 9 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,19),Register::ReadWriteAccess,unsigned> ee9fltr{}; 
        ///External Event 9 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ee9ltch{}; 
        ///External Event 8 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> ee8fltr{}; 
        ///External Event 8 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ee8ltch{}; 
        ///External Event 7 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,7),Register::ReadWriteAccess,unsigned> ee7fltr{}; 
        ///External Event 7 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ee7ltch{}; 
        ///External Event 6 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> ee6fltr{}; 
        ///External Event 6 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ee6ltch{}; 
    }
    namespace Nonerstdr{    ///<TimerA Reset Register
        using Addr = Register::Address<0x40017654,0x80000001,0,unsigned>;
        ///Timer E Compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> timecmp4{}; 
        ///Timer E Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> timecmp2{}; 
        ///Timer E Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> timecmp1{}; 
        ///Timer C Compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> timccmp4{}; 
        ///Timer C Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> timccmp2{}; 
        ///Timer C Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> timccmp1{}; 
        ///Timer B Compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> timbcmp4{}; 
        ///Timer B Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> timbcmp2{}; 
        ///Timer B Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> timbcmp1{}; 
        ///Timer A Compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> timacmp4{}; 
        ///Timer A Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> timacmp2{}; 
        ///Timer A Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timacmp1{}; 
        ///External Event 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> extevnt10{}; 
        ///External Event 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> extevnt9{}; 
        ///External Event 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> extevnt8{}; 
        ///External Event 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extevnt7{}; 
        ///External Event 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extevnt6{}; 
        ///External Event 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extevnt5{}; 
        ///External Event 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extevnt4{}; 
        ///External Event 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extevnt3{}; 
        ///External Event 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extevnt2{}; 
        ///External Event 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extevnt1{}; 
        ///Master compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstcmp4{}; 
        ///Master compare 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mstcmp3{}; 
        ///Master compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mstcmp2{}; 
        ///Master compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mstcmp1{}; 
        ///Master timer Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstper{}; 
        ///Timer A compare 4 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp4{}; 
        ///Timer A compare 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmp2{}; 
        ///Timer A Update reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updt{}; 
    }
    namespace Nonechpdr{    ///<Timerx Chopper Register
        using Addr = Register::Address<0x40017658,0xfffff800,0,unsigned>;
        ///STRTPW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,7),Register::ReadWriteAccess,unsigned> strtpw{}; 
        ///Timerx chopper duty cycle
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> chpdty{}; 
        ///Timerx carrier frequency
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpfrq{}; 
    }
    namespace Nonecpt1dcr{    ///<Timerx Capture 2 Control
          Register
        using Addr = Register::Address<0x4001765c,0x0f000000,0,unsigned>;
        ///Timer E Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tecmp2{}; 
        ///Timer E Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tecmp1{}; 
        ///Timer E output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> te1rst{}; 
        ///Timer E output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> te1set{}; 
        ///Timer C Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tccmp2{}; 
        ///Timer C Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tccmp1{}; 
        ///Timer C output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tc1rst{}; 
        ///Timer C output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tc1set{}; 
        ///Timer B Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tbcmp2{}; 
        ///Timer B Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tbcmp1{}; 
        ///Timer B output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tb1rst{}; 
        ///Timer B output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tb1set{}; 
        ///Timer A Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tacmp2{}; 
        ///Timer A Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tacmp1{}; 
        ///Timer A output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ta1rst{}; 
        ///Timer A output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ta1set{}; 
        ///External Event 10 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exev10cpt{}; 
        ///External Event 9 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exev9cpt{}; 
        ///External Event 8 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exev8cpt{}; 
        ///External Event 7 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exev7cpt{}; 
        ///External Event 6 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exev6cpt{}; 
        ///External Event 5 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exev5cpt{}; 
        ///External Event 4 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exev4cpt{}; 
        ///External Event 3 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exev3cpt{}; 
        ///External Event 2 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exev2cpt{}; 
        ///External Event 1 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exev1cpt{}; 
        ///Update Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udpcpt{}; 
        ///Software Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swcpt{}; 
    }
    namespace Nonecpt2dcr{    ///<CPT2xCR
        using Addr = Register::Address<0x40017660,0x0f000000,0,unsigned>;
        ///Timer E Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tecmp2{}; 
        ///Timer E Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tecmp1{}; 
        ///Timer E output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> te1rst{}; 
        ///Timer E output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> te1set{}; 
        ///Timer C Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tccmp2{}; 
        ///Timer C Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tccmp1{}; 
        ///Timer C output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tc1rst{}; 
        ///Timer C output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tc1set{}; 
        ///Timer B Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tbcmp2{}; 
        ///Timer B Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tbcmp1{}; 
        ///Timer B output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tb1rst{}; 
        ///Timer B output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tb1set{}; 
        ///Timer A Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tacmp2{}; 
        ///Timer A Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tacmp1{}; 
        ///Timer A output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ta1rst{}; 
        ///Timer A output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ta1set{}; 
        ///External Event 10 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exev10cpt{}; 
        ///External Event 9 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exev9cpt{}; 
        ///External Event 8 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exev8cpt{}; 
        ///External Event 7 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exev7cpt{}; 
        ///External Event 6 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exev6cpt{}; 
        ///External Event 5 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exev5cpt{}; 
        ///External Event 4 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exev4cpt{}; 
        ///External Event 3 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exev3cpt{}; 
        ///External Event 2 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exev2cpt{}; 
        ///External Event 1 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exev1cpt{}; 
        ///Update Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udpcpt{}; 
        ///Software Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swcpt{}; 
    }
    namespace Noneoutdr{    ///<Timerx Output Register
        using Addr = Register::Address<0x40017664,0xff01e001,0,unsigned>;
        ///Output 2 Deadtime upon burst mode Idle
              entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> didl2{}; 
        ///Output 2 Chopper enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> chp2{}; 
        ///Output 2 Fault state
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> fault2{}; 
        ///Output 2 Idle State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> idles2{}; 
        ///Output 2 Idle mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> idlem2{}; 
        ///Output 2 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol2{}; 
        ///Delayed Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> dlyprt{}; 
        ///Delayed Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dlyprten{}; 
        ///Deadtime enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dten{}; 
        ///Output 1 Deadtime upon burst mode Idle
              entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> didl1{}; 
        ///Output 1 Chopper enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chp1{}; 
        ///Output 1 Fault state
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Output 1 Idle State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> idles1{}; 
        ///Output 1 Idle mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idlem1{}; 
        ///Output 1 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pol1{}; 
    }
    namespace Nonefltdr{    ///<Timerx Fault Register
        using Addr = Register::Address<0x40017668,0x7fffffe0,0,unsigned>;
        ///Fault sources Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> fltlck{}; 
        ///Fault 5 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flt5en{}; 
        ///Fault 4 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> flt4en{}; 
        ///Fault 3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flt3en{}; 
        ///Fault 2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flt2en{}; 
        ///Fault 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flt1en{}; 
    }
}
