#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Comparator
    namespace CompComp1Csr{    ///<Comparator 1 control and status          register
        using Addr = Register::Address<0x40010030,0x3fff0ece,0x00000000,unsigned>;
        ///Comparator 1 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp1En{}; 
        ///Comparator 1 Input Minus connection              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> comp1InnSel{}; 
        ///Comparator 1 window mode selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> comp1Wm{}; 
        ///COMP1 output select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> comp1OutSel{}; 
        ///Comparator 1 polarity selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp1Polarity{}; 
        ///Comparator 1 output status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp1Value{}; 
        ///COMP1_CSR register lock              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp1Lock{}; 
    }
    namespace CompComp2Csr{    ///<Comparator 2 control and status          register
        using Addr = Register::Address<0x40010034,0x3fff0886,0x00000000,unsigned>;
        ///COMP2_CSR register lock              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp2Lock{}; 
        ///Comparator 2 output status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp2Value{}; 
        ///Comparator 2 polarity selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp2Polarity{}; 
        ///Comparator 2 Input Plus connection              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> comp2InpSel{}; 
        ///Comparator 2 Input Minus connection              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp2InnSel{}; 
        ///Comparator 2 power mode selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> comp2Speed{}; 
        ///Comparator 2 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp2En{}; 
        ///COMP2 output select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> comp2OutSel{}; 
    }
}
