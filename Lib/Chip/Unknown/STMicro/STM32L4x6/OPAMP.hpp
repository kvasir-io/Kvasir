#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Operational amplifiers
    namespace Noneopamp1Csr{    ///<OPAMP1 control/status register
        using Addr = Register::Address<0x40007800,0x7fff08c0,0,unsigned>;
        ///Operational amplifier
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opaen{}; 
        namespace OpaenValC{
        }
        ///Operational amplifier Low Power
              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> opalpm{}; 
        namespace OpalpmValC{
        }
        ///Operational amplifier PGA
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> opamode{}; 
        namespace OpamodeValC{
        }
        ///Operational amplifier Programmable
              amplifier gain value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        namespace PgagainValC{
        }
        ///Inverting input selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> vmSel{}; 
        namespace VmselValC{
        }
        ///Non inverted input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vpSel{}; 
        namespace VpselValC{
        }
        ///Calibration mode enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> calon{}; 
        namespace CalonValC{
        }
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> calsel{}; 
        namespace CalselValC{
        }
        ///allows to switch from
              ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¹Ãƒâ€¦Ã¢â‚¬Å“factoryÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢
              AOP offset trimmed values to AOP offset
              ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¹Ãƒâ€¦Ã¢â‚¬Å“userÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usertrim{}; 
        namespace UsertrimValC{
        }
        ///Operational amplifier calibration
              output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> calout{}; 
        namespace CaloutValC{
        }
        ///Operational amplifier power supply range
              for stability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> opaRange{}; 
        namespace OparangeValC{
        }
    }
    namespace Noneopamp1Otr{    ///<OPAMP1 offset trimming register in normal
          mode
        using Addr = Register::Address<0x40007804,0xffffe0e0,0,unsigned>;
        ///Trim for NMOS differential
              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        namespace TrimoffsetnValC{
        }
        ///Trim for PMOS differential
              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        namespace TrimoffsetpValC{
        }
    }
    namespace Noneopamp1Lpotr{    ///<OPAMP1 offset trimming register in low-power
          mode
        using Addr = Register::Address<0x40007808,0xffffe0e0,0,unsigned>;
        ///Trim for NMOS differential
              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimlpoffsetn{}; 
        namespace TrimlpoffsetnValC{
        }
        ///Trim for PMOS differential
              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimlpoffsetp{}; 
        namespace TrimlpoffsetpValC{
        }
    }
    namespace Noneopamp2Csr{    ///<OPAMP2 control/status register
        using Addr = Register::Address<0x40007810,0xffff08c0,0,unsigned>;
        ///Operational amplifier
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opaen{}; 
        namespace OpaenValC{
        }
        ///Operational amplifier Low Power
              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> opalpm{}; 
        namespace OpalpmValC{
        }
        ///Operational amplifier PGA
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> opamode{}; 
        namespace OpamodeValC{
        }
        ///Operational amplifier Programmable
              amplifier gain value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        namespace PgagainValC{
        }
        ///Inverting input selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> vmSel{}; 
        namespace VmselValC{
        }
        ///Non inverted input
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vpSel{}; 
        namespace VpselValC{
        }
        ///Calibration mode enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> calon{}; 
        namespace CalonValC{
        }
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> calsel{}; 
        namespace CalselValC{
        }
        ///allows to switch from
              ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¹Ãƒâ€¦Ã¢â‚¬Å“factoryÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢
              AOP offset trimmed values to AOP offset
              ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¹Ãƒâ€¦Ã¢â‚¬Å“userÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usertrim{}; 
        namespace UsertrimValC{
        }
        ///Operational amplifier calibration
              output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> calout{}; 
        namespace CaloutValC{
        }
    }
    namespace Noneopamp2Otr{    ///<OPAMP2 offset trimming register in normal
          mode
        using Addr = Register::Address<0x40007814,0xffffe0e0,0,unsigned>;
        ///Trim for NMOS differential
              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        namespace TrimoffsetnValC{
        }
        ///Trim for PMOS differential
              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        namespace TrimoffsetpValC{
        }
    }
    namespace Noneopamp2Lpotr{    ///<OPAMP2 offset trimming register in low-power
          mode
        using Addr = Register::Address<0x40007818,0xffffe0e0,0,unsigned>;
        ///Trim for NMOS differential
              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimlpoffsetn{}; 
        namespace TrimlpoffsetnValC{
        }
        ///Trim for PMOS differential
              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimlpoffsetp{}; 
        namespace TrimlpoffsetpValC{
        }
    }
}
