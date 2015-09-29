#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Crossbar Switch
    namespace XbarbSel0{    ///<Crossbar B Select Register 0
        using Addr = Register::Address<0x4005a000,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel0{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel1{}; 
    }
    namespace XbarbSel1{    ///<Crossbar B Select Register 1
        using Addr = Register::Address<0x4005a002,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel2{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel3{}; 
    }
    namespace XbarbSel2{    ///<Crossbar B Select Register 2
        using Addr = Register::Address<0x4005a004,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel4{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel5{}; 
    }
    namespace XbarbSel3{    ///<Crossbar B Select Register 3
        using Addr = Register::Address<0x4005a006,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel6{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel7{}; 
    }
    namespace XbarbSel4{    ///<Crossbar B Select Register 4
        using Addr = Register::Address<0x4005a008,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel8{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel9{}; 
    }
    namespace XbarbSel5{    ///<Crossbar B Select Register 5
        using Addr = Register::Address<0x4005a00a,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel10{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel11{}; 
    }
    namespace XbarbSel6{    ///<Crossbar B Select Register 6
        using Addr = Register::Address<0x4005a00c,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel12{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel13{}; 
    }
    namespace XbarbSel7{    ///<Crossbar B Select Register 7
        using Addr = Register::Address<0x4005a00e,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel14{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel15{}; 
    }
}
