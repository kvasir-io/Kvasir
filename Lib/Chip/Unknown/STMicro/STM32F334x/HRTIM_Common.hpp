#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High Resolution Timer: Common
      functions
    namespace Nonecr1{    ///<Control Register 1
        using Addr = Register::Address<0x40017780,0xf000ffc0,0,unsigned>;
        ///ADC Trigger 4 Update
              Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> ad4usrc{}; 
        ///ADC Trigger 3 Update
              Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,22),Register::ReadWriteAccess,unsigned> ad3usrc{}; 
        ///ADC Trigger 2 Update
              Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,unsigned> ad2usrc{}; 
        ///ADC Trigger 1 Update
              Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ad1usrc{}; 
        ///Timer E Update Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> teudis{}; 
        ///Timer D Update Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tdudis{}; 
        ///Timer C Update Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcudis{}; 
        ///Timer B Update Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbudis{}; 
        ///Timer A Update Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> taudis{}; 
        ///Master Update Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mudis{}; 
    }
    namespace Nonecr2{    ///<Control Register 2
        using Addr = Register::Address<0x40017784,0xffffc0c0,0,unsigned>;
        ///Timer E counter software
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> terst{}; 
        ///Timer D counter software
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tdrst{}; 
        ///Timer C counter software
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tcrst{}; 
        ///Timer B counter software
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tbrst{}; 
        ///Timer A counter software
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tarst{}; 
        ///Master Counter software
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mrst{}; 
        ///Timer E Software Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> teswu{}; 
        ///Timer D Software Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tdswu{}; 
        ///Timer C Software Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcswu{}; 
        ///Timer B Software Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbswu{}; 
        ///Timer A Software update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> taswu{}; 
        ///Master Timer Software
              update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mswu{}; 
    }
    namespace Noneisr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40017788,0xfffcffc0,0,unsigned>;
        ///Burst mode Period Interrupt
              Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bmper{}; 
        ///DLL Ready Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dllrdy{}; 
        ///System Fault Interrupt
              Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sysflt{}; 
        ///Fault 5 Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flt5{}; 
        ///Fault 4 Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> flt4{}; 
        ///Fault 3 Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flt3{}; 
        ///Fault 2 Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flt2{}; 
        ///Fault 1 Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flt1{}; 
    }
    namespace Noneicr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x4001778c,0xfffcffc0,0,unsigned>;
        ///Burst mode period flag
              Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bmperc{}; 
        ///DLL Ready Interrupt flag
              Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dllrdyc{}; 
        ///System Fault Interrupt Flag
              Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sysfltc{}; 
        ///Fault 5 Interrupt Flag
              Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flt5c{}; 
        ///Fault 4 Interrupt Flag
              Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> flt4c{}; 
        ///Fault 3 Interrupt Flag
              Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flt3c{}; 
        ///Fault 2 Interrupt Flag
              Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flt2c{}; 
        ///Fault 1 Interrupt Flag
              Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flt1c{}; 
    }
    namespace Noneier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40017790,0xfffcffc0,0,unsigned>;
        ///Burst mode period Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bmperie{}; 
        ///DLL Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dllrdyie{}; 
        ///System Fault Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sysflte{}; 
        ///Fault 5 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flt5ie{}; 
        ///Fault 4 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> flt4ie{}; 
        ///Fault 3 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flt3ie{}; 
        ///Fault 2 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flt2ie{}; 
        ///Fault 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flt1ie{}; 
    }
    namespace Noneoenr{    ///<Output Enable Register
        using Addr = Register::Address<0x40017794,0xfffffc00,0,unsigned>;
        ///Timer E Output 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> te2oen{}; 
        ///Timer E Output 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> te1oen{}; 
        ///Timer D Output 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> td2oen{}; 
        ///Timer D Output 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> td1oen{}; 
        ///Timer C Output 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc2oen{}; 
        ///Timer C Output 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tc1oen{}; 
        ///Timer B Output 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tb2oen{}; 
        ///Timer B Output 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tb1oen{}; 
        ///Timer A Output 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ta2oen{}; 
        ///Timer A Output 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ta1oen{}; 
    }
    namespace Nonedisr{    ///<DISR
        using Addr = Register::Address<0x40017798,0xfffffc00,0,unsigned>;
        ///TE2ODIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> te2odis{}; 
        ///TE1ODIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> te1odis{}; 
        ///TD2ODIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> td2odis{}; 
        ///TD1ODIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> td1odis{}; 
        ///TC2ODIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc2odis{}; 
        ///TC1ODIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tc1odis{}; 
        ///TB2ODIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tb2odis{}; 
        ///TB1ODIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tb1odis{}; 
        ///TA2ODIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ta2odis{}; 
        ///TA1ODIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ta1odis{}; 
    }
    namespace Noneodsr{    ///<Output Disable Status Register
        using Addr = Register::Address<0x4001779c,0xfffffc00,0,unsigned>;
        ///Timer E Output 2 disable
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> te2ods{}; 
        ///Timer E Output 1 disable
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> te1ods{}; 
        ///Timer D Output 2 disable
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> td2ods{}; 
        ///Timer D Output 1 disable
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> td1ods{}; 
        ///Timer C Output 2 disable
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc2ods{}; 
        ///Timer C Output 1 disable
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tc1ods{}; 
        ///Timer B Output 2 disable
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tb2ods{}; 
        ///Timer B Output 1 disable
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tb1ods{}; 
        ///Timer A Output 2 disable
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ta2ods{}; 
        ///Timer A Output 1 disable
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ta1ods{}; 
    }
    namespace Nonebmcr{    ///<Burst Mode Control Register
        using Addr = Register::Address<0x400177a0,0x7fc0f800,0,unsigned>;
        ///Burst Mode Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bmstat{}; 
        ///Timer E Burst Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tebm{}; 
        ///Timer D Burst Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdbm{}; 
        ///Timer C Burst Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tcbm{}; 
        ///Timer B Burst Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tbbm{}; 
        ///Timer A Burst Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tabm{}; 
        ///Master Timer Burst Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mtbm{}; 
        ///Burst Mode Preload Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bmpren{}; 
        ///Burst Mode Prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> bmprsc{}; 
        ///Burst Mode Clock source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> bmclk{}; 
        ///Burst Mode operating mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bmom{}; 
        ///Burst Mode enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bme{}; 
    }
    namespace Nonebmtrg{    ///<BMTRG
        using Addr = Register::Address<0x400177a4,0x78000000,0,unsigned>;
        ///OCHPEV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ochpev{}; 
        ///TECMP2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tecmp2{}; 
        ///TECMP1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> tecmp1{}; 
        ///TEREP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> terep{}; 
        ///TERST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> terst{}; 
        ///TDCMP2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tdcmp2{}; 
        ///TDCMP1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tdcmp1{}; 
        ///TDREP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdrep{}; 
        ///TDRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tdrst{}; 
        ///TCCMP2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tccmp2{}; 
        ///TCCMP1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tccmp1{}; 
        ///TCREP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tcrep{}; 
        ///TCRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tcrst{}; 
        ///TBCMP2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tbcmp2{}; 
        ///TBCMP1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tbcmp1{}; 
        ///TBREP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tbrep{}; 
        ///TBRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tbrst{}; 
        ///TACMP2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tacmp2{}; 
        ///TACMP1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tacmp1{}; 
        ///TAREP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tarep{}; 
        ///TARST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tarst{}; 
        ///MSTCMP4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mstcmp4{}; 
        ///MSTCMP3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mstcmp3{}; 
        ///MSTCMP2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstcmp2{}; 
        ///MSTCMP1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mstcmp1{}; 
        ///MSTREP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mstrep{}; 
        ///MSTRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mstrst{}; 
        ///SW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sw{}; 
    }
    namespace Nonebmcmpr6{    ///<BMCMPR6
        using Addr = Register::Address<0x400177a8,0xffff0000,0,unsigned>;
        ///BMCMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bmcmp{}; 
    }
    namespace Nonebmper{    ///<Burst Mode Period Register
        using Addr = Register::Address<0x400177ac,0xffff0000,0,unsigned>;
        ///Burst mode Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bmper{}; 
    }
    namespace Noneeecr1{    ///<Timer External Event Control Register
          1
        using Addr = Register::Address<0x400177b0,0xc0000000,0,unsigned>;
        ///External Event 5 Fast mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ee5fast{}; 
        ///External Event 5
              Sensitivity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,27),Register::ReadWriteAccess,unsigned> ee5sns{}; 
        ///External Event 5 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ee5pol{}; 
        ///External Event 5 Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> ee5src{}; 
        ///External Event 4 Fast mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ee4fast{}; 
        ///External Event 4
              Sensitivity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> ee4sns{}; 
        ///External Event 4 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ee4pol{}; 
        ///External Event 4 Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ee4src{}; 
        ///External Event 3 Fast mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ee3fast{}; 
        ///External Event 3
              Sensitivity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> ee3sns{}; 
        ///External Event 3 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ee3pol{}; 
        ///External Event 3 Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ee3src{}; 
        ///External Event 2 Fast mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ee2fast{}; 
        ///External Event 2
              Sensitivity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> ee2sns{}; 
        ///External Event 2 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ee2pol{}; 
        ///External Event 2 Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ee2src{}; 
        ///External Event 1 Fast mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ee1fast{}; 
        ///External Event 1
              Sensitivity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> ee1sns{}; 
        ///External Event 1 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ee1pol{}; 
        ///External Event 1 Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ee1src{}; 
    }
    namespace Noneeecr2{    ///<Timer External Event Control Register
          2
        using Addr = Register::Address<0x400177b4,0xe0820820,0,unsigned>;
        ///External Event 10
              Sensitivity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,27),Register::ReadWriteAccess,unsigned> ee10sns{}; 
        ///External Event 10 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ee10pol{}; 
        ///External Event 10 Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> ee10src{}; 
        ///External Event 9
              Sensitivity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> ee9sns{}; 
        ///External Event 9 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ee9pol{}; 
        ///External Event 9 Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ee9src{}; 
        ///External Event 8
              Sensitivity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> ee8sns{}; 
        ///External Event 8 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ee8pol{}; 
        ///External Event 8 Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ee8src{}; 
        ///External Event 7
              Sensitivity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> ee7sns{}; 
        ///External Event 7 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ee7pol{}; 
        ///External Event 7 Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ee7src{}; 
        ///External Event 6
              Sensitivity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> ee6sns{}; 
        ///External Event 6 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ee6pol{}; 
        ///External Event 6 Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ee6src{}; 
    }
    namespace Noneeecr3{    ///<Timer External Event Control Register
          3
        using Addr = Register::Address<0x400177b8,0xe0820820,0,unsigned>;
        ///EE10SNS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,27),Register::ReadWriteAccess,unsigned> ee10sns{}; 
        ///EE10POL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ee10pol{}; 
        ///EE10SRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> ee10src{}; 
        ///EE9SNS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> ee9sns{}; 
        ///EE9POL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ee9pol{}; 
        ///EE9SRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ee9src{}; 
        ///EE8SNS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> ee8sns{}; 
        ///EE8POL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ee8pol{}; 
        ///EE8SRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ee8src{}; 
        ///EE7SNS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> ee7sns{}; 
        ///EE7POL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ee7pol{}; 
        ///EE7SRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ee7src{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> ee6sns{}; 
        ///EE6POL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ee6pol{}; 
        ///EE6SRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ee6src{}; 
    }
    namespace Noneadc1r{    ///<ADC Trigger 1 Register
        using Addr = Register::Address<0x400177bc,0x00000000,0,unsigned>;
        ///ADC trigger 1 on Timer E
              Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ad1teper{}; 
        ///ADC trigger 1 on Timer E compare
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ad1tec4{}; 
        ///ADC trigger 1 on Timer E compare
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ad1tec3{}; 
        ///ADC trigger 1 on Timer E compare
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ad1tec2{}; 
        ///ADC trigger 1 on Timer D
              Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ad1tdper{}; 
        ///ADC trigger 1 on Timer D compare
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ad1tdc4{}; 
        ///ADC trigger 1 on Timer D compare
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ad1tdc3{}; 
        ///ADC trigger 1 on Timer D compare
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ad1tdc2{}; 
        ///ADC trigger 1 on Timer C
              Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ad1tcper{}; 
        ///ADC trigger 1 on Timer C compare
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ad1tcc4{}; 
        ///ADC trigger 1 on Timer C compare
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ad1tcc3{}; 
        ///ADC trigger 1 on Timer C compare
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ad1tcc2{}; 
        ///ADC trigger 1 on Timer B
              Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ad1tbrst{}; 
        ///ADC trigger 1 on Timer B
              Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ad1tbper{}; 
        ///ADC trigger 1 on Timer B compare
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ad1tbc4{}; 
        ///ADC trigger 1 on Timer B compare
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ad1tbc3{}; 
        ///ADC trigger 1 on Timer B compare
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ad1tbc2{}; 
        ///ADC trigger 1 on Timer A
              Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ad1tarst{}; 
        ///ADC trigger 1 on Timer A
              Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ad1taper{}; 
        ///ADC trigger 1 on Timer A compare
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ad1tac4{}; 
        ///ADC trigger 1 on Timer A compare
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ad1tac3{}; 
        ///ADC trigger 1 on Timer A compare
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ad1tac2{}; 
        ///ADC trigger 1 on External Event
              5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ad1eev5{}; 
        ///ADC trigger 1 on External Event
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ad1eev4{}; 
        ///ADC trigger 1 on External Event
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ad1eev3{}; 
        ///ADC trigger 1 on External Event
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ad1eev2{}; 
        ///ADC trigger 1 on External Event
              1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ad1eev1{}; 
        ///ADC trigger 1 on Master
              Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ad1mper{}; 
        ///ADC trigger 1 on Master Compare
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ad1mc4{}; 
        ///ADC trigger 1 on Master Compare
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ad1mc3{}; 
        ///ADC trigger 1 on Master Compare
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ad1mc2{}; 
        ///ADC trigger 1 on Master Compare
              1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ad1mc1{}; 
    }
    namespace Noneadc2r{    ///<ADC Trigger 2 Register
        using Addr = Register::Address<0x400177c0,0x00000000,0,unsigned>;
        ///ADC trigger 2 on Timer E
              Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ad2terst{}; 
        ///ADC trigger 2 on Timer E compare
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ad2tec4{}; 
        ///ADC trigger 2 on Timer E compare
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ad2tec3{}; 
        ///ADC trigger 2 on Timer E compare
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ad2tec2{}; 
        ///ADC trigger 2 on Timer D
              Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ad2tdrst{}; 
        ///ADC trigger 2 on Timer D
              Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ad2tdper{}; 
        ///ADC trigger 2 on Timer D compare
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ad2tdc4{}; 
        ///ADC trigger 2 on Timer D compare
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ad2tdc3{}; 
        ///ADC trigger 2 on Timer D compare
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ad2tdc2{}; 
        ///ADC trigger 2 on Timer C
              Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ad2tcrst{}; 
        ///ADC trigger 2 on Timer C
              Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ad2tcper{}; 
        ///ADC trigger 2 on Timer C compare
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ad2tcc4{}; 
        ///ADC trigger 2 on Timer C compare
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ad2tcc3{}; 
        ///ADC trigger 2 on Timer C compare
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ad2tcc2{}; 
        ///ADC trigger 2 on Timer B
              Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ad2tbper{}; 
        ///ADC trigger 2 on Timer B compare
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ad2tbc4{}; 
        ///ADC trigger 2 on Timer B compare
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ad2tbc3{}; 
        ///ADC trigger 2 on Timer B compare
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ad2tbc2{}; 
        ///ADC trigger 2 on Timer A
              Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ad2taper{}; 
        ///ADC trigger 2 on Timer A compare
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ad2tac4{}; 
        ///ADC trigger 2 on Timer A compare
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ad2tac3{}; 
        ///ADC trigger 2 on Timer A compare
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ad2tac2{}; 
        ///ADC trigger 2 on External Event
              10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ad2eev10{}; 
        ///ADC trigger 2 on External Event
              9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ad2eev9{}; 
        ///ADC trigger 2 on External Event
              8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ad2eev8{}; 
        ///ADC trigger 2 on External Event
              7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ad2eev7{}; 
        ///ADC trigger 2 on External Event
              6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ad2eev6{}; 
        ///ADC trigger 2 on Master
              Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ad2mper{}; 
        ///ADC trigger 2 on Master Compare
              4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ad2mc4{}; 
        ///ADC trigger 2 on Master Compare
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ad2mc3{}; 
        ///ADC trigger 2 on Master Compare
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ad2mc2{}; 
        ///ADC trigger 2 on Master Compare
              1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ad2mc1{}; 
    }
    namespace Noneadc3r{    ///<ADC Trigger 3 Register
        using Addr = Register::Address<0x400177c4,0x00000000,0,unsigned>;
        ///AD1TEPER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ad1teper{}; 
        ///AD1TEC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ad1tec4{}; 
        ///AD1TEC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ad1tec3{}; 
        ///AD1TEC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ad1tec2{}; 
        ///AD1TDPER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ad1tdper{}; 
        ///AD1TDC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ad1tdc4{}; 
        ///AD1TDC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ad1tdc3{}; 
        ///AD1TDC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ad1tdc2{}; 
        ///AD1TCPER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ad1tcper{}; 
        ///AD1TCC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ad1tcc4{}; 
        ///AD1TCC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ad1tcc3{}; 
        ///AD1TCC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ad1tcc2{}; 
        ///AD1TBRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ad1tbrst{}; 
        ///AD1TBPER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ad1tbper{}; 
        ///AD1TBC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ad1tbc4{}; 
        ///AD1TBC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ad1tbc3{}; 
        ///AD1TBC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ad1tbc2{}; 
        ///AD1TARST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ad1tarst{}; 
        ///AD1TAPER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ad1taper{}; 
        ///AD1TAC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ad1tac4{}; 
        ///AD1TAC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ad1tac3{}; 
        ///AD1TAC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ad1tac2{}; 
        ///AD1EEV5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ad1eev5{}; 
        ///AD1EEV4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ad1eev4{}; 
        ///AD1EEV3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ad1eev3{}; 
        ///AD1EEV2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ad1eev2{}; 
        ///AD1EEV1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ad1eev1{}; 
        ///AD1MPER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ad1mper{}; 
        ///AD1MC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ad1mc4{}; 
        ///AD1MC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ad1mc3{}; 
        ///AD1MC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ad1mc2{}; 
        ///AD1MC1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ad1mc1{}; 
    }
    namespace Noneadc4r{    ///<ADC Trigger 4 Register
        using Addr = Register::Address<0x400177c8,0x00000000,0,unsigned>;
        ///AD2TERST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ad2terst{}; 
        ///AD2TEC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ad2tec4{}; 
        ///AD2TEC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ad2tec3{}; 
        ///AD2TEC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ad2tec2{}; 
        ///AD2TDRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ad2tdrst{}; 
        ///AD2TDPER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ad2tdper{}; 
        ///AD2TDC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ad2tdc4{}; 
        ///AD2TDC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ad2tdc3{}; 
        ///AD2TDC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ad2tdc2{}; 
        ///AD2TCRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ad2tcrst{}; 
        ///AD2TCPER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ad2tcper{}; 
        ///AD2TCC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ad2tcc4{}; 
        ///AD2TCC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ad2tcc3{}; 
        ///AD2TCC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ad2tcc2{}; 
        ///AD2TBPER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ad2tbper{}; 
        ///AD2TBC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ad2tbc4{}; 
        ///AD2TBC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ad2tbc3{}; 
        ///AD2TBC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ad2tbc2{}; 
        ///AD2TAPER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ad2taper{}; 
        ///AD2TAC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ad2tac4{}; 
        ///AD2TAC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ad2tac3{}; 
        ///AD2TAC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ad2tac2{}; 
        ///AD2EEV10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ad2eev10{}; 
        ///AD2EEV9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ad2eev9{}; 
        ///AD2EEV8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ad2eev8{}; 
        ///AD2EEV7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ad2eev7{}; 
        ///AD2EEV6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ad2eev6{}; 
        ///AD2MPER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ad2mper{}; 
        ///AD2MC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ad2mc4{}; 
        ///AD2MC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ad2mc3{}; 
        ///AD2MC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ad2mc2{}; 
        ///AD2MC1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ad2mc1{}; 
    }
    namespace Nonedllcr{    ///<DLL Control Register
        using Addr = Register::Address<0x400177cc,0xfffffff0,0,unsigned>;
        ///DLL Calibration rate
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> calrte{}; 
        ///DLL Calibration Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> calen{}; 
        ///DLL Calibration Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cal{}; 
    }
    namespace Nonefltinr1{    ///<HRTIM Fault Input Register 1
        using Addr = Register::Address<0x400177d0,0x00000000,0,unsigned>;
        ///FLT4LCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> flt4lck{}; 
        ///FLT4F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,27),Register::ReadWriteAccess,unsigned> flt4f{}; 
        ///FLT4SRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> flt4src{}; 
        ///FLT4P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> flt4p{}; 
        ///FLT4E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> flt4e{}; 
        ///FLT3LCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> flt3lck{}; 
        ///FLT3F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,19),Register::ReadWriteAccess,unsigned> flt3f{}; 
        ///FLT3SRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> flt3src{}; 
        ///FLT3P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> flt3p{}; 
        ///FLT3E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> flt3e{}; 
        ///FLT2LCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> flt2lck{}; 
        ///FLT2F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> flt2f{}; 
        ///FLT2SRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> flt2src{}; 
        ///FLT2P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> flt2p{}; 
        ///FLT2E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> flt2e{}; 
        ///FLT1LCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flt1lck{}; 
        ///FLT1F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,unsigned> flt1f{}; 
        ///FLT1SRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flt1src{}; 
        ///FLT1P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flt1p{}; 
        ///FLT1E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flt1e{}; 
    }
    namespace Nonefltinr2{    ///<HRTIM Fault Input Register 2
        using Addr = Register::Address<0x400177d4,0xfcffff00,0,unsigned>;
        ///FLTSD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> fltsd{}; 
        ///FLT5LCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flt5lck{}; 
        ///FLT5F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,unsigned> flt5f{}; 
        ///FLT5SRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flt5src{}; 
        ///FLT5P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flt5p{}; 
        ///FLT5E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flt5e{}; 
    }
    namespace Nonebdmupdr{    ///<BDMUPDR
        using Addr = Register::Address<0x400177d8,0xfffffc00,0,unsigned>;
        ///MCMP4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mcmp4{}; 
        ///MCMP3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mcmp3{}; 
        ///MCMP2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mcmp2{}; 
        ///MCMP1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mcmp1{}; 
        ///MREP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mrep{}; 
        ///MPER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mper{}; 
        ///MCNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///MDIER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdier{}; 
        ///MICR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> micr{}; 
        ///MCR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcr{}; 
    }
    namespace Nonebdtxupr{    ///<Burst DMA Timerx update
          Register
        using Addr = Register::Address<0x400177dc,0xffe00000,0,unsigned>;
        ///HRTIM_FLTxR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> timxfltr{}; 
        ///HRTIM_OUTxR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timxoutr{}; 
        ///HRTIM_CHPxR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> timxchpr{}; 
        ///HRTIM_RSTxR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> timxrstr{}; 
        ///HRTIM_EEFxR2 register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> timxeefr2{}; 
        ///HRTIM_EEFxR1 register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timxeefr1{}; 
        ///HRTIM_RST2xR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timxrst2r{}; 
        ///HRTIM_SET2xR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timxset2r{}; 
        ///HRTIM_RST1xR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timxrst1r{}; 
        ///HRTIM_SET1xR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> timxset1r{}; 
        ///HRTIM_DTxR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> timxDtxr{}; 
        ///HRTIM_CMP4xR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> timxcmp4{}; 
        ///HRTIM_CMP3xR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timxcmp3{}; 
        ///HRTIM_CMP2xR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> timxcmp2{}; 
        ///HRTIM_CMP1xR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> timxcmp1{}; 
        ///HRTIM_REPxR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timxrep{}; 
        ///HRTIM_PERxR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timxper{}; 
        ///HRTIM_CNTxR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timxcnt{}; 
        ///HRTIM_TIMxDIER register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> timxdier{}; 
        ///HRTIM_TIMxICR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timxicr{}; 
        ///HRTIM_TIMxCR register update
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timxcr{}; 
    }
    namespace Nonebdmadr{    ///<Burst DMA Data Register
        using Addr = Register::Address<0x400177e0,0x00000000,0,unsigned>;
        ///Burst DMA Data register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bdmadr{}; 
    }
}
