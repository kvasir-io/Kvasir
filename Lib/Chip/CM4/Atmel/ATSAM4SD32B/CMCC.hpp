#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Cortex M Cache Controller
    namespace CmccType{    ///<Cache Type Register
        using Addr = Register::Address<0x4007c000,0xffffc000,0,unsigned>;
        ///Access Port Access Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ap{}; 
        ///Dynamic Clock Gating Supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gclk{}; 
        ///Random Selection Policy Supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> randp{}; 
        ///Least Recently Used Policy Supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lrup{}; 
        ///Random Selection Policy Supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rrp{}; 
        ///Number of Way
        enum class WaynumVal {
            dmapped=0x00000000,     ///<Direct Mapped Cache
            arch2way=0x00000001,     ///<2-WAY set associative
            arch4way=0x00000002,     ///<4-WAY set associative
            arch8way=0x00000003,     ///<8-WAY set associative
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,WaynumVal> waynum{}; 
        namespace WaynumValC{
            constexpr Register::FieldValue<decltype(waynum)::Type,WaynumVal::dmapped> dmapped{};
            constexpr Register::FieldValue<decltype(waynum)::Type,WaynumVal::arch2way> arch2way{};
            constexpr Register::FieldValue<decltype(waynum)::Type,WaynumVal::arch4way> arch4way{};
            constexpr Register::FieldValue<decltype(waynum)::Type,WaynumVal::arch8way> arch8way{};
        }
        }
        ///Lock Down Supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lckdown{}; 
        ///Cache Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> csize{}; 
        ///Cache Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> clsize{}; 
    }
    namespace CmccCfg{    ///<Cache Configuration Register
        using Addr = Register::Address<0x4007c004,0xfffffffe,0,unsigned>;
        ///Disable Clock Gating
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gclkdis{}; 
    }
    namespace CmccCtrl{    ///<Cache Control Register
        using Addr = Register::Address<0x4007c008,0xfffffffe,0,unsigned>;
        ///Cache Controller Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
    }
    namespace CmccSr{    ///<Cache Status Register
        using Addr = Register::Address<0x4007c00c,0xfffffffe,0,unsigned>;
        ///Cache Controller Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csts{}; 
    }
    namespace CmccMaint0{    ///<Cache Maintenance Register 0
        using Addr = Register::Address<0x4007c020,0xfffffffe,0,unsigned>;
        ///Cache Controller Invalidate All
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> invall{}; 
    }
    namespace CmccMaint1{    ///<Cache Maintenance Register 1
        using Addr = Register::Address<0x4007c024,0x3ffffe0f,0,unsigned>;
        ///Invalidate Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,4),Register::ReadWriteAccess,unsigned> index{}; 
        ///Invalidate Way
        enum class WayVal {
            way0=0x00000000,     ///<Way 0 is selection for index invalidation
            way1=0x00000001,     ///<Way 1 is selection for index invalidation
            way2=0x00000002,     ///<Way 2 is selection for index invalidation
            way3=0x00000003,     ///<Way 3 is selection for index invalidation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,WayVal> way{}; 
        namespace WayValC{
            constexpr Register::FieldValue<decltype(way)::Type,WayVal::way0> way0{};
            constexpr Register::FieldValue<decltype(way)::Type,WayVal::way1> way1{};
            constexpr Register::FieldValue<decltype(way)::Type,WayVal::way2> way2{};
            constexpr Register::FieldValue<decltype(way)::Type,WayVal::way3> way3{};
        }
        }
    }
    namespace CmccMcfg{    ///<Cache Monitor Configuration Register
        using Addr = Register::Address<0x4007c028,0xfffffffc,0,unsigned>;
        ///Cache Controller Monitor Counter Mode
        enum class ModeVal {
            cycleCount=0x00000000,     ///<Cycle counter
            ihitCount=0x00000001,     ///<Instruction hit counter
            dhitCount=0x00000002,     ///<Data hit counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::cycleCount> cycleCount{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::ihitCount> ihitCount{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::dhitCount> dhitCount{};
        }
        }
    }
    namespace CmccMen{    ///<Cache Monitor Enable Register
        using Addr = Register::Address<0x4007c02c,0xfffffffe,0,unsigned>;
        ///Cache Controller Monitor Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> menable{}; 
    }
    namespace CmccMctrl{    ///<Cache Monitor Control Register
        using Addr = Register::Address<0x4007c030,0xfffffffe,0,unsigned>;
        ///Monitor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace CmccMsr{    ///<Cache Monitor Status Register
        using Addr = Register::Address<0x4007c034,0x00000000,0,unsigned>;
        ///Monitor Event Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eventCnt{}; 
    }
}
