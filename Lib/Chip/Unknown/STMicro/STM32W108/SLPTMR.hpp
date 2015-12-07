#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Sleep timer
    namespace NoneslptmrCr{    ///<SLPTMR configuration register
        using Addr = Register::Address<0x4000600c,0xffffe30e,0,unsigned>;
        ///REVERSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> reverse{}; 
        namespace ReverseValC{
        }
        ///EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
        ///DBGP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbgp{}; 
        namespace DbgpValC{
        }
        ///PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> psc{}; 
        namespace PscValC{
        }
        ///CLKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clksel{}; 
        namespace ClkselValC{
        }
    }
    namespace NoneslptmrCnth{    ///<SLPTMR counter high register
        using Addr = Register::Address<0x40006010,0xffff0000,0,unsigned>;
        ///CNTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnth{}; 
        namespace CnthValC{
        }
    }
    namespace NoneslptmrCntl{    ///<SLPTMR counter high register
        using Addr = Register::Address<0x40006014,0xffff0000,0,unsigned>;
        ///CNTL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntl{}; 
        namespace CntlValC{
        }
    }
    namespace NoneslptmrCmpah{    ///<SLPTMR compare A high register
        using Addr = Register::Address<0x40006018,0xffff0000,0,unsigned>;
        ///CMPAH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpah{}; 
        namespace CmpahValC{
        }
    }
    namespace NoneslptmrCmpal{    ///<SLPTMR compare A low register
        using Addr = Register::Address<0x4000601c,0xffff0000,0,unsigned>;
        ///CMPAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpal{}; 
        namespace CmpalValC{
        }
    }
    namespace NoneslptmrCmpbh{    ///<SLPTMR compare B high register
        using Addr = Register::Address<0x40006020,0xffff0000,0,unsigned>;
        ///CMPBH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpbh{}; 
        namespace CmpbhValC{
        }
    }
    namespace NoneslptmrCmpbl{    ///<SLPTMR compare B low register
        using Addr = Register::Address<0x40006024,0xffff0000,0,unsigned>;
        ///CMPBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpbl{}; 
        namespace CmpblValC{
        }
    }
    namespace NoneslptmrIsr{    ///<SLPTMR interrupt status
          register
        using Addr = Register::Address<0x4000a014,0xfffffff8,0,unsigned>;
        ///CMPB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmpb{}; 
        namespace CmpbValC{
        }
        ///CMPA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpa{}; 
        namespace CmpaValC{
        }
        ///OW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ow{}; 
        namespace OwValC{
        }
    }
    namespace NoneslptmrIfr{    ///<SLPTMR force interrupts
          register
        using Addr = Register::Address<0x4000a020,0xfffffff8,0,unsigned>;
        ///CMPB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmpb{}; 
        namespace CmpbValC{
        }
        ///CMPA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpa{}; 
        namespace CmpaValC{
        }
        ///OW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ow{}; 
        namespace OwValC{
        }
    }
    namespace NoneslptmrIer{    ///<SLPTMR interrupt enable
          register
        using Addr = Register::Address<0x4000a054,0xfffffff8,0,unsigned>;
        ///WRAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrap{}; 
        namespace WrapValC{
        }
        ///CMPA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpa{}; 
        namespace CmpaValC{
        }
        ///CMPB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmpb{}; 
        namespace CmpbValC{
        }
    }
}
