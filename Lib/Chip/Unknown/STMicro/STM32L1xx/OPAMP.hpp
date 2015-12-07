#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Operational amplifiers
    namespace Nonecsr{    ///<control/status register
        using Addr = Register::Address<0x40007c5c,0x00000000,0,unsigned>;
        ///OPAMP3 calibration output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> opa3calout{}; 
        namespace Opa3caloutValC{
        }
        ///OPAMP2 calibration output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> opa2calout{}; 
        namespace Opa2caloutValC{
        }
        ///OPAMP1 calibration output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> opa1calout{}; 
        namespace Opa1caloutValC{
        }
        ///Power range selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> aopRange{}; 
        namespace AoprangeValC{
        }
        ///Switch 7 for OPAMP2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s7sel2{}; 
        namespace S7sel2ValC{
        }
        ///Switch SanA enable for
              OPAMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> anawsel3{}; 
        namespace Anawsel3ValC{
        }
        ///Switch SanA enable for
              OPAMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> anawsel2{}; 
        namespace Anawsel2ValC{
        }
        ///Switch SanA enable for
              OPAMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> anawsel1{}; 
        namespace Anawsel1ValC{
        }
        ///OPAMP3 low power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> opa3lpm{}; 
        namespace Opa3lpmValC{
        }
        ///OPAMP3 offset calibration for N
              differential pair
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> opa3calH{}; 
        namespace Opa3calhValC{
        }
        ///OPAMP3 offset Calibration for P
              differential pair
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> opa3calL{}; 
        namespace Opa3callValC{
        }
        ///Switch 6 for OPAMP3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s6sel3{}; 
        namespace S6sel3ValC{
        }
        ///Switch 5 for OPAMP3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s5sel3{}; 
        namespace S5sel3ValC{
        }
        ///Switch 4 for OPAMP3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s4sel3{}; 
        namespace S4sel3ValC{
        }
        ///Switch 3 for OPAMP3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s3sel3{}; 
        namespace S3sel3ValC{
        }
        ///OPAMP3 power down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> opa3pd{}; 
        namespace Opa3pdValC{
        }
        ///OPAMP2 low power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> opa2lpm{}; 
        namespace Opa2lpmValC{
        }
        ///OPAMP2 offset calibration for N
              differential pair
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> opa2calH{}; 
        namespace Opa2calhValC{
        }
        ///OPAMP2 offset Calibration for P
              differential pair
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> opa2calL{}; 
        namespace Opa2callValC{
        }
        ///Switch 6 for OPAMP2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s6sel2{}; 
        namespace S6sel2ValC{
        }
        ///Switch 5 for OPAMP2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s5sel2{}; 
        namespace S5sel2ValC{
        }
        ///Switch 4 for OPAMP2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s4sel2{}; 
        namespace S4sel2ValC{
        }
        ///Switch 3 for OPAMP2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s3sel2{}; 
        namespace S3sel2ValC{
        }
        ///OPAMP2 power down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> opa2pd{}; 
        namespace Opa2pdValC{
        }
        ///OPAMP1 low power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> opa1lpm{}; 
        namespace Opa1lpmValC{
        }
        ///OPAMP1 offset calibration for N
              differential pair
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> opa1calH{}; 
        namespace Opa1calhValC{
        }
        ///OPAMP1 offset calibration for P
              differential pair
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> opa1calL{}; 
        namespace Opa1callValC{
        }
        ///Switch 6 for OPAMP1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s6sel1{}; 
        namespace S6sel1ValC{
        }
        ///Switch 5 for OPAMP1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s5sel1{}; 
        namespace S5sel1ValC{
        }
        ///Switch 4 for OPAMP1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s4sel1{}; 
        namespace S4sel1ValC{
        }
        ///Switch 3 for OPAMP1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s3sel1{}; 
        namespace S3sel1ValC{
        }
        ///OPAMP1 power down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opa1pd{}; 
        namespace Opa1pdValC{
        }
    }
    namespace Noneotr{    ///<offset trimming register for normal
          mode
        using Addr = Register::Address<0x40007c60,0x40000000,0,unsigned>;
        ///Select user or factory trimming
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> otUser{}; 
        namespace OtuserValC{
        }
        ///OPAMP3, 10-bit offset trim value for
              normal mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,20),Register::ReadWriteAccess,unsigned> ao3OptOffsetTrim{}; 
        namespace Ao3optoffsettrimValC{
        }
        ///OPAMP2, 10-bit offset trim value for
              normal mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> ao2OptOffsetTrim{}; 
        namespace Ao2optoffsettrimValC{
        }
        ///OPAMP1, 10-bit offset trim value for
              normal mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ao1OptOffsetTrim{}; 
        namespace Ao1optoffsettrimValC{
        }
    }
    namespace Nonelpotr{    ///<OPAMP offset trimming register for low power
          mode
        using Addr = Register::Address<0x40007c64,0xc0000000,0,unsigned>;
        ///OPAMP3, 10-bit offset trim value for low
              power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,20),Register::ReadWriteAccess,unsigned> ao3OptOffsetTrimLp{}; 
        namespace Ao3optoffsettrimlpValC{
        }
        ///OPAMP2, 10-bit offset trim value for low
              power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> ao2OptOffsetTrimLp{}; 
        namespace Ao2optoffsettrimlpValC{
        }
        ///OPAMP1, 10-bit offset trim value for low
              power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ao1OptOffsetTrimLp{}; 
        namespace Ao1optoffsettrimlpValC{
        }
    }
}
