#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Sleep timer
    namespace SlptmrSlptmrCr{    ///<SLPTMR configuration register
        using Addr = Register::Address<0x4000600c,0xffffe30e,0x00000000,unsigned>;
        ///REVERSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> reverse{}; 
        ///EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> en{}; 
        ///DBGP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbgp{}; 
        ///PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> psc{}; 
        ///CLKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clksel{}; 
    }
    namespace SlptmrSlptmrCnth{    ///<SLPTMR counter high register
        using Addr = Register::Address<0x40006010,0xffff0000,0x00000000,unsigned>;
        ///CNTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnth{}; 
    }
    namespace SlptmrSlptmrCntl{    ///<SLPTMR counter high register
        using Addr = Register::Address<0x40006014,0xffff0000,0x00000000,unsigned>;
        ///CNTL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntl{}; 
    }
    namespace SlptmrSlptmrCmpah{    ///<SLPTMR compare A high register
        using Addr = Register::Address<0x40006018,0xffff0000,0x00000000,unsigned>;
        ///CMPAH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpah{}; 
    }
    namespace SlptmrSlptmrCmpal{    ///<SLPTMR compare A low register
        using Addr = Register::Address<0x4000601c,0xffff0000,0x00000000,unsigned>;
        ///CMPAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpal{}; 
    }
    namespace SlptmrSlptmrCmpbh{    ///<SLPTMR compare B high register
        using Addr = Register::Address<0x40006020,0xffff0000,0x00000000,unsigned>;
        ///CMPBH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpbh{}; 
    }
    namespace SlptmrSlptmrCmpbl{    ///<SLPTMR compare B low register
        using Addr = Register::Address<0x40006024,0xffff0000,0x00000000,unsigned>;
        ///CMPBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpbl{}; 
    }
    namespace SlptmrSlptmrIsr{    ///<SLPTMR interrupt status          register
        using Addr = Register::Address<0x4000a014,0xfffffff8,0x00000000,unsigned>;
        ///CMPB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmpb{}; 
        ///CMPA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpa{}; 
        ///OW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ow{}; 
    }
    namespace SlptmrSlptmrIfr{    ///<SLPTMR force interrupts          register
        using Addr = Register::Address<0x4000a020,0xfffffff8,0x00000000,unsigned>;
        ///CMPB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmpb{}; 
        ///CMPA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpa{}; 
        ///OW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ow{}; 
    }
    namespace SlptmrSlptmrIer{    ///<SLPTMR interrupt enable          register
        using Addr = Register::Address<0x4000a054,0xfffffff8,0x00000000,unsigned>;
        ///WRAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrap{}; 
        ///CMPA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpa{}; 
        ///CMPB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmpb{}; 
    }
}
