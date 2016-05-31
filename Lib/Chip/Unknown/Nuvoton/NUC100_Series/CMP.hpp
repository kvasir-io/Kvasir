#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace CmpCmp0cr{    ///<Comparator0 Control Register
        using Addr = Register::Address<0x400d0000,0xffffffe8,0x00000000,unsigned>;
        ///Comparator0 Enable1 = Enable0 = DisableComparator0 output needs wait 10 us stable time after CMP0EN is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Comparator0 Interrupt Enable1 = Enable comparator0 interrupt function0 = Disable comparator0 interrupt functionInterrupt is generated if CMP0IE bit is set to 1 after comparator0 conversion finished.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ie{}; 
        ///CMP0 Hysterisis Enable1 = Enable comparator0 Hysterisis function; the typical range is 20mV.0 = Disable comparator0 Hysterisis function (Default).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hysen{}; 
        ///Comparator0 negative input select1 = The internal comparator reference voltage (Vref=1.2V) is selected as the negative comparator input0 = The comparator0 reference pin CPN0 is selected as the negative comparator input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cn0{}; 
    }
    namespace CmpCmp1cr{    ///<Comparator1 Control Register
        using Addr = Register::Address<0x400d0004,0xffffffe8,0x00000000,unsigned>;
        ///Comparator1 Enable1 = Enable0 = DisableComparator1 output needs wait 10 us stable time after CMP1EN is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Comparator1 Interrupt Enable1 = Enable Comparator1 interrupt function0 = Disable Comparator1 interrupt functionInterrupt is generated if CMP1IE bit is set to 1 after comparator1 conversion finished.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Comparator1 Hysterisis Enable1 = Enable comparator1 Hysterisis function; the typical range is 20mV.0 = Disable comparator1 Hysterisis function (Default).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hysen{}; 
        ///Comparator1 negative input select1 = The internal comparator reference voltage (Vref=1.2V) is selected as the negative comparator input0 = The comparator1 reference pin CPN1 is selected as the negative comparator input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cn1{}; 
    }
    namespace CmpCmpsr{    ///<Comparator Channel Selection Enable Register
        using Addr = Register::Address<0x400d0008,0xfffffff3,0x00000000,unsigned>;
        ///Comparator0 FlagThis bit is set by hardware whenever the comparator0 output changes state. This will cause an interrupt if CMP0IE set.Write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> cmpf0{}; 
        ///Comparator1 FlagThis bit is set by hardware whenever the comparator1 output changes state. This will cause an interrupt if CMP1IE set.Write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> cmpf1{}; 
        ///Comparator0 OutputSynchronized to the APB clock to allow reading by software. Cleared when the comparator is disabled (CMP0EN = 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> co0{}; 
        ///Comparator1 OutputSynchronized to the APB clock to allow reading by software. Cleared when the comparator is disabled (CMP1EN = 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> co1{}; 
    }
}
