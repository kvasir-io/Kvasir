#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//WorkFlash Memory
    namespace WorkflashIfWfaszr{    ///<WorkFlash Access Size Register
        using Addr = Register::Address<0x200e0000,0xfffffffe,0x00000000,unsigned>;
        ///WorkFlash Access Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> asz{}; 
    }
    namespace WorkflashIfWfrwtr{    ///<WorkFlash Read Wait Register
        using Addr = Register::Address<0x200e0004,0xfffffff8,0x00000000,unsigned>;
        ///Read Wait Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rwt{}; 
    }
    namespace WorkflashIfWfstr{    ///<WorkFlash Status Register
        using Addr = Register::Address<0x200e0008,0xfffffffc,0x00000000,unsigned>;
        ///WorkFlash Hang
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hng{}; 
        ///WorkFlash Rdy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdy{}; 
    }
}
