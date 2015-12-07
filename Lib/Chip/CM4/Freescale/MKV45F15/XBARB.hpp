#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Crossbar Switch
    namespace XbarbSel0{    ///<Crossbar B Select Register 0
        using Addr = Register::Address<0x4005a000,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel0{}; 
        namespace Sel0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel1{}; 
        namespace Sel1ValC{
        }
    }
    namespace XbarbSel1{    ///<Crossbar B Select Register 1
        using Addr = Register::Address<0x4005a002,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel2{}; 
        namespace Sel2ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel3{}; 
        namespace Sel3ValC{
        }
    }
    namespace XbarbSel2{    ///<Crossbar B Select Register 2
        using Addr = Register::Address<0x4005a004,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel4{}; 
        namespace Sel4ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel5{}; 
        namespace Sel5ValC{
        }
    }
    namespace XbarbSel3{    ///<Crossbar B Select Register 3
        using Addr = Register::Address<0x4005a006,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel6{}; 
        namespace Sel6ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel7{}; 
        namespace Sel7ValC{
        }
    }
    namespace XbarbSel4{    ///<Crossbar B Select Register 4
        using Addr = Register::Address<0x4005a008,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel8{}; 
        namespace Sel8ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel9{}; 
        namespace Sel9ValC{
        }
    }
    namespace XbarbSel5{    ///<Crossbar B Select Register 5
        using Addr = Register::Address<0x4005a00a,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel10{}; 
        namespace Sel10ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel11{}; 
        namespace Sel11ValC{
        }
    }
    namespace XbarbSel6{    ///<Crossbar B Select Register 6
        using Addr = Register::Address<0x4005a00c,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel12{}; 
        namespace Sel12ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel13{}; 
        namespace Sel13ValC{
        }
    }
    namespace XbarbSel7{    ///<Crossbar B Select Register 7
        using Addr = Register::Address<0x4005a00e,0xffffe0e0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel14{}; 
        namespace Sel14ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel15{}; 
        namespace Sel15ValC{
        }
    }
}
