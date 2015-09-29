#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Cortex-M0+ Micro-Trace Buffer
    namespace MtbAuthstatus{    ///<MTB Authentication Status
        using Addr = Register::Address<0x41006fb8,0xffffffff,0,unsigned>;
    }
    namespace MtbBase{    ///<MTB Base
        using Addr = Register::Address<0x4100600c,0xffffffff,0,unsigned>;
    }
    namespace MtbCid0{    ///<CoreSight
        using Addr = Register::Address<0x41006ff0,0xffffffff,0,unsigned>;
    }
    namespace MtbCid1{    ///<CoreSight
        using Addr = Register::Address<0x41006ff4,0xffffffff,0,unsigned>;
    }
    namespace MtbCid2{    ///<CoreSight
        using Addr = Register::Address<0x41006ff8,0xffffffff,0,unsigned>;
    }
    namespace MtbCid3{    ///<CoreSight
        using Addr = Register::Address<0x41006ffc,0xffffffff,0,unsigned>;
    }
    namespace MtbClaimclr{    ///<MTB Claim Clear
        using Addr = Register::Address<0x41006fa4,0xffffffff,0,unsigned>;
    }
    namespace MtbClaimset{    ///<MTB Claim Set
        using Addr = Register::Address<0x41006fa0,0xffffffff,0,unsigned>;
    }
    namespace MtbDevarch{    ///<MTB Device Architecture
        using Addr = Register::Address<0x41006fbc,0xffffffff,0,unsigned>;
    }
    namespace MtbDevid{    ///<MTB Device Configuration
        using Addr = Register::Address<0x41006fc8,0xffffffff,0,unsigned>;
    }
    namespace MtbDevtype{    ///<MTB Device Type
        using Addr = Register::Address<0x41006fcc,0xffffffff,0,unsigned>;
    }
    namespace MtbFlow{    ///<MTB Flow
        using Addr = Register::Address<0x41006008,0x00000004,0,unsigned>;
        ///Auto Stop Tracing
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> autostop{}; 
        ///Auto Halt Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autohalt{}; 
        ///Watermark value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> watermark{}; 
    }
    namespace MtbItctrl{    ///<MTB Integration Mode Control
        using Addr = Register::Address<0x41006f00,0xffffffff,0,unsigned>;
    }
    namespace MtbLockaccess{    ///<MTB Lock Access
        using Addr = Register::Address<0x41006fb0,0xffffffff,0,unsigned>;
    }
    namespace MtbLockstatus{    ///<MTB Lock Status
        using Addr = Register::Address<0x41006fb4,0xffffffff,0,unsigned>;
    }
    namespace MtbMaster{    ///<MTB Master
        using Addr = Register::Address<0x41006004,0x7ffffc00,0,unsigned>;
        ///Maximum Value of the Trace Buffer in SRAM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> mask{}; 
        ///Trace Start Input Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstarten{}; 
        ///Trace Stop Input Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstopen{}; 
        ///Special Function Register Write Privilege
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sfrwpriv{}; 
        ///SRAM Privilege
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rampriv{}; 
        ///Halt Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> haltreq{}; 
        ///Main Trace Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace MtbPid0{    ///<CoreSight
        using Addr = Register::Address<0x41006fe0,0xffffffff,0,unsigned>;
    }
    namespace MtbPid1{    ///<CoreSight
        using Addr = Register::Address<0x41006fe4,0xffffffff,0,unsigned>;
    }
    namespace MtbPid2{    ///<CoreSight
        using Addr = Register::Address<0x41006fe8,0xffffffff,0,unsigned>;
    }
    namespace MtbPid3{    ///<CoreSight
        using Addr = Register::Address<0x41006fec,0xffffffff,0,unsigned>;
    }
    namespace MtbPid4{    ///<CoreSight
        using Addr = Register::Address<0x41006fd0,0xffffffff,0,unsigned>;
    }
    namespace MtbPid5{    ///<CoreSight
        using Addr = Register::Address<0x41006fd4,0xffffffff,0,unsigned>;
    }
    namespace MtbPid6{    ///<CoreSight
        using Addr = Register::Address<0x41006fd8,0xffffffff,0,unsigned>;
    }
    namespace MtbPid7{    ///<CoreSight
        using Addr = Register::Address<0x41006fdc,0xffffffff,0,unsigned>;
    }
    namespace MtbPosition{    ///<MTB Position
        using Addr = Register::Address<0x41006000,0x00000003,0,unsigned>;
        ///Pointer Value Wraps
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wrap{}; 
        ///Trace Packet Location Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> pointer{}; 
    }
}
