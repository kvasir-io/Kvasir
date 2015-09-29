#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Operational amplifiers
    namespace Noneopamp1Csr{    ///<OPAMP1 control/status register
        using Addr = Register::Address<0x40007800,0x7fff08c0,0,unsigned>;
        ///Operational amplifier
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opaen{}; 
        ///Operational amplifier Low Power
              Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> opalpm{}; 
        ///Operational amplifier PGA
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> opamode{}; 
        ///Operational amplifier Programmable
              amplifier gain value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///Inverting input selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Non inverted input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///Calibration mode enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> calsel{}; 
        ///allows to switch from
              ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¹Ãƒâ€¦Ã¢â‚¬Å“factoryÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢
              AOP offset trimmed values to AOP offset
              ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¹Ãƒâ€¦Ã¢â‚¬Å“userÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usertrim{}; 
        ///Operational amplifier calibration
              output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> calout{}; 
        ///Operational amplifier power supply range
              for stability
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> opaRange{}; 
    }
    namespace Noneopamp1Otr{    ///<OPAMP1 offset trimming register in normal
          mode
        using Addr = Register::Address<0x40007804,0xffffe0e0,0,unsigned>;
        ///Trim for NMOS differential
              pairs
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///Trim for PMOS differential
              pairs
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
    }
    namespace Noneopamp1Lpotr{    ///<OPAMP1 offset trimming register in low-power
          mode
        using Addr = Register::Address<0x40007808,0xffffe0e0,0,unsigned>;
        ///Trim for NMOS differential
              pairs
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimlpoffsetn{}; 
        ///Trim for PMOS differential
              pairs
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimlpoffsetp{}; 
    }
    namespace Noneopamp2Csr{    ///<OPAMP2 control/status register
        using Addr = Register::Address<0x40007810,0xffff08c0,0,unsigned>;
        ///Operational amplifier
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opaen{}; 
        ///Operational amplifier Low Power
              Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> opalpm{}; 
        ///Operational amplifier PGA
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> opamode{}; 
        ///Operational amplifier Programmable
              amplifier gain value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///Inverting input selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Non inverted input
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///Calibration mode enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> calsel{}; 
        ///allows to switch from
              ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¹Ãƒâ€¦Ã¢â‚¬Å“factoryÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢
              AOP offset trimmed values to AOP offset
              ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¹Ãƒâ€¦Ã¢â‚¬Å“userÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usertrim{}; 
        ///Operational amplifier calibration
              output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> calout{}; 
    }
    namespace Noneopamp2Otr{    ///<OPAMP2 offset trimming register in normal
          mode
        using Addr = Register::Address<0x40007814,0xffffe0e0,0,unsigned>;
        ///Trim for NMOS differential
              pairs
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///Trim for PMOS differential
              pairs
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
    }
    namespace Noneopamp2Lpotr{    ///<OPAMP2 offset trimming register in low-power
          mode
        using Addr = Register::Address<0x40007818,0xffffe0e0,0,unsigned>;
        ///Trim for NMOS differential
              pairs
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimlpoffsetn{}; 
        ///Trim for PMOS differential
              pairs
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimlpoffsetp{}; 
    }
}
