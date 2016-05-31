#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Comparator
    namespace CompComp1Csr{    ///<Comparator 1 control and status          register
        using Addr = Register::Address<0x40010200,0x3f207f02,0x00000000,unsigned>;
        ///Comparator 1 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp1En{}; 
        ///Power Mode of the comparator              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp1Pwrmode{}; 
        ///Comparator 1 Input Minus connection              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp1Inmsel{}; 
        ///Comparator1 input plus selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp1Inpsel{}; 
        ///Comparator 1 polarity selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp1Polarity{}; 
        ///Comparator 1 hysteresis selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp1Hyst{}; 
        ///Comparator 1 blanking source selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp1Blanking{}; 
        ///Scaler bridge enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> comp1Brgen{}; 
        ///Voltage scaler enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> comp1Scalen{}; 
        ///Comparator 1 output status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp1Value{}; 
        ///COMP1_CSR register lock              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp1Lock{}; 
    }
    namespace CompComp2Csr{    ///<Comparator 2 control and status          register
        using Addr = Register::Address<0x40010204,0x3f207d02,0x00000000,unsigned>;
        ///Comparator 2 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp2En{}; 
        ///Power Mode of the comparator              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp2Pwrmode{}; 
        ///Comparator 2 Input Minus connection              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp2Inmsel{}; 
        ///Comparator 2 Input Plus connection              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp2Inpsel{}; 
        ///Windows mode selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> comp2Winmode{}; 
        ///Comparator 2 polarity selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp2Polarity{}; 
        ///Comparator 2 hysteresis selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp2Hyst{}; 
        ///Comparator 2 blanking source selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp2Blanking{}; 
        ///Scaler bridge enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> comp2Brgen{}; 
        ///Voltage scaler enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> comp2Scalen{}; 
        ///Comparator 2 output status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp2Value{}; 
        ///COMP2_CSR register lock              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp2Lock{}; 
    }
}
