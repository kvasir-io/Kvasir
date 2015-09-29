#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System register file
    namespace RfsysReg0{    ///<Register file register
        using Addr = Register::Address<0x40041000,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfsysReg1{    ///<Register file register
        using Addr = Register::Address<0x40041004,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfsysReg2{    ///<Register file register
        using Addr = Register::Address<0x40041008,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfsysReg3{    ///<Register file register
        using Addr = Register::Address<0x4004100c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfsysReg4{    ///<Register file register
        using Addr = Register::Address<0x40041010,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfsysReg5{    ///<Register file register
        using Addr = Register::Address<0x40041014,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfsysReg6{    ///<Register file register
        using Addr = Register::Address<0x40041018,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfsysReg7{    ///<Register file register
        using Addr = Register::Address<0x4004101c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
}
