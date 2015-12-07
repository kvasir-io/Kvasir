#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory Controller
    namespace FmcPfapr{    ///<Flash Access Protection Register
        using Addr = Register::Address<0x4001f000,0xfff0ff00,0,unsigned>;
        ///Master 0 Access Protection
        enum class M0apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,M0apVal> m0ap{}; 
        namespace M0apValC{
            constexpr Register::FieldValue<decltype(m0ap),M0apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m0ap),M0apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m0ap),M0apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m0ap),M0apVal::v11> v11{};
        }
        ///Master 1 Access Protection
        enum class M1apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,M1apVal> m1ap{}; 
        namespace M1apValC{
            constexpr Register::FieldValue<decltype(m1ap),M1apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m1ap),M1apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m1ap),M1apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m1ap),M1apVal::v11> v11{};
        }
        ///Master 2 Access Protection
        enum class M2apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,M2apVal> m2ap{}; 
        namespace M2apValC{
            constexpr Register::FieldValue<decltype(m2ap),M2apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m2ap),M2apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m2ap),M2apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m2ap),M2apVal::v11> v11{};
        }
        ///Master 3 Access Protection
        enum class M3apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,M3apVal> m3ap{}; 
        namespace M3apValC{
            constexpr Register::FieldValue<decltype(m3ap),M3apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3ap),M3apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3ap),M3apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3ap),M3apVal::v11> v11{};
        }
        ///Master 0 Prefetch Disable
        enum class M0pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,M0pfdVal> m0pfd{}; 
        namespace M0pfdValC{
            constexpr Register::FieldValue<decltype(m0pfd),M0pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m0pfd),M0pfdVal::v1> v1{};
        }
        ///Master 1 Prefetch Disable
        enum class M1pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,M1pfdVal> m1pfd{}; 
        namespace M1pfdValC{
            constexpr Register::FieldValue<decltype(m1pfd),M1pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m1pfd),M1pfdVal::v1> v1{};
        }
        ///Master 2 Prefetch Disable
        enum class M2pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,M2pfdVal> m2pfd{}; 
        namespace M2pfdValC{
            constexpr Register::FieldValue<decltype(m2pfd),M2pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m2pfd),M2pfdVal::v1> v1{};
        }
        ///Master 3 Prefetch Disable
        enum class M3pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,M3pfdVal> m3pfd{}; 
        namespace M3pfdValC{
            constexpr Register::FieldValue<decltype(m3pfd),M3pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pfd),M3pfdVal::v1> v1{};
        }
    }
    namespace FmcPfb0cr{    ///<Flash Control Register
        using Addr = Register::Address<0x4001f004,0x0001ff00,0,unsigned>;
        ///Single Entry Buffer Enable
        enum class B0sebeVal {
            v0=0x00000000,     ///<Single entry buffer is disabled.
            v1=0x00000001,     ///<Single entry buffer is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,B0sebeVal> b0sebe{}; 
        namespace B0sebeValC{
            constexpr Register::FieldValue<decltype(b0sebe),B0sebeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0sebe),B0sebeVal::v1> v1{};
        }
        ///Instruction Prefetch Enable
        enum class B0ipeVal {
            v0=0x00000000,     ///<Do not prefetch in response to instruction fetches.
            v1=0x00000001,     ///<Enable prefetches in response to instruction fetches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,B0ipeVal> b0ipe{}; 
        namespace B0ipeValC{
            constexpr Register::FieldValue<decltype(b0ipe),B0ipeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0ipe),B0ipeVal::v1> v1{};
        }
        ///Data Prefetch Enable
        enum class B0dpeVal {
            v0=0x00000000,     ///<Do not prefetch in response to data references.
            v1=0x00000001,     ///<Enable prefetches in response to data references.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,B0dpeVal> b0dpe{}; 
        namespace B0dpeValC{
            constexpr Register::FieldValue<decltype(b0dpe),B0dpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0dpe),B0dpeVal::v1> v1{};
        }
        ///Instruction Cache Enable
        enum class B0iceVal {
            v0=0x00000000,     ///<Do not cache instruction fetches.
            v1=0x00000001,     ///<Cache instruction fetches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,B0iceVal> b0ice{}; 
        namespace B0iceValC{
            constexpr Register::FieldValue<decltype(b0ice),B0iceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0ice),B0iceVal::v1> v1{};
        }
        ///Data Cache Enable
        enum class B0dceVal {
            v0=0x00000000,     ///<Do not cache data references.
            v1=0x00000001,     ///<Cache data references.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,B0dceVal> b0dce{}; 
        namespace B0dceValC{
            constexpr Register::FieldValue<decltype(b0dce),B0dceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0dce),B0dceVal::v1> v1{};
        }
        ///Cache Replacement Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> crc{}; 
        namespace CrcValC{
        }
        ///Memory Width
        enum class B0mwVal {
            v00=0x00000000,     ///<32 bits
            v01=0x00000001,     ///<64 bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,B0mwVal> b0mw{}; 
        namespace B0mwValC{
            constexpr Register::FieldValue<decltype(b0mw),B0mwVal::v00> v00{};
            constexpr Register::FieldValue<decltype(b0mw),B0mwVal::v01> v01{};
        }
        ///Invalidate Prefetch Speculation Buffer
        enum class SbinvVal {
            v0=0x00000000,     ///<Speculation buffer and single entry buffer are not affected.
            v1=0x00000001,     ///<Invalidate (clear) speculation buffer and single entry buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SbinvVal> sBInv{}; 
        namespace SbinvValC{
            constexpr Register::FieldValue<decltype(sBInv),SbinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sBInv),SbinvVal::v1> v1{};
        }
        ///Cache Invalidate Way x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cinvWay{}; 
        namespace CinvwayValC{
        }
        ///Cache Lock Way x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> clckWay{}; 
        namespace ClckwayValC{
        }
        ///Read Wait State Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> b0rwsc{}; 
        namespace B0rwscValC{
        }
    }
    namespace FmcTagvdw0s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f100,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw0s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f104,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw1s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f120,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw1s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f124,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw2s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f140,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw2s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f144,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw3s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f160,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw3s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f164,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcDataw0s0{    ///<Cache Data Storage
        using Addr = Register::Address<0x4001f204,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw0s1{    ///<Cache Data Storage
        using Addr = Register::Address<0x4001f20c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw1s0{    ///<Cache Data Storage
        using Addr = Register::Address<0x4001f244,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw1s1{    ///<Cache Data Storage
        using Addr = Register::Address<0x4001f24c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw2s0{    ///<Cache Data Storage
        using Addr = Register::Address<0x4001f284,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw2s1{    ///<Cache Data Storage
        using Addr = Register::Address<0x4001f28c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw3s0{    ///<Cache Data Storage
        using Addr = Register::Address<0x4001f2c4,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw3s1{    ///<Cache Data Storage
        using Addr = Register::Address<0x4001f2cc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
}
