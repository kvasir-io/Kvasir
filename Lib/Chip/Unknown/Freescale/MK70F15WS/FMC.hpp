#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory Controller
    namespace FmcPfapr{    ///<Flash Access Protection Register
        using Addr = Register::Address<0x4001f000,0xff000000,0,unsigned>;
        ///Master 0 Access Protection
        enum class M0apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,M0apVal> m0ap{}; 
        namespace M0apValC{
            constexpr Register::FieldValue<decltype(m0ap)::Type,M0apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m0ap)::Type,M0apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m0ap)::Type,M0apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m0ap)::Type,M0apVal::v11> v11{};
        }
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
            constexpr Register::FieldValue<decltype(m1ap)::Type,M1apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m1ap)::Type,M1apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m1ap)::Type,M1apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m1ap)::Type,M1apVal::v11> v11{};
        }
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
            constexpr Register::FieldValue<decltype(m2ap)::Type,M2apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m2ap)::Type,M2apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m2ap)::Type,M2apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m2ap)::Type,M2apVal::v11> v11{};
        }
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
            constexpr Register::FieldValue<decltype(m3ap)::Type,M3apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3ap)::Type,M3apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3ap)::Type,M3apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3ap)::Type,M3apVal::v11> v11{};
        }
        }
        ///Master 4 Access Protection
        enum class M4apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,M4apVal> m4ap{}; 
        namespace M4apValC{
            constexpr Register::FieldValue<decltype(m4ap)::Type,M4apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m4ap)::Type,M4apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m4ap)::Type,M4apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m4ap)::Type,M4apVal::v11> v11{};
        }
        }
        ///Master 5 Access Protection
        enum class M5apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,M5apVal> m5ap{}; 
        namespace M5apValC{
            constexpr Register::FieldValue<decltype(m5ap)::Type,M5apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m5ap)::Type,M5apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m5ap)::Type,M5apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m5ap)::Type,M5apVal::v11> v11{};
        }
        }
        ///Master 6 Access Protection
        enum class M6apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,M6apVal> m6ap{}; 
        namespace M6apValC{
            constexpr Register::FieldValue<decltype(m6ap)::Type,M6apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m6ap)::Type,M6apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m6ap)::Type,M6apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m6ap)::Type,M6apVal::v11> v11{};
        }
        }
        ///Master 7 Access Protection
        enum class M7apVal {
            v00=0x00000000,     ///<No access may be performed by this master.
            v01=0x00000001,     ///<Only read accesses may be performed by this master.
            v10=0x00000002,     ///<Only write accesses may be performed by this master.
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,M7apVal> m7ap{}; 
        namespace M7apValC{
            constexpr Register::FieldValue<decltype(m7ap)::Type,M7apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m7ap)::Type,M7apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m7ap)::Type,M7apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m7ap)::Type,M7apVal::v11> v11{};
        }
        }
        ///Master 0 Prefetch Disable
        enum class M0pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,M0pfdVal> m0pfd{}; 
        namespace M0pfdValC{
            constexpr Register::FieldValue<decltype(m0pfd)::Type,M0pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m0pfd)::Type,M0pfdVal::v1> v1{};
        }
        }
        ///Master 1 Prefetch Disable
        enum class M1pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,M1pfdVal> m1pfd{}; 
        namespace M1pfdValC{
            constexpr Register::FieldValue<decltype(m1pfd)::Type,M1pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m1pfd)::Type,M1pfdVal::v1> v1{};
        }
        }
        ///Master 2 Prefetch Disable
        enum class M2pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,M2pfdVal> m2pfd{}; 
        namespace M2pfdValC{
            constexpr Register::FieldValue<decltype(m2pfd)::Type,M2pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m2pfd)::Type,M2pfdVal::v1> v1{};
        }
        }
        ///Master 3 Prefetch Disable
        enum class M3pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,M3pfdVal> m3pfd{}; 
        namespace M3pfdValC{
            constexpr Register::FieldValue<decltype(m3pfd)::Type,M3pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pfd)::Type,M3pfdVal::v1> v1{};
        }
        }
        ///Master 4 Prefetch Disable
        enum class M4pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,M4pfdVal> m4pfd{}; 
        namespace M4pfdValC{
            constexpr Register::FieldValue<decltype(m4pfd)::Type,M4pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4pfd)::Type,M4pfdVal::v1> v1{};
        }
        }
        ///Master 5 Prefetch Disable
        enum class M5pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,M5pfdVal> m5pfd{}; 
        namespace M5pfdValC{
            constexpr Register::FieldValue<decltype(m5pfd)::Type,M5pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5pfd)::Type,M5pfdVal::v1> v1{};
        }
        }
        ///Master 6 Prefetch Disable
        enum class M6pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,M6pfdVal> m6pfd{}; 
        namespace M6pfdValC{
            constexpr Register::FieldValue<decltype(m6pfd)::Type,M6pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6pfd)::Type,M6pfdVal::v1> v1{};
        }
        }
        ///Master 7 Prefetch Disable
        enum class M7pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M7pfdVal> m7pfd{}; 
        namespace M7pfdValC{
            constexpr Register::FieldValue<decltype(m7pfd)::Type,M7pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7pfd)::Type,M7pfdVal::v1> v1{};
        }
        }
    }
    namespace FmcPfb01cr{    ///<Flash Bank 0-1 Control Register
        using Addr = Register::Address<0x4001f004,0x0001ff00,0,unsigned>;
        ///Bank 0-1 Single Entry Buffer Enable
        enum class B01sebeVal {
            v0=0x00000000,     ///<Single entry buffer is disabled.
            v1=0x00000001,     ///<Single entry buffer is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,B01sebeVal> b01sebe{}; 
        namespace B01sebeValC{
            constexpr Register::FieldValue<decltype(b01sebe)::Type,B01sebeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b01sebe)::Type,B01sebeVal::v1> v1{};
        }
        }
        ///Bank 0-1 Instruction Prefetch Enable
        enum class B01ipeVal {
            v0=0x00000000,     ///<Do not prefetch in response to instruction fetches.
            v1=0x00000001,     ///<Enable prefetches in response to instruction fetches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,B01ipeVal> b01ipe{}; 
        namespace B01ipeValC{
            constexpr Register::FieldValue<decltype(b01ipe)::Type,B01ipeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b01ipe)::Type,B01ipeVal::v1> v1{};
        }
        }
        ///Bank 0-1 Data Prefetch Enable
        enum class B01dpeVal {
            v0=0x00000000,     ///<Do not prefetch in response to data references.
            v1=0x00000001,     ///<Enable prefetches in response to data references.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,B01dpeVal> b01dpe{}; 
        namespace B01dpeValC{
            constexpr Register::FieldValue<decltype(b01dpe)::Type,B01dpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b01dpe)::Type,B01dpeVal::v1> v1{};
        }
        }
        ///Bank 0-1 Instruction Cache Enable
        enum class B01iceVal {
            v0=0x00000000,     ///<Do not cache instruction fetches.
            v1=0x00000001,     ///<Cache instruction fetches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,B01iceVal> b01ice{}; 
        namespace B01iceValC{
            constexpr Register::FieldValue<decltype(b01ice)::Type,B01iceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b01ice)::Type,B01iceVal::v1> v1{};
        }
        }
        ///Bank 0-1 Data Cache Enable
        enum class B01dceVal {
            v0=0x00000000,     ///<Do not cache data references.
            v1=0x00000001,     ///<Cache data references.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,B01dceVal> b01dce{}; 
        namespace B01dceValC{
            constexpr Register::FieldValue<decltype(b01dce)::Type,B01dceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b01dce)::Type,B01dceVal::v1> v1{};
        }
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
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v000> v000{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v001> v001{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v010> v010{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v011> v011{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v1xx> v1xx{};
        }
        }
        ///Bank 0-1 Memory Width
        enum class B01mwVal {
            v00=0x00000000,     ///<32 bits
            v01=0x00000001,     ///<64 bits
            v10=0x00000002,     ///<128 bits
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,B01mwVal> b01mw{}; 
        namespace B01mwValC{
            constexpr Register::FieldValue<decltype(b01mw)::Type,B01mwVal::v00> v00{};
            constexpr Register::FieldValue<decltype(b01mw)::Type,B01mwVal::v01> v01{};
            constexpr Register::FieldValue<decltype(b01mw)::Type,B01mwVal::v10> v10{};
            constexpr Register::FieldValue<decltype(b01mw)::Type,B01mwVal::v11> v11{};
        }
        }
        ///Invalidate Prefetch Speculation Buffer
        enum class SbinvVal {
            v0=0x00000000,     ///<Speculation buffer and single entry buffer are not affected.
            v1=0x00000001,     ///<Invalidate (clear) speculation buffer and single entry buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SbinvVal> sBInv{}; 
        namespace SbinvValC{
            constexpr Register::FieldValue<decltype(sBInv)::Type,SbinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sBInv)::Type,SbinvVal::v1> v1{};
        }
        }
        ///Cache Invalidate Way x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cinvWay{}; 
        ///Cache Lock Way x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> clckWay{}; 
        ///Bank 0-1 Read Wait State Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> b01rwsc{}; 
    }
    namespace FmcPfb23cr{    ///<Flash Bank 2-3 Control Register
        using Addr = Register::Address<0x4001f008,0x0ff9ffe0,0,unsigned>;
        ///Bank 2-3 Single Entry Buffer Enable
        enum class B23sebeVal {
            v0=0x00000000,     ///<Single entry buffer is disabled.
            v1=0x00000001,     ///<Single entry buffer is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,B23sebeVal> b23sebe{}; 
        namespace B23sebeValC{
            constexpr Register::FieldValue<decltype(b23sebe)::Type,B23sebeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b23sebe)::Type,B23sebeVal::v1> v1{};
        }
        }
        ///Bank 2-3 Instruction Prefetch Enable
        enum class B23ipeVal {
            v0=0x00000000,     ///<Do not prefetch in response to instruction fetches.
            v1=0x00000001,     ///<Enable prefetches in response to instruction fetches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,B23ipeVal> b23ipe{}; 
        namespace B23ipeValC{
            constexpr Register::FieldValue<decltype(b23ipe)::Type,B23ipeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b23ipe)::Type,B23ipeVal::v1> v1{};
        }
        }
        ///Bank 2-3 Data Prefetch Enable
        enum class B23dpeVal {
            v0=0x00000000,     ///<Do not prefetch in response to data references.
            v1=0x00000001,     ///<Enable prefetches in response to data references.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,B23dpeVal> b23dpe{}; 
        namespace B23dpeValC{
            constexpr Register::FieldValue<decltype(b23dpe)::Type,B23dpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b23dpe)::Type,B23dpeVal::v1> v1{};
        }
        }
        ///Bank 2-3 Instruction Cache Enable
        enum class B23iceVal {
            v0=0x00000000,     ///<Do not cache instruction fetches.
            v1=0x00000001,     ///<Cache instruction fetches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,B23iceVal> b23ice{}; 
        namespace B23iceValC{
            constexpr Register::FieldValue<decltype(b23ice)::Type,B23iceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b23ice)::Type,B23iceVal::v1> v1{};
        }
        }
        ///Bank 2-3 Data Cache Enable
        enum class B23dceVal {
            v0=0x00000000,     ///<Do not cache data references.
            v1=0x00000001,     ///<Cache data references.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,B23dceVal> b23dce{}; 
        namespace B23dceValC{
            constexpr Register::FieldValue<decltype(b23dce)::Type,B23dceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b23dce)::Type,B23dceVal::v1> v1{};
        }
        }
        ///Bank 2-3 Memory Width
        enum class B23mwVal {
            v00=0x00000000,     ///<32 bits
            v01=0x00000001,     ///<64 bits
            v10=0x00000002,     ///<128 bits
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,B23mwVal> b23mw{}; 
        namespace B23mwValC{
            constexpr Register::FieldValue<decltype(b23mw)::Type,B23mwVal::v00> v00{};
            constexpr Register::FieldValue<decltype(b23mw)::Type,B23mwVal::v01> v01{};
            constexpr Register::FieldValue<decltype(b23mw)::Type,B23mwVal::v10> v10{};
            constexpr Register::FieldValue<decltype(b23mw)::Type,B23mwVal::v11> v11{};
        }
        }
        ///Bank 2-3 Read Wait State Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> b23rwsc{}; 
    }
    namespace FmcTagvdw0s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f100,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f104,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f108,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f10c,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f110,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f114,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f118,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f11c,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f120,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f124,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f128,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f12c,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f130,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f134,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f138,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f13c,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcDataw0s0um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f200,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f210,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s2um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f220,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s3um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f230,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s0mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f204,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f214,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s2mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f224,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s3mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f234,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s0ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f208,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f218,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s2ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f228,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s3ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f238,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s0lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f20c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f21c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s2lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f22c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s3lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f23c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f240,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f250,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s2um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f260,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s3um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f270,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f244,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f254,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s2mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f264,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s3mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f274,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f248,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f258,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s2ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f268,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s3ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f278,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f24c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f25c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s2lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f26c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s3lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f27c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f280,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f290,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s2um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2a0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s3um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2b0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f284,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f294,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s2mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2a4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s3mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2b4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f288,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f298,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s2ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2a8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s3ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2b8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f28c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f29c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s2lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2ac,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s3lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2bc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2c0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2d0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s2um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2e0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s3um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2f0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2c4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2d4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s2mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2e4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s3mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2f4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2c8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2d8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s2ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2e8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s3ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2f8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2cc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2dc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s2lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2ec,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s3lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2fc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
