#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Non Volatile Memory Controller
    namespace NvmcReady{    ///<Ready flag
        using Addr = Register::Address<0x4001e400,0xfffffffe,0x00000000,unsigned>;
        ///NVMC is ready or busy
        enum class ReadyVal {
            busy=0x00000000,     ///<NVMC is busy (on-going write or erase operation)
            ready=0x00000001,     ///<NVMC is ready
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::busy> busy{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::ready> ready{};
        }
    }
    namespace NvmcConfig{    ///<Configuration register
        using Addr = Register::Address<0x4001e504,0xfffffffc,0x00000000,unsigned>;
        ///Program memory access mode. It is strongly recommended to only activate erase and write modes when they are actively used. Enabling write or erase will invalidate the cache and keep it invalidated.
        enum class WenVal {
            ren=0x00000000,     ///<Read only access
            wen=0x00000001,     ///<Write Enabled
            een=0x00000002,     ///<Erase enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,WenVal> wen{}; 
        namespace WenValC{
            constexpr Register::FieldValue<decltype(wen)::Type,WenVal::ren> ren{};
            constexpr Register::FieldValue<decltype(wen)::Type,WenVal::wen> wen{};
            constexpr Register::FieldValue<decltype(wen)::Type,WenVal::een> een{};
        }
    }
    namespace NvmcErasepage{    ///<Register for erasing a page in Code area
        using Addr = Register::Address<0x4001e508,0x00000000,0x00000000,unsigned>;
        ///Register for starting erase of a page in Code area
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> erasepage{}; 
    }
    namespace NvmcErasepcr1{    ///<Deprecated register -  Register for erasing a page in Code area. Equivalent to ERASEPAGE.
        using Addr = Register::Address<0x4001e508,0x00000000,0x00000000,unsigned>;
        ///Register for erasing a page in Code area. Equivalent to ERASEPAGE.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> erasepcr1{}; 
    }
    namespace NvmcEraseall{    ///<Register for erasing all non-volatile user memory
        using Addr = Register::Address<0x4001e50c,0xfffffffe,0x00000000,unsigned>;
        ///Erase all non-volatile memory including UICR registers. Note that code erase has to be enabled by CONFIG.EEN before the UICR can be erased.
        enum class EraseallVal {
            nooperation=0x00000000,     ///<No operation
            erase=0x00000001,     ///<Start chip erase
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EraseallVal> eraseall{}; 
        namespace EraseallValC{
            constexpr Register::FieldValue<decltype(eraseall)::Type,EraseallVal::nooperation> nooperation{};
            constexpr Register::FieldValue<decltype(eraseall)::Type,EraseallVal::erase> erase{};
        }
    }
    namespace NvmcErasepcr0{    ///<Deprecated register -  Register for erasing a page in Code area. Equivalent to ERASEPAGE.
        using Addr = Register::Address<0x4001e510,0x00000000,0x00000000,unsigned>;
        ///Register for starting erase of a page in Code area. Equivalent to ERASEPAGE.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> erasepcr0{}; 
    }
    namespace NvmcEraseuicr{    ///<Register for erasing User Information Configuration Registers
        using Addr = Register::Address<0x4001e514,0xfffffffe,0x00000000,unsigned>;
        ///Register starting erase of all User Information Configuration Registers. Note that code erase has to be enabled by CONFIG.EEN before the UICR can be erased.
        enum class EraseuicrVal {
            nooperation=0x00000000,     ///<No operation
            erase=0x00000001,     ///<Start erase of UICR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EraseuicrVal> eraseuicr{}; 
        namespace EraseuicrValC{
            constexpr Register::FieldValue<decltype(eraseuicr)::Type,EraseuicrVal::nooperation> nooperation{};
            constexpr Register::FieldValue<decltype(eraseuicr)::Type,EraseuicrVal::erase> erase{};
        }
    }
    namespace NvmcIcachecnf{    ///<I-Code cache configuration register.
        using Addr = Register::Address<0x4001e540,0xfffffefe,0x00000000,unsigned>;
        ///Cache enable
        enum class CacheenVal {
            disabled=0x00000000,     ///<Disable cache. Invalidates all cache entries.
            enabled=0x00000001,     ///<Enable cache
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CacheenVal> cacheen{}; 
        namespace CacheenValC{
            constexpr Register::FieldValue<decltype(cacheen)::Type,CacheenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cacheen)::Type,CacheenVal::enabled> enabled{};
        }
        ///Cache profiling enable
        enum class CacheprofenVal {
            disabled=0x00000000,     ///<Disable cache profiling
            enabled=0x00000001,     ///<Enable cache profiling
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CacheprofenVal> cacheprofen{}; 
        namespace CacheprofenValC{
            constexpr Register::FieldValue<decltype(cacheprofen)::Type,CacheprofenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cacheprofen)::Type,CacheprofenVal::enabled> enabled{};
        }
    }
    namespace NvmcIhit{    ///<I-Code cache hit counter.
        using Addr = Register::Address<0x4001e548,0x00000000,0x00000000,unsigned>;
        ///Number of cache hits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hits{}; 
    }
    namespace NvmcImiss{    ///<I-Code cache miss counter.
        using Addr = Register::Address<0x4001e54c,0x00000000,0x00000000,unsigned>;
        ///Number of cache misses
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> misses{}; 
    }
}
