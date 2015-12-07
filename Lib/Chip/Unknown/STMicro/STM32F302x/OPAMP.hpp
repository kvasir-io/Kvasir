#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Operational amplifier
    namespace Noneopamp1Cr{    ///<OPAMP1 control register
        using Addr = Register::Address<0x40010038,0x00000010,0,unsigned>;
        ///OPAMP1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opamp1En{}; 
        namespace Opamp1enValC{
        }
        ///FORCE_VP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        namespace ForcevpValC{
        }
        ///OPAMP1 Non inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        namespace VpselValC{
        }
        ///OPAMP1 inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        namespace VmselValC{
        }
        ///Timer controlled Mux mode               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcmEn{}; 
        namespace TcmenValC{
        }
        ///OPAMP1 inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vmsSel{}; 
        namespace VmsselValC{
        }
        ///OPAMP1 Non inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vpsSel{}; 
        namespace VpsselValC{
        }
        ///Calibration mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        namespace CalonValC{
        }
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calsel{}; 
        namespace CalselValC{
        }
        ///Gain in PGA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        namespace PgagainValC{
        }
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> userTrim{}; 
        namespace UsertrimValC{
        }
        ///Offset trimming value               (PMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        namespace TrimoffsetpValC{
        }
        ///Offset trimming value               (NMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        namespace TrimoffsetnValC{
        }
        ///TSTREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        namespace TstrefValC{
        }
        ///OPAMP 1 ouput status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> outcal{}; 
        namespace OutcalValC{
        }
        ///OPAMP 1 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
    }
    namespace Noneopamp2Cr{    ///<OPAMP2 control register
        using Addr = Register::Address<0x4001003c,0x00000010,0,unsigned>;
        ///OPAMP2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opamp2en{}; 
        namespace Opamp2enValC{
        }
        ///FORCE_VP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        namespace ForcevpValC{
        }
        ///OPAMP2 Non inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        namespace VpselValC{
        }
        ///OPAMP2 inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        namespace VmselValC{
        }
        ///Timer controlled Mux mode               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcmEn{}; 
        namespace TcmenValC{
        }
        ///OPAMP2 inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vmsSel{}; 
        namespace VmsselValC{
        }
        ///OPAMP2 Non inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vpsSel{}; 
        namespace VpsselValC{
        }
        ///Calibration mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        namespace CalonValC{
        }
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calSel{}; 
        namespace CalselValC{
        }
        ///Gain in PGA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        namespace PgagainValC{
        }
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> userTrim{}; 
        namespace UsertrimValC{
        }
        ///Offset trimming value               (PMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        namespace TrimoffsetpValC{
        }
        ///Offset trimming value               (NMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        namespace TrimoffsetnValC{
        }
        ///TSTREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        namespace TstrefValC{
        }
        ///OPAMP 2 ouput status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> outcal{}; 
        namespace OutcalValC{
        }
        ///OPAMP 2 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
    }
    namespace Noneopamp3Cr{    ///<OPAMP3 control register
        using Addr = Register::Address<0x40010040,0x00000010,0,unsigned>;
        ///OPAMP3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opamp3en{}; 
        namespace Opamp3enValC{
        }
        ///FORCE_VP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        namespace ForcevpValC{
        }
        ///OPAMP3 Non inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        namespace VpselValC{
        }
        ///OPAMP3 inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        namespace VmselValC{
        }
        ///Timer controlled Mux mode               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcmEn{}; 
        namespace TcmenValC{
        }
        ///OPAMP3 inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vmsSel{}; 
        namespace VmsselValC{
        }
        ///OPAMP3 Non inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vpsSel{}; 
        namespace VpsselValC{
        }
        ///Calibration mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        namespace CalonValC{
        }
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calsel{}; 
        namespace CalselValC{
        }
        ///Gain in PGA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        namespace PgagainValC{
        }
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> userTrim{}; 
        namespace UsertrimValC{
        }
        ///Offset trimming value               (PMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        namespace TrimoffsetpValC{
        }
        ///Offset trimming value               (NMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        namespace TrimoffsetnValC{
        }
        ///TSTREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        namespace TstrefValC{
        }
        ///OPAMP 3 ouput status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> outcal{}; 
        namespace OutcalValC{
        }
        ///OPAMP 3 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
    }
    namespace Noneopamp4Cr{    ///<OPAMP4 control register
        using Addr = Register::Address<0x40010044,0x00000010,0,unsigned>;
        ///OPAMP4 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opamp4en{}; 
        namespace Opamp4enValC{
        }
        ///FORCE_VP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        namespace ForcevpValC{
        }
        ///OPAMP4 Non inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        namespace VpselValC{
        }
        ///OPAMP4 inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        namespace VmselValC{
        }
        ///Timer controlled Mux mode               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcmEn{}; 
        namespace TcmenValC{
        }
        ///OPAMP4 inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vmsSel{}; 
        namespace VmsselValC{
        }
        ///OPAMP4 Non inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vpsSel{}; 
        namespace VpsselValC{
        }
        ///Calibration mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        namespace CalonValC{
        }
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calsel{}; 
        namespace CalselValC{
        }
        ///Gain in PGA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        namespace PgagainValC{
        }
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> userTrim{}; 
        namespace UsertrimValC{
        }
        ///Offset trimming value               (PMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        namespace TrimoffsetpValC{
        }
        ///Offset trimming value               (NMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        namespace TrimoffsetnValC{
        }
        ///TSTREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        namespace TstrefValC{
        }
        ///OPAMP 4 ouput status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> outcal{}; 
        namespace OutcalValC{
        }
        ///OPAMP 4 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
    }
}
