#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral WORKFLASH_IF 
    namespace WorkflashIfWfaszr{    ///< register WFASZR 
        using Addr = Register::Address<0x200e0000,0xfffffffe,0x00000000,unsigned>;
        /// bitfield ASZ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> asz{}; 
    }
    namespace WorkflashIfWfrwtr{    ///< register WFRWTR 
        using Addr = Register::Address<0x200e0004,0xfffffff8,0x00000000,unsigned>;
        /// bitfield RWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rwt{}; 
    }
    namespace WorkflashIfWfstr{    ///< register WFSTR 
        using Addr = Register::Address<0x200e0008,0xfffffffc,0x00000000,unsigned>;
        /// bitfield HNG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hng{}; 
        /// bitfield RDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdy{}; 
    }
}
