#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Firewall
    namespace Nonecssa{    ///<Code segment start address
        using Addr = Register::Address<0x40011c00,0xff0000ff,0,unsigned>;
        ///code segment start address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Nonecsl{    ///<Code segment length
        using Addr = Register::Address<0x40011c04,0xffc000ff,0,unsigned>;
        ///code segment length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,8),Register::ReadWriteAccess,unsigned> leng{}; 
    }
    namespace Nonenvdssa{    ///<Non-volatile data segment start
          address
        using Addr = Register::Address<0x40011c08,0xff0000ff,0,unsigned>;
        ///Non-volatile data segment start
              address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Nonenvdsl{    ///<Non-volatile data segment
          length
        using Addr = Register::Address<0x40011c0c,0xffc000ff,0,unsigned>;
        ///Non-volatile data segment
              length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,8),Register::ReadWriteAccess,unsigned> leng{}; 
    }
    namespace Nonevdssa{    ///<Volatile data segment start
          address
        using Addr = Register::Address<0x40011c10,0xffff003f,0,unsigned>;
        ///Volatile data segment start
              address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Nonevdsl{    ///<Volatile data segment length
        using Addr = Register::Address<0x40011c14,0xffff003f,0,unsigned>;
        ///Non-volatile data segment
              length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> leng{}; 
    }
    namespace Nonecr{    ///<Configuration register
        using Addr = Register::Address<0x40011c20,0xfffffff8,0,unsigned>;
        ///Volatile data execution
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vde{}; 
        ///Volatile data shared
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vds{}; 
        ///Firewall pre alarm
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fpa{}; 
    }
}
