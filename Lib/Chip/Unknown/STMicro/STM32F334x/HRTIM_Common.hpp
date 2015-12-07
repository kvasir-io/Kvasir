#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High Resolution Timer: Common
      functions
    namespace Nonecr1{    ///<Control Register 1
        using Addr = Register::Address<0x40017780,0xf000ffc0,0,unsigned>;
        ///ADC Trigger 4 Update
              Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> ad4usrc{}; 
        namespace Ad4usrcValC{
        }
        ///ADC Trigger 3 Update
              Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,22),Register::ReadWriteAccess,unsigned> ad3usrc{}; 
        namespace Ad3usrcValC{
        }
        ///ADC Trigger 2 Update
              Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,unsigned> ad2usrc{}; 
        namespace Ad2usrcValC{
        }
        ///ADC Trigger 1 Update
              Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ad1usrc{}; 
        namespace Ad1usrcValC{
        }
        ///Timer E Update Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> teudis{}; 
        namespace TeudisValC{
        }
        ///Timer D Update Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tdudis{}; 
        namespace TdudisValC{
        }
        ///Timer C Update Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcudis{}; 
        namespace TcudisValC{
        }
        ///Timer B Update Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbudis{}; 
        namespace TbudisValC{
        }
        ///Timer A Update Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> taudis{}; 
        namespace TaudisValC{
        }
        ///Master Update Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mudis{}; 
        namespace MudisValC{
        }
    }
    namespace Nonecr2{    ///<Control Register 2
        using Addr = Register::Address<0x40017784,0xffffc0c0,0,unsigned>;
        ///Timer E counter software
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> terst{}; 
        namespace TerstValC{
        }
        ///Timer D counter software
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tdrst{}; 
        namespace TdrstValC{
        }
        ///Timer C counter software
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tcrst{}; 
        namespace TcrstValC{
        }
        ///Timer B counter software
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tbrst{}; 
        namespace TbrstValC{
        }
        ///Timer A counter software
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tarst{}; 
        namespace TarstValC{
        }
        ///Master Counter software
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mrst{}; 
        namespace MrstValC{
        }
        ///Timer E Software Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> teswu{}; 
        namespace TeswuValC{
        }
        ///Timer D Software Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tdswu{}; 
        namespace TdswuValC{
        }
        ///Timer C Software Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcswu{}; 
        namespace TcswuValC{
        }
        ///Timer B Software Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbswu{}; 
        namespace TbswuValC{
        }
        ///Timer A Software update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> taswu{}; 
        namespace TaswuValC{
        }
        ///Master Timer Software
              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mswu{}; 
        namespace MswuValC{
        }
    }
    namespace Noneisr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40017788,0xfffcffc0,0,unsigned>;
        ///Burst mode Period Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bmper{}; 
        namespace BmperValC{
        }
        ///DLL Ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dllrdy{}; 
        namespace DllrdyValC{
        }
        ///System Fault Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sysflt{}; 
        namespace SysfltValC{
        }
        ///Fault 5 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flt5{}; 
        namespace Flt5ValC{
        }
        ///Fault 4 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> flt4{}; 
        namespace Flt4ValC{
        }
        ///Fault 3 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flt3{}; 
        namespace Flt3ValC{
        }
        ///Fault 2 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flt2{}; 
        namespace Flt2ValC{
        }
        ///Fault 1 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flt1{}; 
        namespace Flt1ValC{
        }
    }
    namespace Noneicr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x4001778c,0xfffcffc0,0,unsigned>;
        ///Burst mode period flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bmperc{}; 
        namespace BmpercValC{
        }
        ///DLL Ready Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dllrdyc{}; 
        namespace DllrdycValC{
        }
        ///System Fault Interrupt Flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sysfltc{}; 
        namespace SysfltcValC{
        }
        ///Fault 5 Interrupt Flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flt5c{}; 
        namespace Flt5cValC{
        }
        ///Fault 4 Interrupt Flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> flt4c{}; 
        namespace Flt4cValC{
        }
        ///Fault 3 Interrupt Flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flt3c{}; 
        namespace Flt3cValC{
        }
        ///Fault 2 Interrupt Flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flt2c{}; 
        namespace Flt2cValC{
        }
        ///Fault 1 Interrupt Flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flt1c{}; 
        namespace Flt1cValC{
        }
    }
    namespace Noneier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40017790,0xfffcffc0,0,unsigned>;
        ///Burst mode period Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bmperie{}; 
        namespace BmperieValC{
        }
        ///DLL Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dllrdyie{}; 
        namespace DllrdyieValC{
        }
        ///System Fault Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sysflte{}; 
        namespace SysflteValC{
        }
        ///Fault 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flt5ie{}; 
        namespace Flt5ieValC{
        }
        ///Fault 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> flt4ie{}; 
        namespace Flt4ieValC{
        }
        ///Fault 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flt3ie{}; 
        namespace Flt3ieValC{
        }
        ///Fault 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flt2ie{}; 
        namespace Flt2ieValC{
        }
        ///Fault 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flt1ie{}; 
        namespace Flt1ieValC{
        }
    }
    namespace Noneoenr{    ///<Output Enable Register
        using Addr = Register::Address<0x40017794,0xfffffc00,0,unsigned>;
        ///Timer E Output 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> te2oen{}; 
        namespace Te2oenValC{
        }
        ///Timer E Output 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> te1oen{}; 
        namespace Te1oenValC{
        }
        ///Timer D Output 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> td2oen{}; 
        namespace Td2oenValC{
        }
        ///Timer D Output 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> td1oen{}; 
        namespace Td1oenValC{
        }
        ///Timer C Output 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc2oen{}; 
        namespace Tc2oenValC{
        }
        ///Timer C Output 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tc1oen{}; 
        namespace Tc1oenValC{
        }
        ///Timer B Output 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tb2oen{}; 
        namespace Tb2oenValC{
        }
        ///Timer B Output 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tb1oen{}; 
        namespace Tb1oenValC{
        }
        ///Timer A Output 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ta2oen{}; 
        namespace Ta2oenValC{
        }
        ///Timer A Output 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ta1oen{}; 
        namespace Ta1oenValC{
        }
    }
    namespace Nonedisr{    ///<DISR
        using Addr = Register::Address<0x40017798,0xfffffc00,0,unsigned>;
        ///TE2ODIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> te2odis{}; 
        namespace Te2odisValC{
        }
        ///TE1ODIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> te1odis{}; 
        namespace Te1odisValC{
        }
        ///TD2ODIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> td2odis{}; 
        namespace Td2odisValC{
        }
        ///TD1ODIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> td1odis{}; 
        namespace Td1odisValC{
        }
        ///TC2ODIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc2odis{}; 
        namespace Tc2odisValC{
        }
        ///TC1ODIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tc1odis{}; 
        namespace Tc1odisValC{
        }
        ///TB2ODIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tb2odis{}; 
        namespace Tb2odisValC{
        }
        ///TB1ODIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tb1odis{}; 
        namespace Tb1odisValC{
        }
        ///TA2ODIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ta2odis{}; 
        namespace Ta2odisValC{
        }
        ///TA1ODIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ta1odis{}; 
        namespace Ta1odisValC{
        }
    }
    namespace Noneodsr{    ///<Output Disable Status Register
        using Addr = Register::Address<0x4001779c,0xfffffc00,0,unsigned>;
        ///Timer E Output 2 disable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> te2ods{}; 
        namespace Te2odsValC{
        }
        ///Timer E Output 1 disable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> te1ods{}; 
        namespace Te1odsValC{
        }
        ///Timer D Output 2 disable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> td2ods{}; 
        namespace Td2odsValC{
        }
        ///Timer D Output 1 disable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> td1ods{}; 
        namespace Td1odsValC{
        }
        ///Timer C Output 2 disable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc2ods{}; 
        namespace Tc2odsValC{
        }
        ///Timer C Output 1 disable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tc1ods{}; 
        namespace Tc1odsValC{
        }
        ///Timer B Output 2 disable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tb2ods{}; 
        namespace Tb2odsValC{
        }
        ///Timer B Output 1 disable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tb1ods{}; 
        namespace Tb1odsValC{
        }
        ///Timer A Output 2 disable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ta2ods{}; 
        namespace Ta2odsValC{
        }
        ///Timer A Output 1 disable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ta1ods{}; 
        namespace Ta1odsValC{
        }
    }
    namespace Nonebmcr{    ///<Burst Mode Control Register
        using Addr = Register::Address<0x400177a0,0x7fc0f800,0,unsigned>;
        ///Burst Mode Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bmstat{}; 
        namespace BmstatValC{
        }
        ///Timer E Burst Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tebm{}; 
        namespace TebmValC{
        }
        ///Timer D Burst Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdbm{}; 
        namespace TdbmValC{
        }
        ///Timer C Burst Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tcbm{}; 
        namespace TcbmValC{
        }
        ///Timer B Burst Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tbbm{}; 
        namespace TbbmValC{
        }
        ///Timer A Burst Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tabm{}; 
        namespace TabmValC{
        }
        ///Master Timer Burst Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mtbm{}; 
        namespace MtbmValC{
        }
        ///Burst Mode Preload Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bmpren{}; 
        namespace BmprenValC{
        }
        ///Burst Mode Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> bmprsc{}; 
        namespace BmprscValC{
        }
        ///Burst Mode Clock source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> bmclk{}; 
        namespace BmclkValC{
        }
        ///Burst Mode operating mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bmom{}; 
        namespace BmomValC{
        }
        ///Burst Mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bme{}; 
        namespace BmeValC{
        }
    }
    namespace Nonebmtrg{    ///<BMTRG
        using Addr = Register::Address<0x400177a4,0x78000000,0,unsigned>;
        ///OCHPEV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ochpev{}; 
        namespace OchpevValC{
        }
        ///TECMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tecmp2{}; 
        namespace Tecmp2ValC{
        }
        ///TECMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> tecmp1{}; 
        namespace Tecmp1ValC{
        }
        ///TEREP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> terep{}; 
        namespace TerepValC{
        }
        ///TERST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> terst{}; 
        namespace TerstValC{
        }
        ///TDCMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tdcmp2{}; 
        namespace Tdcmp2ValC{
        }
        ///TDCMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tdcmp1{}; 
        namespace Tdcmp1ValC{
        }
        ///TDREP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdrep{}; 
        namespace TdrepValC{
        }
        ///TDRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tdrst{}; 
        namespace TdrstValC{
        }
        ///TCCMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tccmp2{}; 
        namespace Tccmp2ValC{
        }
        ///TCCMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tccmp1{}; 
        namespace Tccmp1ValC{
        }
        ///TCREP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tcrep{}; 
        namespace TcrepValC{
        }
        ///TCRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tcrst{}; 
        namespace TcrstValC{
        }
        ///TBCMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tbcmp2{}; 
        namespace Tbcmp2ValC{
        }
        ///TBCMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tbcmp1{}; 
        namespace Tbcmp1ValC{
        }
        ///TBREP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tbrep{}; 
        namespace TbrepValC{
        }
        ///TBRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tbrst{}; 
        namespace TbrstValC{
        }
        ///TACMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tacmp2{}; 
        namespace Tacmp2ValC{
        }
        ///TACMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tacmp1{}; 
        namespace Tacmp1ValC{
        }
        ///TAREP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tarep{}; 
        namespace TarepValC{
        }
        ///TARST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tarst{}; 
        namespace TarstValC{
        }
        ///MSTCMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mstcmp4{}; 
        namespace Mstcmp4ValC{
        }
        ///MSTCMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mstcmp3{}; 
        namespace Mstcmp3ValC{
        }
        ///MSTCMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstcmp2{}; 
        namespace Mstcmp2ValC{
        }
        ///MSTCMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mstcmp1{}; 
        namespace Mstcmp1ValC{
        }
        ///MSTREP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mstrep{}; 
        namespace MstrepValC{
        }
        ///MSTRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mstrst{}; 
        namespace MstrstValC{
        }
        ///SW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sw{}; 
        namespace SwValC{
        }
    }
    namespace Nonebmcmpr6{    ///<BMCMPR6
        using Addr = Register::Address<0x400177a8,0xffff0000,0,unsigned>;
        ///BMCMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bmcmp{}; 
        namespace BmcmpValC{
        }
    }
    namespace Nonebmper{    ///<Burst Mode Period Register
        using Addr = Register::Address<0x400177ac,0xffff0000,0,unsigned>;
        ///Burst mode Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bmper{}; 
        namespace BmperValC{
        }
    }
    namespace Noneeecr1{    ///<Timer External Event Control Register
          1
        using Addr = Register::Address<0x400177b0,0xc0000000,0,unsigned>;
        ///External Event 5 Fast mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ee5fast{}; 
        namespace Ee5fastValC{
        }
        ///External Event 5
              Sensitivity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,27),Register::ReadWriteAccess,unsigned> ee5sns{}; 
        namespace Ee5snsValC{
        }
        ///External Event 5 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ee5pol{}; 
        namespace Ee5polValC{
        }
        ///External Event 5 Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> ee5src{}; 
        namespace Ee5srcValC{
        }
        ///External Event 4 Fast mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ee4fast{}; 
        namespace Ee4fastValC{
        }
        ///External Event 4
              Sensitivity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> ee4sns{}; 
        namespace Ee4snsValC{
        }
        ///External Event 4 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ee4pol{}; 
        namespace Ee4polValC{
        }
        ///External Event 4 Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ee4src{}; 
        namespace Ee4srcValC{
        }
        ///External Event 3 Fast mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ee3fast{}; 
        namespace Ee3fastValC{
        }
        ///External Event 3
              Sensitivity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> ee3sns{}; 
        namespace Ee3snsValC{
        }
        ///External Event 3 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ee3pol{}; 
        namespace Ee3polValC{
        }
        ///External Event 3 Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ee3src{}; 
        namespace Ee3srcValC{
        }
        ///External Event 2 Fast mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ee2fast{}; 
        namespace Ee2fastValC{
        }
        ///External Event 2
              Sensitivity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> ee2sns{}; 
        namespace Ee2snsValC{
        }
        ///External Event 2 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ee2pol{}; 
        namespace Ee2polValC{
        }
        ///External Event 2 Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ee2src{}; 
        namespace Ee2srcValC{
        }
        ///External Event 1 Fast mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ee1fast{}; 
        namespace Ee1fastValC{
        }
        ///External Event 1
              Sensitivity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> ee1sns{}; 
        namespace Ee1snsValC{
        }
        ///External Event 1 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ee1pol{}; 
        namespace Ee1polValC{
        }
        ///External Event 1 Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ee1src{}; 
        namespace Ee1srcValC{
        }
    }
    namespace Noneeecr2{    ///<Timer External Event Control Register
          2
        using Addr = Register::Address<0x400177b4,0xe0820820,0,unsigned>;
        ///External Event 10
              Sensitivity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,27),Register::ReadWriteAccess,unsigned> ee10sns{}; 
        namespace Ee10snsValC{
        }
        ///External Event 10 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ee10pol{}; 
        namespace Ee10polValC{
        }
        ///External Event 10 Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> ee10src{}; 
        namespace Ee10srcValC{
        }
        ///External Event 9
              Sensitivity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> ee9sns{}; 
        namespace Ee9snsValC{
        }
        ///External Event 9 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ee9pol{}; 
        namespace Ee9polValC{
        }
        ///External Event 9 Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ee9src{}; 
        namespace Ee9srcValC{
        }
        ///External Event 8
              Sensitivity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> ee8sns{}; 
        namespace Ee8snsValC{
        }
        ///External Event 8 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ee8pol{}; 
        namespace Ee8polValC{
        }
        ///External Event 8 Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ee8src{}; 
        namespace Ee8srcValC{
        }
        ///External Event 7
              Sensitivity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> ee7sns{}; 
        namespace Ee7snsValC{
        }
        ///External Event 7 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ee7pol{}; 
        namespace Ee7polValC{
        }
        ///External Event 7 Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ee7src{}; 
        namespace Ee7srcValC{
        }
        ///External Event 6
              Sensitivity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> ee6sns{}; 
        namespace Ee6snsValC{
        }
        ///External Event 6 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ee6pol{}; 
        namespace Ee6polValC{
        }
        ///External Event 6 Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ee6src{}; 
        namespace Ee6srcValC{
        }
    }
    namespace Noneeecr3{    ///<Timer External Event Control Register
          3
        using Addr = Register::Address<0x400177b8,0xe0820820,0,unsigned>;
        ///EE10SNS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,27),Register::ReadWriteAccess,unsigned> ee10sns{}; 
        namespace Ee10snsValC{
        }
        ///EE10POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ee10pol{}; 
        namespace Ee10polValC{
        }
        ///EE10SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> ee10src{}; 
        namespace Ee10srcValC{
        }
        ///EE9SNS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> ee9sns{}; 
        namespace Ee9snsValC{
        }
        ///EE9POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ee9pol{}; 
        namespace Ee9polValC{
        }
        ///EE9SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ee9src{}; 
        namespace Ee9srcValC{
        }
        ///EE8SNS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> ee8sns{}; 
        namespace Ee8snsValC{
        }
        ///EE8POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ee8pol{}; 
        namespace Ee8polValC{
        }
        ///EE8SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ee8src{}; 
        namespace Ee8srcValC{
        }
        ///EE7SNS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> ee7sns{}; 
        namespace Ee7snsValC{
        }
        ///EE7POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ee7pol{}; 
        namespace Ee7polValC{
        }
        ///EE7SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ee7src{}; 
        namespace Ee7srcValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> ee6sns{}; 
        namespace Ee6snsValC{
        }
        ///EE6POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ee6pol{}; 
        namespace Ee6polValC{
        }
        ///EE6SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ee6src{}; 
        namespace Ee6srcValC{
        }
    }
    namespace Noneadc1r{    ///<ADC Trigger 1 Register
        using Addr = Register::Address<0x400177bc,0x00000000,0,unsigned>;
        ///ADC trigger 1 on Timer E
              Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ad1teper{}; 
        namespace Ad1teperValC{
        }
        ///ADC trigger 1 on Timer E compare
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ad1tec4{}; 
        namespace Ad1tec4ValC{
        }
        ///ADC trigger 1 on Timer E compare
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ad1tec3{}; 
        namespace Ad1tec3ValC{
        }
        ///ADC trigger 1 on Timer E compare
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ad1tec2{}; 
        namespace Ad1tec2ValC{
        }
        ///ADC trigger 1 on Timer D
              Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ad1tdper{}; 
        namespace Ad1tdperValC{
        }
        ///ADC trigger 1 on Timer D compare
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ad1tdc4{}; 
        namespace Ad1tdc4ValC{
        }
        ///ADC trigger 1 on Timer D compare
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ad1tdc3{}; 
        namespace Ad1tdc3ValC{
        }
        ///ADC trigger 1 on Timer D compare
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ad1tdc2{}; 
        namespace Ad1tdc2ValC{
        }
        ///ADC trigger 1 on Timer C
              Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ad1tcper{}; 
        namespace Ad1tcperValC{
        }
        ///ADC trigger 1 on Timer C compare
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ad1tcc4{}; 
        namespace Ad1tcc4ValC{
        }
        ///ADC trigger 1 on Timer C compare
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ad1tcc3{}; 
        namespace Ad1tcc3ValC{
        }
        ///ADC trigger 1 on Timer C compare
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ad1tcc2{}; 
        namespace Ad1tcc2ValC{
        }
        ///ADC trigger 1 on Timer B
              Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ad1tbrst{}; 
        namespace Ad1tbrstValC{
        }
        ///ADC trigger 1 on Timer B
              Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ad1tbper{}; 
        namespace Ad1tbperValC{
        }
        ///ADC trigger 1 on Timer B compare
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ad1tbc4{}; 
        namespace Ad1tbc4ValC{
        }
        ///ADC trigger 1 on Timer B compare
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ad1tbc3{}; 
        namespace Ad1tbc3ValC{
        }
        ///ADC trigger 1 on Timer B compare
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ad1tbc2{}; 
        namespace Ad1tbc2ValC{
        }
        ///ADC trigger 1 on Timer A
              Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ad1tarst{}; 
        namespace Ad1tarstValC{
        }
        ///ADC trigger 1 on Timer A
              Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ad1taper{}; 
        namespace Ad1taperValC{
        }
        ///ADC trigger 1 on Timer A compare
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ad1tac4{}; 
        namespace Ad1tac4ValC{
        }
        ///ADC trigger 1 on Timer A compare
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ad1tac3{}; 
        namespace Ad1tac3ValC{
        }
        ///ADC trigger 1 on Timer A compare
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ad1tac2{}; 
        namespace Ad1tac2ValC{
        }
        ///ADC trigger 1 on External Event
              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ad1eev5{}; 
        namespace Ad1eev5ValC{
        }
        ///ADC trigger 1 on External Event
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ad1eev4{}; 
        namespace Ad1eev4ValC{
        }
        ///ADC trigger 1 on External Event
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ad1eev3{}; 
        namespace Ad1eev3ValC{
        }
        ///ADC trigger 1 on External Event
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ad1eev2{}; 
        namespace Ad1eev2ValC{
        }
        ///ADC trigger 1 on External Event
              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ad1eev1{}; 
        namespace Ad1eev1ValC{
        }
        ///ADC trigger 1 on Master
              Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ad1mper{}; 
        namespace Ad1mperValC{
        }
        ///ADC trigger 1 on Master Compare
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ad1mc4{}; 
        namespace Ad1mc4ValC{
        }
        ///ADC trigger 1 on Master Compare
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ad1mc3{}; 
        namespace Ad1mc3ValC{
        }
        ///ADC trigger 1 on Master Compare
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ad1mc2{}; 
        namespace Ad1mc2ValC{
        }
        ///ADC trigger 1 on Master Compare
              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ad1mc1{}; 
        namespace Ad1mc1ValC{
        }
    }
    namespace Noneadc2r{    ///<ADC Trigger 2 Register
        using Addr = Register::Address<0x400177c0,0x00000000,0,unsigned>;
        ///ADC trigger 2 on Timer E
              Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ad2terst{}; 
        namespace Ad2terstValC{
        }
        ///ADC trigger 2 on Timer E compare
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ad2tec4{}; 
        namespace Ad2tec4ValC{
        }
        ///ADC trigger 2 on Timer E compare
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ad2tec3{}; 
        namespace Ad2tec3ValC{
        }
        ///ADC trigger 2 on Timer E compare
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ad2tec2{}; 
        namespace Ad2tec2ValC{
        }
        ///ADC trigger 2 on Timer D
              Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ad2tdrst{}; 
        namespace Ad2tdrstValC{
        }
        ///ADC trigger 2 on Timer D
              Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ad2tdper{}; 
        namespace Ad2tdperValC{
        }
        ///ADC trigger 2 on Timer D compare
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ad2tdc4{}; 
        namespace Ad2tdc4ValC{
        }
        ///ADC trigger 2 on Timer D compare
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ad2tdc3{}; 
        namespace Ad2tdc3ValC{
        }
        ///ADC trigger 2 on Timer D compare
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ad2tdc2{}; 
        namespace Ad2tdc2ValC{
        }
        ///ADC trigger 2 on Timer C
              Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ad2tcrst{}; 
        namespace Ad2tcrstValC{
        }
        ///ADC trigger 2 on Timer C
              Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ad2tcper{}; 
        namespace Ad2tcperValC{
        }
        ///ADC trigger 2 on Timer C compare
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ad2tcc4{}; 
        namespace Ad2tcc4ValC{
        }
        ///ADC trigger 2 on Timer C compare
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ad2tcc3{}; 
        namespace Ad2tcc3ValC{
        }
        ///ADC trigger 2 on Timer C compare
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ad2tcc2{}; 
        namespace Ad2tcc2ValC{
        }
        ///ADC trigger 2 on Timer B
              Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ad2tbper{}; 
        namespace Ad2tbperValC{
        }
        ///ADC trigger 2 on Timer B compare
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ad2tbc4{}; 
        namespace Ad2tbc4ValC{
        }
        ///ADC trigger 2 on Timer B compare
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ad2tbc3{}; 
        namespace Ad2tbc3ValC{
        }
        ///ADC trigger 2 on Timer B compare
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ad2tbc2{}; 
        namespace Ad2tbc2ValC{
        }
        ///ADC trigger 2 on Timer A
              Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ad2taper{}; 
        namespace Ad2taperValC{
        }
        ///ADC trigger 2 on Timer A compare
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ad2tac4{}; 
        namespace Ad2tac4ValC{
        }
        ///ADC trigger 2 on Timer A compare
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ad2tac3{}; 
        namespace Ad2tac3ValC{
        }
        ///ADC trigger 2 on Timer A compare
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ad2tac2{}; 
        namespace Ad2tac2ValC{
        }
        ///ADC trigger 2 on External Event
              10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ad2eev10{}; 
        namespace Ad2eev10ValC{
        }
        ///ADC trigger 2 on External Event
              9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ad2eev9{}; 
        namespace Ad2eev9ValC{
        }
        ///ADC trigger 2 on External Event
              8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ad2eev8{}; 
        namespace Ad2eev8ValC{
        }
        ///ADC trigger 2 on External Event
              7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ad2eev7{}; 
        namespace Ad2eev7ValC{
        }
        ///ADC trigger 2 on External Event
              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ad2eev6{}; 
        namespace Ad2eev6ValC{
        }
        ///ADC trigger 2 on Master
              Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ad2mper{}; 
        namespace Ad2mperValC{
        }
        ///ADC trigger 2 on Master Compare
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ad2mc4{}; 
        namespace Ad2mc4ValC{
        }
        ///ADC trigger 2 on Master Compare
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ad2mc3{}; 
        namespace Ad2mc3ValC{
        }
        ///ADC trigger 2 on Master Compare
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ad2mc2{}; 
        namespace Ad2mc2ValC{
        }
        ///ADC trigger 2 on Master Compare
              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ad2mc1{}; 
        namespace Ad2mc1ValC{
        }
    }
    namespace Noneadc3r{    ///<ADC Trigger 3 Register
        using Addr = Register::Address<0x400177c4,0x00000000,0,unsigned>;
        ///AD1TEPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ad1teper{}; 
        namespace Ad1teperValC{
        }
        ///AD1TEC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ad1tec4{}; 
        namespace Ad1tec4ValC{
        }
        ///AD1TEC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ad1tec3{}; 
        namespace Ad1tec3ValC{
        }
        ///AD1TEC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ad1tec2{}; 
        namespace Ad1tec2ValC{
        }
        ///AD1TDPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ad1tdper{}; 
        namespace Ad1tdperValC{
        }
        ///AD1TDC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ad1tdc4{}; 
        namespace Ad1tdc4ValC{
        }
        ///AD1TDC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ad1tdc3{}; 
        namespace Ad1tdc3ValC{
        }
        ///AD1TDC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ad1tdc2{}; 
        namespace Ad1tdc2ValC{
        }
        ///AD1TCPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ad1tcper{}; 
        namespace Ad1tcperValC{
        }
        ///AD1TCC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ad1tcc4{}; 
        namespace Ad1tcc4ValC{
        }
        ///AD1TCC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ad1tcc3{}; 
        namespace Ad1tcc3ValC{
        }
        ///AD1TCC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ad1tcc2{}; 
        namespace Ad1tcc2ValC{
        }
        ///AD1TBRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ad1tbrst{}; 
        namespace Ad1tbrstValC{
        }
        ///AD1TBPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ad1tbper{}; 
        namespace Ad1tbperValC{
        }
        ///AD1TBC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ad1tbc4{}; 
        namespace Ad1tbc4ValC{
        }
        ///AD1TBC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ad1tbc3{}; 
        namespace Ad1tbc3ValC{
        }
        ///AD1TBC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ad1tbc2{}; 
        namespace Ad1tbc2ValC{
        }
        ///AD1TARST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ad1tarst{}; 
        namespace Ad1tarstValC{
        }
        ///AD1TAPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ad1taper{}; 
        namespace Ad1taperValC{
        }
        ///AD1TAC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ad1tac4{}; 
        namespace Ad1tac4ValC{
        }
        ///AD1TAC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ad1tac3{}; 
        namespace Ad1tac3ValC{
        }
        ///AD1TAC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ad1tac2{}; 
        namespace Ad1tac2ValC{
        }
        ///AD1EEV5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ad1eev5{}; 
        namespace Ad1eev5ValC{
        }
        ///AD1EEV4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ad1eev4{}; 
        namespace Ad1eev4ValC{
        }
        ///AD1EEV3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ad1eev3{}; 
        namespace Ad1eev3ValC{
        }
        ///AD1EEV2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ad1eev2{}; 
        namespace Ad1eev2ValC{
        }
        ///AD1EEV1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ad1eev1{}; 
        namespace Ad1eev1ValC{
        }
        ///AD1MPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ad1mper{}; 
        namespace Ad1mperValC{
        }
        ///AD1MC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ad1mc4{}; 
        namespace Ad1mc4ValC{
        }
        ///AD1MC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ad1mc3{}; 
        namespace Ad1mc3ValC{
        }
        ///AD1MC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ad1mc2{}; 
        namespace Ad1mc2ValC{
        }
        ///AD1MC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ad1mc1{}; 
        namespace Ad1mc1ValC{
        }
    }
    namespace Noneadc4r{    ///<ADC Trigger 4 Register
        using Addr = Register::Address<0x400177c8,0x00000000,0,unsigned>;
        ///AD2TERST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ad2terst{}; 
        namespace Ad2terstValC{
        }
        ///AD2TEC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ad2tec4{}; 
        namespace Ad2tec4ValC{
        }
        ///AD2TEC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ad2tec3{}; 
        namespace Ad2tec3ValC{
        }
        ///AD2TEC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ad2tec2{}; 
        namespace Ad2tec2ValC{
        }
        ///AD2TDRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ad2tdrst{}; 
        namespace Ad2tdrstValC{
        }
        ///AD2TDPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ad2tdper{}; 
        namespace Ad2tdperValC{
        }
        ///AD2TDC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ad2tdc4{}; 
        namespace Ad2tdc4ValC{
        }
        ///AD2TDC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ad2tdc3{}; 
        namespace Ad2tdc3ValC{
        }
        ///AD2TDC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ad2tdc2{}; 
        namespace Ad2tdc2ValC{
        }
        ///AD2TCRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ad2tcrst{}; 
        namespace Ad2tcrstValC{
        }
        ///AD2TCPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ad2tcper{}; 
        namespace Ad2tcperValC{
        }
        ///AD2TCC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ad2tcc4{}; 
        namespace Ad2tcc4ValC{
        }
        ///AD2TCC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ad2tcc3{}; 
        namespace Ad2tcc3ValC{
        }
        ///AD2TCC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ad2tcc2{}; 
        namespace Ad2tcc2ValC{
        }
        ///AD2TBPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ad2tbper{}; 
        namespace Ad2tbperValC{
        }
        ///AD2TBC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ad2tbc4{}; 
        namespace Ad2tbc4ValC{
        }
        ///AD2TBC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ad2tbc3{}; 
        namespace Ad2tbc3ValC{
        }
        ///AD2TBC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ad2tbc2{}; 
        namespace Ad2tbc2ValC{
        }
        ///AD2TAPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ad2taper{}; 
        namespace Ad2taperValC{
        }
        ///AD2TAC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ad2tac4{}; 
        namespace Ad2tac4ValC{
        }
        ///AD2TAC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ad2tac3{}; 
        namespace Ad2tac3ValC{
        }
        ///AD2TAC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ad2tac2{}; 
        namespace Ad2tac2ValC{
        }
        ///AD2EEV10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ad2eev10{}; 
        namespace Ad2eev10ValC{
        }
        ///AD2EEV9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ad2eev9{}; 
        namespace Ad2eev9ValC{
        }
        ///AD2EEV8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ad2eev8{}; 
        namespace Ad2eev8ValC{
        }
        ///AD2EEV7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ad2eev7{}; 
        namespace Ad2eev7ValC{
        }
        ///AD2EEV6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ad2eev6{}; 
        namespace Ad2eev6ValC{
        }
        ///AD2MPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ad2mper{}; 
        namespace Ad2mperValC{
        }
        ///AD2MC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ad2mc4{}; 
        namespace Ad2mc4ValC{
        }
        ///AD2MC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ad2mc3{}; 
        namespace Ad2mc3ValC{
        }
        ///AD2MC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ad2mc2{}; 
        namespace Ad2mc2ValC{
        }
        ///AD2MC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ad2mc1{}; 
        namespace Ad2mc1ValC{
        }
    }
    namespace Nonedllcr{    ///<DLL Control Register
        using Addr = Register::Address<0x400177cc,0xfffffff0,0,unsigned>;
        ///DLL Calibration rate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> calrte{}; 
        namespace CalrteValC{
        }
        ///DLL Calibration Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> calen{}; 
        namespace CalenValC{
        }
        ///DLL Calibration Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cal{}; 
        namespace CalValC{
        }
    }
    namespace Nonefltinr1{    ///<HRTIM Fault Input Register 1
        using Addr = Register::Address<0x400177d0,0x00000000,0,unsigned>;
        ///FLT4LCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> flt4lck{}; 
        namespace Flt4lckValC{
        }
        ///FLT4F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,27),Register::ReadWriteAccess,unsigned> flt4f{}; 
        namespace Flt4fValC{
        }
        ///FLT4SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> flt4src{}; 
        namespace Flt4srcValC{
        }
        ///FLT4P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> flt4p{}; 
        namespace Flt4pValC{
        }
        ///FLT4E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> flt4e{}; 
        namespace Flt4eValC{
        }
        ///FLT3LCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> flt3lck{}; 
        namespace Flt3lckValC{
        }
        ///FLT3F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,19),Register::ReadWriteAccess,unsigned> flt3f{}; 
        namespace Flt3fValC{
        }
        ///FLT3SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> flt3src{}; 
        namespace Flt3srcValC{
        }
        ///FLT3P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> flt3p{}; 
        namespace Flt3pValC{
        }
        ///FLT3E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> flt3e{}; 
        namespace Flt3eValC{
        }
        ///FLT2LCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> flt2lck{}; 
        namespace Flt2lckValC{
        }
        ///FLT2F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> flt2f{}; 
        namespace Flt2fValC{
        }
        ///FLT2SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> flt2src{}; 
        namespace Flt2srcValC{
        }
        ///FLT2P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> flt2p{}; 
        namespace Flt2pValC{
        }
        ///FLT2E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> flt2e{}; 
        namespace Flt2eValC{
        }
        ///FLT1LCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flt1lck{}; 
        namespace Flt1lckValC{
        }
        ///FLT1F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,unsigned> flt1f{}; 
        namespace Flt1fValC{
        }
        ///FLT1SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flt1src{}; 
        namespace Flt1srcValC{
        }
        ///FLT1P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flt1p{}; 
        namespace Flt1pValC{
        }
        ///FLT1E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flt1e{}; 
        namespace Flt1eValC{
        }
    }
    namespace Nonefltinr2{    ///<HRTIM Fault Input Register 2
        using Addr = Register::Address<0x400177d4,0xfcffff00,0,unsigned>;
        ///FLTSD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> fltsd{}; 
        namespace FltsdValC{
        }
        ///FLT5LCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flt5lck{}; 
        namespace Flt5lckValC{
        }
        ///FLT5F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,unsigned> flt5f{}; 
        namespace Flt5fValC{
        }
        ///FLT5SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flt5src{}; 
        namespace Flt5srcValC{
        }
        ///FLT5P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flt5p{}; 
        namespace Flt5pValC{
        }
        ///FLT5E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flt5e{}; 
        namespace Flt5eValC{
        }
    }
    namespace Nonebdmupdr{    ///<BDMUPDR
        using Addr = Register::Address<0x400177d8,0xfffffc00,0,unsigned>;
        ///MCMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mcmp4{}; 
        namespace Mcmp4ValC{
        }
        ///MCMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mcmp3{}; 
        namespace Mcmp3ValC{
        }
        ///MCMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mcmp2{}; 
        namespace Mcmp2ValC{
        }
        ///MCMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mcmp1{}; 
        namespace Mcmp1ValC{
        }
        ///MREP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mrep{}; 
        namespace MrepValC{
        }
        ///MPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mper{}; 
        namespace MperValC{
        }
        ///MCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
        ///MDIER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdier{}; 
        namespace MdierValC{
        }
        ///MICR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> micr{}; 
        namespace MicrValC{
        }
        ///MCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcr{}; 
        namespace McrValC{
        }
    }
    namespace Nonebdtxupr{    ///<Burst DMA Timerx update
          Register
        using Addr = Register::Address<0x400177dc,0xffe00000,0,unsigned>;
        ///HRTIM_FLTxR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> timxfltr{}; 
        namespace TimxfltrValC{
        }
        ///HRTIM_OUTxR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timxoutr{}; 
        namespace TimxoutrValC{
        }
        ///HRTIM_CHPxR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> timxchpr{}; 
        namespace TimxchprValC{
        }
        ///HRTIM_RSTxR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> timxrstr{}; 
        namespace TimxrstrValC{
        }
        ///HRTIM_EEFxR2 register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> timxeefr2{}; 
        namespace Timxeefr2ValC{
        }
        ///HRTIM_EEFxR1 register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timxeefr1{}; 
        namespace Timxeefr1ValC{
        }
        ///HRTIM_RST2xR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timxrst2r{}; 
        namespace Timxrst2rValC{
        }
        ///HRTIM_SET2xR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timxset2r{}; 
        namespace Timxset2rValC{
        }
        ///HRTIM_RST1xR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timxrst1r{}; 
        namespace Timxrst1rValC{
        }
        ///HRTIM_SET1xR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> timxset1r{}; 
        namespace Timxset1rValC{
        }
        ///HRTIM_DTxR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> timxDtxr{}; 
        namespace TimxdtxrValC{
        }
        ///HRTIM_CMP4xR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> timxcmp4{}; 
        namespace Timxcmp4ValC{
        }
        ///HRTIM_CMP3xR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timxcmp3{}; 
        namespace Timxcmp3ValC{
        }
        ///HRTIM_CMP2xR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> timxcmp2{}; 
        namespace Timxcmp2ValC{
        }
        ///HRTIM_CMP1xR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> timxcmp1{}; 
        namespace Timxcmp1ValC{
        }
        ///HRTIM_REPxR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timxrep{}; 
        namespace TimxrepValC{
        }
        ///HRTIM_PERxR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timxper{}; 
        namespace TimxperValC{
        }
        ///HRTIM_CNTxR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timxcnt{}; 
        namespace TimxcntValC{
        }
        ///HRTIM_TIMxDIER register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> timxdier{}; 
        namespace TimxdierValC{
        }
        ///HRTIM_TIMxICR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timxicr{}; 
        namespace TimxicrValC{
        }
        ///HRTIM_TIMxCR register update
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timxcr{}; 
        namespace TimxcrValC{
        }
    }
    namespace Nonebdmadr{    ///<Burst DMA Data Register
        using Addr = Register::Address<0x400177e0,0x00000000,0,unsigned>;
        ///Burst DMA Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bdmadr{}; 
        namespace BdmadrValC{
        }
    }
}
