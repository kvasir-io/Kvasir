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
    namespace FmcPfb0cr{    ///<Flash Bank 0 Control Register
        using Addr = Register::Address<0x4001f004,0x0001ff00,0,unsigned>;
        ///Bank 0 Single Entry Buffer Enable
        enum class B0sebeVal {
            v0=0x00000000,     ///<Single entry buffer is disabled.
            v1=0x00000001,     ///<Single entry buffer is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,B0sebeVal> b0sebe{}; 
        namespace B0sebeValC{
            constexpr Register::FieldValue<decltype(b0sebe),B0sebeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0sebe),B0sebeVal::v1> v1{};
        }
        ///Bank 0 Instruction Prefetch Enable
        enum class B0ipeVal {
            v0=0x00000000,     ///<Do not prefetch in response to instruction fetches.
            v1=0x00000001,     ///<Enable prefetches in response to instruction fetches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,B0ipeVal> b0ipe{}; 
        namespace B0ipeValC{
            constexpr Register::FieldValue<decltype(b0ipe),B0ipeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0ipe),B0ipeVal::v1> v1{};
        }
        ///Bank 0 Data Prefetch Enable
        enum class B0dpeVal {
            v0=0x00000000,     ///<Do not prefetch in response to data references.
            v1=0x00000001,     ///<Enable prefetches in response to data references.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,B0dpeVal> b0dpe{}; 
        namespace B0dpeValC{
            constexpr Register::FieldValue<decltype(b0dpe),B0dpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0dpe),B0dpeVal::v1> v1{};
        }
        ///Bank 0 Instruction Cache Enable
        enum class B0iceVal {
            v0=0x00000000,     ///<Do not cache instruction fetches.
            v1=0x00000001,     ///<Cache instruction fetches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,B0iceVal> b0ice{}; 
        namespace B0iceValC{
            constexpr Register::FieldValue<decltype(b0ice),B0iceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0ice),B0iceVal::v1> v1{};
        }
        ///Bank 0 Data Cache Enable
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
        enum class CrcVal {
            v000=0x00000000,     ///<LRU replacement algorithm per set across all four ways
            v001=0x00000001,     ///<Reserved
            v010=0x00000002,     ///<Independent LRU with ways [0-1] for ifetches, [2-3] for data
            v011=0x00000003,     ///<Independent LRU with ways [0-2] for ifetches, [3] for data
            v1xx=0x00000004,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CrcVal> crc{}; 
        namespace CrcValC{
            constexpr Register::FieldValue<decltype(crc),CrcVal::v000> v000{};
            constexpr Register::FieldValue<decltype(crc),CrcVal::v001> v001{};
            constexpr Register::FieldValue<decltype(crc),CrcVal::v010> v010{};
            constexpr Register::FieldValue<decltype(crc),CrcVal::v011> v011{};
            constexpr Register::FieldValue<decltype(crc),CrcVal::v1xx> v1xx{};
        }
        ///Bank 0 Memory Width
        enum class B0mwVal {
            v00=0x00000000,     ///<32 bits
            v01=0x00000001,     ///<64 bits
            v1x=0x00000002,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,B0mwVal> b0mw{}; 
        namespace B0mwValC{
            constexpr Register::FieldValue<decltype(b0mw),B0mwVal::v00> v00{};
            constexpr Register::FieldValue<decltype(b0mw),B0mwVal::v01> v01{};
            constexpr Register::FieldValue<decltype(b0mw),B0mwVal::v1x> v1x{};
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
        ///Bank 0 Read Wait State Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> b0rwsc{}; 
        namespace B0rwscValC{
        }
    }
    namespace FmcPfb1cr{    ///<Flash Bank 1 Control Register
        using Addr = Register::Address<0x4001f008,0x0ff9ffff,0,unsigned>;
        ///Bank 1 Memory Width
        enum class B1mwVal {
            v00=0x00000000,     ///<32 bits
            v01=0x00000001,     ///<64 bits
            v10=0x00000002,     ///<Reserved
            v11=0x00000003,     ///<16 bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,B1mwVal> b1mw{}; 
        namespace B1mwValC{
            constexpr Register::FieldValue<decltype(b1mw),B1mwVal::v00> v00{};
            constexpr Register::FieldValue<decltype(b1mw),B1mwVal::v01> v01{};
            constexpr Register::FieldValue<decltype(b1mw),B1mwVal::v10> v10{};
            constexpr Register::FieldValue<decltype(b1mw),B1mwVal::v11> v11{};
        }
        ///Bank 1 Read Wait State Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> b1rwsc{}; 
        namespace B1rwscValC{
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
    namespace FmcTagvdw0s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f108,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw0s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f10c,0xfff8003e,0,unsigned>;
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
        using Addr = Register::Address<0x4001f110,0xfff8003e,0,unsigned>;
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
        using Addr = Register::Address<0x4001f114,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw1s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f118,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw1s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f11c,0xfff8003e,0,unsigned>;
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
    namespace FmcTagvdw2s1{    ///<Cache Tag Storage
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
    namespace FmcTagvdw2s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f128,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw2s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f12c,0xfff8003e,0,unsigned>;
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
        using Addr = Register::Address<0x4001f130,0xfff8003e,0,unsigned>;
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
        using Addr = Register::Address<0x4001f134,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw3s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f138,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcTagvdw3s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f13c,0xfff8003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        namespace ValidValC{
        }
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,6),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace FmcDataw0s0u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f200,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw0s1u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f208,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw0s2u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f210,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw0s3u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f218,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw0s0l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f204,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw0s1l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f20c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw0s2l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f214,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw0s3l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f21c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw1s0u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f220,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw1s1u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f228,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw1s2u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f230,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw1s3u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f238,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw1s0l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f224,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw1s1l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f22c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw1s2l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f234,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw1s3l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f23c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw2s0u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f240,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw2s1u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f248,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw2s2u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f250,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw2s3u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f258,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw2s0l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f244,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw2s1l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f24c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw2s2l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f254,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw2s3l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f25c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw3s0u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f260,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw3s1u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f268,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw3s2u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f270,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw3s3u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f278,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw3s0l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f264,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw3s1l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f26c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw3s2l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f274,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FmcDataw3s3l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f27c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
}
