#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory Controller
    namespace FmcPfapr{    ///<Flash Access Protection Register
        using Addr = Register::Address<0x4001f000,0xff000000,0,unsigned>;
        ///Master 0 Access Protection
        enum class m0apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m0apValC{
            constexpr MPL::Value<m0apVal,m0apVal::v00> v00{};
            constexpr MPL::Value<m0apVal,m0apVal::v01> v01{};
            constexpr MPL::Value<m0apVal,m0apVal::v10> v10{};
            constexpr MPL::Value<m0apVal,m0apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,m0apVal> m0ap{}; 
        ///Master 1 Access Protection
        enum class m1apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m1apValC{
            constexpr MPL::Value<m1apVal,m1apVal::v00> v00{};
            constexpr MPL::Value<m1apVal,m1apVal::v01> v01{};
            constexpr MPL::Value<m1apVal,m1apVal::v10> v10{};
            constexpr MPL::Value<m1apVal,m1apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,m1apVal> m1ap{}; 
        ///Master 2 Access Protection
        enum class m2apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m2apValC{
            constexpr MPL::Value<m2apVal,m2apVal::v00> v00{};
            constexpr MPL::Value<m2apVal,m2apVal::v01> v01{};
            constexpr MPL::Value<m2apVal,m2apVal::v10> v10{};
            constexpr MPL::Value<m2apVal,m2apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,m2apVal> m2ap{}; 
        ///Master 3 Access Protection
        enum class m3apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m3apValC{
            constexpr MPL::Value<m3apVal,m3apVal::v00> v00{};
            constexpr MPL::Value<m3apVal,m3apVal::v01> v01{};
            constexpr MPL::Value<m3apVal,m3apVal::v10> v10{};
            constexpr MPL::Value<m3apVal,m3apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,m3apVal> m3ap{}; 
        ///Master 4 Access Protection
        enum class m4apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m4apValC{
            constexpr MPL::Value<m4apVal,m4apVal::v00> v00{};
            constexpr MPL::Value<m4apVal,m4apVal::v01> v01{};
            constexpr MPL::Value<m4apVal,m4apVal::v10> v10{};
            constexpr MPL::Value<m4apVal,m4apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,m4apVal> m4ap{}; 
        ///Master 5 Access Protection
        enum class m5apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m5apValC{
            constexpr MPL::Value<m5apVal,m5apVal::v00> v00{};
            constexpr MPL::Value<m5apVal,m5apVal::v01> v01{};
            constexpr MPL::Value<m5apVal,m5apVal::v10> v10{};
            constexpr MPL::Value<m5apVal,m5apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,m5apVal> m5ap{}; 
        ///Master 6 Access Protection
        enum class m6apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m6apValC{
            constexpr MPL::Value<m6apVal,m6apVal::v00> v00{};
            constexpr MPL::Value<m6apVal,m6apVal::v01> v01{};
            constexpr MPL::Value<m6apVal,m6apVal::v10> v10{};
            constexpr MPL::Value<m6apVal,m6apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,m6apVal> m6ap{}; 
        ///Master 7 Access Protection
        enum class m7apVal {
            v00=0x00000000,     ///<No access may be performed by this master.
            v01=0x00000001,     ///<Only read accesses may be performed by this master.
            v10=0x00000002,     ///<Only write accesses may be performed by this master.
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master.
        };
        namespace m7apValC{
            constexpr MPL::Value<m7apVal,m7apVal::v00> v00{};
            constexpr MPL::Value<m7apVal,m7apVal::v01> v01{};
            constexpr MPL::Value<m7apVal,m7apVal::v10> v10{};
            constexpr MPL::Value<m7apVal,m7apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,m7apVal> m7ap{}; 
        ///Master 0 Prefetch Disable
        enum class m0pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m0pfdValC{
            constexpr MPL::Value<m0pfdVal,m0pfdVal::v0> v0{};
            constexpr MPL::Value<m0pfdVal,m0pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,m0pfdVal> m0pfd{}; 
        ///Master 1 Prefetch Disable
        enum class m1pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m1pfdValC{
            constexpr MPL::Value<m1pfdVal,m1pfdVal::v0> v0{};
            constexpr MPL::Value<m1pfdVal,m1pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,m1pfdVal> m1pfd{}; 
        ///Master 2 Prefetch Disable
        enum class m2pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m2pfdValC{
            constexpr MPL::Value<m2pfdVal,m2pfdVal::v0> v0{};
            constexpr MPL::Value<m2pfdVal,m2pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,m2pfdVal> m2pfd{}; 
        ///Master 3 Prefetch Disable
        enum class m3pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m3pfdValC{
            constexpr MPL::Value<m3pfdVal,m3pfdVal::v0> v0{};
            constexpr MPL::Value<m3pfdVal,m3pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,m3pfdVal> m3pfd{}; 
        ///Master 4 Prefetch Disable
        enum class m4pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m4pfdValC{
            constexpr MPL::Value<m4pfdVal,m4pfdVal::v0> v0{};
            constexpr MPL::Value<m4pfdVal,m4pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,m4pfdVal> m4pfd{}; 
        ///Master 5 Prefetch Disable
        enum class m5pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m5pfdValC{
            constexpr MPL::Value<m5pfdVal,m5pfdVal::v0> v0{};
            constexpr MPL::Value<m5pfdVal,m5pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,m5pfdVal> m5pfd{}; 
        ///Master 6 Prefetch Disable
        enum class m6pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m6pfdValC{
            constexpr MPL::Value<m6pfdVal,m6pfdVal::v0> v0{};
            constexpr MPL::Value<m6pfdVal,m6pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,m6pfdVal> m6pfd{}; 
        ///Master 7 Prefetch Disable
        enum class m7pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m7pfdValC{
            constexpr MPL::Value<m7pfdVal,m7pfdVal::v0> v0{};
            constexpr MPL::Value<m7pfdVal,m7pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,m7pfdVal> m7pfd{}; 
    }
    namespace FmcPfb01cr{    ///<Flash Bank 0-1 Control Register
        using Addr = Register::Address<0x4001f004,0x0001ff00,0,unsigned>;
        ///Bank 0-1 Single Entry Buffer Enable
        enum class b01sebeVal {
            v0=0x00000000,     ///<Single entry buffer is disabled.
            v1=0x00000001,     ///<Single entry buffer is enabled.
        };
        namespace b01sebeValC{
            constexpr MPL::Value<b01sebeVal,b01sebeVal::v0> v0{};
            constexpr MPL::Value<b01sebeVal,b01sebeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,b01sebeVal> b01sebe{}; 
        ///Bank 0-1 Instruction Prefetch Enable
        enum class b01ipeVal {
            v0=0x00000000,     ///<Do not prefetch in response to instruction fetches.
            v1=0x00000001,     ///<Enable prefetches in response to instruction fetches.
        };
        namespace b01ipeValC{
            constexpr MPL::Value<b01ipeVal,b01ipeVal::v0> v0{};
            constexpr MPL::Value<b01ipeVal,b01ipeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,b01ipeVal> b01ipe{}; 
        ///Bank 0-1 Data Prefetch Enable
        enum class b01dpeVal {
            v0=0x00000000,     ///<Do not prefetch in response to data references.
            v1=0x00000001,     ///<Enable prefetches in response to data references.
        };
        namespace b01dpeValC{
            constexpr MPL::Value<b01dpeVal,b01dpeVal::v0> v0{};
            constexpr MPL::Value<b01dpeVal,b01dpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,b01dpeVal> b01dpe{}; 
        ///Bank 0-1 Instruction Cache Enable
        enum class b01iceVal {
            v0=0x00000000,     ///<Do not cache instruction fetches.
            v1=0x00000001,     ///<Cache instruction fetches.
        };
        namespace b01iceValC{
            constexpr MPL::Value<b01iceVal,b01iceVal::v0> v0{};
            constexpr MPL::Value<b01iceVal,b01iceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,b01iceVal> b01ice{}; 
        ///Bank 0-1 Data Cache Enable
        enum class b01dceVal {
            v0=0x00000000,     ///<Do not cache data references.
            v1=0x00000001,     ///<Cache data references.
        };
        namespace b01dceValC{
            constexpr MPL::Value<b01dceVal,b01dceVal::v0> v0{};
            constexpr MPL::Value<b01dceVal,b01dceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,b01dceVal> b01dce{}; 
        ///Cache Replacement Control
        enum class crcVal {
            v000=0x00000000,     ///<LRU replacement algorithm per set across all four ways
            v001=0x00000001,     ///<Reserved
            v010=0x00000002,     ///<Independent LRU with ways [0-1] for ifetches, [2-3] for data
            v011=0x00000003,     ///<Independent LRU with ways [0-2] for ifetches, [3] for data
            v1xx=0x00000004,     ///<Reserved
        };
        namespace crcValC{
            constexpr MPL::Value<crcVal,crcVal::v000> v000{};
            constexpr MPL::Value<crcVal,crcVal::v001> v001{};
            constexpr MPL::Value<crcVal,crcVal::v010> v010{};
            constexpr MPL::Value<crcVal,crcVal::v011> v011{};
            constexpr MPL::Value<crcVal,crcVal::v1xx> v1xx{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,crcVal> crc{}; 
        ///Bank 0-1 Memory Width
        enum class b01mwVal {
            v00=0x00000000,     ///<32 bits
            v01=0x00000001,     ///<64 bits
            v10=0x00000002,     ///<128 bits
            v11=0x00000003,     ///<Reserved
        };
        namespace b01mwValC{
            constexpr MPL::Value<b01mwVal,b01mwVal::v00> v00{};
            constexpr MPL::Value<b01mwVal,b01mwVal::v01> v01{};
            constexpr MPL::Value<b01mwVal,b01mwVal::v10> v10{};
            constexpr MPL::Value<b01mwVal,b01mwVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,b01mwVal> b01mw{}; 
        ///Invalidate Prefetch Speculation Buffer
        enum class sBInvVal {
            v0=0x00000000,     ///<Speculation buffer and single entry buffer are not affected.
            v1=0x00000001,     ///<Invalidate (clear) speculation buffer and single entry buffer.
        };
        namespace sBInvValC{
            constexpr MPL::Value<sBInvVal,sBInvVal::v0> v0{};
            constexpr MPL::Value<sBInvVal,sBInvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,sBInvVal> sBInv{}; 
        ///Cache Invalidate Way x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cinvWay{}; 
        ///Cache Lock Way x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> clckWay{}; 
        ///Bank 0-1 Read Wait State Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> b01rwsc{}; 
    }
    namespace FmcPfb23cr{    ///<Flash Bank 2-3 Control Register
        using Addr = Register::Address<0x4001f008,0x0ff9ffe0,0,unsigned>;
        ///Bank 2-3 Single Entry Buffer Enable
        enum class b23sebeVal {
            v0=0x00000000,     ///<Single entry buffer is disabled.
            v1=0x00000001,     ///<Single entry buffer is enabled.
        };
        namespace b23sebeValC{
            constexpr MPL::Value<b23sebeVal,b23sebeVal::v0> v0{};
            constexpr MPL::Value<b23sebeVal,b23sebeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,b23sebeVal> b23sebe{}; 
        ///Bank 2-3 Instruction Prefetch Enable
        enum class b23ipeVal {
            v0=0x00000000,     ///<Do not prefetch in response to instruction fetches.
            v1=0x00000001,     ///<Enable prefetches in response to instruction fetches.
        };
        namespace b23ipeValC{
            constexpr MPL::Value<b23ipeVal,b23ipeVal::v0> v0{};
            constexpr MPL::Value<b23ipeVal,b23ipeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,b23ipeVal> b23ipe{}; 
        ///Bank 2-3 Data Prefetch Enable
        enum class b23dpeVal {
            v0=0x00000000,     ///<Do not prefetch in response to data references.
            v1=0x00000001,     ///<Enable prefetches in response to data references.
        };
        namespace b23dpeValC{
            constexpr MPL::Value<b23dpeVal,b23dpeVal::v0> v0{};
            constexpr MPL::Value<b23dpeVal,b23dpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,b23dpeVal> b23dpe{}; 
        ///Bank 2-3 Instruction Cache Enable
        enum class b23iceVal {
            v0=0x00000000,     ///<Do not cache instruction fetches.
            v1=0x00000001,     ///<Cache instruction fetches.
        };
        namespace b23iceValC{
            constexpr MPL::Value<b23iceVal,b23iceVal::v0> v0{};
            constexpr MPL::Value<b23iceVal,b23iceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,b23iceVal> b23ice{}; 
        ///Bank 2-3 Data Cache Enable
        enum class b23dceVal {
            v0=0x00000000,     ///<Do not cache data references.
            v1=0x00000001,     ///<Cache data references.
        };
        namespace b23dceValC{
            constexpr MPL::Value<b23dceVal,b23dceVal::v0> v0{};
            constexpr MPL::Value<b23dceVal,b23dceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,b23dceVal> b23dce{}; 
        ///Bank 2-3 Memory Width
        enum class b23mwVal {
            v00=0x00000000,     ///<32 bits
            v01=0x00000001,     ///<64 bits
            v10=0x00000002,     ///<128 bits
            v11=0x00000003,     ///<Reserved
        };
        namespace b23mwValC{
            constexpr MPL::Value<b23mwVal,b23mwVal::v00> v00{};
            constexpr MPL::Value<b23mwVal,b23mwVal::v01> v01{};
            constexpr MPL::Value<b23mwVal,b23mwVal::v10> v10{};
            constexpr MPL::Value<b23mwVal,b23mwVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,b23mwVal> b23mw{}; 
        ///Bank 2-3 Read Wait State Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> b23rwsc{}; 
    }
    namespace FmcTagvdw0s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f100,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f104,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f108,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f10c,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f110,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f114,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f118,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f11c,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f120,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f124,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f128,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f12c,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f130,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f134,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f138,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f13c,0xfff0003e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///13-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,6),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcDataw0s0um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f200,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f210,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s2um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f220,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s3um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f230,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s0mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f204,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f214,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s2mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f224,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s3mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f234,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s0ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f208,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f218,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s2ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f228,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s3ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f238,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s0lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f20c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f21c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s2lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f22c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s3lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f23c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f240,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f250,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s2um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f260,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s3um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f270,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f244,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f254,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s2mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f264,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s3mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f274,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f248,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f258,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s2ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f268,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s3ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f278,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f24c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f25c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s2lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f26c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s3lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f27c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f280,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f290,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s2um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2a0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s3um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2b0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f284,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f294,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s2mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2a4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s3mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2b4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f288,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f298,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s2ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2a8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s3ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2b8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f28c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f29c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s2lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2ac,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s3lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2bc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2c0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2d0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s2um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2e0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s3um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2f0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2c4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2d4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s2mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2e4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s3mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2f4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2c8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2d8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s2ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2e8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s3ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2f8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2cc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2dc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s2lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2ec,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s3lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2fc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
