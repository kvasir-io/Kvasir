#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Non Volatile Memory Controller
    namespace Noneready{    ///<Ready flag
        using Addr = Register::Address<0x4001e400,0xfffffffe,0,unsigned>;
        ///NVMC is ready or busy
        enum class readyVal {
            busy=0x00000000,     ///<NVMC is busy (on-going write or erase operation)
            ready=0x00000001,     ///<NVMC is ready
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::busy> busy{};
            constexpr MPL::Value<readyVal,readyVal::ready> ready{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyVal> ready{}; 
    }
    namespace Noneconfig{    ///<Configuration register
        using Addr = Register::Address<0x4001e504,0xfffffffc,0,unsigned>;
        ///Program memory access mode. It is strongly recommended to only activate erase and write modes when they are actively used. Enabling write or erase will invalidate the cache and keep it invalidated.
        enum class wenVal {
            ren=0x00000000,     ///<Read only access
            wen=0x00000001,     ///<Write Enabled
            een=0x00000002,     ///<Erase enabled
        };
        namespace wenValC{
            constexpr MPL::Value<wenVal,wenVal::ren> ren{};
            constexpr MPL::Value<wenVal,wenVal::wen> wen{};
            constexpr MPL::Value<wenVal,wenVal::een> een{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,wenVal> wen{}; 
    }
    namespace Noneerasepage{    ///<Register for erasing a page in Code area
        using Addr = Register::Address<0x4001e508,0x00000000,0,unsigned>;
        ///Register for starting erase of a page in Code area
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> erasepage{}; 
    }
    namespace Noneerasepcr1{    ///<Deprecated register -  Register for erasing a page in Code area. Equivalent to ERASEPAGE.
        using Addr = Register::Address<0x4001e508,0x00000000,0,unsigned>;
        ///Register for erasing a page in Code area. Equivalent to ERASEPAGE.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> erasepcr1{}; 
    }
    namespace Noneeraseall{    ///<Register for erasing all non-volatile user memory
        using Addr = Register::Address<0x4001e50c,0xfffffffe,0,unsigned>;
        ///Erase all non-volatile memory including UICR registers. Note that code erase has to be enabled by CONFIG.EEN before the UICR can be erased.
        enum class eraseallVal {
            nooperation=0x00000000,     ///<No operation
            erase=0x00000001,     ///<Start chip erase
        };
        namespace eraseallValC{
            constexpr MPL::Value<eraseallVal,eraseallVal::nooperation> nooperation{};
            constexpr MPL::Value<eraseallVal,eraseallVal::erase> erase{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eraseallVal> eraseall{}; 
    }
    namespace Noneerasepcr0{    ///<Deprecated register -  Register for erasing a page in Code area. Equivalent to ERASEPAGE.
        using Addr = Register::Address<0x4001e510,0x00000000,0,unsigned>;
        ///Register for starting erase of a page in Code area. Equivalent to ERASEPAGE.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> erasepcr0{}; 
    }
    namespace Noneeraseuicr{    ///<Register for erasing User Information Configuration Registers
        using Addr = Register::Address<0x4001e514,0xfffffffe,0,unsigned>;
        ///Register starting erase of all User Information Configuration Registers. Note that code erase has to be enabled by CONFIG.EEN before the UICR can be erased.
        enum class eraseuicrVal {
            nooperation=0x00000000,     ///<No operation
            erase=0x00000001,     ///<Start erase of UICR
        };
        namespace eraseuicrValC{
            constexpr MPL::Value<eraseuicrVal,eraseuicrVal::nooperation> nooperation{};
            constexpr MPL::Value<eraseuicrVal,eraseuicrVal::erase> erase{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eraseuicrVal> eraseuicr{}; 
    }
    namespace Noneicachecnf{    ///<I-Code cache configuration register.
        using Addr = Register::Address<0x4001e540,0xfffffefe,0,unsigned>;
        ///Cache enable
        enum class cacheenVal {
            disabled=0x00000000,     ///<Disable cache. Invalidates all cache entries.
            enabled=0x00000001,     ///<Enable cache
        };
        namespace cacheenValC{
            constexpr MPL::Value<cacheenVal,cacheenVal::disabled> disabled{};
            constexpr MPL::Value<cacheenVal,cacheenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cacheenVal> cacheen{}; 
        ///Cache profiling enable
        enum class cacheprofenVal {
            disabled=0x00000000,     ///<Disable cache profiling
            enabled=0x00000001,     ///<Enable cache profiling
        };
        namespace cacheprofenValC{
            constexpr MPL::Value<cacheprofenVal,cacheprofenVal::disabled> disabled{};
            constexpr MPL::Value<cacheprofenVal,cacheprofenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cacheprofenVal> cacheprofen{}; 
    }
    namespace Noneihit{    ///<I-Code cache hit counter.
        using Addr = Register::Address<0x4001e548,0x00000000,0,unsigned>;
        ///Number of cache hits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hits{}; 
    }
    namespace Noneimiss{    ///<I-Code cache miss counter.
        using Addr = Register::Address<0x4001e54c,0x00000000,0,unsigned>;
        ///Number of cache misses
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> misses{}; 
    }
}
