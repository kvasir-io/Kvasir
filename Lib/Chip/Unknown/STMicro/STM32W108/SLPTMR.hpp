#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Sleep timer
    namespace NoneslptmrCr{    ///<SLPTMR configuration register
        using Addr = Register::Address<0x4000600c,0xffffe30e,0,unsigned>;
        ///REVERSE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> reverse{}; 
        ///EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> en{}; 
        ///DBGP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbgp{}; 
        ///PSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> psc{}; 
        ///CLKSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clksel{}; 
    }
    namespace NoneslptmrCnth{    ///<SLPTMR counter high register
        using Addr = Register::Address<0x40006010,0xffff0000,0,unsigned>;
        ///CNTH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnth{}; 
    }
    namespace NoneslptmrCntl{    ///<SLPTMR counter high register
        using Addr = Register::Address<0x40006014,0xffff0000,0,unsigned>;
        ///CNTL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntl{}; 
    }
    namespace NoneslptmrCmpah{    ///<SLPTMR compare A high register
        using Addr = Register::Address<0x40006018,0xffff0000,0,unsigned>;
        ///CMPAH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpah{}; 
    }
    namespace NoneslptmrCmpal{    ///<SLPTMR compare A low register
        using Addr = Register::Address<0x4000601c,0xffff0000,0,unsigned>;
        ///CMPAL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpal{}; 
    }
    namespace NoneslptmrCmpbh{    ///<SLPTMR compare B high register
        using Addr = Register::Address<0x40006020,0xffff0000,0,unsigned>;
        ///CMPBH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpbh{}; 
    }
    namespace NoneslptmrCmpbl{    ///<SLPTMR compare B low register
        using Addr = Register::Address<0x40006024,0xffff0000,0,unsigned>;
        ///CMPBL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpbl{}; 
    }
    namespace NoneslptmrIsr{    ///<SLPTMR interrupt status
          register
        using Addr = Register::Address<0x4000a014,0xfffffff8,0,unsigned>;
        ///CMPB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmpb{}; 
        ///CMPA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpa{}; 
        ///OW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ow{}; 
    }
    namespace NoneslptmrIfr{    ///<SLPTMR force interrupts
          register
        using Addr = Register::Address<0x4000a020,0xfffffff8,0,unsigned>;
        ///CMPB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmpb{}; 
        ///CMPA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpa{}; 
        ///OW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ow{}; 
    }
    namespace NoneslptmrIer{    ///<SLPTMR interrupt enable
          register
        using Addr = Register::Address<0x4000a054,0xfffffff8,0,unsigned>;
        ///WRAP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrap{}; 
        ///CMPA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpa{}; 
        ///CMPB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmpb{}; 
    }
}
