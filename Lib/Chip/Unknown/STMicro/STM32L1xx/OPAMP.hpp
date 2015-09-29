#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Operational amplifiers
    namespace Nonecsr{    ///<control/status register
        using Addr = Register::Address<0x40007c5c,0x00000000,0,unsigned>;
        ///OPAMP3 calibration output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> opa3calout{}; 
        ///OPAMP2 calibration output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> opa2calout{}; 
        ///OPAMP1 calibration output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> opa1calout{}; 
        ///Power range selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> aopRange{}; 
        ///Switch 7 for OPAMP2 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s7sel2{}; 
        ///Switch SanA enable for
              OPAMP3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> anawsel3{}; 
        ///Switch SanA enable for
              OPAMP2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> anawsel2{}; 
        ///Switch SanA enable for
              OPAMP1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> anawsel1{}; 
        ///OPAMP3 low power mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> opa3lpm{}; 
        ///OPAMP3 offset calibration for N
              differential pair
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> opa3calH{}; 
        ///OPAMP3 offset Calibration for P
              differential pair
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> opa3calL{}; 
        ///Switch 6 for OPAMP3 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s6sel3{}; 
        ///Switch 5 for OPAMP3 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s5sel3{}; 
        ///Switch 4 for OPAMP3 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s4sel3{}; 
        ///Switch 3 for OPAMP3 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s3sel3{}; 
        ///OPAMP3 power down
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> opa3pd{}; 
        ///OPAMP2 low power mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> opa2lpm{}; 
        ///OPAMP2 offset calibration for N
              differential pair
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> opa2calH{}; 
        ///OPAMP2 offset Calibration for P
              differential pair
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> opa2calL{}; 
        ///Switch 6 for OPAMP2 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s6sel2{}; 
        ///Switch 5 for OPAMP2 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s5sel2{}; 
        ///Switch 4 for OPAMP2 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s4sel2{}; 
        ///Switch 3 for OPAMP2 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s3sel2{}; 
        ///OPAMP2 power down
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> opa2pd{}; 
        ///OPAMP1 low power mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> opa1lpm{}; 
        ///OPAMP1 offset calibration for N
              differential pair
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> opa1calH{}; 
        ///OPAMP1 offset calibration for P
              differential pair
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> opa1calL{}; 
        ///Switch 6 for OPAMP1 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s6sel1{}; 
        ///Switch 5 for OPAMP1 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s5sel1{}; 
        ///Switch 4 for OPAMP1 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s4sel1{}; 
        ///Switch 3 for OPAMP1 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s3sel1{}; 
        ///OPAMP1 power down
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opa1pd{}; 
    }
    namespace Noneotr{    ///<offset trimming register for normal
          mode
        using Addr = Register::Address<0x40007c60,0x40000000,0,unsigned>;
        ///Select user or factory trimming
              value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> otUser{}; 
        ///OPAMP3, 10-bit offset trim value for
              normal mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20),Register::ReadWriteAccess,unsigned> ao3OptOffsetTrim{}; 
        ///OPAMP2, 10-bit offset trim value for
              normal mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> ao2OptOffsetTrim{}; 
        ///OPAMP1, 10-bit offset trim value for
              normal mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ao1OptOffsetTrim{}; 
    }
    namespace Nonelpotr{    ///<OPAMP offset trimming register for low power
          mode
        using Addr = Register::Address<0x40007c64,0xc0000000,0,unsigned>;
        ///OPAMP3, 10-bit offset trim value for low
              power mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20),Register::ReadWriteAccess,unsigned> ao3OptOffsetTrimLp{}; 
        ///OPAMP2, 10-bit offset trim value for low
              power mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> ao2OptOffsetTrimLp{}; 
        ///OPAMP1, 10-bit offset trim value for low
              power mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ao1OptOffsetTrimLp{}; 
    }
}
