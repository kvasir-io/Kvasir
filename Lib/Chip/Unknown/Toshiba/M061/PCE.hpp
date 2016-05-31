#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Power Calculation Engine (PCE)
    namespace PcePintcr{    ///<PCE core interrupt control
        using Addr = Register::Address<0x4406f000,0xfffffff8,0x00000000,unsigned>;
        ///PCERST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pcerst{}; 
        ///PCENMI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pcenmi{}; 
        ///PCEINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pceint{}; 
    }
    namespace PceMintcr{    ///<Interrupt control to the main core
        using Addr = Register::Address<0x4406f004,0xfffffffe,0x00000000,unsigned>;
        ///MAININT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mainint{}; 
    }
    namespace PcePclkcr{    ///<PCE core clock control)
        using Addr = Register::Address<0x4406f008,0xfffffffe,0x00000000,unsigned>;
        ///PCECLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pceclk{}; 
    }
    namespace PcePnmiflg{    ///<PCE core NMI event flag)
        using Addr = Register::Address<0x4406f00c,0xfffffffc,0x00000000,unsigned>;
        ///WDTNMIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wdtnmif{}; 
        ///PCEIFNMIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pceifnmif{}; 
    }
    namespace PcePnmiclr{    ///<PCE core NMI event clear)
        using Addr = Register::Address<0x4406f010,0xfffffffc,0x00000000,unsigned>;
        ///WDTNMIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wdtnmic{}; 
        ///PCEIFNMIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pceifnmic{}; 
    }
}
