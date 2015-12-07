#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Memory Control registers
    namespace Noneramprotr1{    ///<Memory protection register1
        using Addr = Register::Address<0x40005000,0x00000000,0,unsigned>;
        ///RAMPROT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot1{}; 
        namespace Ramprot1ValC{
        }
    }
    namespace Noneramprotr2{    ///<Memory protection register2
        using Addr = Register::Address<0x40005004,0x00000000,0,unsigned>;
        ///RAMPROT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot2{}; 
        namespace Ramprot2ValC{
        }
    }
    namespace Noneramprotr3{    ///<Memory protection register3
        using Addr = Register::Address<0x40005008,0x00000000,0,unsigned>;
        ///RAMPROT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot3{}; 
        namespace Ramprot3ValC{
        }
    }
    namespace Noneramprotr4{    ///<Memory protection register4
        using Addr = Register::Address<0x4000500c,0x00000000,0,unsigned>;
        ///RAMPROT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot4{}; 
        namespace Ramprot4ValC{
        }
    }
    namespace Noneramprotr5{    ///<Memory protection register5
        using Addr = Register::Address<0x40005010,0x00000000,0,unsigned>;
        ///RAMPROT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot5{}; 
        namespace Ramprot5ValC{
        }
    }
    namespace Noneramprotr6{    ///<Memory protection register6
        using Addr = Register::Address<0x40005014,0x00000000,0,unsigned>;
        ///RAMPROT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot6{}; 
        namespace Ramprot6ValC{
        }
    }
    namespace Noneramprotr7{    ///<Memory protection register7
        using Addr = Register::Address<0x40005018,0x00000000,0,unsigned>;
        ///RAMPROT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot7{}; 
        namespace Ramprot7ValC{
        }
    }
    namespace Noneramprotr8{    ///<Memory protection register8
        using Addr = Register::Address<0x4000501c,0x00000000,0,unsigned>;
        ///RAMPROT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot8{}; 
        namespace Ramprot8ValC{
        }
    }
    namespace Nonedmaprotr1{    ///<DMA protection register1
        using Addr = Register::Address<0x40005020,0x00000000,0,unsigned>;
        ///DMA protection fault, faulting
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> address{}; 
        namespace AddressValC{
        }
        ///offset in RAM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
    }
    namespace Nonedmaprotr2{    ///<DMA protection register2
        using Addr = Register::Address<0x40005024,0xfffffff8,0,unsigned>;
        ///DMA protection fault, faulting
              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
    }
    namespace Noneramcr{    ///<Memory configuration register
        using Addr = Register::Address<0x40005028,0xfffffffb,0,unsigned>;
        ///Makes all RAM write access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wen{}; 
        namespace WenValC{
        }
    }
}
