#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input_Output Port (PF)
    namespace PfData{    ///<PF Data Register
        using Addr = Register::Address<0x400c0500,0xfffffffc,0x00000000,unsigned>;
        ///PF0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0{}; 
        ///PF1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1{}; 
    }
    namespace PfCr{    ///<PF Control Register
        using Addr = Register::Address<0x400c0504,0xfffffffc,0x00000000,unsigned>;
        ///PF0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0c{}; 
        ///PF1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1c{}; 
    }
    namespace PfFr1{    ///<PF Function Register 1
        using Addr = Register::Address<0x400c0508,0xfffffffd,0x00000000,unsigned>;
        ///PF1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1f1{}; 
    }
    namespace PfOd{    ///<PF Open Drain Control Register
        using Addr = Register::Address<0x400c0528,0xfffffffc,0x00000000,unsigned>;
        ///PF0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0od{}; 
        ///PF1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1od{}; 
    }
    namespace PfPup{    ///<PF Pull-Up Control Register
        using Addr = Register::Address<0x400c052c,0xfffffffc,0x00000000,unsigned>;
        ///PF0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0up{}; 
        ///PF1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1up{}; 
    }
    namespace PfPfn{    ///<PF Pull-Down Control Register
        using Addr = Register::Address<0x400c0530,0xfffffffc,0x00000000,unsigned>;
        ///PF0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0dn{}; 
        ///PF1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1dn{}; 
    }
    namespace PfIe{    ///<PF Input Enable Control Register
        using Addr = Register::Address<0x400c0538,0xfffffffc,0x00000000,unsigned>;
        ///PF0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0ie{}; 
        ///PF1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1ie{}; 
    }
}
