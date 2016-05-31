#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Operational amplifier
    namespace OpampOpamp1Cr{    ///<OPAMP1 control register
        using Addr = Register::Address<0x40010038,0x00000010,0x00000000,unsigned>;
        ///OPAMP1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opamp1En{}; 
        ///FORCE_VP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        ///OPAMP1 Non inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///OPAMP1 inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Timer controlled Mux mode               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcmEn{}; 
        ///OPAMP1 inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vmsSel{}; 
        ///OPAMP1 Non inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vpsSel{}; 
        ///Calibration mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calsel{}; 
        ///Gain in PGA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> userTrim{}; 
        ///Offset trimming value               (PMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        ///Offset trimming value               (NMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///TSTREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        ///OPAMP 1 ouput status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> outcal{}; 
        ///OPAMP 1 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace OpampOpamp2Cr{    ///<OPAMP2 control register
        using Addr = Register::Address<0x4001003c,0x00000010,0x00000000,unsigned>;
        ///OPAMP2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opamp2en{}; 
        ///FORCE_VP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        ///OPAMP2 Non inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///OPAMP2 inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Timer controlled Mux mode               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcmEn{}; 
        ///OPAMP2 inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vmsSel{}; 
        ///OPAMP2 Non inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vpsSel{}; 
        ///Calibration mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calSel{}; 
        ///Gain in PGA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> userTrim{}; 
        ///Offset trimming value               (PMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        ///Offset trimming value               (NMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///TSTREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        ///OPAMP 2 ouput status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> outcal{}; 
        ///OPAMP 2 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace OpampOpamp3Cr{    ///<OPAMP3 control register
        using Addr = Register::Address<0x40010040,0x00000010,0x00000000,unsigned>;
        ///OPAMP3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opamp3en{}; 
        ///FORCE_VP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        ///OPAMP3 Non inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///OPAMP3 inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Timer controlled Mux mode               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcmEn{}; 
        ///OPAMP3 inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vmsSel{}; 
        ///OPAMP3 Non inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vpsSel{}; 
        ///Calibration mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calsel{}; 
        ///Gain in PGA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> userTrim{}; 
        ///Offset trimming value               (PMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        ///Offset trimming value               (NMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///TSTREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        ///OPAMP 3 ouput status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> outcal{}; 
        ///OPAMP 3 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace OpampOpamp4Cr{    ///<OPAMP4 control register
        using Addr = Register::Address<0x40010044,0x00000010,0x00000000,unsigned>;
        ///OPAMP4 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opamp4en{}; 
        ///FORCE_VP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        ///OPAMP4 Non inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///OPAMP4 inverting input               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Timer controlled Mux mode               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcmEn{}; 
        ///OPAMP4 inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vmsSel{}; 
        ///OPAMP4 Non inverting input secondary               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vpsSel{}; 
        ///Calibration mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calsel{}; 
        ///Gain in PGA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> userTrim{}; 
        ///Offset trimming value               (PMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        ///Offset trimming value               (NMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///TSTREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        ///OPAMP 4 ouput status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> outcal{}; 
        ///OPAMP 4 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
}
